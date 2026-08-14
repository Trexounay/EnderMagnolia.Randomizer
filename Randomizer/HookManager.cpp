#include "HookManager.h"
#include "Logger.h"
#include "Configuration.h"
#include "GameManager.h"
#include "CustomItemRegistry.h"
#include "ArchipelagoSource.h"
#include "GUI.h"
#if ENABLE_HOOK_PROBE
#include "HookProbe.h"
#endif

#include <Windows.h>
#include "minhook/include/MinHook.h"

HookManager::FEngineTickFn HookManager::oEngineTick = nullptr;

HookManager::FEventFinishedFn HookManager::oTriggerEventFinished = nullptr;
HookManager::FMarkClearedFn HookManager::oMarkAsCleared = nullptr;
HookManager::FFinishActionFn HookManager::oFinishAction = nullptr;
HookManager::FNotifyGameEndingFn HookManager::oNotifyGameEnding = nullptr;
HookManager::FAddShopHistoryFn HookManager::oAddShopHistory = nullptr;
HookManager::FAddItemFn HookManager::oAddItem = nullptr;
HookManager::FIncrementEnvLevelFn HookManager::oIncrementEnvLevel = nullptr;

HookManager::FCheckHasItemFn HookManager::oCheckHasItem = nullptr;
HookManager::FCheckHasClearedEventFn HookManager::oCheckHasClearedEvent = nullptr;
HookManager::FResetRespawnDefaultsFn HookManager::oResetRespawnDefaults = nullptr;
HookManager::FEventPredicateFn HookManager::oIsEventAlreadySeen = nullptr;
HookManager::FEventPredicateFn HookManager::oCanAutoSkipEvent = nullptr;
HookManager::FAutoSkipSettingFn HookManager::oGetAutoSkipSetting = nullptr;

HookManager::FNativeFuncPtr HookManager::oSaveGameSync = nullptr;
HookManager::FNativeFuncPtr HookManager::oSaveGameAsync = nullptr;
HookManager::FNativeFuncPtr HookManager::oHPReachedZero = nullptr;
HookManager::FNativeFuncPtr HookManager::oSetCurrentSlot = nullptr;

namespace
{
	constexpr uintptr_t kOff_MarkAsCleared         = 0x4712D20;
	constexpr uintptr_t kOff_TriggerEventFinished  = 0x46BBF40;
	constexpr uintptr_t kOff_FinishAction          = 0x44F7270;
	constexpr uintptr_t kOff_NotifyGameEnding      = 0x4777300;
	constexpr uintptr_t kOff_AddShopHistory        = 0x4731DE0;
	constexpr uintptr_t kOff_AddItem               = 0x4731D20;
	constexpr uintptr_t kOff_IncrementEnvLevel     = 0x4770AA0;
	constexpr uintptr_t kOff_ResetRespawnDefaults  = 0x46B35C0;
	constexpr uintptr_t kOff_IsEventAlreadySeen    = 0x47BAC60;
	constexpr uintptr_t kOff_CanAutoSkipEvent      = 0x47B06F0;
	constexpr uintptr_t kOff_GetAutoSkipSetting    = 0x476DEC0;

	constexpr int kSlot_OnCheckCondition = 87;
}

HookManager& HookManager::Instance()
{
	static HookManager instance;
	return instance;
}


#pragma region Hooks installation

