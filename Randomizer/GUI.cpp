#include "GUI.h"
#include "imgui.h"
#include "imgui_internal.h"

#include "impl/shared.h"
#include "impl/d3d11_impl.h"
#include "impl/d3d12_impl.h"
#include "kiero.h"

#include "Randomizer/Logger.h"
#include "Randomizer/ArchipelagoSource.h"
#include "Randomizer/Configuration.h"
#include "Randomizer/CustomItemRegistry.h"
#include "Randomizer/GameManager.h"

#ifdef _DEBUG
#include "Randomizer/DebugMenu.h"
#endif

#include <shellapi.h>

#include <cstring>
#include <random>
#include <string>

namespace
{
	static const ImVec4 kColorDisconnected(0.6f, 0.6f, 0.6f, 1.0f);
	static const ImVec4 kColorConnecting(0.9f, 0.8f, 0.2f, 1.0f);
	static const ImVec4 kColorConnected(0.3f, 0.85f, 0.3f, 1.0f);
	static const ImVec4 kColorError(0.9f, 0.3f, 0.3f, 1.0f);
	static const ImVec4 kColorNotifText(1.0f, 1.0f, 1.0f, 1.0f);
	static const ImVec4 kColorNotifOutline(0.0f, 0.0f, 0.0f, 1.0f);

	constexpr float kOutlinePx = 1.5f;
	constexpr ImVec2 kOutlineOffsets[] = {
		{-kOutlinePx, -kOutlinePx}, {0.0f, -kOutlinePx}, {kOutlinePx, -kOutlinePx},
		{-kOutlinePx,       0.0f},                       {kOutlinePx,       0.0f},
		{-kOutlinePx,  kOutlinePx}, {0.0f,  kOutlinePx}, {kOutlinePx,  kOutlinePx},
	};

	void AddTextOutlined(ImDrawList* dl, ImFont* font, float fontSize, ImVec2 pos,
		ImU32 fill, ImU32 outline, const char* text)
	{
		for (const ImVec2& off : kOutlineOffsets)
			dl->AddText(font, fontSize, ImVec2(pos.x + off.x, pos.y + off.y), outline, text);
		dl->AddText(font, fontSize, pos, fill, text);
	}
}

GUI& GUI::Instance()
{
	static GUI instance;
	return instance;
}

void GUI::Init()
{
	impl::SetInitCallback(&GUI::RegisterSettingsHandler);
	InjectOverlay();
}

void GUI::ApplySetting(const char* line)
{
	sscanf_s(line, "host=%255[^\n]", host, (unsigned)sizeof(host));
	sscanf_s(line, "slot=%127[^\n]", slot, (unsigned)sizeof(slot));
	int dl = 0;
	if (sscanf_s(line, "deathlink=%d", &dl) == 1)
		deathLink = (dl != 0);
	int skip = 0;
	if (sscanf_s(line, "autoskip=%d", &skip) == 1)
	{
		autoSkip = (skip != 0);
		Configuration::Instance().SetOption("auto_skip_cutscenes", autoSkip ? 1 : 0);
	}
	int names = 0;
	if (sscanf_s(line, "zonenames=%d", &names) == 1)
	{
		zoneNames = (names != 0);
		Configuration::Instance().SetOption("map_zone_names", zoneNames ? 1 : 0);
	}
}

void GUI::WriteSettings(ImGuiTextBuffer* buf) const
{
	buf->appendf("[Randomizer][Connection]\nhost=%s\nslot=%s\ndeathlink=%d\n\n", host, slot, deathLink ? 1 : 0);
	buf->appendf("[Randomizer][Misc]\nautoskip=%d\nzonenames=%d\n\n", autoSkip ? 1 : 0, zoneNames ? 1 : 0);
}

void GUI::RegisterSettingsHandler()
{
	ImGuiSettingsHandler handler;
	handler.TypeName = "Randomizer";
	handler.TypeHash = ImHashStr("Randomizer");
	handler.ReadOpenFn = [](ImGuiContext*, ImGuiSettingsHandler*, const char*) -> void* { return &GUI::Instance(); };
	handler.ReadLineFn = [](ImGuiContext*, ImGuiSettingsHandler*, void* entry, const char* line) { static_cast<GUI*>(entry)->ApplySetting(line); };
	handler.WriteAllFn = [](ImGuiContext*, ImGuiSettingsHandler*, ImGuiTextBuffer* buf) { GUI::Instance().WriteSettings(buf); };
	ImGui::AddSettingsHandler(&handler);
}

