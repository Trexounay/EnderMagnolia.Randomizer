#include "GameManager.h"
#include "Configuration.h"
#include "Logger.h"
#include "ItemReplacer.h"
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
	Logger::Log(this, "New Game Started", (int)(GameInstance()->GetLaunchGameIntent()));
	// read seed
	Configuration::Instance().Load();
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

	// remove all auto granted skills
	Logger::Log(this, "removing auto granted skills");
	SDK::FDataTableRowHandle handle;
	handle.DataTable = Mode()->DataTableItemSpirits;
	for (auto i : handle.DataTable->RowMap)
	{
		auto spiritData = (SDK::FInventoryItemSpiritData*)(i.Second);
		spiritData->AutoGrantSkills.Clear();
		handle.RowName = i.First;
		controller->InventoryComponent->AddItem(handle, 1);
	}
	std::string skill = "DT_ItemSkills.s5000_sword";
	if (auto confSkill = Configuration::Instance().ScoutLocation("starting_skill"))
		skill = confSkill.value();
	auto row = ItemReplacer::FromItemName(skill);
	if (!controller->SkillComponent->HasAnyEquippedSkill() && row.has_value())
	{
		Logger::Log(LogLevel::Debug, this, "equiping", skill);
		controller->InventoryComponent->AddItem(row.value(), 1);
		controller->SkillComponent->Equip(SDK::ESkillSlot::A, row.value().RowName, true, true);
	}
	start_weapon = true;
	return true;
}

void GameManager::OnReceiveTick()
{
	if (!start_weapon)
		SetStartingWeapon();
	auto zoneSystem = SDK::UZoneSystemComponent::Get(World());
	
	if (zoneSystem && !IsLoading())
	{
		auto zone = zoneSystem->GetActiveZoneLevelName();
		if (zone != this->currentZone && (zone.IsValid() || this->currentZone.IsValid()))
			this->ZoneChanged(this->currentZone, zone);
		itemReplacer->Tick(zone);
		// teleport to every room/zone in the game 
		//teleporter->Tick();
	}
}

void GameManager::ZoneChanged(UC::FString oldZone, UC::FString newZone)
{
	this->currentZone = newZone;
	Logger::Log(this, "Zone Changed", oldZone.ToString(), "->", newZone.ToString());
	if (newZone.IsValid())
		itemReplacer->ZoneChanged(oldZone, newZone);
}
