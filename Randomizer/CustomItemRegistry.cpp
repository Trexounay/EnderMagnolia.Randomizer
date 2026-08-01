#include "CustomItemRegistry.h"
#include "GameManager.h"
#include "Logger.h"
#include <cstdlib>
#include <cstring>
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
	if (!cdo)
		return nullptr;

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
	if (!Item.DataTable)
		return std::nullopt;

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

std::optional<SDK::TSoftObjectPtr<SDK::UPaperSprite>> CustomItemRegistry::IconOf(const std::string& itemName)
{
	std::string tableName, rowName;
	if (!SplitId(itemName, tableName, rowName))
		return std::nullopt;

	auto table = Table(tableName);
	if (!table)
		return std::nullopt;

	auto row = table->FindRowAs<SDK::FInventoryItemData>(rowName);
	if (!row)
		return std::nullopt;
	return row->Icon;
}

const RandomizerItemDef* RandomizerItems::Find(const std::string& id)
{
	for (const RandomizerItemDef* item : All)
		if (item->id == id)
			return item;
	return nullptr;
}

void CustomItemRegistry::ResetItems()
{
	itemRows.clear();
}

std::optional<SDK::FDataTableRowHandle> CustomItemRegistry::Provide(const std::string& itemName)
{
	if (auto def = RandomizerItems::Find(itemName))
		if (!Has(itemName))
			CreateItem(*def);

	if (auto row = Lookup(itemName))
		return *row;
	return std::nullopt;
}

const SDK::FDataTableRowHandle* CustomItemRegistry::Lookup(const std::string& itemName)
{
	auto it = itemRows.find(itemName);
	if (it != itemRows.end())
		return &it->second;

	auto row = FromItemName(itemName);
	if (!row)
		return nullptr;

	return &itemRows.emplace(itemName, row.value()).first->second;
}

bool CustomItemRegistry::PlayerHas(const std::string& itemName, int count)
{
	auto row = Lookup(itemName);
	if (!row)
		return false;

	auto controller = GameManager::Instance().Controller();
	if (!controller || !controller->InventoryComponent)
		return false;

	return controller->InventoryComponent->HasItem(*row, count);
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

	auto table = Table(tableName);
	return table && table->FindRow(rowName) != nullptr;
}

void CustomItemRegistry::FillRow(SDK::FInventoryItemData* row, const RandomizerItemDef& def) const
{
	row->ItemType = SDK::EInventoryItemType::None;
	row->Name = SDK::FText::FromString(def.name);
	row->Description = SDK::FText::FromString(def.description);
	row->FlavorText = SDK::FText::FromString(def.flavorText);
	row->Icon = IconOf(def.iconFrom).value_or(DefaultIcon());
	row->DescriptionFormatElements = {};
	row->DescriptionStringElements = {};
	row->FlavorTextFormatElements = {};
	row->FlavorStringElements = {};
}

bool CustomItemRegistry::CreateItem(const RandomizerItemDef& requested)
{
	auto declared = RandomizerItems::Find(requested.id);
	const RandomizerItemDef& def = declared ? *declared : requested;

	std::string tableName, rowName;
	if (!SplitId(def.id, tableName, rowName))
		return false;

	auto table = Table(tableName);
	if (!table)
		return false;

	if (auto existing = table->FindRowAs<SDK::FInventoryItemData>(rowName))
	{
		FillRow(existing, def);
		return true;
	}

	if (!table->RowStruct || table->RowMap.Num() == 0)
		return false;

	int32_t size = table->RowStruct->Size;
	auto source = begin(table->RowMap)->Value();
	auto clone = static_cast<uint8_t*>(SDK::FMemory::Malloc(size, table->RowStruct->MinAlignemnt));
	memcpy(clone, source, size);

	FillRow(reinterpret_cast<SDK::FInventoryItemData*>(clone), def);

	auto fname = SDK::FName::FromString(rowName);
	table->AddRowInternal(fname, clone);
	return true;
}
