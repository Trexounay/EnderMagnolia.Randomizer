#include "GameManager.h"
#include "Configuration.h"
#include "GUI.h"
#include "Logger.h"
#include "ItemReplacer.h"
#include "CustomItemRegistry.h"
#include "DebugTeleporter.h"
#if ENABLE_HOOK_PROBE
#include "HookProbe.h"
#endif
#include "SDK.hpp"
#include <algorithm>
#include <map>
#include <random>
#include <set>
#include <vector>

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
	gameLoaded = false;
	CustomItemRegistry::Instance().ResetItems();
	for (const RandomizerItemDef* def : RandomizerItems::All)
		CustomItemRegistry::Instance().CreateItem(*def);
	Configuration::Instance().OnGameStart(isNewGame);
	ShufflePassiveCosts();
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

void GameManager::CapturePassiveCosts()
{
	if (!vanillaPassiveCosts.empty())
		return;

	auto table = GameTables::ItemPassives();
	std::map<std::string, std::string> upgradeOf;
	for (auto p : table->RowMap)
	{
		auto data = (SDK::FInventoryItemPassiveData*)(p.Second);
		auto upgrade = data->UpgradeData.UpgradePassive.RowName.GetRawString();
		if (data->bCanBeUpgraded && !upgrade.empty())
			upgradeOf[upgrade] = p.First.GetRawString();
	}

	for (auto p : table->RowMap)
	{
		std::string name = p.First.GetRawString();
		auto data = (SDK::FInventoryItemPassiveData*)(p.Second);

		int tier = 0;
		auto parent = upgradeOf.find(name);
		while (parent != upgradeOf.end())
		{
			++tier;
			parent = upgradeOf.find(parent->second);
		}

		vanillaPassiveCosts[name] = { tier, data->SlotCost };
	}
}

