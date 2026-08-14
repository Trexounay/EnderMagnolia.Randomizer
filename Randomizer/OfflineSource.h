#pragma once
#include "IItemSource.h"
#include "SDK.hpp"
#include <string>
#include <deque>
#include <vector>
#include <unordered_map>
#include <unordered_set>

struct APItemInfo {
	std::string item;
	std::string player;
	std::string game;
};

class OfflineSource : public IItemSource {
public:
	explicit OfflineSource(const std::string& path = "seed.txt");

	bool Load();
	bool NewSeed(const std::string& seed);

	std::optional<std::string> Seed() const override;
	std::optional<std::string> ScoutLocation(const std::string& location) override;
	void ReportCheck(const std::string& location) override;
	void OnGameStart(bool isNewGame) override;
	void OnGameSaved() override;
	void Tick() override;
	int Option(const std::string& name, int fallback = 0) const override;
	float Progress() const override;

private:
	void PopulateDataTable();
	void IndexChecks();
	void DeliverStartInventory();

	std::string path;
	std::string seedName;
	std::unordered_map<std::string, std::string> checks_to_items;
	std::unordered_map<std::string, APItemInfo> ap_items;
	std::unordered_map<std::string, int> options;
	std::vector<std::string> start_inventory;
	std::deque<std::string> pending_start_items;

	std::unordered_map<SDK::FName, std::unordered_set<SDK::FName>> actor_checks;
	std::unordered_set<SDK::FName> event_checks;
	int shop_checks = 0;
};
