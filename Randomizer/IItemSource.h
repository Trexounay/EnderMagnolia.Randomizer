#pragma once
#include <string>
#include <optional>

class IItemSource {
public:
	virtual ~IItemSource() = default;

	virtual std::optional<std::string> ScoutLocation(const std::string& location) = 0;
	virtual void ReportCheck(const std::string& location) = 0;
	virtual void OnGameStart() = 0;
	virtual void OnGameSaved() = 0;
};
