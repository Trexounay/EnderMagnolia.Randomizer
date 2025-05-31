#pragma once
#include <unordered_map>
#include "SDK.hpp"

class GameManager;

class DebugTeleporter
{
public:
	void Tick();
	void Init();
private:
	void Teleport();
	void NextZone();
	void NextMap();

	std::unordered_map<int, SDK::FMapTransitionData> maps;
	std::vector<SDK::FMapTransitionData> maps_ordered;

	int count = -1;
	int zone = -1;
	int gamemap = -1;
	GameManager* GM;
	UC::TArray<SDK::AActor*> zones;
};

