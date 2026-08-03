#pragma once
#include "SDK.hpp"

#include "Logger.h"

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

	bool HookNativeFunction(const SDK::UClass* defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour, void** original);
	bool HookProcessEvent(FProcessEventFuncPtr detour);
	void* HookVTableFunction(void* instance, int index, void* hook);
	bool HookAt(uintptr_t offset, void* hook, void** original);
	bool CreateHook(void* target, void* hook, void** original, const char* name);

	using FEngineTickFn = void(__fastcall*)(void* self, float dt, bool idle);
	static FEngineTickFn oEngineTick;
	static void __fastcall EngineTick_Hook(void* self, float dt, bool idle);

	using FEventFinishedFn = void(*)(SDK::ATrigger_Event*, SDK::UEventPlayer*, bool, SDK::EEventPlayerResult);
	using FMarkClearedFn = void(*)(SDK::UClearComponent*);
	using FFinishActionFn = void(*)(SDK::UEventAction*);
	using FNotifyGameEndingFn = void(*)(SDK::AGameModeZion*, SDK::EGameEndingType);
	using FAddShopHistoryFn = void(*)(SDK::UShopInfoComponent*, SDK::EShopType, SDK::FDataTableRowHandle*);
	using FAddItemFn = bool(*)(SDK::UInventoryComponent*, const SDK::FDataTableRowHandle*, SDK::int32);
	using FIncrementEnvLevelFn = SDK::int32(*)(SDK::AGameModeZion*);
	using FCheckHasItemFn = bool(*)(SDK::UGameplayCondition_HasItem*, SDK::APlayerController*);
	using FCheckHasClearedEventFn = bool(*)(SDK::UGameplayCondition_HasClearedEvent*, SDK::APlayerController*);
	using FResetRespawnDefaultsFn = void(*)(SDK::APlayerControllerZion*);

	static FEventFinishedFn oTriggerEventFinished;
	static FMarkClearedFn oMarkAsCleared;
	static FFinishActionFn oFinishAction;
	static FNotifyGameEndingFn oNotifyGameEnding;
	static FAddShopHistoryFn oAddShopHistory;
	static FAddItemFn oAddItem;
	static FIncrementEnvLevelFn oIncrementEnvLevel;
	static FCheckHasItemFn oCheckHasItem;
	static FCheckHasClearedEventFn oCheckHasClearedEvent;
	static FResetRespawnDefaultsFn oResetRespawnDefaults;

	static void TriggerEventFinished_Hook(SDK::ATrigger_Event* self, SDK::UEventPlayer* eventPlayer, bool completed, SDK::EEventPlayerResult result);
	static void MarkAsCleared_Hook(SDK::UClearComponent* self);
	static void FinishAction_Hook(SDK::UEventAction* self);
	static void NotifyGameEnding_Hook(SDK::AGameModeZion* self, SDK::EGameEndingType ending);
	static void AddShopHistory_Hook(SDK::UShopInfoComponent* self, SDK::EShopType shopType, SDK::FDataTableRowHandle* boughtItem);
	static bool AddItem_Hook(SDK::UInventoryComponent* self, const SDK::FDataTableRowHandle* itemHandle, SDK::int32 count);
	static SDK::int32 IncrementEnvLevel_Hook(SDK::AGameModeZion* self);
	static bool CheckHasItem_Hook(SDK::UGameplayCondition_HasItem* self, SDK::APlayerController* controller);
	static bool CheckHasClearedEvent_Hook(SDK::UGameplayCondition_HasClearedEvent* self, SDK::APlayerController* controller);
	static void ResetRespawnDefaults_Hook(SDK::APlayerControllerZion* self);

	bool HookConditionSlot(const char* name, SDK::UObject* cdo, void* hook, void** original);

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

	static FProcessEventFuncPtr oProcessEvent;
	static FNativeFuncPtr oSetLaunchGameIntent;
	static FNativeFuncPtr oSaveGameSync;
	static FNativeFuncPtr oSaveGameAsync;
	static FNativeFuncPtr oHPReachedZero;
	static FNativeFuncPtr oSetCurrentSlot;

	static void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params);
	static void SetLaunchGameIntent_Hook(SDK::UGameInstanceZion* Context, SDK::FFrame* Stack, void* Result);
	static void SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result);
	static void SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result);
	static void HPReachedZero_Hook(SDK::UDeathComponent* Context, SDK::FFrame* Stack, void* Result);
	static void SetCurrentSlot_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result);
};