bool HookManager::Init()
{
	SDK::UEngine* engine = SDK::UEngine::GetEngine();
	if (!engine)
	{
		Logger::Log(LogLevel::Warning, this, "waiting for UEngine");
		return false;
	}

	auto world = SDK::UWorld::GetWorld();
	if (!world || !world->OwningGameInstance || !world->OwningGameInstance->LocalPlayers.Num() || !world->OwningGameInstance->LocalPlayers[0]->PlayerController)
	{
		Logger::Log(LogLevel::Warning, this, "waiting for UWORLD");
		return false;
	}

	MH_STATUS mhInit = MH_Initialize();
	if (mhInit != MH_OK && mhInit != MH_ERROR_ALREADY_INITIALIZED)
	{
		Logger::Log(LogLevel::Error, this, "MH_Initialize failed:", MH_StatusToString(mhInit));
		return false;
	}

	oEngineTick = reinterpret_cast<FEngineTickFn>(
		HookVTableFunction(engine, SDK::Offsets::EngineTickIdx, reinterpret_cast<void*>(&EngineTick_Hook)));
	if (!oEngineTick)
		Logger::Log(LogLevel::Error, this, "Failed to hook engine tick");

	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlot", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameSync_Hook), reinterpret_cast<void**>(&oSaveGameSync));
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlotAsync", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameAsync_Hook), reinterpret_cast<void**>(&oSaveGameAsync));
	HookNativeFunction(SDK::UDeathComponent::StaticClass(), "DeathComponent", "OnHPReachedZero", reinterpret_cast<FNativeFuncPtr>(&HookManager::HPReachedZero_Hook), reinterpret_cast<void**>(&oHPReachedZero));
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SetCurrentSlotIndex", reinterpret_cast<FNativeFuncPtr>(&HookManager::SetCurrentSlot_Hook), reinterpret_cast<void**>(&oSetCurrentSlot));

	//HookAt(kOff_TriggerEventFinished, &TriggerEventFinished_Hook, reinterpret_cast<void**>(&oTriggerEventFinished));
	HookConditionSlot("GameplayCondition_HasItem", SDK::UGameplayCondition_HasItem::GetDefaultObj(), &CheckHasItem_Hook, reinterpret_cast<void**>(&oCheckHasItem));
	HookConditionSlot("GameplayCondition_HasClearedEvent", SDK::UGameplayCondition_HasClearedEvent::GetDefaultObj(), &CheckHasClearedEvent_Hook, reinterpret_cast<void**>(&oCheckHasClearedEvent));

	HookAt(kOff_MarkAsCleared, &MarkAsCleared_Hook, reinterpret_cast<void**>(&oMarkAsCleared));
	HookAt(kOff_FinishAction, &FinishAction_Hook, reinterpret_cast<void**>(&oFinishAction));
	HookAt(kOff_NotifyGameEnding, &NotifyGameEnding_Hook, reinterpret_cast<void**>(&oNotifyGameEnding));
	HookAt(kOff_AddShopHistory, &AddShopHistory_Hook, reinterpret_cast<void**>(&oAddShopHistory));
	HookAt(kOff_AddItem, &AddItem_Hook, reinterpret_cast<void**>(&oAddItem));
	HookAt(kOff_IncrementEnvLevel, &IncrementEnvLevel_Hook, reinterpret_cast<void**>(&oIncrementEnvLevel));
	HookAt(kOff_ResetRespawnDefaults, &ResetRespawnDefaults_Hook, reinterpret_cast<void**>(&oResetRespawnDefaults));

	HookAt(kOff_IsEventAlreadySeen, &IsEventAlreadySeen_Hook, reinterpret_cast<void**>(&oIsEventAlreadySeen));
	HookAt(kOff_CanAutoSkipEvent, &CanAutoSkipEvent_Hook, reinterpret_cast<void**>(&oCanAutoSkipEvent));
	HookAt(kOff_GetAutoSkipSetting, &GetAutoSkipSetting_Hook, reinterpret_cast<void**>(&oGetAutoSkipSetting));

	MH_STATUS applied = MH_ApplyQueued();
	if (applied != MH_OK)
		Logger::Log(LogLevel::Error, this, "MH_ApplyQueued failed:", MH_StatusToString(applied));

#if ENABLE_HOOK_PROBE
	HookProbe::Install();
#endif

	Logger::Log(this, "Init ok");
	return true;
}

bool HookManager::CreateHook(void* target, void* hook, void** original, const char* name)
{
	MH_STATUS created = MH_CreateHook(target, hook, original);
	if (created != MH_OK)
	{
		Logger::Log(LogLevel::Error, this, "MH_CreateHook failed for", name, ":", MH_StatusToString(created));
		return false;
	}

	MH_STATUS queued = MH_QueueEnableHook(target);
	if (queued != MH_OK)
	{
		Logger::Log(LogLevel::Error, this, "MH_QueueEnableHook failed for", name, ":", MH_StatusToString(queued));
		return false;
	}
	return true;
}

bool HookManager::HookConditionSlot(const char* name, SDK::UObject* cdo, void* hook, void** original)
{
	if (!cdo)
	{
		Logger::Log(LogLevel::Error, this, "no CDO for condition", name);
		return false;
	}

	void** vtable = *reinterpret_cast<void***>(cdo);
	if (!vtable)
		return false;

	return CreateHook(vtable[kSlot_OnCheckCondition], hook, original, name);
}

bool HookManager::HookAt(uintptr_t offset, void* hook, void** original)
{
	uintptr_t base = SDK::InSDKUtils::GetImageBase();
	return CreateHook(reinterpret_cast<void*>(base + offset), hook, original, "rva hook");
}

void* HookManager::HookVTableFunction(void* instance, int index, void* hook)
{
	if (!instance)
		return nullptr;

	void** vtable = *reinterpret_cast<void***>(instance);
	if (!vtable)
		return nullptr;

	void* original = vtable[index];

	DWORD oldProtect;
	VirtualProtect(&vtable[index], sizeof(void*), PAGE_READWRITE, &oldProtect);
	vtable[index] = hook;
	VirtualProtect(&vtable[index], sizeof(void*), oldProtect, &oldProtect);

	return original;
}

