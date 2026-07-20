#pragma once

#include <string>
#include <optional>
#include "OfflineSource.h"
#include "ArchipelagoSource.h"

class IItemSource;

class Configuration {
public:
	static Configuration& Instance();

	void Init();

	void UseOffline();
	void UseArchipelago();

	std::optional<std::string> ScoutLocation(const std::string& location);
	void ReportCheck(const std::string& location);
	void OnGameStart();
	void OnGameSaved();

private:
	Configuration() = default;
	~Configuration() = default;
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	OfflineSource offlineSource;
	IItemSource* activeSource = nullptr;
};
