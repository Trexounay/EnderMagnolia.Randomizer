#include "ItemReplacer.h"
#include "SDK.hpp"
#include "Logger.h"
#include "GameManager.h"
#include "Configuration.h"
#include "CustomItemRegistry.h"
#include <vector>

ItemReplacer::ItemReplacer()
{
	GM = &GameManager::Instance();
}

void ItemReplacer::ZoneChanged(const std::string& oldZone, const std::string& newZone)
{
	delayed_replacement.clear();
	ReplaceItemActors<SDK::ABP_Interactable_AddItem_C>();
	ReplaceItemActors<SDK::ABP_Interactable_AddTutorial_C>();
	ReplaceItemActors<SDK::ABP_Interactable_TreasureBox_C>();
	ReplaceItemActors<SDK::ABP_Breakable_SpawnItem_C>();
	ReplaceTriggerEvents();
	ReplaceBossEvents();
	ReplaceInteractableEvents();

	if (!ReplaceShopItems())
		delayed_replacement.push_back([this]() { return ReplaceShopItems(); });
}

void ItemReplacer::ZoneUnloaded()
{
	delayed_replacement.clear();
}

void ItemReplacer::Tick()
{
	for (auto it = delayed_replacement.begin(); it != delayed_replacement.end(); )
	{
		auto current = it++;
		if ((*current)())
		{
			delayed_replacement.erase(current);
		}
	}
}

void ItemReplacer::ReplaceInteractableEvents()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::AInteractable_Event::StaticClass(), &out);
	for (auto actor : out)
	{
		if (auto npc = actor->Cast<SDK::AInteractable_EventNPC>())
		{
			for (int i = 0; i < npc->NPCDataList.Num(); ++i)
				WaitForEventAsset(actor, &npc->NPCDataList[i].EventAsset);
		}
		auto trigger = static_cast<SDK::AInteractable_Event*>(actor);
		WaitForEventAsset(actor, &trigger->EventAsset);
	}
}

void ItemReplacer::ReplaceBossEvents()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_BossSpawner_C::StaticClass(), &out);
	for (auto actor : out)
	{
		auto boss = static_cast<SDK::ABP_BossSpawner_C*>(actor);
		WaitForEventAsset(actor, &boss->DefeatEvent);
	}
}

void ItemReplacer::ReplaceTriggerEvents()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ATrigger_Event::StaticClass(), &out);
	for (auto actor : out)
	{
		auto trigger = static_cast<SDK::ATrigger_Event*>(actor);

		for (int i = 0; i < trigger->EventDataList.Num(); ++i)
			WaitForEventAsset(actor, &trigger->EventDataList[i].EventAsset);

		if (trigger->EventDataList.Num() == 0)
			WaitForLoadedEventAsset(actor, &trigger->LoadedEventAsset);
	}
}

void ItemReplacer::WaitForEventAsset(SDK::AActor* owner, SDK::TSoftObjectPtr<SDK::UEventAsset>* softptr)
{
	auto actorName = owner->GetName();
	auto tryResolve = [this, owner, softptr, actorName]() -> bool
	{
		if (owner->bActorIsBeingDestroyed)
			return true;
		if (softptr->WeakPtr.ObjectIndex == 0)
			return false;
		auto event = softptr->LoadBlocking();
		if (!event)
			return false;
		ReplaceEventAsset(actorName, event);
		return true;
	};

	if (!tryResolve())
		delayed_replacement.push_back(tryResolve);
}

void ItemReplacer::WaitForLoadedEventAsset(SDK::AActor* owner, SDK::UEventAsset** asset)
{
	auto actorName = owner->GetName();
	auto tryResolve = [this, owner, asset, actorName]() -> bool
	{
		if (owner->bActorIsBeingDestroyed)
			return true;
		if (!*asset)
			return false;
		ReplaceEventAsset(actorName, *asset);
		return true;
	};

	if (!tryResolve())
		delayed_replacement.push_back(tryResolve);
}

void ItemReplacer::ReplaceEventAsset(const std::string& actorName, SDK::UEventAsset* asset)
{
	if (!asset)
		return;

	auto items = EnumerateEventItems(asset);
	for (int i = 0; i < (int)items.size(); ++i)
		SwapAtLocation(EventLocationId(asset, i), items[i]->ItemHandle, &items[i]->Count);

	DisableAutoEquip(asset);
}