bool HookManager::HookNativeFunction(const SDK::UClass *defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour, void** original)
{
	if (!defaultClass)
	{
		Logger::Log(LogLevel::Error, this, "no default class");
		return false;
	}
	auto Func = defaultClass->GetFunction(className, funcName);
	if (!Func || !Func->ExecFunction)
	{
		Logger::Log(LogLevel::Error, this, "no function", className, ".", funcName);
		return false;
	}
	return CreateHook(Func->ExecFunction, detour, original, funcName.c_str());
}
#pragma endregion

#pragma region Game callbacks


void HookManager::TriggerEventFinished_Hook(SDK::ATrigger_Event* self, SDK::UEventPlayer* eventPlayer, bool completed, SDK::EEventPlayerResult result)
{
	oTriggerEventFinished(self, eventPlayer, completed, result);
}

void HookManager::MarkAsCleared_Hook(SDK::UClearComponent* self)
{
	SDK::AActor* owner = self->GetOwner();
	auto boss = owner ? owner->Cast<SDK::ABP_BossSpawner_C>() : nullptr;
	auto defeatEvent = boss ? boss->LoadedDefeatEvent : nullptr;
	if (defeatEvent)
		GameManager::Instance().OnEventFinished(defeatEvent);
	else
		GameManager::Instance().OnActorCleared(owner);
	oMarkAsCleared(self);
}

void HookManager::NotifyGameEnding_Hook(SDK::AGameModeZion* self, SDK::EGameEndingType ending)
{
	oNotifyGameEnding(self, ending);

	bool requiresEndingB = Configuration::Instance().Option("goal") == 1;
	if (!requiresEndingB || ending == SDK::EGameEndingType::EndingB)
		ArchipelagoSource::Instance().OnGoalReached();
}

void HookManager::AddShopHistory_Hook(SDK::UShopInfoComponent* self, SDK::EShopType shopType, SDK::FDataTableRowHandle* boughtItem)
{
	oAddShopHistory(self, shopType, boughtItem);
	if (boughtItem)
		ArchipelagoSource::Instance().OnShopPurchase(*boughtItem);
}

bool HookManager::AddItem_Hook(SDK::UInventoryComponent* self, const SDK::FDataTableRowHandle* itemHandle, SDK::int32 count)
{
	if (!itemHandle || !itemHandle->DataTable)
		return oAddItem(self, itemHandle, count);

	std::string itemName = CustomItemRegistry::ToItemName(*itemHandle);
	auto chain = CustomItemRegistry::FindChain(itemName);
	if (!chain)
		return oAddItem(self, itemHandle, count);

	bool added = false;
	while (count-- > 0)
	{
		auto link = CustomItemRegistry::Instance().NextProgressiveLink(*chain);
		if (!link)
			break;
		auto row = CustomItemRegistry::Instance().Provide(link.value());
		added = oAddItem(self, &row.value(), 1) || added;
	}
	return added;
}

SDK::int32 HookManager::IncrementEnvLevel_Hook(SDK::AGameModeZion* self)
{
	self->EnvironmentLevel++;
	return GameManager::Instance().ClampChapter();
}

void HookManager::ResetRespawnDefaults_Hook(SDK::APlayerControllerZion* self)
{
	if (auto restPoint = Configuration::Instance().StartingRestPoint())
		self->DefaultRespawnRestPointData.RowName = restPoint.value();
	oResetRespawnDefaults(self);
}

void HookManager::FinishAction_Hook(SDK::UEventAction* self)
{
	if (self && self->Class)
	{
		std::string cls = self->Class->Name.ToString();
		if ((cls == "EventAction_GrantItems" || cls == "EventAction_GrantItemsFromBlackboard") && self->EventContext)
		{
			SDK::UEventAsset* asset = self->EventContext->GetEventAsset();
			if (asset)
				GameManager::Instance().OnEventFinished(asset);
		}
		else if (cls == "EventAction_SaveGame")
		{
			GameManager::Instance().OnGameSaved();
		}
	}
	oFinishAction(self);
}

bool HookManager::CheckHasItem_Hook(SDK::UGameplayCondition_HasItem* self, SDK::APlayerController* controller)
{
	if (self->bInvertCondition)
		return false;
	return oCheckHasItem(self, controller);
}

