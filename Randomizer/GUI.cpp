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
}

void GUI::WriteSettings(ImGuiTextBuffer* buf) const
{
	buf->appendf("[Randomizer][Connection]\nhost=%s\nslot=%s\ndeathlink=%d\n\n", host, slot, deathLink ? 1 : 0);
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

void GUI::Tick()
{
	ArchipelagoSource& ap = ArchipelagoSource::Instance();

	switch (pending.exchange(PendingAction::None))
	{
	case PendingAction::Connect:
		ap.SetDeathLink(pendingDeathLink);
		ap.Connect(pendingHost, pendingSlot, pendingPass);
		break;
	case PendingAction::Disconnect:
		ap.Disconnect();
		break;
	case PendingAction::NewSeed:
		if (Configuration::Instance().NewSeed(pendingSeed))
			Notify("New seed generated");
		else
			Notify("Seed generation failed, see generate_error.txt");
		break;
	default:
		break;
	}

	cachedState.store(ap.GetState());
	strncpy_s(cachedError, ap.GetError().c_str(), sizeof(cachedError) - 1);

	Configuration& config = Configuration::Instance();
	cachedOffline.store(config.IsOffline());

	auto seed = config.Offline().Seed();
	strncpy_s(cachedSeed, seed ? seed.value().c_str() : "", sizeof(cachedSeed) - 1);

#ifdef _DEBUG
	DebugMenu::Instance().Tick();
#endif
}

void GUI::Draw()
{
	APState apState = cachedState.load();

	const char* statusText = "Disconnected";
	ImVec4 statusColor = kColorDisconnected;
	switch (apState)
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

	if (localTabActive)
	{
		statusText = cachedSeed[0] ? cachedSeed : "no seed";
		statusColor = (cachedSeed[0] && cachedOffline.load()) ? kColorConnected : kColorDisconnected;
	}

	ImVec4 titleColor(statusColor.x * 0.6f, statusColor.y * 0.6f, statusColor.z * 0.6f, 1.0f);
	ImGui::PushStyleColor(ImGuiCol_TitleBg, titleColor);
	ImGui::PushStyleColor(ImGuiCol_TitleBgActive, statusColor);
	ImGui::PushStyleColor(ImGuiCol_TitleBgCollapsed, titleColor);

	std::string title = std::string("Ender Magnolia Randomizer - ") + statusText + "###rando";
	ImGui::Begin(title.c_str());

	if (ImGui::BeginTabBar("##modes"))
	{
		if (ImGui::BeginTabItem("Local"))
		{
			localTabActive = true;
			DrawLocal();
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Archipelago"))
		{
			localTabActive = false;
			DrawArchipelago(apState);
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

void GUI::DrawArchipelago(APState apState)
{
	bool connected = (apState == APState::Connected || apState == APState::Connecting ||
		apState == APState::Reconnecting);
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
			pending.store(PendingAction::Disconnect);
	}
	else
	{
		if (ImGui::Button("Connect!"))
		{
			ImGui::MarkIniSettingsDirty();
			strncpy_s(pendingHost, host, sizeof(pendingHost) - 1);
			strncpy_s(pendingSlot, slot, sizeof(pendingSlot) - 1);
			strncpy_s(pendingPass, pass, sizeof(pendingPass) - 1);
			pendingDeathLink = deathLink;
			pending.store(PendingAction::Connect);
		}
	}

	ImGui::SeparatorText("Options");

	ImGui::BeginDisabled(connected);
	ImGui::Checkbox("DeathLink", &deathLink);
	ImGui::EndDisabled();

	if (apState == APState::Error && cachedError[0])
	{
		ImGui::PushStyleColor(ImGuiCol_Text, kColorError);
		ImGui::TextWrapped("%s", cachedError);
		ImGui::PopStyleColor();
	}
}

void GUI::DrawLocal()
{
	if (!seedEdited && strcmp(seedInput, cachedSeed) != 0)
		strncpy_s(seedInput, cachedSeed, sizeof(seedInput) - 1);

	ImGui::SeparatorText("Generation");

	ImGui::Text("Seed");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(220.0f);
	if (ImGui::InputText("##seed", seedInput, sizeof(seedInput), ImGuiInputTextFlags_CharsDecimal))
		seedEdited = true;

	if (ImGui::Button(seedEdited ? "Generate" : "Roll"))
	{
		if (seedEdited)
			strncpy_s(pendingSeed, seedInput, sizeof(pendingSeed) - 1);
		else
		{
			std::random_device device;
			std::uniform_int_distribution<unsigned long long> range(1, 999999999999ull);
			sprintf_s(pendingSeed, "%llu", range(device));
		}
		seedEdited = false;
		pending.store(PendingAction::NewSeed);
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

		std::string args;
		if (GetFileAttributesA(yaml.c_str()) != INVALID_FILE_ATTRIBUTES)
			args = "/select,\"" + yaml + "\"";
		else
		{
			std::string folder = Configuration::Instance().DataPath("");
			folder.pop_back();
			args = "\"" + folder + "\"";
		}
		ShellExecuteA(nullptr, "open", "explorer.exe", args.c_str(), nullptr, SW_SHOWNORMAL);
	}
}

void GUI::Notify(const std::string& text)
{
	std::lock_guard<std::mutex> lock(notifMutex);
	notifications.push_back({ text, 5.0f });
	if (notifications.size() > 8)
		notifications.pop_front();
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
