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
	auto zoneName = newZone.ToString();
	ReplaceInteractableAddItems(zoneName);
	ReplaceTriggerEvents(zoneName);
}

void ItemReplacer::ReplaceInteractableAddItems(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ABP_Interactable_AddItem_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_AddItem_C*>(Actor);
		auto id = zoneName + "." + Actor->GetName();
		Logger::Log(LogLevel::Debug, this, "Item found", id);
		if (auto newItem = Configuration::Instance().ScoutLocation(id))
		{
			Logger::Log(LogLevel::Debug, this, "found replacement", newItem.value());
			if (auto item = FromItemName(newItem.value()))
			{
				interactable->Item = item.value();
				Logger::Log(LogLevel::Debug, this, "replaced");
			}
		}
	}
}

void ItemReplacer::ReplaceTriggerEvents(const std::string& zoneName)
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::ATrigger_Event::StaticClass(), &out);
	for (auto Actor : out)
	{
		auto trigger = static_cast<SDK::ATrigger_Event*>(Actor);
		auto asset = trigger->LoadedEventAsset;
		if (!asset)
		{
			Logger::Log(LogLevel::Warning, this, "No loaded event asset for actor", Actor->GetName());
			continue;
		}
		auto id = zoneName + "." + Actor->GetName();
		Logger::Log(LogLevel::Debug, this, "Item found", id);
		if (auto newItem = Configuration::Instance().ScoutLocation(id))
		{
			Logger::Log(LogLevel::Debug, this, "found replacement", newItem.value());
			if (auto item = FromItemName(newItem.value()))
			{
				ItemReplacer::ReplaceInEventAsset(asset, item.value());
			}
		}
	}
}

void ItemReplacer::ReplaceInEventAsset(SDK::UEventAsset* asset, const SDK::FDataTableRowHandle &item)
{
	bool placed = false;
	for (auto data : asset->Nodes)
	{
		if (data.Value()->IsA(SDK::UEventNodeAction::StaticClass()))
		{
			auto nodeAction = static_cast<SDK::UEventNodeAction*>(data.Value());
			for (auto action : nodeAction->Actions)
			{
				if (action->IsA(SDK::UEventAction_GrantItems::StaticClass()))
				{
					auto grantItem = static_cast<SDK::UEventAction_GrantItems*>(action);
					for (auto& itemHandleCount : grantItem->ItemHandleCounts)
					{
						itemHandleCount.ItemHandle = placed ? SDK::FDataTableRowHandle() : item;
						placed = true;
						Logger::Log(LogLevel::Debug, this, "replaced");
					}
				}
				else if (action->IsA(SDK::UEventAction_EquipSkills::StaticClass()))
				{
					// logic here to equip skill corresponding to spirit
					// auto equipSkill = static_cast<SDK::UEventAction_EquipSkills*>(action);
					// equipSkill->SkillsToEquip[0].Second = item
				}
			}
		}
	}
}


std::optional<SDK::FDataTableRowHandle> ItemReplacer::FromItemName(std::string itemName) const
{
	SDK::FDataTableRowHandle Item;
	auto separator = itemName.find('.');
	if (separator == std::string::npos)
		return std::nullopt;
	std::string tableName = itemName.substr(0, separator);
	std::string rowName = itemName.substr(separator + 1);

	auto it = this->dataTableOffsets.find(tableName);
	if (it == this->dataTableOffsets.end())
		return std::nullopt;
	uintptr_t base = reinterpret_cast<uintptr_t>(GM->Mode());
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
