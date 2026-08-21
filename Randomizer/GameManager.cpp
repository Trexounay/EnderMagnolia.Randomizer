#include "GameManager.h"
#include "Configuration.h"
#include "GUI.h"
#include "Logger.h"
#include "ItemReplacer.h"
#include "ItemPrices.h"
#include "CustomItemRegistry.h"
#include "SDK.hpp"
#include <algorithm>
#include <cstring>
#include <map>
#include <numeric>
#include <random>
#include <set>
#include <vector>

std::string ZoneCaption(const SDK::FName& levelName)
{
	const char sep[] = "_001_Zone_";
	std::string name = levelName.GetRawString();
	auto at = name.rfind(sep);
	if (at == std::string::npos)
		return name;
	return name.substr(0, at) + " " + std::to_string(atoi(name.c_str() + at + sizeof(sep) - 1));
}

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
}

void GameManager::OnGameStart(int slot, bool isNewGame)
{
	currentSaveSlot = slot;
	Logger::Log(this, "Game Started slot", slot, "newGame", (int)isNewGame);
	currentZone.clear();
	skillsInitialized = false;
	gameLoaded = false;
	CustomItemRegistry::Instance().ResetItems();
	for (const RandomizerItemDef* def : RandomizerItems::All)
		CustomItemRegistry::Instance().CreateItem(*def);
	Configuration::Instance().OnGameStart(isNewGame);
	SetShopPrices();
	ShufflePassiveCosts();
	ShuffleUpgradeCosts();
	ShuffleBGM();
	itemReplacer->ResetShopItems();
	SetMultiSkillPerSpirit();
	InitSkills();
}

void GameManager::InitSkills()
{
	auto controller = this->Controller();
	if (!controller || !controller->InventoryComponent || !controller->SkillComponent)
		return;

	GrantAllSpirits();
	SetSkillCosts();
	ShuffleSpecialSkills();
	EquipStartingSkill();

	skillsInitialized = true;
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

		// test for setting progressive prices
		/*
				for (auto entry : levels)
				{
					auto level = (SDK::FSkillLevelData*)entry.Second;
					auto buffer = (SDK::FSkillMaterialData*)SDK::FMemory::Malloc(sizeof(SDK::FSkillMaterialData));
					buffer[0] = cost;
					level->UnlockMaterials = UC::TExternalArray<SDK::FSkillMaterialData>(buffer, 1);
				}
		*/
	}
}

void GameManager::SetMultiSkillPerSpirit()
{
	bool enabled = Configuration::Instance().Option("allow_multiskill", 0) != 0;
	auto cls = SDK::UWBP_SpiritSkillSet_C::StaticClass();
	if (enabled == multiSkillPatched || !cls)
		return;

	auto func = cls->FindFunctionByName(SDK::FName::FromString("UnEquipAllSkills"));
	auto script = *reinterpret_cast<SDK::uint8**>(reinterpret_cast<SDK::uint8*>(func) + 0x60);
	const SDK::uint8 silenced[2] = { 0x04, 0x0B };
	if (enabled)
		std::memcpy(multiSkillOriginalBytes, script, 2);

	// black magic
	DWORD protection = 0;
	VirtualProtect(script, 2, PAGE_READWRITE, &protection);
	std::memcpy(script, enabled ? silenced : multiSkillOriginalBytes, 2);
	VirtualProtect(script, 2, protection, &protection);
	multiSkillPatched = enabled;
}

