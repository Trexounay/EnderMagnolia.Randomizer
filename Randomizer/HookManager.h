#pragma once
#include "SDK.hpp"

extern "C" {
#include "extern/libdetour/libdetour.h"
}

#include "Logger.h"
#include <unordered_map>

namespace SDK { struct FFrame; }

class HookManager
{
public:
	using ProcessEventCallback = std::function<void(const SDK::UObject*, SDK::UFunction*, void*)>;
	using FNativeFuncPtr = void (*)(SDK::UObject* Context, SDK::FFrame* Stack, void* Result);
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
	void* HookVTableFunction(void* instance, int index, void* hook);
	void HookAt(uintptr_t offset, void* hook);

	using FEngineTickFn = void(__fastcall*)(void* self, float dt, bool idle);
	static FEngineTickFn oEngineTick;
	static void __fastcall EngineTick_Hook(void* self, float dt, bool idle);

	DETOUR_DECL_TYPE(void, EventFinished, SDK::ATrigger_Event*, SDK::UEventPlayer*, bool, SDK::EEventPlayerResult);
	DETOUR_DECL_TYPE(void, MarkCleared, SDK::UClearComponent*);
	DETOUR_DECL_TYPE(void, FinishAction, SDK::UEventAction*);
	static void TriggerEventFinished_Hook(SDK::ATrigger_Event* self, SDK::UEventPlayer* eventPlayer, bool completed, SDK::EEventPlayerResult result);
	static void MarkAsCleared_Hook(SDK::UClearComponent* self);
	static void FinishAction_Hook(SDK::UEventAction* self);

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

		inline bool Matches(const SDK::UObject* obj, const SDK::UFunction* func)
		{
			if (!obj || !func) return false;
			if (_objFName.ComparisonIndex != 0 && _funcFName.ComparisonIndex != 0)
			{
				return obj->Class->Name == _objFName && func->Name == _funcFName;
			}
			auto match = objName == obj->Class->Name.ToString() && funcName == func->Name.GetRawString();
			if (match)
			{
				_objFName = obj->Class->Name;
				_funcFName = func->Name;
			}
			return match;
		}
	};

	static std::unordered_map<void*, detour_ctx_t> ctxs;

	DETOUR_DECL_TYPE(void, ProcessEvent, const SDK::UObject*, SDK::UFunction*, void*);
	DETOUR_DECL_TYPE(void, NativeFunction, SDK::UObject*, SDK::FFrame*, void*);

	static void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params);
	static void SetLaunchGameIntent_Hook(SDK::UGameInstanceZion* Context, SDK::FFrame* Stack, void* Result);
	static void SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result);
	static void SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result);
};
