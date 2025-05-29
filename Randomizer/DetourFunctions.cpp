#include <iostream>
#include <fstream>
#include "Randomizer/DetourFunctions.h"

std::unordered_map<std::string, int> toto;
bool done = false;
int count = 0;
int zone = -1;
int gamemap = -1;

void FromEventAsset(SDK::AActor* actor, SDK::UEventAsset* asset);

void ReplaceBossEvents()
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;

	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(World, SDK::ABP_BossSpawner_C::StaticClass(), &out);
	for (auto Actor : out)
	{
		FromEventAsset(Actor, ((SDK::ABP_BossSpawner_C*)(Actor))->LoadedDefeatEvent);
	}
}

void FromEventAsset(SDK::AActor *actor, SDK::UEventAsset *asset)
{
	auto str = actor->GetFullName();
	if (asset == nullptr || actor == nullptr || toto.find(str) != toto.end())
		return;
	std::ofstream myfile;
	myfile.open("out.txt", std::ios_base::app);

	SDK::UWorld* World = SDK::UWorld::GetWorld();
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;

	for (auto data : asset->Nodes)
	{
		if (data.Value()->IsA(SDK::UEventNodeAction::StaticClass()))
		{
			auto nodeaction = static_cast<SDK::UEventNodeAction*>(data.Value());
			for (auto action : nodeaction->Actions)
			{
				if (action->IsA(SDK::UEventAction_GrantItems::StaticClass()))
				{
					auto grantitem = static_cast<SDK::UEventAction_GrantItems*>(action);
					//grantitem->ItemHandleCounts[0].ItemHandle.DataTable = Mode->DataTableItemSpirits;
					//grantitem->ItemHandleCounts[0].ItemHandle.RowName = Mode->DataTableItemSpirits->RowMap[1].First;
					for (const auto& item : grantitem->ItemHandleCounts)
					{
						auto Item = item.ItemHandle;
						std::cout << Mode->ZoneSystemComponent->GetActiveZoneLevelName() << "." << actor->GetName() << ":" << item.Count << "x" << Item.DataTable->GetName() << "." << Item.RowName.ToString() << std::endl;
						if (item.Count > 1)
							myfile << Mode->ZoneSystemComponent->GetActiveZoneLevelName() << "." << actor->GetName() << ":" << item.Count << "x" << Item.DataTable->GetName() << "." << Item.RowName.ToString() << std::endl;
						else
							myfile << Mode->ZoneSystemComponent->GetActiveZoneLevelName() << "." << actor->GetName() << ":" << Item.DataTable->GetName() << "." << Item.RowName.ToString() << std::endl;

						toto[str] = 0;
						count = 0;
					}
				}
				if (action->IsA(SDK::UEventAction_EquipSkills::StaticClass()))
				{
					auto grantitem = static_cast<SDK::UEventAction_EquipSkills*>(action);
					grantitem->SkillsToEquip[0].Second.DataTable = Mode->DataTableItemSkills;
					grantitem->SkillsToEquip[0].Second.RowName = Mode->DataTableItemSkills->RowMap[1].First;
				}
			}
		}
	}
	myfile.close();
}

void ReplaceTriggerEvents()
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;

	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(World, SDK::ATrigger_Event::StaticClass(), &out);
	// trigger events
	for (auto Actor : out)
	{
		auto trigger = static_cast<SDK::ATrigger_Event*>(Actor);
		auto asset = trigger->LoadedEventAsset;
		if (!asset)
			continue;
		FromEventAsset(Actor, asset);
	}
}

void ReplaceInteractableAddItems()
{
	std::ofstream myfile;
	myfile.open("out.txt", std::ios_base::app);

	SDK::UWorld* World = SDK::UWorld::GetWorld();
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;

	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(World, SDK::ABP_Interactable_AddItem_C::StaticClass(), &out);

	// trigger events
	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_AddItem_C*>(Actor);
		auto str = Actor->GetFullName();
		if (toto.find(str) == toto.end())
		{
			std::cout << Mode->ZoneSystemComponent->GetActiveZoneLevelName() << "." << Actor->GetName() << ":" << interactable->Item.DataTable->GetName() << "." << interactable->Item.RowName.ToString() << std::endl;
			myfile << Mode->ZoneSystemComponent->GetActiveZoneLevelName() << "." << Actor->GetName() << ":" << interactable->Item.DataTable->GetName() << "." << interactable->Item.RowName.ToString() << std::endl;
			toto[str] = 0;
			count = 0;
			interactable->Item.DataTable = Mode->DataTableItemSkills;
			interactable->Item.RowName = Mode->DataTableItemSkills->RowMap[1].First;
		}
	}
	myfile.close();

}

