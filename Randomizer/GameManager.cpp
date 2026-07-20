#include "GameManager.h"
#include "Configuration.h"
#include "GUI.h"
#include "Logger.h"
#include "ItemReplacer.h"
#include "CustomItemRegistry.h"
#include "DebugTeleporter.h"
#include "SDK.hpp"

GameManager& GameManager::Instance()
{
	static GameManager instance;
	return instance;
}

SDK::UWorldLoaderSubsystem* GameManager::Loader() const
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	if (!World) return nullptr;
	return (SDK::UWorldLoaderSubsystem*)SDK::USubsystemBlueprintLibrary::GetGameInstanceSubsystem(World, SDK::UWorldLoaderSubsystem::StaticClass());
}

SDK::USaveSubsystem* GameManager::SaveSubsystem() const
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	if (!World) return nullptr;
	return (SDK::USaveSubsystem*)SDK::USubsystemBlueprintLibrary::GetGameInstanceSubsystem(World, SDK::USaveSubsystem::StaticClass());
}

bool GameManager::IsLoading() const
{
	auto loader = Loader();
	return !loader || loader->IsLoading(true);
}

void GameManager::Init()
{
	Logger::Log(this, "Init ok");
	itemReplacer = new ItemReplacer();
	teleporter = new DebugTeleporter();
}

void GameManager::OnGameStarted()
{
	auto ss = SaveSubsystem();
	Logger::Log(this, "New Game Started", (int)(GameInstance()->GetLaunchGameIntent()),
		(ss && ss->CurrentSettings ? ss->CurrentSettings->ValidGameVersion.ToString() : "none"),
		(ss && ss->SavingGameData ? ss->SavingGameData->ValidGameVersion.ToString() : "none"));
	Configuration::Instance().OnGameStart();
	this->currentZone = UC::FString(L"");
	start_weapon = false;
	if (!start_weapon)
		SetStartingWeapon();
}

bool GameManager::SetStartingWeapon()
{
	if (start_weapon)
		return true;
	auto controller = this->Controller();
	if (!controller)
	{
		return false;
	}
	if (!controller->InventoryComponent ||
		!controller->SkillComponent)
	{
		return false;
	}
	Logger::Log(this, "removing auto granted skills");
	SDK::FDataTableRowHandle handle;
	handle.DataTable = GameTables::ItemSpirits();
	for (auto i : handle.DataTable->RowMap)
	{
		auto spiritData = (SDK::FInventoryItemSpiritData*)(i.Second);
		spiritData->AutoGrantSkills.Clear();
		handle.RowName = i.First;
		controller->InventoryComponent->AddItem(handle, 1);
	}

	for (auto s : GameTables::ItemSkills()->RowMap)
	{
		auto skillData = (SDK::FInventoryItemSkillData*)(s.Second);
		SDK::FDataTableRowHandle row;
		row.DataTable = GameTables::ItemSkills();
		row.RowName = s.First;

		SDK::FSkillMaterialData cost;
		cost.Item = row;
		cost.Count = 1;

		auto levels = skillData->SkillLevelTable->RowMap;
		auto level_1 = (SDK::FSkillLevelData*)levels[skillData->InitialLevel - 1].Second;
		if (level_1->UnlockMaterials && level_1->UnlockMaterials.Num() > 0)
		{
			level_1->UnlockMaterials[0] = cost;
		}
		else
		{
			auto result = SDK::UPluginBlueprintLibrary::GetEnabledPluginNames();
			result.Clear();
			auto b = reinterpret_cast<UC::TArray<SDK::FSkillMaterialData>*>(&result);
			b->Add(cost);
			level_1->UnlockMaterials = *b;
		}
	}
	std::string skill = "DT_ItemSkills.s5000_sword";
	if (auto confSkill = Configuration::Instance().ScoutLocation("starting_skill"))
		skill = confSkill.value();
	auto row = CustomItemRegistry::FromItemName(skill);
	if (!controller->SkillComponent->HasAnyEquippedSkill() && row.has_value())
	{
		Logger::Log(LogLevel::Debug, this, "equiping", skill);
		controller->InventoryComponent->AddItem(row.value(), 1);
		controller->SkillComponent->Equip(SDK::ESkillSlot::A, row.value().RowName, true, true);
	}
	start_weapon = true;
	return true;
}

void GameManager::Tick()
{
	if (!start_weapon)
		SetStartingWeapon();
	auto zoneSystem = SDK::UZoneSystemComponent::Get(World());

	if (zoneSystem && !IsLoading())
	{
		auto zone = zoneSystem->GetActiveZoneLevelName();
		if (zone != this->currentZone && (zone.IsValid() || this->currentZone.IsValid()))
			this->ZoneChanged(this->currentZone, zone);
		itemReplacer->Tick();
	}
}

bool GameManager::GrantItem(const std::string& itemName, int count)
{
	auto controller = Controller();
	if (!controller || !controller->InventoryComponent)
		return false;

	auto row = CustomItemRegistry::FromItemName(itemName);
	if (!row.has_value())
		return false;

	controller->InventoryComponent->AddItem(row.value(), count);
	return true;
}

void GameManager::OnGameSaved()
{
	Configuration::Instance().OnGameSaved();
}

void GameManager::OnLocationClear(SDK::AActor* actor, SDK::UEventAsset* asset)
{
	if (!currentZone.IsValid())
		return;

	if (asset)
	{
		auto items = ItemReplacer::EnumerateEventItems(asset);
		for (int i = 0; i < (int)items.size(); ++i)
			Configuration::Instance().ReportCheck(ItemReplacer::EventLocationId(asset, i));
	}
	else if (actor)
	{
		Configuration::Instance().ReportCheck(ItemReplacer::ActorLocationId(actor->GetName()));
	}
}

void GameManager::ZoneChanged(UC::FString oldZone, UC::FString newZone)
{
	this->currentZone = newZone;
	Logger::Log(this, "Zone Changed", oldZone.ToString(), "->", newZone.ToString());
	if (newZone.IsValid())
		itemReplacer->ZoneChanged(oldZone, newZone);
}