void GameManager::SetSkillMenuNavigation(SDK::UWBP_GameMenu_Page_Skill_C* page)
{
	using SDK::EUINavigation;

	auto holder = static_cast<SDK::UPanelWidget*>(
		page->WBP_SpiritSkillList->SkillListHolder);

	static constexpr int probe[3][3] = { { 0, 1, 2 }, { 1, 0, 2 }, { 2, 1, 0 } };

	SDK::UWidget* cell[5][6] = {};
	SDK::UWidget* first = nullptr;

	for (int i = 0; i < holder->Slots.Num(); ++i)
	{
		auto spirit = static_cast<SDK::UWBP_SpiritSkillSet_C*>(holder->Slots[i]->Content);
		SDK::UWBP_SpiritSkillEntry_C* entries[3] = { spirit->WBP_SpiritSkill_Skill1,
			spirit->WBP_SpiritSkill_Skill2, spirit->WBP_SpiritSkill_Skill3 };

		for (int e = 0; e < 3; ++e)
		{
			if (entries[e]->bHasItem)
			{
				cell[i / 2][(i % 2) * 3 + e] = entries[e];
				if (!first)
					first = entries[e];
			}
		}
	}

	int rows = (holder->Slots.Num() + 1) / 2;
	auto equipped = page->WBP_EquippedSkillSet;
	SDK::UWidget* panel = equipped->WBP_SkillEntry_AttackA;

	if (first)
	{
		panel->SetNavigationRuleExplicit(EUINavigation::Down, first);
		equipped->WBP_SkillEntry_AttackB->SetNavigationRuleExplicit(EUINavigation::Down, first);
		equipped->WBP_SkillEntry_AttackC->SetNavigationRuleExplicit(EUINavigation::Down, first);
		equipped->WBP_SkillEntry_AttackD->SetNavigationRuleExplicit(EUINavigation::Down, first);
	}

	for (int row = 0; row < rows; ++row)
	{
		for (int col = 0; col < 6; ++col)
		{
			auto entry = cell[row][col];
			if (!entry)
				continue;

			int base = (col / 3) * 3;
			int other = base ? 0 : 3;
			const int* order = probe[col - base];

			SDK::UWidget* up = nullptr;
			for (int r = row - 1; r >= 0 && !up; --r)
				for (int k = 0; k < 3 && !up; ++k)
					up = cell[r][base + order[k]];
			if (row > 0)
				entry->SetNavigationRuleExplicit(EUINavigation::Up, up ? up : panel);

			SDK::UWidget* down = nullptr;
			for (int step = 1; step < rows && !down; ++step)
				for (int k = 0; k < 3 && !down; ++k)
					down = cell[(row + step) % rows][base + order[k]];
			if (down)
				entry->SetNavigationRuleExplicit(EUINavigation::Down, down);

			for (int side = -1; side <= 1; side += 2)
			{
				SDK::UWidget* target = nullptr;
				for (int c = col + side; c >= 0 && c < 6 && !target; c += side)
					target = cell[row][c];

				if ((base == 0) == (side > 0))
				{
					for (int step = 1; step < rows && !target; ++step)
					{
						for (int away = -1; away <= 1 && !target; away += 2)
						{
							int r = row + away * step;
							if (r < 0 || r >= rows)
								continue;
							for (int k = 0; k < 3 && !target; ++k)
								target = cell[r][other + order[k]];
						}
					}
				}

				if (target)
					entry->SetNavigationRuleExplicit(
						side < 0 ? EUINavigation::Left : EUINavigation::Right, target);
			}
		}
	}
}

void GameManager::CreateZoneLabels(SDK::UWBP_Map_C* map)
{
	auto areaName = map->MapAreaName;
	auto fontSource = (areaName && areaName->IsValidLowLevel()) ? areaName->MapAreaName : nullptr;
	if (!fontSource || !fontSource->IsValidLowLevel())
	{
		Logger::Log(LogLevel::Warning, "CreateZoneLabels: no font source", (void*)areaName);
		return;
	}

	SDK::FSlateFontInfo font = fontSource->Font;
	font.Size = 30.0f;
	font.OutlineSettings.OutlineSize = 4;
	font.OutlineSettings.OutlineColor = SDK::FLinearColor{ 0.05f, 0.02f, 0.0f, 0.95f };
	font.OutlineSettings.bSeparateFillAlpha = true;

	auto textClass = SDK::UTextBlock::StaticClass();
	auto mapZoneClass = SDK::UWBP_MapZone_C::StaticClass();

	SDK::FSlateColor color{};
	color.SpecifiedColor = SDK::FLinearColor{ 1.0f, 0.78f, 0.35f, 1.0f };
	color.ColorUseRule = SDK::ESlateColorStylingMode::UseColor_Specified;

	for (auto area : map->MapAreaWidgets)
	{
		auto zones = static_cast<SDK::UPanelWidget*>(area->ZonesHolder);
		auto labels = static_cast<SDK::UPanelWidget*>(area->ZoomScaled_IconsHolder);
		for (auto slot : labels->Slots)
		{
			auto child = slot->Content;
			// labels already created : skip
			if (child->IsValidLowLevel() && child->Class == textClass && child->Outer == labels)
				return;
		}

		for (auto zoneSlot : zones->Slots)
		{
			auto zone = zoneSlot->Content;
			if (!zone->IsValidLowLevel() || zone->Class != mapZoneClass)
				continue;

			auto zoneName = static_cast<SDK::UWBP_MapZone_C*>(zone)->ZoneLevelName;
			auto label = static_cast<SDK::UTextBlock*>(
				SDK::UGameplayStatics::SpawnObject(textClass, labels));
			if (!label)
			{
				Logger::Log(LogLevel::Warning, "CreateZoneLabels: SpawnObject failed for",
					zoneName.GetRawString(), "class", (void*)textClass);
				return;
			}

			label->Font = font;
			label->ColorAndOpacity = color;
			label->Text = SDK::FText::FromString(ZoneCaption(zoneName));

			auto slot = static_cast<SDK::UCanvasPanelSlot*>(labels->AddChild(label));
			slot->SetLayout(static_cast<SDK::UCanvasPanelSlot*>(zone->Slot)->LayoutData);
			slot->SetAutoSize(true);
			slot->SetZOrder(100);
		}
	}
}