std::unordered_map<int, SDK::FMapTransitionData> maps;
std::vector<SDK::FMapTransitionData> maps_ordered;
bool initmaps = false;
bool refresh;
UC::TArray<SDK::AActor*> out;

void TeleportAround()
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();

	auto loader = (SDK::UWorldLoaderSubsystem*)SDK::USubsystemBlueprintLibrary::GetGameInstanceSubsystem(World, SDK::UWorldLoaderSubsystem::StaticClass());
	if (loader->IsLoading(true))
	{
		return;
	}
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;
	SDK::APlayerControllerZion* MyController = (SDK::APlayerControllerZion*)World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	SDK::ACharacterZion* pawn = (SDK::ACharacterZion*)MyController->Pawn;
	count++;

	if (!initmaps)
	{
		for (auto data : Mode->DataTableGameMapTransitions->RowMap)
		{
			auto transData = (SDK::FMapTransitionRowData*)(data.Second);
			for (auto trans : transData->TransitionSpawnPoints)
			{
				auto row = trans.GameMapID;
				if (maps.find(row.RowName.ComparisonIndex) == maps.end())
				{
					maps[row.RowName.ComparisonIndex] = trans;
				}
			}
		}
		for (auto m : maps)
			maps_ordered.push_back(m.second);
		initmaps = true;
	}

	if (count > 15)
	{
		if (gamemap > -1 && refresh)
		{
			SDK::UGameplayStatics::GetAllActorsOfClass(World, SDK::AStaticVolume_Zone::StaticClass(), &out);
			refresh = false;
		}
		if (gamemap == -1 || zone >= out.Num())
		{
			gamemap++;
			auto row = maps_ordered[gamemap];

			auto fadein = SDK::FFadeDescriptionData();
			auto fadeout = SDK::FFadeDescriptionData();
			std::cout << "tp to" << row.GameMapID.RowName.ToString() << std::endl;
			loader->OpenGameMap(row.GameMapID, row.PlayerStartTag, true, fadein, fadeout);
			refresh = true;
			zone = 0;
			return;
		}
		else if (!refresh && zone < out.Num())
		{
			auto pawnrot = pawn->GetTransform().Rotation;
			pawn->K2_TeleportTo(out[zone]->GetTransform().Translation, SDK::FRotator());
			pawn->StatHPComponent->DoHeal(MyController, 100);
			zone++;
		}
		count = 0;
	}

}


void FillDataTable(SDK::UDataTable *table)
{
	std::ofstream myfile;
	myfile.open("out.txt", std::ios_base::app);

	for (auto row : table->RowMap)
	{
		auto str = table->Name.ToString() + "." + row.First.ToString();
		if (toto.find(str) == toto.end())
		{
			std::cout << str << std::endl;
			myfile << str << std::endl;
			toto[str] = 0;
		}
	}
	myfile.close();
}

void Tick()
{
	//TeleportAround();
	//ReplaceInteractableAddItems();
	//ReplaceTriggerEvents();
	//ReplaceBossEvents();

	SDK::UWorld* World = SDK::UWorld::GetWorld();
	SDK::AGameModeZion* Mode = (SDK::AGameModeZion*)World->AuthorityGameMode;
}


DETOUR_DECL_TYPE(void, ProcessEvent, const SDK::UObject*, SDK::UFunction*, void*);
detour_ctx_t process_event_ctx;

void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params)
{
	if (func->Name.ToString() == "ReceiveTick" && obj->Class->Name.ToString() == "BP_PlayerCameraManagerZion_C")
		Tick();
	DETOUR_ORIG_CALL(&process_event_ctx, ProcessEvent, obj, func, params);
}

bool DoDetour()
{
	std::cout << "Start Detour" << std::endl;
	SDK::UEngine* Engine = SDK::UEngine::GetEngine();
	if (!Engine)
		return false;

	void* orig_ptr = (void*)(SDK::InSDKUtils::GetVirtualFunction<void(*)(const SDK::UObject*, SDK::UFunction*, void*)>(Engine, SDK::Offsets::ProcessEventIdx));
	if (orig_ptr == nullptr)
		return false;
	detour_init(&process_event_ctx, orig_ptr, (void*)&ProcessEvent_Hook);

	//detour_disable(&process_event_ctx);
	return detour_enable(&process_event_ctx);
}