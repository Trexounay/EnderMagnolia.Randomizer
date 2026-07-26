#pragma once

#include <string>
#include <optional>
#include "OfflineSource.h"
#include "ArchipelagoSource.h"

class IItemSource;

class Configuration {
public:
	static Configuration& Instance();

	void Init(const std::string& modulePath);

	std::string DataPath(const std::string& name) const;

	void UseOffline();
	void UseArchipelago();

	std::optional<std::string> ScoutLocation(const std::string& location);
	void ReportCheck(const std::string& location);
	void OnGameStart(bool isNewGame);
	void OnGameSaved();

private:
	Configuration() = default;
	~Configuration() = default;
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	std::string dataDirectory;
	OfflineSource offlineSource;
	IItemSource* activeSource = nullptr;
};
