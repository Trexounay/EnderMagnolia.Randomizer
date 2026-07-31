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

void GameManager::OnGameStart(int slot, bool isNewGame)
{
	currentSaveSlot = slot;
	Logger::Log(this, "Game Started slot", slot, "newGame", (int)isNewGame);
	currentZone.clear();
	start_weapon = false;
	CustomItemRegistry::Instance().ResetItems();
	Configuration::Instance().OnGameStart(isNewGame);
	itemReplacer->ResetShopItems();
	SetStartingWeapon();
}

bool GameManager::SetStartingWeapon()
{
	if (start_weapon)
		return true;
	auto controller = this->Controller();
	if (!controller || !controller->InventoryComponent || !controller->SkillComponent)
		return false;

	GrantAllSpirits();
	SetSkillCosts();
	EquipStartingSkill();

	start_weapon = true;
	return true;
}

void GameManager::GrantAllSpirits()
{
	auto controller = this->Controller();
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
}

void GameManager::SetSkillCosts()
{
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
			auto buffer = (SDK::FSkillMaterialData*)SDK::FMemory::Malloc(sizeof(SDK::FSkillMaterialData));
			buffer[0] = cost;
			level_1->UnlockMaterials = UC::TExternalArray<SDK::FSkillMaterialData>(buffer, 1);
		}
	}
}

void GameManager::EquipStartingSkill()
{
	auto controller = this->Controller();
	std::string skill = "DT_ItemSkills.s5000_sword";
	if (auto confSkill = Configuration::Instance().ScoutLocation("starting_skill"))
		skill = confSkill.value();
	auto row = CustomItemRegistry::Instance().Provide(skill);
	if (!controller->SkillComponent->HasAnyEquippedSkill() && row.has_value())
	{
		Logger::Log(LogLevel::Debug, this, "equiping", skill);
		controller->InventoryComponent->AddItem(row.value(), 1);
		controller->SkillComponent->Equip(SDK::ESkillSlot::A, row.value().RowName, true, true);
		Configuration::Instance().ReportCheck("starting_skill");
	}
}

void GameManager::Tick()
{
	if (!itemReplacer)
		return;

	if (!start_weapon)
		SetStartingWeapon();
	auto zoneSystem = SDK::UZoneSystemComponent::Get(World());

	if (IsLoading())
	{
		wasLoading = true;
		itemReplacer->ZoneUnloaded();
	}
	else if (zoneSystem)
	{
		std::string zone = zoneSystem->GetActiveZoneLevelName().ToString();
		if (zone != this->currentZone)
			this->ZoneChanged(this->currentZone, zone);
		else if (wasLoading)
			this->ZoneReloaded(zone);
		wasLoading = false;
		itemReplacer->Tick();
	}
}

bool GameManager::GrantItem(const std::string& itemName, int count)
{
	auto controller = Controller();
	if (!controller || !controller->InventoryComponent)
		return false;

	auto row = CustomItemRegistry::Instance().Provide(itemName);
	if (!row.has_value())
		return false;

	controller->InventoryComponent->AddItem(row.value(), count);
	return true;
}

bool GameManager::KillPlayer()
{
	auto controller = Controller();
	if (!controller || IsLoading() || controller->IsInEvent())
		return false;

	auto pawn = Pawn();
	if (!pawn || !pawn->StatHPComponent)
		return false;

	auto hp = pawn->StatHPComponent;
	if (hp->GetCurrValue() <= 0)
		return true;

	SDK::FDamageData damage{};
	damage.Damage = hp->GetMaxValue() + 1;
	damage.Element = SDK::EAttackElement::None;
	damage.Type = SDK::EAttackType::Physic;
	damage.AppliedRate = 1.0f;

	hp->DoDamage(pawn, damage);
	return true;
}

void GameManager::OnGameSaved()
{
	Configuration::Instance().OnGameSaved();
}

void GameManager::OnItemSourceChanged()
{
	if (!itemReplacer)
		return;

	Logger::Log(this, "item source changed, shop will be replaced again");
	itemReplacer->ResetShopItems();
	if (!currentZone.empty() && !IsLoading())
		itemReplacer->ZoneChanged(currentZone, currentZone);
}

void GameManager::OnEventFinished(SDK::UEventAsset* asset)
{
	if (currentZone.empty() || !asset)
		return;

	auto items = ItemReplacer::EnumerateEventItems(asset);
	for (int i = 0; i < (int)items.size(); ++i)
		Configuration::Instance().ReportCheck(ItemReplacer::EventLocationId(asset, i));
}

void GameManager::OnActorCleared(SDK::AActor* actor)
{
	if (currentZone.empty() || !actor)
		return;

	Configuration::Instance().ReportCheck(ItemReplacer::ActorLocationId(actor->GetName()));
}

void GameManager::ZoneChanged(std::string oldZone, std::string newZone)
{
	this->currentZone = newZone;
	Logger::Log(this, "Zone Changed", oldZone, "->", newZone);
	if (!newZone.empty())
		itemReplacer->ZoneChanged(oldZone, newZone);
	else
		itemReplacer->ZoneUnloaded();
}

void GameManager::ZoneReloaded(std::string zone)
{
	Logger::Log(this, "Zone Reloaded", zone);
	if (!zone.empty())
		itemReplacer->ZoneChanged(zone, zone);
}
