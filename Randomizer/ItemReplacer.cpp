#include "ItemReplacer.h"
#include "SDK.hpp"
#include "Logger.h"
#include "GameManager.h"
#include "Configuration.h"
#include <vector>

const std::unordered_map<std::string, size_t> ItemReplacer::dataTableOffsets = {
	{ "DT_ItemCurrencies", offsetof(SDK::AGameModeZion, DataTableItemCurrencies) },
	{ "DT_ItemAptitudes", offsetof(SDK::AGameModeZion, DataTableItemAptitudes) },
	{ "DT_ItemSpirits", offsetof(SDK::AGameModeZion, DataTableItemSpirits) },
	{ "DT_ItemSkills", offsetof(SDK::AGameModeZion, DataTableItemSkills) },
	{ "DT_ItemStats", offsetof(SDK::AGameModeZion, DataTableItemStats) },
	{ "DT_ItemPassives", offsetof(SDK::AGameModeZion, DataTableItemPassives) },
	{ "DT_ItemEquipments", offsetof(SDK::AGameModeZion, DataTableItemEquipments) },
	{ "DT_ItemAssists", offsetof(SDK::AGameModeZion, DataTableItemAssists) },
	{ "DT_ItemMaterials", offsetof(SDK::AGameModeZion, DataTableItemMaterials) },
	{ "DT_ItemTips", offsetof(SDK::AGameModeZion, DataTableItemTips) },
	{ "DT_ItemKeys", offsetof(SDK::AGameModeZion, DataTableItemKeys) },
	{ "DT_ItemQuests", offsetof(SDK::AGameModeZion, DataTableItemQuests) },
	{ "DT_ItemCostumes", offsetof(SDK::AGameModeZion, DataTableItemCostumes) },
	{ "DT_ItemGallery", offsetof(SDK::AGameModeZion, DataTableItemGallery) },
};

ItemReplacer::ItemReplacer()
{
	GM = &GameManager::Instance();
}

void ItemReplacer::ZoneChanged(const UC::FString& oldZone, const UC::FString& newZone)
{
	delayed_replacement.clear();
	auto zoneName = newZone.ToString();
	ReplaceInteractableAddItems(zoneName);
	ReplaceInteractableAddTutorial(zoneName);
	ReplaceInteractableTreasureBox(zoneName);
	ReplaceBreakableSpawnItem(zoneName);
	ReplaceTriggerEvents(zoneName);
	ReplaceBossEvents(zoneName);
	ReplaceInteractableEvents(zoneName);
	
	std::vector<SDK::UObject*> toto;
	SDK::UObject::FindObjectsByClass(SDK::UEventAsset::StaticClass(), toto);
	for (auto obj : toto)
	{
		auto evt = static_cast<SDK::UEventAsset*>(obj);
		Logger::Log(LogLevel::Debug, this, "event", evt->GetName());
	}
}

void ItemReplacer::Tick(const UC::FString& newZone)
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

void ItemReplacer::ReplaceInteractableAddTutorial(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_Interactable_AddTutorial_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_AddTutorial_C*>(Actor);
		auto id = zoneName + "." + Actor->GetName();
		SwapAtLocation(id, interactable->Item);
	}
}

void ItemReplacer::ReplaceInteractableTreasureBox(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_Interactable_TreasureBox_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_TreasureBox_C*>(Actor);
		auto id = zoneName + "." + Actor->GetName();
		SwapAtLocation(id, interactable->Item);
	}
}

void ItemReplacer::ReplaceInteractableAddItems(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_Interactable_AddItem_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_AddItem_C*>(Actor);
		auto id = zoneName + "." + Actor->GetName();
		SwapAtLocation(id, interactable->Item);
	}
}

void ItemReplacer::ReplaceBreakableSpawnItem(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_Breakable_SpawnItem_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Breakable_SpawnItem_C*>(Actor);
		auto id = zoneName + "." + Actor->GetName();
		SwapAtLocation(id, interactable->Item);
	}
}

void ItemReplacer::ReplaceInteractableEvents(const std::string& zoneName)
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
					ReplaceEventAsset(zoneName, actorName, event);
			}
		}
		auto trigger = static_cast<SDK::AInteractable_Event*>(actor);
		Logger::Log(LogLevel::Debug, this, "interactable", actorName);
		WaitForEventAsset(&trigger->LoadedEventAsset, [this, zoneName, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(zoneName, actorName, asset);
			}, &trigger->EventAsset
		);
	}
}

void ItemReplacer::ReplaceBossEvents(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_BossSpawner_C::StaticClass(), &out);
	for (auto actor : out)
	{
		auto trigger = static_cast<SDK::ABP_BossSpawner_C*>(actor);
		auto actorName = actor->GetName();
		WaitForEventAsset(&trigger->LoadedDefeatEvent, [this, zoneName, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(zoneName, actorName, asset);
			}, &trigger->DefeatEvent
		);
	}
}