void GameManager::RefreshZoneLabels(SDK::UWBP_Map_C* map)
{
	if (!map)
	{
		auto controller = Controller();
		if (!controller)
			return;
		map = static_cast<SDK::UWBP_Map_C*>(controller->WidgetMap);
	}
	if (!map->IsValidLowLevel() || map->Class != SDK::UWBP_Map_C::StaticClass()
		|| !map->ScaleBox->IsValidLowLevel())
		return;

	bool show = Configuration::Instance().Option("map_zone_names", 0) != 0;

	if (show)
		CreateZoneLabels(map);

	auto wanted = show && map->ScaleBox->UserSpecifiedScale >= map->HideIconsZoomThreshold
		? SDK::ESlateVisibility::HitTestInvisible
		: SDK::ESlateVisibility::Collapsed;

	auto textClass = SDK::UTextBlock::StaticClass();
	auto zoneClass = SDK::UWBP_MapZone_C::StaticClass();
	for (auto area : map->MapAreaWidgets)
	{
		auto labels = static_cast<SDK::UPanelWidget*>(area->ZoomScaled_IconsHolder);
		auto zones = static_cast<SDK::UPanelWidget*>(area->ZonesHolder);

		for (auto slot : labels->Slots)
		{
			auto label = slot->Content;
			if (!label->IsValidLowLevel() || label->Class != textClass || label->Outer != labels)
				continue;
			if (label->Visibility != wanted)
				label->SetVisibility(wanted);
		}

		if (!show)
			continue;

		auto zoneWanted = SDK::ESlateVisibility::HitTestInvisible;
		for (auto slot : zones->Slots)
		{
			auto zone = slot->Content;
			if (zone->IsValidLowLevel() && zone->Class == zoneClass
				&& zone->Visibility != zoneWanted)
				zone->SetVisibility(zoneWanted);
		}
	}
}

