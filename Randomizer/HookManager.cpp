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
HookManager::FApplyAudioSettingsFn HookManager::oApplyAudioSettings = nullptr;
HookManager::FPlayBGMFn HookManager::oPlayBGM = nullptr;
HookManager::FMapClearFn HookManager::oMapClear = nullptr;
HookManager::FGoToPageFn HookManager::oGoToPage = nullptr;
HookManager::FEquipSkillFn HookManager::oEquipSkill = nullptr;
HookManager::FBTConditionFn HookManager::oIsNewGamePlusCondition = nullptr;
HookManager::FOpenGameMapFn HookManager::oOpenGameMap = nullptr;
HookManager::FSpawnEnemyFn HookManager::oSpawnEnemy = nullptr;

HookManager::FNativeFuncPtr HookManager::oSaveGameSync = nullptr;
HookManager::FNativeFuncPtr HookManager::oSaveGameAsync = nullptr;
HookManager::FNativeFuncPtr HookManager::oHPReachedZero = nullptr;
HookManager::FNativeFuncPtr HookManager::oSetCurrentSlot = nullptr;
HookManager::FZoomFn HookManager::oZoom = nullptr;

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
	constexpr uintptr_t kOff_ApplyAudioSettings    = 0x47635F0;
	constexpr uintptr_t kOff_PlayBGM               = 0x477B950;
	constexpr uintptr_t kOff_MapClear              = 0x47B1320;
	constexpr uintptr_t kOff_GoToPage              = 0x47BA2C0;
	constexpr uintptr_t kOff_Zoom                  = 0x47D42C0;
	constexpr uintptr_t kOff_EquipSkill            = 0x473CD50;
	constexpr uintptr_t kOff_OpenGameMap           = 0x477ADD0;
	constexpr uintptr_t kOff_SpawnEnemy            = 0x46C55B0;

	constexpr int kSlot_OnCheckCondition = 87;
	constexpr int kSlot_CalculateRawCondition = 103;
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

	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlot", &HookManager::SaveGameSync_Hook, &oSaveGameSync);
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlotAsync", &HookManager::SaveGameAsync_Hook, &oSaveGameAsync);
	HookNativeFunction(SDK::UDeathComponent::StaticClass(), "DeathComponent", "OnHPReachedZero", &HookManager::HPReachedZero_Hook, &oHPReachedZero);
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SetCurrentSlotIndex", &HookManager::SetCurrentSlot_Hook, &oSetCurrentSlot);

	//HookAt(kOff_TriggerEventFinished, &TriggerEventFinished_Hook, &oTriggerEventFinished);
	HookVirtual("GameplayCondition_HasItem", SDK::UGameplayCondition_HasItem::GetDefaultObj(), kSlot_OnCheckCondition, &CheckHasItem_Hook, &oCheckHasItem);
	HookVirtual("GameplayCondition_HasClearedEvent", SDK::UGameplayCondition_HasClearedEvent::GetDefaultObj(), kSlot_OnCheckCondition, &CheckHasClearedEvent_Hook, &oCheckHasClearedEvent);
	HookVirtual("BTDecorator_IsNewGamePlus", SDK::UBTDecorator_IsNewGamePlus::GetDefaultObj(), kSlot_CalculateRawCondition, &IsNewGamePlusCondition_Hook, &oIsNewGamePlusCondition);

	HookAt(kOff_MarkAsCleared, &MarkAsCleared_Hook, &oMarkAsCleared);
	HookAt(kOff_FinishAction, &FinishAction_Hook, &oFinishAction);
	HookAt(kOff_NotifyGameEnding, &NotifyGameEnding_Hook, &oNotifyGameEnding);
	HookAt(kOff_AddShopHistory, &AddShopHistory_Hook, &oAddShopHistory);
	HookAt(kOff_AddItem, &AddItem_Hook, &oAddItem);
	HookAt(kOff_IncrementEnvLevel, &IncrementEnvLevel_Hook, &oIncrementEnvLevel);
	HookAt(kOff_ResetRespawnDefaults, &ResetRespawnDefaults_Hook, &oResetRespawnDefaults);

	HookAt(kOff_IsEventAlreadySeen, &IsEventAlreadySeen_Hook, &oIsEventAlreadySeen);
	HookAt(kOff_CanAutoSkipEvent, &CanAutoSkipEvent_Hook, &oCanAutoSkipEvent);
	HookAt(kOff_GetAutoSkipSetting, &GetAutoSkipSetting_Hook, &oGetAutoSkipSetting);

	HookAt(kOff_ApplyAudioSettings, &ApplyAudioSettings_Hook, &oApplyAudioSettings);
	HookAt(kOff_PlayBGM, &PlayBGM_Hook, &oPlayBGM);
	HookAt(kOff_MapClear, &MapClear_Hook, &oMapClear);
	HookAt(kOff_GoToPage, &GoToPage_Hook, &oGoToPage);
	HookAt(kOff_Zoom, &Zoom_Hook, &oZoom);
	HookAt(kOff_EquipSkill, &EquipSkill_Hook, &oEquipSkill);
	HookAt(kOff_OpenGameMap, &OpenGameMap_Hook, &oOpenGameMap);
	HookAt(kOff_SpawnEnemy, &SpawnEnemy_Hook, &oSpawnEnemy);

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