void ItemReplacer::ReplaceTriggerEvents(const std::string& zoneName)
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
			ReplaceEventAsset(zoneName, actorName, event);
		}

		WaitForEventAsset(&trigger->LoadedEventAsset, [this, zoneName, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(zoneName, actorName, asset);
			}, &trigger->EventDataList[0].EventAsset);
	}
}

void ItemReplacer::WaitForEventAsset(SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action, SDK::TSoftObjectPtr<SDK::UEventAsset>* softptr)
{
	if (!*asset)
	{
		if (softptr && softptr->WeakPtr.ObjectIndex != 0 && softptr->WeakPtr.ObjectIndex != 0)
		{
			auto eventPtr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(*softptr);
			auto event = static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(eventPtr));
			if (event)
			{
				action(event);
				return;
			}
			else
				Logger::Log(LogLevel::Warning, this, "no event");
		}
		delayed_replacement.push_back([asset, action, softptr]()
			{
				if (!*asset)
				{
					if (softptr && softptr->WeakPtr.ObjectIndex != 0 && softptr->WeakPtr.ObjectIndex != 0)
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
				}
				action(*asset);
				return true;
			}
		);
	}
	else
	{
		action(*asset);
	}
}

void ItemReplacer::ReplaceEventAsset(const std::string& zoneName, const std::string& actorName, SDK::UEventAsset* asset)
{
	int count = 0;
	for (auto data : asset->Nodes)
	{
		auto nodeAction = data.Value()->Cast<SDK::UEventNodeAction>();
		if (!nodeAction)
		{
			continue;
		}
		for (auto action : nodeAction->Actions)
		{
			if (auto grantItem = action->Cast<SDK::UEventAction_GrantItems>())
			{
				for (int i = 0; i < grantItem->ItemHandleCounts.Num(); ++i)
				{
					auto id = zoneName + "." + actorName + "." + asset->GetName() + (count > 0 ? ("." + std::to_string(count)) : "");
					count++;
					SwapAtLocation(id, grantItem->ItemHandleCounts[i].ItemHandle);
				}
			}
			else if (auto equipSkill = action->Cast<SDK::UEventAction_EquipSkills>())
			{
				equipSkill->bOnlyIfSetIsEmpty = true;
				// logic here to equip skill corresponding to spirit
				// auto equipSkill = static_cast<SDK::UEventAction_EquipSkills*>(action);
				// equipSkill->SkillsToEquip[0].Second = item
			}
			else if (auto equipSkill = action->Cast<SDK::UEventAction_EquipCostume>())
			{
				equipSkill->bAutoGrantCostume = false;
				equipSkill->CostumeHandle.DataTable = nullptr;
				Logger::Log(LogLevel::Warning, this, "Equip Costume", action->GetName(), " -> ", equipSkill->bAutoGrantCostume);
			}
		}
	}
}

void ItemReplacer::SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item) const
{
	Logger::Log(LogLevel::File, this, locationName + ":" + ToItemName(item));
	if (auto newItem = Configuration::Instance().ScoutLocation(locationName))
	{
		if (auto rowHandle = FromItemName(newItem.value()))
		{
			Logger::Log(LogLevel::Debug, this, "replace at", locationName, ":", ToItemName(item), "->", newItem.value());
			item = rowHandle.value();
			return;
		}
	}
	Logger::Log(LogLevel::Warning, this, "no replacement", locationName, ":", ToItemName(item));
}

std::optional<SDK::FDataTableRowHandle> ItemReplacer::FromItemName(std::string itemName)
{
	SDK::FDataTableRowHandle Item;
	auto separator = itemName.find('.');
	if (separator == std::string::npos)
		return std::nullopt;
	std::string tableName = itemName.substr(0, separator);
	std::string rowName = itemName.substr(separator + 1);

	auto it = ItemReplacer::dataTableOffsets.find(tableName);
	if (it == ItemReplacer::dataTableOffsets.end())
		return std::nullopt;
	uintptr_t base = reinterpret_cast<uintptr_t>(SDK::UWorld::GetWorld()->AuthorityGameMode);
	Item.DataTable = *reinterpret_cast<SDK::UDataTable**>(base + it->second);

	for (auto It = begin(Item.DataTable->RowMap); It != end(Item.DataTable->RowMap); ++It)
	{
		if (It->Key().GetRawString() == rowName)
		{
			Item.RowName = It->Key();
			break;
		}
	}
	return Item;
}

std::string ItemReplacer::ToItemName(const SDK::FDataTableRowHandle& row) const
{
	return row.DataTable->GetName() + "." + row.RowName.GetRawString();
}