void GameManager::ShufflePassiveCosts()
{
	CapturePassiveCosts();

	auto seed = Configuration::Instance().Seed();
	bool enabled = seed && Configuration::Instance().Option("relic_cost_shuffle") != 0;

	std::map<int, std::vector<std::string>> tiers;
	for (const auto& kv : vanillaPassiveCosts)
		tiers[kv.second.tier].push_back(kv.first);

	std::string key = seed ? *seed : "";
	std::seed_seq sequence(key.begin(), key.end());
	std::mt19937 rng(sequence);

	std::map<std::string, int> shuffled;
	for (auto& tier : tiers)
	{
		auto& rows = tier.second;
		std::sort(rows.begin(), rows.end());

		std::vector<int> costs;
		for (const auto& row : rows)
			costs.push_back(vanillaPassiveCosts[row].cost);

		if (enabled)
			std::shuffle(costs.begin(), costs.end(), rng);

		for (size_t i = 0; i < rows.size(); ++i)
			shuffled[rows[i]] = costs[i];
	}

	for (auto p : GameTables::ItemPassives()->RowMap)
		((SDK::FInventoryItemPassiveData*)(p.Second))->SlotCost = shuffled[p.First.GetRawString()];

	Logger::Log(this, "relic costs", enabled ? "shuffled, seed" : "vanilla, seed", key.empty() ? "none" : key);
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
	else if (!currentZone.empty())
		this->ZoneChanged(this->currentZone, "");
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

bool GameManager::GoHome()
{
	auto world = World();
	auto mode = world ? (SDK::AGameModeZion*)world->AuthorityGameMode : nullptr;
	auto controller = world ? Controller() : nullptr;
	if (!mode || !controller || IsLoading() || controller->IsInEvent())
		return false;

	auto home = Configuration::Instance().StartingRestPoint()
		.value_or(controller->DefaultRespawnRestPointData.RowName);

	Logger::Log(this, "go home", home.GetRawString());
	mode->FastTravel(home);
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
	ShufflePassiveCosts();
	ClampChapter();
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
	{
		if (!gameLoaded)
		{
			gameLoaded = true;
			GameLoaded();
		}
		itemReplacer->ZoneChanged(oldZone, newZone);
		if (Configuration::Instance().Option("starting_respite") > 0)
			DuplicateDoorSwitches(newZone);
	}
	else
		itemReplacer->ZoneUnloaded();
}

void GameManager::DuplicateDoorSwitches(const std::string& zone)
{
	static const std::set<std::string> zones = {
		"Street_001_Zone_003",
		"Ruins_001_Zone_010",
		"Crossroad_001_Zone_004",
		"Quarry_001_Zone_001",
	};

	if (zones.find(zone) == zones.end())
		return;

	SDK::TArray<SDK::AActor*> actors;
	SDK::UGameplayStatics::GetAllActorsOfClass(World(),
		SDK::ABP_Interactable_Door_Magic_C::StaticClass(), &actors);

	for (int i = 0; i < actors.Num(); ++i)
	{
		auto original = static_cast<SDK::ABP_Interactable_Door_Magic_C*>(actors[i]);
		if (!original->ClearComponent->IsCleared())
			DuplicateDoorSwitch(original);
	}
}

void GameManager::DuplicateDoorSwitch(SDK::ABP_Interactable_Door_Magic_C* original)
{
	auto door = original->Doors.Num() > 0 ? original->Doors[0] : nullptr;
	if (!door)
		return;

	auto switchLocation = original->K2_GetActorLocation();
	auto doorLocation = door->K2_GetActorLocation();
	SDK::FVector offset{ 0, (switchLocation.Y - doorLocation.Y) / 2, 0 };

	auto doorTarget = doorLocation + offset;
	auto switchTarget = doorTarget + offset;
	auto cloneTarget = doorTarget - offset;

	SDK::FActorSpawnParameters parms{
		.Template = original,
		.Owner = original,
		.OverrideLevel = original->GetLevel(),
		.SpawnCollisionHandlingOverride = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn,
		.TransformScaleMethod = SDK::ESpawnActorScaleMethod::MultiplyWithRoot,
		.ObjectFlags = 8,
	};

	auto transform = original->RootComponent->K2_GetComponentToWorld();
	transform.Translation = cloneTarget;

	auto clone = static_cast<SDK::ABP_Interactable_Door_Magic_C*>(
		World()->SpawnActorAbsolute(original->Class, transform, parms));
	if (!clone)
		return;

	original->SetLocation(switchTarget);
	door->SetLocation(doorTarget);
	clone->SetLocation(cloneTarget);

	auto scale = clone->RootComponent->RelativeScale3D;
	clone->RootComponent->SetRelativeScale3D(SDK::FVector{ scale.X, -scale.Y, scale.Z });

	clone->ClearComponent->ClearActorData = original->ClearComponent->ClearActorData;

	Logger::Log(this, "duplicated switch", original->GetName(), "->", clone->GetName());
}

void GameManager::GameLoaded()
{
	ClampChapter();
	ExcludeLeversFromZoneCompletion();

}

void GameManager::ExcludeLeversFromZoneCompletion()
{
	auto table = GameTables::GameMaps();
	if (!table)
		return;

	auto doorClass = SDK::ABP_Interactable_Door_C::StaticClass();
	if (!doorClass)
		return;

	std::string prefix = doorClass->Name.ToString();
	if (prefix.size() > 2 && prefix.compare(prefix.size() - 2, 2, "_C") == 0)
		prefix.resize(prefix.size() - 2);

	int removed = 0;
	for (auto it = begin(table->RowMap); it != end(table->RowMap); ++it)
	{
		auto row = reinterpret_cast<SDK::FGameMapData*>(it->Value());
		auto& zones = row->MapAreaZoneData.ClearablesPerZones;

		for (int z = 0; z < zones.NumAllocated(); ++z)
		{
			if (!zones.IsValidIndex(z))
				continue;

			auto& clearables = zones[z].Second.Set;
			auto& flags = clearables.GetAllocationFlags();
			for (int c = 0; c < clearables.NumAllocated(); ++c)
			{
				if (!clearables.IsValidIndex(c))
					continue;
				if (std::string(clearables[c].GetRawString()).rfind(prefix, 0) != 0)
					continue;
				flags.MarkUnallocated(c);
				++removed;
			}
		}
	}

	Logger::Log(this, "levers excluded from zone completion:", removed);
}

int GameManager::ClampChapter()
{
	auto world = World();
	auto mode = world ? (SDK::AGameModeZion*)world->AuthorityGameMode : nullptr;
	if (!mode || !mode->IsA(SDK::AGameModeZion::StaticClass()))
		return 0;

	int min = Configuration::Instance().Option("min_chapter", 0);
	int max = Configuration::Instance().Option("max_chapter", 16);
	int level = mode->EnvironmentLevel;
	int clamped = level < min ? min : (level > max ? max : level);

	if (clamped != level)
	{
		mode->EnvironmentLevel = clamped;
		Logger::Log(this, "chapter clamped", level, "->", clamped, "range", min, max);
	}
	return clamped;
}

void GameManager::ZoneReloaded(std::string zone)
{
	Logger::Log(this, "Zone Reloaded", zone);
	if (!zone.empty())
		itemReplacer->ZoneChanged(zone, zone);
}
