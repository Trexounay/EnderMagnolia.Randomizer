#pragma once

#include <string>
#include <fstream>
#include <unordered_map>
#include <optional>
#include "apclient.hpp"

class Configuration {
public:
	static Configuration& Instance();

	bool Init(const std::string& path = "EnderMagnolia.txt");
	std::optional<std::string> ScoutLocation(const std::string &location) const;
	bool Load();
	void Tick();

private:
	Configuration() = default;
	~Configuration() = default;
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;
	void ConnectAP(std::string uri = "");

	std::unique_ptr<APClient> ap;
	std::string configPath;
	std::unordered_map<std::string, std::string> checks_to_items;
};
