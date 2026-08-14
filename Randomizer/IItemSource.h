#pragma once
#include <string>
#include <optional>

class IItemSource {
public:
	virtual ~IItemSource() = default;

	virtual std::optional<std::string> ScoutLocation(const std::string& location) = 0;
	virtual void ReportCheck(const std::string& location) = 0;
	virtual void OnGameStart(bool isNewGame) = 0;
	virtual void OnGameSaved() = 0;
	virtual float Progress() const = 0;

	virtual void Tick() {}
	virtual std::optional<std::string> Seed() const { return std::nullopt; }
	virtual int Option(const std::string& name, int fallback = 0) const { return fallback; }
};