void ItemReplacer::DisableAutoEquip(SDK::UEventAsset* asset)
{
	for (auto data : asset->Nodes)
	{
		auto nodeAction = data.Value()->Cast<SDK::UEventNodeAction>();
		if (!nodeAction)
			continue;
		for (auto action : nodeAction->Actions)
		{
			if (auto equipSkill = action->Cast<SDK::UEventAction_EquipSkills>())
			{
				equipSkill->bOnlyIfSetIsEmpty = true;
			}
			else if (auto equipCostume = action->Cast<SDK::UEventAction_EquipCostume>())
			{
				equipCostume->bAutoGrantCostume = false;
				equipCostume->CostumeHandle.DataTable = nullptr;
			}
		}
	}
}

std::string ItemReplacer::ActorLocationId(const std::string& actorName)
{
	return GameManager::Instance().Zone() + "." + actorName;
}

std::string ItemReplacer::ShopLocationId(SDK::UDataTable* table, const SDK::FName& rowName, int index)
{
	return table->GetName() + "." + rowName.GetRawString() + "." + std::to_string(index);
}

SDK::UDataTable* ItemReplacer::ShopTable()
{
	auto shopWidget = SDK::UWBP_Shop_C::GetDefaultObj();
	return shopWidget ? shopWidget->ShopDataTable : nullptr;
}

std::vector<std::string> ItemReplacer::ShopLocationsFor(const SDK::FDataTableRowHandle& item)
{
	std::vector<std::string> locations;
	auto table = ShopTable();
	if (!table)
		return locations;

	for (auto it = begin(table->RowMap); it != end(table->RowMap); ++it)
	{
		auto row = reinterpret_cast<SDK::FLeveledShopData*>(it->Value());
		for (int slot = 0; slot < row->Items.Num(); ++slot)
		{
			auto& entry = row->Items[slot];
			if (entry.Item.DataTable == item.DataTable && entry.Item.RowName == item.RowName)
				locations.push_back(ShopLocationId(table, it->Key(), slot));
		}
	}
	return locations;
}

void ItemReplacer::ResetShopItems()
{
	shop_replaced = false;
}

bool ItemReplacer::ReplaceShopItems()
{
	if (shop_replaced)
		return true;

	auto table = ShopTable();
	if (!table)
		return false;

	for (auto it = begin(table->RowMap); it != end(table->RowMap); ++it)
	{
		auto row = reinterpret_cast<SDK::FLeveledShopData*>(it->Value());
		for (int slot = 0; slot < row->Items.Num(); ++slot)
		{
			auto& entry = row->Items[slot];
			auto location = ShopLocationId(table, it->Key(), slot);

			auto vanilla = vanilla_shop.find(location);
			if (vanilla == vanilla_shop.end())
				vanilla = vanilla_shop.emplace(location, entry).first;
			else
				entry = vanilla->second;

			if (SwapAtLocation(location, entry.Item))
				entry.StockCount = 1;
		}
	}

	shop_replaced = true;
	return true;
}

std::string ItemReplacer::EventLocationId(SDK::UEventAsset* asset, int index)
{
	std::string id = asset->GetName();
	if (index > 0)
		id += "." + std::to_string(index);
	return id;
}

std::vector<SDK::FItemHandleCount*> ItemReplacer::EnumerateEventItems(SDK::UEventAsset* asset)
{
	std::vector<SDK::FItemHandleCount*> items;
	if (!asset)
		return items;

	for (auto data : asset->Nodes)
	{
		auto nodeAction = data.Value()->Cast<SDK::UEventNodeAction>();
		if (!nodeAction)
			continue;
		for (auto action : nodeAction->Actions)
		{
			if (auto grantItem = action->Cast<SDK::UEventAction_GrantItems>())
			{
				for (int i = 0; i < grantItem->ItemHandleCounts.Num(); ++i)
					items.push_back(&grantItem->ItemHandleCounts[i]);
			}
		}
	}
	return items;
}

SDK::int32 ItemReplacer::CurrencyCount(const std::string& itemName)
{
	if (itemName == "DT_ItemCurrencies.Default")
		return 1000;
	if (itemName == "DT_ItemCurrencies.rare")
		return 500;
	return 1;
}

bool ItemReplacer::SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item, SDK::int32* count) const
{
	Logger::Log(LogLevel::File, this, locationName + ":" + CustomItemRegistry::ToItemName(item));
	if (auto newItem = Configuration::Instance().ScoutLocation(locationName))
	{
		if (auto rowHandle = CustomItemRegistry::Instance().Provide(newItem.value()))
		{
			Logger::Log(LogLevel::Debug, this, "replace at", locationName, ":", CustomItemRegistry::ToItemName(item), "->", newItem.value());
			item = rowHandle.value();
			if (count)
				*count = CurrencyCount(newItem.value());
			return true;
		}
	}
	Logger::Log(LogLevel::Warning, this, "no replacement", locationName, ":", CustomItemRegistry::ToItemName(item));
	return false;
}
