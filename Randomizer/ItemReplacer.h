#pragma once
#include <unordered_map>
#include "GameManager.h"
#include "SDK.hpp"

class ItemReplacer
{
public:
	ItemReplacer();
	void ZoneChanged(const UC::FString &oldZone, const UC::FString &newZone);

private:
	static const std::unordered_map<std::string, size_t>dataTableOffsets;
	GameManager* GM;

	std::optional<SDK::FDataTableRowHandle> FromItemName(std::string itemName) const;
	void ReplaceInteractableAddItems(const std::string& zoneName);
	void ReplaceTriggerEvents(const std::string& zoneName);
	void ReplaceInEventAsset(SDK::UEventAsset* asset, const SDK::FDataTableRowHandle &item);
};
