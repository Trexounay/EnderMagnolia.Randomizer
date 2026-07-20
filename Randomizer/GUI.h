#pragma once

#include <atomic>
#include <mutex>
#include <deque>
#include <string>
#include "Randomizer/ArchipelagoSource.h"

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
	static void RegisterSettingsHandler();
	void Draw();
	void DrawNotifications();

	void ApplySetting(const char* line);
	void WriteSettings(struct ImGuiTextBuffer* buf) const;

	struct Notification {
		std::string text;
		float remaining;
	};
	std::mutex notifMutex;
	std::deque<Notification> notifications;

	enum class PendingAction { None, Connect, Disconnect };

	char host[256] = "127.0.0.1";
	char slot[128] = "Lilac";
	char pass[128] = {};

	std::atomic<PendingAction> pending{ PendingAction::None };
	char pendingHost[256] = {};
	char pendingSlot[128] = {};
	char pendingPass[128] = {};

	std::atomic<APState> cachedState{ APState::Disconnected };
	char cachedError[256] = {};
};