void GUI::InjectOverlay()
{
	kiero::Status::Enum kieroStatus = kiero::init(kiero::RenderType::Auto);
	if (kieroStatus != kiero::Status::Success)
	{
		Logger::Log(LogLevel::Error, "GUI", "kiero init FAILED status=", (int)kieroStatus);
		return;
	}

	Logger::Log("GUI", "kiero OK renderType", (int)kiero::getRenderType());
	switch (kiero::getRenderType())
	{
	case kiero::RenderType::D3D11:
		impl::d3d11::init();
		break;
	case kiero::RenderType::D3D12:
		impl::d3d12::init();
		break;
	default:
		Logger::Log(LogLevel::Error, "GUI", "unsupported renderType, no overlay", (int)kiero::getRenderType());
		return;
	}

	impl::SetRenderCallback(&GUI::RenderTrampoline);
}

void GUI::RenderTrampoline()
{
	GUI::Instance().Draw();
}

bool GUI::Request(std::function<void()> action)
{
	if (commandPending.load())
		return false;

	command = std::move(action);
	commandPending.store(true);
	return true;
}

void GUI::RunCommand()
{
	if (!commandPending.load())
		return;

	std::function<void()> action = std::move(command);
	command = nullptr;
	commandPending.store(false);
	action();
}

void GUI::Publish(const GameState& next)
{
	std::lock_guard<std::mutex> lock(stateMutex);
	state = next;
}

GUI::GameState GUI::Read() const
{
	std::lock_guard<std::mutex> lock(stateMutex);
	return state;
}

void GUI::Tick()
{
	RunCommand();
	PumpItemNotifications();

	ArchipelagoSource& ap = ArchipelagoSource::Instance();
	Configuration& config = Configuration::Instance();

	GameState next;
	next.apState = ap.GetState();
	next.error = ap.GetError();
	next.offline = config.IsOffline();
	auto seed = config.Offline().Seed();
	next.seed = seed ? seed.value() : "";
	next.inGame = GameManager::Instance().IsInGame();
	Publish(next);

#ifdef _DEBUG
	DebugMenu::Instance().Tick();
#endif
}

