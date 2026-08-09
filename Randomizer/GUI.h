#pragma once

#include <atomic>
#include <functional>
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
	void DrawArchipelago();
	void DrawLocal();
	void DrawMisc();
	void DrawNotifications();

	void ApplySetting(const char* line);
	void WriteSettings(struct ImGuiTextBuffer* buf) const;

	struct Notification {
		std::string text;
		float remaining;
	};
	std::mutex notifMutex;
	std::deque<Notification> notifications;

	struct GameState {
		APState apState = APState::Disconnected;
		std::string error;
		std::string seed;
		bool offline = true;
		bool inGame = false;
	};

	void Publish(const GameState& next);
	GameState Read() const;

	mutable std::mutex stateMutex;
	GameState state;
	GameState frame;

	bool Request(std::function<void()> action);
	void RunCommand();

	std::atomic<bool> commandPending{ false };
	std::function<void()> command;

	char host[256] = "127.0.0.1";
	char slot[128] = "Lilac";
	char pass[128] = {};
	bool deathLink = false;
	bool autoSkip = false;

	char seedInput[32] = {};
	bool seedEdited = false;
};