bool HookManager::CheckHasClearedEvent_Hook(SDK::UGameplayCondition_HasClearedEvent* self, SDK::APlayerController* controller)
{
	if (!self)
		return false;

	static const SDK::FName elevatorFix = SDK::FName::FromString("EVT_ev_s_0180_StreetElevatorFix");

	static const SDK::FName vanillaZones[] = {
		SDK::FName::FromString("Roots_001_Zone_005"),
		SDK::FName::FromString("Quarry_001_Zone_003"),
		SDK::FName::FromString("Estate_001_Zone_007"),
		SDK::FName::FromString("Factory_001_Zone_019"),
		SDK::FName::FromString("Kowloon_001_Zone_009"),
		SDK::FName::FromString("Mine_001_Zone_014"),
	};

	static const std::pair<SDK::FName, const char*> eventItems[] = {
		{ SDK::FName::FromString("EVT_ev_s_e5012_RootsLancer_Defeat"), "DT_ItemQuests.quest_eye" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure1_001"),       "DT_ItemQuests.quest_artifact" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure2_001"),       "DT_ItemQuests.quest_stone" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure3_001"),       "DT_ItemQuests.quest_bird" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure4_001"),       "DT_ItemQuests.quest_board" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure5_001"),       "DT_ItemQuests.quest_perfume" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure6_001"),       "DT_ItemQuests.quest_lithograph" },
		{ SDK::FName::FromString("EVT_ev_n_Levy_Treasure6_002"),       "DT_ItemQuests.quest_amulet" },
	};

	if (self->EventName() == elevatorFix)
	{
		int mode = Configuration::Instance().Option("central_elevator_fix");
		if (mode == 2 || CustomItemRegistry::Instance().PlayerHas(RandomizerItems::ElevatorKey.id))
			return !self->bInvertCondition;
	}

	auto zoneOuter = (self->Outer && self->Outer->Outer) ? self->Outer->Outer->Outer : nullptr;
	for (const SDK::FName& vanillaZone : vanillaZones)
		if (zoneOuter && zoneOuter->Name == vanillaZone)
			return oCheckHasClearedEvent(self, controller);

	for (const auto& mapping : eventItems)
		if (self->EventName() == mapping.first)
			return CustomItemRegistry::Instance().PlayerHas(mapping.second) != self->bInvertCondition;

	return oCheckHasClearedEvent(self, controller);
}

bool HookManager::IsEventAlreadySeen_Hook(SDK::UUserWidgetEvent* self)
{
	if (Configuration::Instance().Option("auto_skip_cutscenes") == 0)
		return oIsEventAlreadySeen(self);

	auto player = self->GetEventPlayer();
	if (player->EventAsset->GetName() == "EVT_ev_s_0010_Opening")
	{
		player->SkipEvent();
		return true;
	}

	SDK::UEventAction_Fade* last = nullptr;
	int lastIndex = -1;
	for (auto entry : player->EventAsset->Nodes)
	{
		auto node = entry.Value()->Cast<SDK::UEventNodeAction>();
		if (!node || node->ExecutionIndex < lastIndex)
			continue;

		for (int i = 0; i < node->Actions.Num(); ++i)
		{
			auto fade = node->Actions[i]->Cast<SDK::UEventAction_Fade>();
			if (!fade || fade->FadeLayer != SDK::EFadeLayer::Event)
				continue;
			last = fade;
			lastIndex = node->ExecutionIndex;
		}
	}

	if (last && last->FadeType == SDK::EFadeType::FadeIn)
		last->bPostSkipAction = true;


	return true;
}

bool HookManager::CanAutoSkipEvent_Hook(SDK::UUserWidgetEvent* self)
{
	if (Configuration::Instance().Option("auto_skip_cutscenes") == 0)
		return oCanAutoSkipEvent(self);
	return true;
}

bool HookManager::GetAutoSkipSetting_Hook(SDK::UGameSettingsSubsystem* self)
{
	if (Configuration::Instance().Option("auto_skip_cutscenes") == 0)
		return oGetAutoSkipSetting(self);
	return true;
}

void __fastcall HookManager::EngineTick_Hook(void* self, float dt, bool idle)
{
	GUI::Instance().Tick();
	Configuration::Instance().Tick();
	GameManager::Instance().Tick();
#if ENABLE_HOOK_PROBE
	HookProbe::Tick();
#endif
	oEngineTick(self, dt, idle);
}

void HookManager::SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result)
{
	oSaveGameSync(Context, Stack, Result);
	if (Result && *Result)
		GameManager::Instance().OnGameSaved();
}

void HookManager::SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result)
{
	oSaveGameAsync(Context, Stack, Result);
	GameManager::Instance().OnGameSaved();
}

void HookManager::HPReachedZero_Hook(SDK::UDeathComponent* Context, SDK::FFrame* Stack, void* Result)
{
	oHPReachedZero(Context, Stack, Result);
	if (Context && Context->GetOwner() == GameManager::Instance().Pawn())
		ArchipelagoSource::Instance().OnPlayerDeath();
}

void HookManager::SetCurrentSlot_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result)
{
	oSetCurrentSlot(Context, Stack, Result);
	if (Context)
	{
		bool isNewGame = GameManager::Instance().GameInstance()->GetLaunchGameIntent() == SDK::ELaunchGameIntent::NewGame;
		GameManager::Instance().OnGameStart(Context->CurrentSlotIndex, isNewGame);
	}
}

#pragma endregion
