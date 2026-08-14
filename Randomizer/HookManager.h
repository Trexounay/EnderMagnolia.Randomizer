#pragma once
#include "SDK.hpp"

#include "Logger.h"

#define ENABLE_HOOK_PROBE 0

namespace SDK { struct FFrame; }

class HookManager
{
public:
	using FNativeFuncPtr = void (*)(SDK::UObject* Context, SDK::FFrame* Stack, void* Result);
	static HookManager& Instance();

	bool Init();

private:
	HookManager() = default;
	~HookManager() = default;
	HookManager(const HookManager&) = delete;
	HookManager& operator=(const HookManager&) = delete;

	bool HookNativeFunction(const SDK::UClass* defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour, void** original);
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
	using FEventPredicateFn = bool(*)(SDK::UUserWidgetEvent*);
	using FAutoSkipSettingFn = bool(*)(SDK::UGameSettingsSubsystem*);

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
	static FEventPredicateFn oIsEventAlreadySeen;
	static FEventPredicateFn oCanAutoSkipEvent;
	static FAutoSkipSettingFn oGetAutoSkipSetting;

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
	static bool IsEventAlreadySeen_Hook(SDK::UUserWidgetEvent* self);
	static bool CanAutoSkipEvent_Hook(SDK::UUserWidgetEvent* self);
	static bool GetAutoSkipSetting_Hook(SDK::UGameSettingsSubsystem* self);

	bool HookConditionSlot(const char* name, SDK::UObject* cdo, void* hook, void** original);

	static FNativeFuncPtr oSaveGameSync;
	static FNativeFuncPtr oSaveGameAsync;
	static FNativeFuncPtr oHPReachedZero;
	static FNativeFuncPtr oSetCurrentSlot;

	static void SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result);
	static void SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result);
	static void HPReachedZero_Hook(SDK::UDeathComponent* Context, SDK::FFrame* Stack, void* Result);
	static void SetCurrentSlot_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result);
};
