#pragma once
#include "SDK.hpp"
#include <string>
#include <optional>
#include <unordered_map>
#include <vector>

struct RandomizerItemDef {
	std::string id;
	std::string iconFrom;
	std::string name;
	std::string description;
	std::string flavorText;
};

struct ProgressiveChainDef {
	std::string itemId;
	std::vector<std::string> links;
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

	inline const RandomizerItemDef ProgressiveDive{
		"DT_ItemAptitudes.progressive_dive",
		"DT_ItemAptitudes.dive",
		"Progressive Dive",
		"Unlocks Dive, then Underwater Dash",
		""
	};

	inline const RandomizerItemDef ProgressiveWallGrab{
		"DT_ItemAptitudes.progressive_wall_grab",
		"DT_ItemAptitudes.wall_grab",
		"Progressive Wall Grab",
		"Unlocks Wall Grab, then Wall Charge",
		""
	};

	inline const RandomizerItemDef* const All[] = { &ElevatorKey, &ProgressiveDive, &ProgressiveWallGrab };
}

namespace ProgressiveChains
{
	inline const ProgressiveChainDef Dive{
		RandomizerItems::ProgressiveDive.id,
		{ "DT_ItemAptitudes.dive", "DT_ItemAptitudes.dash_charge_underwater" }
	};

	inline const ProgressiveChainDef WallGrab{
		RandomizerItems::ProgressiveWallGrab.id,
		{ "DT_ItemAptitudes.wall_grab", "DT_ItemAptitudes.wall_charge" }
	};

	inline const ProgressiveChainDef* const All[] = { &Dive, &WallGrab };
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

	std::optional<std::string> NextProgressiveLink(const ProgressiveChainDef& chain);

	static const RandomizerItemDef* FindItem(const std::string& id);
	static const ProgressiveChainDef* FindChain(const std::string& itemId);

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
