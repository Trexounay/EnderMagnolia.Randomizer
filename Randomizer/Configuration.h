#pragma once

#include <string>
#include <fstream>
#include <unordered_map>
#include <optional>

namespace SDK { class UDataTable; }

struct APItemInfo {
	std::string item;
	std::string player;
	std::string game;
};

class Configuration {
public:
	static Configuration& Instance();

	bool Init(const std::string& path = "EnderMagnolia.txt");
	std::optional<std::string> ScoutLocation(const std::string &location) const;
	std::optional<APItemInfo> ScoutAPItem(const std::string& location) const;
	const std::unordered_map<std::string, APItemInfo>& APItems() const { return ap_items; }
	void PopulateDataTable(SDK::UDataTable* table);
	bool Load();

private:
	Configuration() = default;
	~Configuration() = default;
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	std::string configPath;
	std::unordered_map<std::string, std::string> checks_to_items;
	std::unordered_map<std::string, APItemInfo> ap_items;
};