void GUI::Draw()
{
	frame = Read();

	const char* statusText = "Disconnected";
	ImVec4 statusColor = kColorDisconnected;
	switch (frame.apState)
	{
	case APState::Disconnected:
		statusText = "Disconnected";
		statusColor = kColorDisconnected;
		break;
	case APState::Connecting:
		statusText = "Connecting";
		statusColor = kColorConnecting;
		break;
	case APState::Reconnecting:
		statusText = "Reconnecting";
		statusColor = kColorConnecting;
		break;
	case APState::Connected:
		statusText = "Connected";
		statusColor = kColorConnected;
		break;
	case APState::Error:
		statusText = "Error";
		statusColor = kColorError;
		break;
	}

	if (frame.offline && frame.apState == APState::Disconnected)
	{
		statusText = frame.seed.empty() ? "no seed" : frame.seed.c_str();
		statusColor = frame.seed.empty() ? kColorDisconnected : kColorConnected;
	}

	ImVec4 titleColor(statusColor.x * 0.6f, statusColor.y * 0.6f, statusColor.z * 0.6f, 1.0f);
	ImGui::PushStyleColor(ImGuiCol_TitleBg, titleColor);
	ImGui::PushStyleColor(ImGuiCol_TitleBgActive, statusColor);
	ImGui::PushStyleColor(ImGuiCol_TitleBgCollapsed, titleColor);

	std::string title = std::string("Randomizer - ") + statusText + "###rando";
	ImGui::Begin(title.c_str());

	if (ImGui::BeginTabBar("##modes"))
	{
		if (ImGui::BeginTabItem("Local"))
		{
			DrawLocal();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Archipelago"))
		{
			DrawArchipelago();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Misc"))
		{
			DrawMisc();
			ImGui::EndTabItem();
		}
		ImGui::EndTabBar();
	}

	ImGui::End();

	ImGui::PopStyleColor(3);

#ifdef _DEBUG
	DebugMenu::Instance().Draw();
#endif

	DrawNotifications();
}

void GUI::DrawArchipelago()
{
	bool connected = (frame.apState == APState::Connected || frame.apState == APState::Connecting ||
		frame.apState == APState::Reconnecting);
	float fieldWidth = 220.0f;

	ImGui::SeparatorText("Server");

	ImGui::BeginDisabled(connected);

	ImGui::Text("Host");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(fieldWidth);
	ImGui::InputText("##host", host, sizeof(host));
	ImGui::Text("Slot");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(fieldWidth);
	ImGui::InputText("##slot", slot, sizeof(slot));
	ImGui::Text("Pass");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(fieldWidth);
	ImGui::InputText("##pass", pass, sizeof(pass), ImGuiInputTextFlags_Password);

	ImGui::EndDisabled();

	if (connected)
	{
		if (ImGui::Button("Disconnect"))
			Request([] { ArchipelagoSource::Instance().Disconnect(); });
	}
	else
	{
		if (ImGui::Button("Connect!"))
		{
			ImGui::MarkIniSettingsDirty();
			Request([h = std::string(host), s = std::string(slot), p = std::string(pass), dl = deathLink]
			{
				ArchipelagoSource& ap = ArchipelagoSource::Instance();
				ap.SetDeathLink(dl);
				ap.Connect(h, s, p);
			});
		}
	}

	ImGui::SeparatorText("Options");

	ImGui::BeginDisabled(connected);
	ImGui::Checkbox("DeathLink", &deathLink);
	ImGui::EndDisabled();

	if (frame.apState == APState::Error && !frame.error.empty())
	{
		ImGui::PushStyleColor(ImGuiCol_Text, kColorError);
		ImGui::TextWrapped("%s", frame.error.c_str());
		ImGui::PopStyleColor();
	}
}

void GUI::DrawLocal()
{
	if (!seedEdited && strcmp(seedInput, frame.seed.c_str()) != 0)
		strncpy_s(seedInput, frame.seed.c_str(), sizeof(seedInput) - 1);

	ImGui::SeparatorText("Generation");

	ImGui::Text("Seed");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(220.0f);
	if (ImGui::InputText("##seed", seedInput, sizeof(seedInput), ImGuiInputTextFlags_CharsDecimal))
		seedEdited = true;

	if (ImGui::Button(seedEdited ? "Generate" : "Roll"))
	{
		char rolled[32] = {};
		if (!seedEdited)
		{
			std::random_device device;
			std::uniform_int_distribution<unsigned long long> range(1, 999999999999ull);
			sprintf_s(rolled, "%llu", range(device));
		}

		Request([this, s = std::string(seedEdited ? seedInput : rolled)]
		{
			if (Configuration::Instance().NewSeed(s))
				Notify("New seed generated");
			else
				Notify("Seed generation failed, see generate_error.txt");
		});
		seedEdited = false;
	}

	ImGui::SeparatorText("Options");

	if (ImGui::Button("Edit yaml"))
	{
		std::string yaml = Configuration::Instance().DataPath("player.yaml");
		if (GetFileAttributesA(yaml.c_str()) == INVALID_FILE_ATTRIBUTES)
		{
			std::string source = Configuration::Instance().DataPath("templates\\Ender Magnolia.yaml");
			if (!CopyFileA(source.c_str(), yaml.c_str(), TRUE))
				Notify("Could not create player.yaml, template is missing");
		}

		std::string target = yaml;
		if (GetFileAttributesA(yaml.c_str()) == INVALID_FILE_ATTRIBUTES)
		{
			target = Configuration::Instance().DataPath("");
			target.pop_back();
		}
		ShellExecuteA(nullptr, "open", target.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
	}
}

void GUI::DrawMisc()
{
	ImGui::SeparatorText("Helpers");

	ImGui::BeginDisabled(!frame.inGame);
	if (ImGui::Button("Go Home"))
	{
		Request([this]
		{
			if (!GameManager::Instance().GoHome())
				Notify("Cannot fast travel right now");
		});
	}
	ImGui::EndDisabled();

	ImGui::SeparatorText("Options");

	if (ImGui::Checkbox("Auto skip cutscenes", &autoSkip))
	{
		if (Request([v = autoSkip] { Configuration::Instance().SetOption("auto_skip_cutscenes", v ? 1 : 0); }))
			ImGui::MarkIniSettingsDirty();
		else
			autoSkip = !autoSkip;
	}

	if (ImGui::Checkbox("Zone names on map", &zoneNames))
	{
		if (Request([v = zoneNames]
			{
				Configuration::Instance().SetOption("map_zone_names", v ? 1 : 0);
				if (GameManager::Instance().IsInGame())
					GameManager::Instance().RefreshZoneLabels();
			}))
			ImGui::MarkIniSettingsDirty();
		else
			zoneNames = !zoneNames;
	}
}

void GUI::Notify(const std::string& text)
{
	std::lock_guard<std::mutex> lock(notifMutex);
	notifications.push_back({ text, 5.0f });
	if (notifications.size() > 8)
		notifications.pop_front();
}

void GUI::NotifyItem(const std::string& item, const std::string& subtitle)
{
	pendingItems.push_back({ item, subtitle });
}

void GUI::ClearItemNotifications()
{
	pendingItems.clear();
}

void GUI::PumpItemNotifications()
{
	if (pendingItems.empty())
		return;

	const auto now = std::chrono::steady_clock::now();
	if (now - lastItemNotification < std::chrono::milliseconds(500))
		return;

	GameManager& gm = GameManager::Instance();
	if (!gm.World() || !gm.GameInstance() || gm.IsLoading())
		return;

	const PendingItem pending = pendingItems.front();
	pendingItems.pop_front();
	lastItemNotification = now;

	auto notifyRow = CustomItemRegistry::Instance().WriteNotification(pending.item);
	if (!notifyRow)
	{
		Logger::Log(LogLevel::Warning, this, "NotifyItem unknown item", pending.item);
		return;
	}

	if (achievementHolder && widgetWorld == gm.World())
		achievementHolder->RemoveFromParent();

	SDK::UClass* holderClass = gm.GameInstance()->AchievementNotificationWidgetClass.LoadBlocking();
	SDK::UUserWidget* holder = SDK::UWidgetBlueprintLibrary::Create(gm.World(), holderClass, gm.Controller());
	if (!holder)
	{
		Logger::Log(LogLevel::Warning, this, "NotifyItem holder Create failed", (void*)holderClass);
		return;
	}

	holder->AddToViewport(29000);

	achievementHolder = static_cast<SDK::UUserWidgetAchievementNotificationHolder*>(holder);
	widgetWorld = gm.World();
	achievementHolder->OnRefreshVisibility(true);
	achievementHolder->QueueAchievementNotification(*notifyRow);

	auto* canvas = static_cast<SDK::UPanelWidget*>(achievementHolder->WidgetTree->RootWidget);
	auto* notification = static_cast<SDK::UUserWidget*>(canvas->GetChildAt(0));
	auto* overlay = static_cast<SDK::UPanelWidget*>(notification->WidgetTree->RootWidget);
	auto* textColumn = static_cast<SDK::UPanelWidget*>(overlay->GetChildAt(2));

	static_cast<SDK::UTextBlock*>(textColumn->GetChildAt(1))->SetText(SDK::FText::FromString(pending.subtitle));
}

void GUI::DrawNotifications()
{
	float dt = ImGui::GetIO().DeltaTime;

	std::lock_guard<std::mutex> lock(notifMutex);
	if (notifications.empty())
		return;

	for (auto& n : notifications)
		n.remaining -= dt;
	while (!notifications.empty() && notifications.front().remaining <= 0.0f)
		notifications.pop_front();
	if (notifications.empty())
		return;

	ImGuiViewport* vp = ImGui::GetMainViewport();
	ImVec2 pos(vp->WorkPos.x + vp->WorkSize.x - 20.0f, vp->WorkPos.y + vp->WorkSize.y * 0.5f);
	ImGui::SetNextWindowPos(pos, ImGuiCond_Always, ImVec2(1.0f, 0.5f));

	ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoInputs |
		ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_AlwaysAutoResize |
		ImGuiWindowFlags_NoBackground;
	ImGui::Begin("##ap_notifications", nullptr, flags);

	ImFont* bigFont = static_cast<ImFont*>(impl::GetBigFont());
	if (bigFont)
		ImGui::PushFont(bigFont);

	ImDrawList* dl = ImGui::GetWindowDrawList();
	ImFont* font = ImGui::GetFont();
	float fontSize = ImGui::GetFontSize();
	float lineH = ImGui::GetTextLineHeightWithSpacing();

	for (auto& n : notifications)
	{
		float alpha = ImMin(n.remaining, 1.0f);

		ImVec4 fill = kColorNotifText;
		ImVec4 outline = kColorNotifOutline;
		fill.w = alpha;
		outline.w = alpha;

		AddTextOutlined(dl, font, fontSize, ImGui::GetCursorScreenPos(),
			ImGui::GetColorU32(fill), ImGui::GetColorU32(outline), n.text.c_str());

		ImGui::Dummy(ImVec2(ImGui::CalcTextSize(n.text.c_str()).x, lineH));
	}

	if (bigFont)
		ImGui::PopFont();
	ImGui::End();
}
