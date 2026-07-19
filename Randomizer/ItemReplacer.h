#pragma once
#include <unordered_map>
#include <vector>
#include <string>
#include "GameManager.h"
#include "SDK.hpp"

class ItemReplacer
{
public:
	ItemReplacer();
	void ZoneChanged(const UC::FString &oldZone, const UC::FString &newZone);

	void Tick(const UC::FString& newZone);
	static std::optional<SDK::FDataTableRowHandle> FromItemName(std::string itemName);
	struct EventLocation {
		std::string id;
		SDK::FDataTableRowHandle* item;
	};
	static std::vector<EventLocation> EnumerateEventLocations(const std::string& zoneName, const std::string& actorName, SDK::UEventAsset* asset);

private:
	static const std::unordered_map<std::string, size_t>dataTableOffsets;
	GameManager* GM;

	std::string ToItemName(const SDK::FDataTableRowHandle &row) const;
	void SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item) const;
	std::list<std::function<bool()>> delayed_replacement;


	void ReplaceInteractableAddItems(const std::string& zoneName);
	void ReplaceInteractableAddTutorial(const std::string& zoneName);
	void ReplaceInteractableTreasureBox(const std::string& zoneName);
	void ReplaceBreakableSpawnItem(const std::string& zoneName);
	void ReplaceTriggerEvents(const std::string& zoneName);
	void ReplaceInteractableEvents(const std::string& zoneName);
	void ReplaceBossEvents(const std::string& zoneName);
	void ReplaceEventAsset(const std::string& zoneName, const std::string& actorName, SDK::UEventAsset* asset);
	void WaitForEventAsset(SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action, SDK::TSoftObjectPtr<SDK::UEventAsset> *softptr);
};
