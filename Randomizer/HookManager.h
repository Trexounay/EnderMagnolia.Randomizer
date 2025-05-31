#pragma once
#include "SDK.hpp"

extern "C" {
#include "extern/libdetour/libdetour.h"
}

#include "Logger.h"
#include <unordered_map>

class HookManager
{
public:
	using ProcessEventCallback = std::function<void(const SDK::UObject*, SDK::UFunction*, void*)>;
	using FNativeFuncPtr = void (*)(SDK::UObject* Context, void* TheStack, void* Result);
	using FProcessEventFuncPtr = void (*)(const SDK::UObject*, SDK::UFunction*, void*);
	static HookManager& Instance();

	bool Init();

private:
	HookManager() = default;
	~HookManager() = default;
	HookManager(const HookManager&) = delete;
	HookManager& operator=(const HookManager&) = delete;

	bool HookNativeFunction(const SDK::UClass* defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour);
	bool HookProcessEvent(FProcessEventFuncPtr detour);

	struct Subscriber
	{
		std::string objName;
		std::string funcName;

		SDK::FName _objFName;
		SDK::FName _funcFName;

		Subscriber(std::string o, std::string f)
			: objName(std::move(o)), funcName(std::move(f)), _objFName(0), _funcFName(0)
		{
		}

		bool Matches(const SDK::UObject* obj, const SDK::UFunction* func);
	};

	void ProcessEvent(const SDK::UObject* obj, SDK::UFunction* func, void* params);
	void SetLaunchGameIntent(SDK::UObject* Context, void* TheStack, void* Result);

	static std::unordered_map<void*, detour_ctx_t> ctxs;

	// static Hooks

	DETOUR_DECL_TYPE(void, ProcessEvent, const SDK::UObject*, SDK::UFunction*, void*);
	DETOUR_DECL_TYPE(void, NativeFunction, SDK::UObject*, void*, void*);

	static void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params)
	{
		HookManager::Instance().ProcessEvent(obj, func, params);
		DETOUR_ORIG_CALL(&ctxs[ProcessEvent_Hook], ProcessEvent, obj, func, params);
	}
	static void SetLaunchGameIntent_Hook(SDK::UObject* Context, void* TheStack, void* Result)
	{
		DETOUR_ORIG_CALL(&ctxs[SetLaunchGameIntent_Hook], NativeFunction, Context, TheStack, Result);
		HookManager::Instance().SetLaunchGameIntent(Context, TheStack, Result);
	}
	static void DEBUG_Hook(SDK::UObject* Context, void* TheStack, void* Result)
	{
		Logger::Log(LogLevel::Error, "DEBUG", Context->GetName());
		DETOUR_ORIG_CALL(&ctxs[DEBUG_Hook], NativeFunction, Context, TheStack, Result);
	}
};
