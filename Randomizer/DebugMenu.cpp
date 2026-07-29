#include "DebugMenu.h"
#include "GameManager.h"
#include "imgui.h"

DebugMenu& DebugMenu::Instance()
{
	static DebugMenu instance;
	return instance;
}

void DebugMenu::Tick()
{
	TickFastTravel();
}

void DebugMenu::Draw()
{
	ImGui::SeparatorText("Debug");
	DrawFastTravel();
}

void DebugMenu::TickFastTravel()
{
	GameManager& gm = GameManager::Instance();

	if (travelRequested.exchange(false))
	{
		std::string id;
		{
			std::lock_guard<std::mutex> lock(respiteMutex);
			id = pendingTravelId;
		}
		if (!id.empty())
			gm.FastTravelTo(id);
	}

	if (!gm.IsLoading())
	{
		std::lock_guard<std::mutex> lock(respiteMutex);
		if (respites.empty())
		{
			for (const RespiteEntry& e : gm.ListRespites())
				respites.push_back({ e.id, e.label });
			if (!respites.empty())
				selectedRespite = 0;
		}
	}
}

void DebugMenu::DrawFastTravel()
{
	std::lock_guard<std::mutex> lock(respiteMutex);
	if (respites.empty())
	{
		ImGui::TextDisabled("Respites: waiting for game...");
		return;
	}

	bool valid = selectedRespite >= 0 && selectedRespite < (int)respites.size();
	const char* preview = valid ? respites[selectedRespite].label.c_str() : "Select a respite";

	ImGui::SetNextItemWidth(260.0f);
	if (ImGui::BeginCombo("##respite", preview))
	{
		for (int i = 0; i < (int)respites.size(); ++i)
		{
			const RespiteChoice& r = respites[i];
			std::string entry = r.label + "  (" + r.id + ")";
			if (ImGui::Selectable(entry.c_str(), i == selectedRespite))
				selectedRespite = i;
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	ImGui::BeginDisabled(!valid);
	if (ImGui::Button("Teleport"))
	{
		pendingTravelId = respites[selectedRespite].id;
		travelRequested.store(true);
	}
	ImGui::EndDisabled();
}
