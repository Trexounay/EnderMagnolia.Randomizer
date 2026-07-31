#pragma once

#include <atomic>
#include <mutex>
#include <string>
#include <vector>
#include "SDK.hpp"

class DebugMenu
{
public:
	static DebugMenu& Instance();

	void Tick();
	void Draw();

	struct RespiteChoice
	{
		std::string id;
		std::string label;
	};

	struct MapChoice
	{
		std::string id;
		std::string startTag;
	};

	struct ZoneChoice
	{
		std::string name;
	};

	struct EventChoice
	{
		std::string id;
		SDK::TSoftObjectPtr<SDK::UEventAsset> asset;
		bool cleared = false;
	};

private:
	DebugMenu() = default;
	~DebugMenu() = default;
	DebugMenu(const DebugMenu&) = delete;
	DebugMenu& operator=(const DebugMenu&) = delete;

	void TickFastTravel();
	void DrawFastTravel();

	void TickZoneTravel();
	void DrawZoneTravel();

	void TickEvents();
	void DrawEvents();

	char respiteFilter[64] = {};
	char mapFilter[64] = {};
	char zoneFilter[64] = {};
	char eventFilter[64] = {};

	std::mutex respiteMutex;
	std::vector<RespiteChoice> respites;
	int selectedRespite = -1;
	std::string pendingTravelId;
	std::atomic<bool> travelRequested{ false };

	std::mutex zoneMutex;
	std::vector<MapChoice> maps;
	std::vector<ZoneChoice> zones;
	int selectedMap = -1;
	int selectedZone = -1;
	std::string zonesForZone;
	std::string currentZone;
	std::string pendingMapId;
	std::string pendingMapStartTag;
	std::string pendingZoneName;
	std::atomic<bool> mapRequested{ false };
	std::atomic<bool> zoneRequested{ false };

	std::mutex eventMutex;
	std::vector<EventChoice> events;
	int selectedEvent = -1;
	bool selectedEventCleared = false;
	std::atomic<int> eventAction{ 0 };
	std::atomic<bool> eventListOpen{ false };
};
