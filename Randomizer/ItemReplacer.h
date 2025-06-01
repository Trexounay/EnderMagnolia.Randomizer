#pragma once
#include <unordered_map>
#include "GameManager.h"
#include "SDK.hpp"

class ItemReplacer
{
public:
	ItemReplacer();
	void ZoneChanged(const UC::FString &oldZone, const UC::FString &newZone);

	void Tick(const UC::FString& newZone);
	static std::optional<SDK::FDataTableRowHandle> FromItemName(std::string itemName);

private:
	static const std::unordered_map<std::string, size_t>dataTableOffsets;
	GameManager* GM;

	std::string ToItemName(SDK::FDataTableRowHandle row) const;
	void SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item) const;
	std::list<std::function<bool()>> delayed_replacement;


	void ReplaceInteractableAddItems(const std::string& zoneName);
	void ReplaceInteractableAddTutorial(const std::string& zoneName);
	void ReplaceInteractableTreasureBox(const std::string& zoneName);
	void ReplaceTriggerEvents(const std::string& zoneName);
	void ReplaceBossEvents(const std::string& zoneName);
	void ReplaceEventAsset(const std::string& zoneName, const std::string& actorName, SDK::UEventAsset* asset);
	void WaitForEventAsset(SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action);
};
