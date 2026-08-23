#pragma once
#include "SDK.hpp"
#include <string>
#include <optional>

struct GameMapTransition
{
	SDK::FName gameMap;
	SDK::FName playerStartTag;

	bool operator<(const GameMapTransition& other) const
	{
		const uint64_t left = gameMap.GetAsUInt64();
		const uint64_t right = other.gameMap.GetAsUInt64();
		return left != right
			? left < right
			: playerStartTag.GetAsUInt64() < other.playerStartTag.GetAsUInt64();
	}
};

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
	virtual std::optional<GameMapTransition> ScoutTransition(const GameMapTransition& from) { return std::nullopt; }
};