void GameManager::SetShopPrices()
{
	for (const auto& entry : ItemPrices::Overrides)
	{
		auto handle = CustomItemRegistry::FromItemName(entry.item);
		if (!handle)
			continue;

		auto row = handle->DataTable->FindRowAs<SDK::FInventoryItemData>(handle->RowName);
		row->BuyInfo.CurrencyType = SDK::ECurrencyType::Default;
		row->BuyInfo.CostType = SDK::EValueType::Fixed;
		row->BuyInfo.FixedValue = entry.price;
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

	// make sure grav relic doesn't cost more than 2
	if (auto it = shuffled.find("reduce_gravity"); it != shuffled.end() && it->second > 2)
		it->second = 2;

	for (auto p : GameTables::ItemPassives()->RowMap)
		((SDK::FInventoryItemPassiveData*)(p.Second))->SlotCost = shuffled[p.First.GetRawString()];
}

void GameManager::CaptureUpgradeCosts()
{
	for (auto s : GameTables::ItemSkills()->RowMap)
	{
		auto skillData = (SDK::FInventoryItemSkillData*)(s.Second);
		auto& levels = skillData->SkillLevelTable->RowMap;
		for (int i = skillData->InitialLevel; i < levels.NumAllocated(); ++i)
		{
			auto level = (SDK::FSkillLevelData*)(levels[i].Second);
			vanillaUpgradeCosts.push_back({ level, level->UnlockMaterials });
		}
	}
}

void GameManager::ShuffleUpgradeCosts()
{
	if (vanillaUpgradeCosts.empty())
		CaptureUpgradeCosts();

	auto seed = Configuration::Instance().Seed();
	bool enabled = seed && Configuration::Instance().Option("skill_cost_shuffle") != 0;

	std::string key = seed ? *seed : "";
	std::seed_seq sequence(key.begin(), key.end());
	std::mt19937 rng(sequence);

	std::vector<SDK::TArray<SDK::FSkillMaterialData>> costs;
	for (const auto& slot : vanillaUpgradeCosts)
		costs.push_back(slot.second);

	if (enabled)
		std::shuffle(costs.begin(), costs.end(), rng);

	for (size_t i = 0; i < vanillaUpgradeCosts.size(); ++i)
		vanillaUpgradeCosts[i].first->UnlockMaterials = costs[i];

	Logger::Log(this, "skill upgrade costs", enabled ? "shuffled, seed" : "vanilla, seed", key.empty() ? "none" : key);
}

void GameManager::ShuffleBGM()
{
	bgmShuffle.clear();

	auto seed = Configuration::Instance().Seed();
	if (!seed || Configuration::Instance().Option("shuffle_bgm") == 0)
		return;

	if (bgmTracks.empty())
	{
		auto registry = reinterpret_cast<SDK::IAssetRegistry*>(
			SDK::UAssetRegistryHelpers::GetAssetRegistry().ObjectPointer);

		SDK::TArray<SDK::FAssetData> assets;
		registry->GetAssetsByPath(SDK::FName::FromString("/Game/FMOD/Events/BGM"), &assets, false, false);

		std::vector<std::pair<std::string, int>> found;
		for (int i = 0; i < assets.Num(); ++i)
			found.push_back({ assets[i].AssetName.GetRawString(), i });

		std::sort(found.begin(), found.end());

		for (const auto& entry : found)
			bgmTracks.push_back({ assets[entry.second].AssetName.ComparisonIndex,
				L"event:/BGM/" + std::wstring(entry.first.begin(), entry.first.end()) });
	}

	bgmShuffle.resize(bgmTracks.size());
	std::iota(bgmShuffle.begin(), bgmShuffle.end(), 0);

	std::seed_seq sequence(seed->begin(), seed->end());
	std::mt19937 rng(sequence);
	std::shuffle(bgmShuffle.begin(), bgmShuffle.end(), rng);

	Logger::Log(this, "bgm shuffled", (int)bgmShuffle.size(), "tracks, seed", *seed);
}

SDK::UFMODEvent* GameManager::SwapBGM(SDK::UFMODEvent* event)
{
	SDK::int32 id = event->Name.ComparisonIndex;

	for (size_t i = 0; i < bgmTracks.size(); ++i)
		if (bgmTracks[i].first == id)
			return SDK::UFMODBlueprintStatics::FindEventByName(bgmTracks[bgmShuffle.at(i)].second.c_str());

	return event;
}

void GameManager::ShuffleSpecialSkills()
{
	auto controller = Controller();
	if (!controller || !controller->SkillComponent)
		return;

	constexpr size_t size = sizeof(SDK::FSkillData);
	if (vanillaSpecials.empty())
		for (auto s : GameTables::ItemSkills()->RowMap)
		{
			int tier = 0;
			for (auto l : ((SDK::FInventoryItemSkillData*)(s.Second))->SkillLevelTable->RowMap)
			{
				auto data = &((SDK::FSkillLevelData*)(l.Second))->SpecialSkillData;
				auto& entry = vanillaSpecials[++tier][s.First.GetRawString()];
				entry.data = data;
				entry.vanilla.assign((uint8_t*)data, (uint8_t*)data + size);
			}
		}

	auto seed = Configuration::Instance().Seed();
	bool enabled = seed && Configuration::Instance().Option("shuffle_sp") != 0;
	std::string key = seed ? *seed : "";
	std::seed_seq sequence(key.begin(), key.end());
	std::mt19937 rng(sequence);

	for (const auto& tier : vanillaSpecials)
	{
		std::vector<const uint8_t*> source;
		for (const auto& entry : tier.second)
			source.push_back(entry.second.vanilla.data());

		if (enabled)
			std::shuffle(source.begin(), source.end(), rng);

		size_t i = 0;
		for (const auto& entry : tier.second)
			memcpy(entry.second.data, source[i++], size);
	}

	auto component = controller->SkillComponent;
	for (auto slot : { SDK::ESkillSlot::A, SDK::ESkillSlot::B, SDK::ESkillSlot::C, SDK::ESkillSlot::D })
	{
		if (!component->HasEquippedSkill(slot))
			continue;

		SDK::FName id = component->GetEquippedSkillID(slot);
		component->UnEquip(slot, false);
		component->Equip(slot, id, false, false);
	}
	component->LoadEquippedSkills();

	Logger::Log(this, "special skills", enabled ? "shuffled, seed" : "vanilla, seed", key.empty() ? "none" : key);
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

	if (!skillsInitialized)
		InitSkills();
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
	GUI::Instance().ClearItemNotifications();

	if (!itemReplacer)
		return;

	Logger::Log(this, "item source changed, shop will be replaced again");
	SetShopPrices();
	ShufflePassiveCosts();
	ShuffleUpgradeCosts();
	ShuffleBGM();
	ShuffleSpecialSkills();
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

	if (Configuration::Instance().Option("chapter_scaling") == 1)
		level = min + (int)(Configuration::Instance().Progress() * (max - min) + 0.5f);

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
