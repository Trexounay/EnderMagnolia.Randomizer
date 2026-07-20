#pragma once
#include "SDK.hpp"
#include <string>
#include <optional>
#include <unordered_map>

struct CustomItemDef {
	std::string name;
	std::string description;
	std::string flavorText;
	std::optional<SDK::TSoftObjectPtr<SDK::UPaperSprite>> icon;
};

class CustomItemRegistry {
public:
	static CustomItemRegistry& Instance();

	bool EnsureItem(const std::string& itemName, const CustomItemDef& def);
	bool Has(const std::string& itemName) const;

	static std::optional<SDK::FDataTableRowHandle> FromItemName(const std::string& itemName);
	static std::string ToItemName(const SDK::FDataTableRowHandle& row);

private:
	CustomItemRegistry() = default;
	~CustomItemRegistry() = default;
	CustomItemRegistry(const CustomItemRegistry&) = delete;
	CustomItemRegistry& operator=(const CustomItemRegistry&) = delete;

	static SDK::UDataTable* Table(const std::string& tableName);
	static bool SplitId(const std::string& itemName, std::string& table, std::string& rowName);
	SDK::TSoftObjectPtr<SDK::UPaperSprite> DefaultIcon() const;
	void FillRow(SDK::FInventoryItemData* row, const CustomItemDef& def) const;

	static const std::unordered_map<std::string, size_t> dataTableOffsets;
};
