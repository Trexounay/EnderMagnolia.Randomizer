#include "CustomItemRegistry.h"
#include "GameManager.h"
#include "Logger.h"
#include <cstdlib>
#include <new>

const std::unordered_map<std::string, size_t> CustomItemRegistry::dataTableOffsets = {
	{ "DT_ItemCurrencies", offsetof(SDK::AGameModeZion, DataTableItemCurrencies) },
	{ "DT_ItemAptitudes", offsetof(SDK::AGameModeZion, DataTableItemAptitudes) },
	{ "DT_ItemSpirits", offsetof(SDK::AGameModeZion, DataTableItemSpirits) },
	{ "DT_ItemSkills", offsetof(SDK::AGameModeZion, DataTableItemSkills) },
	{ "DT_ItemStats", offsetof(SDK::AGameModeZion, DataTableItemStats) },
	{ "custom", offsetof(SDK::AGameModeZion, DataTableItemTips) },
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

CustomItemRegistry& CustomItemRegistry::Instance()
{
	static CustomItemRegistry instance;
	return instance;
}

SDK::UDataTable* CustomItemRegistry::Table(const std::string& tableName)
{
	auto it = dataTableOffsets.find(tableName);
	if (it == dataTableOffsets.end())
		return nullptr;
	auto cdo = SDK::AGameModeZion::GetDefaultObj();
	uintptr_t base = reinterpret_cast<uintptr_t>(cdo);
	return *reinterpret_cast<SDK::UDataTable**>(base + it->second);
}

bool CustomItemRegistry::SplitId(const std::string& itemName, std::string& table, std::string& rowName)
{
	auto separator = itemName.find('.');
	if (separator == std::string::npos)
		return false;
	table = itemName.substr(0, separator);
	rowName = itemName.substr(separator + 1);
	return true;
}

std::optional<SDK::FDataTableRowHandle> CustomItemRegistry::FromItemName(const std::string& itemName)
{
	std::string tableName, rowName;
	if (!SplitId(itemName, tableName, rowName))
		return std::nullopt;

	SDK::FDataTableRowHandle Item;
	Item.DataTable = Table(tableName);

	if (!Item.DataTable->FindRow(rowName, &Item.RowName))
	{
		Logger::Log(LogLevel::Warning, "items", "no row", itemName);
		return std::nullopt;
	}
	return Item;
}

std::string CustomItemRegistry::ToItemName(const SDK::FDataTableRowHandle& row)
{
	return row.DataTable->GetName() + "." + row.RowName.GetRawString();
}

SDK::TSoftObjectPtr<SDK::UPaperSprite> CustomItemRegistry::DefaultIcon() const
{
	if (auto aptitudes = GameTables::ItemAptitudes())
		if (auto crouch = aptitudes->FindRowAs<SDK::FInventoryItemData>("Crouch"))
			return crouch->Icon;
	return {};
}

bool CustomItemRegistry::Has(const std::string& itemName) const
{
	std::string tableName, rowName;
	if (!SplitId(itemName, tableName, rowName))
		return false;
	return Table(tableName)->FindRow(rowName) != nullptr;
}

void CustomItemRegistry::FillRow(SDK::FInventoryItemData* row, const CustomItemDef& def) const
{
	row->ItemType = SDK::EInventoryItemType::None;
	row->Name = SDK::FText::FromString(def.name);
	row->Description = SDK::FText::FromString(def.description);
	row->FlavorText = SDK::FText::FromString(def.flavorText);
	row->Icon = def.icon.value_or(DefaultIcon());
}

bool CustomItemRegistry::EnsureItem(const std::string& itemName, const CustomItemDef& def)
{
	std::string tableName, rowName;
	if (!SplitId(itemName, tableName, rowName))
		return false;

	auto table = Table(tableName);
	if (auto existing = table->FindRowAs<SDK::FInventoryItemData>(rowName))
	{
		FillRow(existing, def);
		return true;
	}

	auto source = (SDK::FInventoryItemData*)begin(table->RowMap)->Value();
	auto clone = SDK::FMemory::New<SDK::FInventoryItemData>();

	clone->EquipmentType = source->EquipmentType;
	clone->InventoryHideCondition = source->InventoryHideCondition;
	clone->CollectableDropClass = source->CollectableDropClass;
	clone->BuyInfo = source->BuyInfo;
	FillRow(clone, def);

	auto fname = SDK::FName::FromString(rowName);
	table->AddRowInternal(fname, reinterpret_cast<uint8_t*>(clone));
	return true;
}
