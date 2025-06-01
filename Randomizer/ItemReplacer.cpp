#include "ItemReplacer.h"
#include "SDK.hpp"
#include "Logger.h"
#include "GameManager.h"
#include "Configuration.h"

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
	ReplaceTriggerEvents(zoneName);
	ReplaceBossEvents(zoneName);
}

void ItemReplacer::Tick(const UC::FString& newZone)
{
	for (auto it = delayed_replacement.begin(); it != delayed_replacement.end(); )
	{
		auto current = it++;
		if ((*current)())
			delayed_replacement.erase(current);
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
			}
		);
	}
}

void ItemReplacer::ReplaceTriggerEvents(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ATrigger_Event::StaticClass(), &out);
	for (auto actor : out)
	{
		auto trigger = static_cast<SDK::ATrigger_Event*>(actor);
		auto actorName = actor->GetName();
		WaitForEventAsset(&trigger->LoadedEventAsset, [this, zoneName, actorName](SDK::UEventAsset* asset)
			{
				ReplaceEventAsset(zoneName, actorName, asset);
			}
		);
	}
}

void ItemReplacer::WaitForEventAsset(SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action)
{
	if (!*asset)
	{
		delayed_replacement.push_back([asset, action]()
			{
				if (!*asset) return false;
				action(*asset);
				return true;
			}
		);
	}
	else
		action(*asset);
}

void ItemReplacer::ReplaceEventAsset(const std::string& zoneName, const std::string& actorName, SDK::UEventAsset* asset)
{
	int count = 0;
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
				{
					auto id = zoneName + "." + actorName + (count > 0 ? ("." + std::to_string(count)) : "");
					count++;
					SwapAtLocation(id, grantItem->ItemHandleCounts[i].ItemHandle);
				}
			}
			else if (auto equipSkill = action->Cast<SDK::UEventAction_EquipSkills>())
			{
				// logic here to equip skill corresponding to spirit
				// auto equipSkill = static_cast<SDK::UEventAction_EquipSkills*>(action);
				// equipSkill->SkillsToEquip[0].Second = item
			}
		}
	}
}

void ItemReplacer::SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle &item) const
{
	if (auto newItem = Configuration::Instance().ScoutLocation(locationName))
	{
		if (auto rowHandle = FromItemName(newItem.value()))
		{
			Logger::Log(LogLevel::Debug, this, "replace at", locationName, ":", ToItemName(item), "->", newItem.value());
			item = rowHandle.value();
			return;
		}
	}
	Logger::Log(LogLevel::Warning, this, "found item with no replacement", locationName);
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

std::string ItemReplacer::ToItemName(SDK::FDataTableRowHandle row) const
{
	return row.DataTable->GetName() + "." + row.RowName.GetRawString();
}
