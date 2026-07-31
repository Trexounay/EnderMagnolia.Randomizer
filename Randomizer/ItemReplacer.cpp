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
		auto actorName = actor->GetName();
		if (auto npc = actor->Cast<SDK::AInteractable_EventNPC>())
		{
			for (auto data : npc->NPCDataList)
			{
				auto eventPtr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(data.EventAsset);
				auto event = static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(eventPtr));
				if (event)
					ReplaceEventAsset(actorName, event);
			}
		}
		auto trigger = static_cast<SDK::AInteractable_Event*>(actor);
		Logger::Log(LogLevel::Debug, this, "interactable", actorName);
		WaitForEventAsset(actor, &trigger->LoadedEventAsset, [this, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(actorName, asset);
			}, &trigger->EventAsset
		);
	}
}

void ItemReplacer::ReplaceBossEvents()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_BossSpawner_C::StaticClass(), &out);
	for (auto actor : out)
	{
		auto trigger = static_cast<SDK::ABP_BossSpawner_C*>(actor);
		auto eventPtr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(trigger->DefeatEvent);
		auto event = static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(eventPtr));
		if (event)
			ReplaceEventAsset(actor->GetName(), event);
	}
}

void ItemReplacer::ReplaceTriggerEvents()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ATrigger_Event::StaticClass(), &out);
	for (auto actor : out)
	{
		auto actorName = actor->GetName();
		auto trigger = static_cast<SDK::ATrigger_Event*>(actor);

		for (auto data : trigger->EventDataList)
		{
			auto eventPtr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(data.EventAsset);
			auto event = static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(eventPtr));
			ReplaceEventAsset(actorName, event);
		}

		auto* fallback = trigger->EventDataList.Num() > 0 ? &trigger->EventDataList[0].EventAsset : nullptr;
		WaitForEventAsset(actor, &trigger->LoadedEventAsset, [this, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(actorName, asset);
			}, fallback);
	}
}

void ItemReplacer::WaitForEventAsset(SDK::AActor* owner, SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action, SDK::TSoftObjectPtr<SDK::UEventAsset>* softptr)
{
	auto tryResolve = [owner, asset, action, softptr]() -> bool
	{
		if (owner->bActorIsBeingDestroyed)
			return true;

		if (*asset)
		{
			action(*asset);
			return true;
		}
		if (softptr && softptr->WeakPtr.ObjectIndex != 0)
		{
			auto eventPtr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(*softptr);
			auto event = static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(eventPtr));
			if (event)
			{
				action(event);
				return true;
			}
		}
		return false;
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

void ItemReplacer::ResetShopItems()
{
	shop_replaced = false;
}

bool ItemReplacer::ReplaceShopItems()
{
	if (shop_replaced)
		return true;

	auto shopWidget = SDK::UWBP_Shop_C::GetDefaultObj();
	if (!shopWidget)
		return false;

	auto table = shopWidget->ShopDataTable;
	if (!table)
	{
		Logger::Log(LogLevel::Warning, this, "shop widget CDO has no ShopDataTable");
		return false;
	}

	for (auto it = begin(table->RowMap); it != end(table->RowMap); ++it)
	{
		auto row = reinterpret_cast<SDK::FLeveledShopData*>(it->Value());
		for (int slot = 0; slot < row->Items.Num(); ++slot)
		{
			auto& entry = row->Items[slot];
			SwapAtLocation(ShopLocationId(table, it->Key(), slot), entry.Item, &entry.StockCount);
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

void ItemReplacer::SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item, SDK::int32* count) const
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
			return;
		}
	}
	Logger::Log(LogLevel::Warning, this, "no replacement", locationName, ":", CustomItemRegistry::ToItemName(item));
}
