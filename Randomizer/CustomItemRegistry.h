#pragma once
#include "SDK.hpp"
#include <string>
#include <optional>
#include <unordered_map>

struct RandomizerItemDef {
	std::string id;
	std::string iconFrom;
	std::string name;
	std::string description;
	std::string flavorText;
};

namespace RandomizerItems
{
	inline const RandomizerItemDef ElevatorKey{
		"DT_ItemKeys.key_elevator",
		"DT_ItemKeys.key_higher_a",
		"Grand Lift Key",
		"Unlocks the elevator to the Central Stratum",
		""
	};

	inline const RandomizerItemDef* const All[] = { &ElevatorKey };

	const RandomizerItemDef* Find(const std::string& id);
}

class CustomItemRegistry {
public:
	static CustomItemRegistry& Instance();

	bool CreateItem(const RandomizerItemDef& def);
	bool Has(const std::string& itemName) const;
	void ResetItems();

	const SDK::FDataTableRowHandle* Lookup(const std::string& itemName);
	std::optional<SDK::FDataTableRowHandle> Provide(const std::string& itemName);
	bool PlayerHas(const std::string& itemName, int count = 1);

	static std::optional<SDK::TSoftObjectPtr<SDK::UPaperSprite>> IconOf(const std::string& itemName);

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
	void FillRow(SDK::FInventoryItemData* row, const RandomizerItemDef& def) const;

	static const std::unordered_map<std::string, size_t> dataTableOffsets;
	std::unordered_map<std::string, SDK::FDataTableRowHandle> itemRows;
};
