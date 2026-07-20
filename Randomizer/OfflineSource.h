#pragma once
#include "IItemSource.h"
#include <string>
#include <unordered_map>

struct APItemInfo {
	std::string item;
	std::string player;
	std::string game;
};

class OfflineSource : public IItemSource {
public:
	explicit OfflineSource(const std::string& path = "EnderMagnolia.txt");

	bool Load();

	std::optional<std::string> ScoutLocation(const std::string& location) override;
	void ReportCheck(const std::string& location) override;
	void OnGameStart() override;
	void OnGameSaved() override;

private:
	void PopulateDataTable();

	std::string path;
	std::unordered_map<std::string, std::string> checks_to_items;
	std::unordered_map<std::string, APItemInfo> ap_items;
};
