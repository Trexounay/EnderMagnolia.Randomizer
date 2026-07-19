#pragma once

#include <atomic>
#include <mutex>
#include <deque>
#include <string>
#include "Randomizer/APConnection.h"

class GUI {
public:
	static GUI& Instance();

	void Init();
	void Tick();
	void Notify(const std::string& text);

private:
	GUI() = default;
	~GUI() = default;
	GUI(const GUI&) = delete;
	GUI& operator=(const GUI&) = delete;

	void InjectOverlay();
	static void RenderTrampoline();
	void Draw();
	void DrawNotifications();

	void LoadSettings();
	void SaveSettings();

	struct Notification {
		std::string text;
		float remaining;
	};
	std::mutex notifMutex;
	std::deque<Notification> notifications;

	enum class PendingAction { None, Connect, Disconnect };

	char host[256] = {};
	char slot[128] = {};
	char pass[128] = {};

	std::atomic<PendingAction> pending{ PendingAction::None };
	char pendingHost[256] = {};
	char pendingSlot[128] = {};
	char pendingPass[128] = {};

	std::atomic<APState> cachedState{ APState::Disconnected };
	char cachedError[256] = {};
};
