#pragma once

#include <atomic>
#include <mutex>
#include <string>
#include <vector>

class DebugMenu
{
public:
	static DebugMenu& Instance();

	void Tick();
	void Draw();

private:
	DebugMenu() = default;
	~DebugMenu() = default;
	DebugMenu(const DebugMenu&) = delete;
	DebugMenu& operator=(const DebugMenu&) = delete;

	void TickFastTravel();
	void DrawFastTravel();

	struct RespiteChoice
	{
		std::string id;
		std::string label;
	};
	std::mutex respiteMutex;
	std::vector<RespiteChoice> respites;
	int selectedRespite = -1;
	std::string pendingTravelId;
	std::atomic<bool> travelRequested{ false };
};