bool HookManager::HookNativeFunction(const SDK::UClass *defaultClass, const std::string className, const std::string funcName, void* detour, FNativeFuncPtr* original)
{
	if (!defaultClass)
	{
		Logger::Log(LogLevel::Error, this, "no default class");
		return false;
	}
	auto Func = defaultClass->FindFunctionByName(SDK::FName::FromString(funcName));
	if (!Func || !Func->ExecFunction)
	{
		Logger::Log(LogLevel::Error, this, "no function", className, ".", funcName);
		return false;
	}
	return CreateHook(Func->ExecFunction, detour, reinterpret_cast<void**>(original), funcName.c_str());
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
	{
		self->DefaultRespawnRestPointData.RowName = restPoint.value();
		self->NewGameHPPercentage = 100.0f;
	}
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

void HookManager::ApplyAudioSettings_Hook(SDK::USoundSubsystem* self, SDK::FAudioVolumeSettings* settings)
{
	if (Configuration::Instance().Option("shuffle_bgm") == 0 || !settings->bOverrideBGM)
		return oApplyAudioSettings(self, settings);

	SDK::FAudioVolumeSettings swapped = *settings;
	swapped.BGM = GameManager::Instance().SwapBGM(settings->BGM);
	oApplyAudioSettings(self, &swapped);
}

void HookManager::PlayBGM_Hook(SDK::USoundSubsystem* self, SDK::UFMODEvent* event)
{
	if (Configuration::Instance().Option("shuffle_bgm") == 0)
		return oPlayBGM(self, event);

	oPlayBGM(self, GameManager::Instance().SwapBGM(event));
}

void HookManager::SpawnEnemy_Hook(SDK::AEnemySpawner* self, const SDK::FTransform* where)
{
	if (Configuration::Instance().Option("random_enemies") != 0)
	{
		auto& handle = self->EnemyRowHandle;
		if (auto row = GameManager::Instance().PickEnemy(self, handle.RowName))
			handle.RowName = *row;
	}
	oSpawnEnemy(self, where);
}

void HookManager::MapClear_Hook(SDK::UUserWidgetMap* self)
{
	oMapClear(self);

	auto map = static_cast<SDK::UWBP_Map_C*>(self);
	auto canvas = map->MainHolder;

	SDK::UWBP_Completion_C* completion = nullptr;

	for (auto slot: canvas->Slots)
	{
		auto child = slot->Content;
		if (child != map->WBP_Completion_Map
			&& child->IsValidLowLevel()
			&& child->Class == SDK::UWBP_Completion_C::StaticClass())
		{
			completion = static_cast<SDK::UWBP_Completion_C*>(child);
			break;
		}
	}
	if (!completion)
	{
		completion = static_cast<SDK::UWBP_Completion_C*>(SDK::UWidgetBlueprintLibrary::Create(
			map, SDK::UWBP_Completion_C::StaticClass(), nullptr));

		if (!completion)
		{
			GameManager::Instance().RefreshZoneLabels(map);
			return;
		}

		SDK::FAnchorData layout =
			static_cast<SDK::UCanvasPanelSlot*>(map->MapAreaName->Slot)->GetLayout();
		layout.Alignment.Y = 1.0;
		layout.Offsets.Top += 10.0f;

		auto slot = static_cast<SDK::UCanvasPanelSlot*>(canvas->AddChild(completion));
		slot->SetLayout(layout);
		slot->SetAutoSize(true);
	}

	completion->SetCompletionRatio(Configuration::Instance().Progress());
	completion->SetVisibility(SDK::ESlateVisibility::HitTestInvisible);

	auto overlay = static_cast<SDK::UPanelWidget*>(completion->WidgetTree->RootWidget);

	for (auto slot : overlay->Slots)
	{
		auto child = slot->Content;
		if (child->Class == SDK::UImage::StaticClass())
		{
			child->SetVisibility(SDK::ESlateVisibility::Collapsed);
			break;
		}
	}

	GameManager::Instance().RefreshZoneLabels(map);
}

void HookManager::GoToPage_Hook(SDK::UUserWidgetGameMenu* self, SDK::int32 pageIndex)
{
	oGoToPage(self, pageIndex);

	for (auto slot : self->PageSwitcher->Slots)
	{
		if (auto page = slot->Content;
			page->Class == SDK::UWBP_GameMenu_Page_Skill_C::StaticClass())
		{
			GameManager::Instance().SetMultiSkillPerSpirit();
			GameManager::Instance().SetSkillMenuNavigation(
				static_cast<SDK::UWBP_GameMenu_Page_Skill_C*>(page));
		}
	}
}

void HookManager::EquipSkill_Hook(SDK::USkillComponent* self, SDK::ESkillSlot slot, const SDK::FName* skillID, bool addToCurrentLoadout, bool autoLoad)
{
	if (Configuration::Instance().Option("allow_multiskill", 0) != 0)
	{
		SDK::ESkillSlot previous = self->GetEquippedSkillSlotFromID(*skillID);
		if (previous != SDK::ESkillSlot::Invalid && previous != slot)
			self->UnEquip(previous, addToCurrentLoadout);
	}

	oEquipSkill(self, slot, skillID, addToCurrentLoadout, autoLoad);
}

bool HookManager::IsNewGamePlusCondition_Hook(void* self, void* ownerComp, void* nodeMemory)
{
	if (Configuration::Instance().Option("ngplus_ai", 0) != 0)
		return true;

	return oIsNewGamePlusCondition(self, ownerComp, nodeMemory);
}

void HookManager::OpenGameMap_Hook(SDK::UWorldLoaderSubsystem* self, SDK::FDataTableRowHandle* gameMap, SDK::FName playerStartTag, bool forceReload, SDK::FFadeDescriptionData* fadeOut, SDK::FFadeDescriptionData* fadeIn)
{
	auto to = Configuration::Instance().ScoutTransition({ gameMap->RowName, playerStartTag });
	if (!to)
	{
		oOpenGameMap(self, gameMap, playerStartTag, forceReload, fadeOut, fadeIn);
		return;
	}

	SDK::FDataTableRowHandle redirected{ gameMap->DataTable, to->gameMap };
	oOpenGameMap(self, &redirected, to->playerStartTag, forceReload, fadeOut, fadeIn);
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

void HookManager::Zoom_Hook(SDK::UUserWidgetMap* self, float delta)
{
	oZoom(self, delta);
	GameManager::Instance().RefreshZoneLabels(static_cast<SDK::UWBP_Map_C*>(self));
}

#pragma endregion
