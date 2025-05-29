#pragma once
#include "SDK.hpp"

extern "C" {
#include "Lib/libdetour.h"
}

#include "Logger.h"

class HookManager
{
public:
	using ProcessEventCallback = std::function<void(const SDK::UObject*, SDK::UFunction*, void*)>;
	static HookManager& Instance();

	bool Init();
	bool EnableHooks();
	bool DisableHooks();

	void AddSubscriber(const std::string& objName, const std::string& funcName, ProcessEventCallback callback);

private:
	struct Subscriber
	{
		std::string objName;
		std::string funcName;

		SDK::FName _objFName;
		SDK::FName _funcFName;

		ProcessEventCallback callback;

		Subscriber(std::string o, std::string f, ProcessEventCallback cb)
			: objName(std::move(o)), funcName(std::move(f)), callback(std::move(cb)),
			_objFName(0), _funcFName(0) 
		{ }

		bool Matches(const SDK::UObject* obj, const SDK::UFunction* func);
	};

	std::vector<Subscriber> subscribers;

	HookManager() = default;
	~HookManager() = default;
	HookManager(const HookManager&) = delete;
	HookManager& operator=(const HookManager&) = delete;
	void ProcessEvent(const SDK::UObject* obj, SDK::UFunction* func, void* params);

	// static Hooks
	DETOUR_DECL_TYPE(void, ProcessEvent, const SDK::UObject*, SDK::UFunction*, void*);
	static void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params)
	{
		HookManager::Instance().ProcessEvent(obj, func, params);
		DETOUR_ORIG_CALL(&processEventCtx, ProcessEvent, obj, func, params);
	}
	static detour_ctx_t processEventCtx;
};

