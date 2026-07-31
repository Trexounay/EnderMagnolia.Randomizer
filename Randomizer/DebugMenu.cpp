#include "DebugMenu.h"
#include "GameManager.h"
#include "Logger.h"
#include "SDK/WBP_DebugMenu_Page_Events_classes.hpp"
#include "imgui.h"
#include <algorithm>
#include <cctype>
#include <set>

namespace
{
	const ImVec4 kColorCleared(0.3f, 0.85f, 0.3f, 1.0f);
	const ImVec4 kColorNotCleared(0.6f, 0.6f, 0.6f, 1.0f);

	bool MatchesFilter(const std::string& text, const char* filter)
	{
		if (!filter || !filter[0])
			return true;

		auto lower = [](const std::string& s)
		{
			std::string out = s;
			std::transform(out.begin(), out.end(), out.begin(),
				[](unsigned char c) { return (char)std::tolower(c); });
			return out;
		};
		return lower(text).find(lower(filter)) != std::string::npos;
	}

	/* Draws the filter field, then keeps the selection on a matching entry.
	   Returns true when the selection had to move. */
	template<typename LabelFn>
	bool DrawFilter(const char* id, const char* hint, char* filter, size_t filterSize,
		int count, int& selected, LabelFn label)
	{
		ImGui::SetNextItemWidth(260.0f);
		ImGui::InputTextWithHint(id, hint, filter, filterSize);

		if (selected >= 0 && selected < count && MatchesFilter(label(selected), filter))
			return false;

		for (int i = 0; i < count; ++i)
		{
			if (MatchesFilter(label(i), filter))
			{
				selected = i;
				return true;
			}
		}
		selected = -1;
		return true;
	}

	std::vector<DebugMenu::RespiteChoice> ListRespites()
	{
		std::vector<DebugMenu::RespiteChoice> result;
		auto table = GameTables::RestPoints();
		if (!table)
			return result;

		for (auto row : table->RowMap)
		{
			auto data = (SDK::FRestPointData*)(row.Second);
			DebugMenu::RespiteChoice entry;
			entry.id = row.First.GetRawString();
			entry.label = data->Name.TextData ? data->Name.ToString() : entry.id;
			result.push_back(entry);
		}

		std::sort(result.begin(), result.end(),
			[](const DebugMenu::RespiteChoice& a, const DebugMenu::RespiteChoice& b) { return a.id < b.id; });
		return result;
	}

	bool FastTravelTo(const std::string& respiteId)
	{
		GameManager& gm = GameManager::Instance();
		auto mode = gm.Mode();
		if (!mode || gm.IsLoading())
			return false;

		SDK::FName rowName;
		if (!GameTables::RestPoints()->FindRow(respiteId, &rowName))
		{
			Logger::Log(LogLevel::Warning, "DebugMenu", "no respite row", respiteId);
			return false;
		}

		Logger::Log("DebugMenu", "fast travel to respite", respiteId);
		mode->FastTravel(rowName);
		return true;
	}

	std::vector<DebugMenu::MapChoice> ListMaps()
	{
		std::vector<DebugMenu::MapChoice> result;
		auto table = GameTables::GameMapTransitions();
		if (!table)
			return result;

		std::set<std::string> seen;
		for (auto data : table->RowMap)
		{
			auto transData = (SDK::FMapTransitionRowData*)(data.Second);
			for (auto trans : transData->TransitionSpawnPoints)
			{
				std::string id = trans.GameMapID.RowName.GetRawString();
				if (id.empty() || !seen.insert(id).second)
					continue;
				result.push_back({ id, trans.PlayerStartTag.GetRawString() });
			}
		}

		std::sort(result.begin(), result.end(),
			[](const DebugMenu::MapChoice& a, const DebugMenu::MapChoice& b) { return a.id < b.id; });
		return result;
	}

	std::string ZoneName(SDK::AStaticVolume_Zone* zone)
	{
		return zone->ZoneLevel.ObjectID.AssetPath.AssetName.GetRawString();
	}

	std::vector<DebugMenu::ZoneChoice> ListZones()
	{
		std::vector<DebugMenu::ZoneChoice> result;
		GameManager& gm = GameManager::Instance();

		UC::TArray<SDK::AActor*> actors;
		SDK::UGameplayStatics::GetAllActorsOfClass(gm.World(), SDK::AStaticVolume_Zone::StaticClass(), &actors);
		for (auto actor : actors)
		{
			auto name = ZoneName(static_cast<SDK::AStaticVolume_Zone*>(actor));
			if (!name.empty())
				result.push_back({ name });
		}

		std::sort(result.begin(), result.end(),
			[](const DebugMenu::ZoneChoice& a, const DebugMenu::ZoneChoice& b) { return a.name < b.name; });
		result.erase(std::unique(result.begin(), result.end(),
			[](const DebugMenu::ZoneChoice& a, const DebugMenu::ZoneChoice& b) { return a.name == b.name; }),
			result.end());
		return result;
	}

	bool OpenMap(const std::string& mapId, const std::string& startTag)
	{
		GameManager& gm = GameManager::Instance();
		auto loader = gm.Loader();
		if (!loader || gm.IsLoading())
			return false;

		SDK::FDataTableRowHandle handle;
		handle.DataTable = GameTables::GameMaps();
		if (!handle.DataTable || !handle.DataTable->FindRow(mapId, &handle.RowName))
		{
			Logger::Log(LogLevel::Warning, "DebugMenu", "no game map row", mapId);
			return false;
		}

		Logger::Log("DebugMenu", "open map", mapId, "start", startTag);
		auto fadein = SDK::FFadeDescriptionData();
		auto fadeout = SDK::FFadeDescriptionData();
		loader->OpenGameMap(handle, SDK::FName::FromString(startTag), true, fadein, fadeout);
		return true;
	}

	std::vector<DebugMenu::EventChoice> ListEvents()
	{
		std::vector<DebugMenu::EventChoice> result;
		auto pageClass = SDK::UWBP_DebugMenu_Page_Events_C::StaticClass();
		if (!pageClass)
			return result;

		auto page = static_cast<SDK::UWBP_DebugMenu_Page_Events_C*>(pageClass->DefaultObject);
		if (!page)
			return result;

		for (auto& soft : page->EventAssets)
		{
			auto name = soft.ObjectID.AssetPath.AssetName.GetRawString();
			if (!name.empty())
				result.push_back({ name, soft });
		}

		std::sort(result.begin(), result.end(),
			[](const DebugMenu::EventChoice& a, const DebugMenu::EventChoice& b) { return a.id < b.id; });
		result.erase(std::unique(result.begin(), result.end(),
			[](const DebugMenu::EventChoice& a, const DebugMenu::EventChoice& b) { return a.id == b.id; }),
			result.end());
		return result;
	}

	SDK::UEventAsset* LoadEventAsset(const SDK::TSoftObjectPtr<SDK::UEventAsset>& soft)
	{
		auto ptr = static_cast<SDK::TSoftObjectPtr<SDK::UObject>>(soft);
		return static_cast<SDK::UEventAsset*>(SDK::UKismetSystemLibrary::LoadAsset_Blocking(ptr));
	}

	bool IsEventCleared(const DebugMenu::EventChoice& event)
	{
		auto controller = GameManager::Instance().Controller();
		if (!controller)
			return false;
		return controller->IsSoftEventCleared(event.asset);
	}

	bool AddEvent(const DebugMenu::EventChoice& event)
	{
		auto controller = GameManager::Instance().Controller();
		if (!controller)
			return false;

		auto asset = LoadEventAsset(event.asset);
		if (!asset)
		{
			Logger::Log(LogLevel::Warning, "DebugMenu", "cannot load event asset", event.id);
			return false;
		}

		controller->MarkEventAsCleared(asset);
		Logger::Log("DebugMenu", "add event", event.id,
			"-> cleared", (int)controller->IsSoftEventCleared(event.asset));
		return true;
	}

	bool RemoveEvent(const DebugMenu::EventChoice& event)
	{
		auto controller = GameManager::Instance().Controller();
		if (!controller || !controller->IsSoftEventCleared(event.asset))
			return false;

		// The set holds the runtime EventId, which is not the asset name. Find the
		// entry whose removal flips IsSoftEventCleared, then blank it in place.
		auto& set = controller->ClearedEvents;
		for (int i = 0; i < set.NumAllocated(); ++i)
		{
			if (!set.IsValidIndex(i))
				continue;

			SDK::FName previous = set[i];
			set[i] = SDK::FName();
			if (!controller->IsSoftEventCleared(event.asset))
			{
				Logger::Log("DebugMenu", "remove event", event.id, "| id was", previous.GetRawString());
				return true;
			}
			set[i] = previous;
		}

		Logger::Log(LogLevel::Warning, "DebugMenu", "event id not found in ClearedEvents", event.id);
		return false;
	}

	bool TeleportToZone(const std::string& zoneName)
	{
		GameManager& gm = GameManager::Instance();
		if (gm.IsLoading())
			return false;

		auto pawn = gm.Pawn();
		if (!pawn)
			return false;

		UC::TArray<SDK::AActor*> actors;
		SDK::UGameplayStatics::GetAllActorsOfClass(gm.World(), SDK::AStaticVolume_Zone::StaticClass(), &actors);
		for (auto actor : actors)
		{
			if (ZoneName(static_cast<SDK::AStaticVolume_Zone*>(actor)) != zoneName)
				continue;

			auto target = actor->GetTransform().Translation;
			Logger::Log("DebugMenu", "teleport to zone", zoneName);
			pawn->K2_TeleportTo(target, SDK::FRotator());
			return true;
		}

		Logger::Log(LogLevel::Warning, "DebugMenu", "zone not in current map", zoneName);
		return false;
	}
}

DebugMenu& DebugMenu::Instance()
{
	static DebugMenu instance;
	return instance;
}

void DebugMenu::Tick()
{
	TickFastTravel();
	TickZoneTravel();
	TickEvents();
}

void DebugMenu::Draw()
{
	std::string title = "Debug";
	{
		std::lock_guard<std::mutex> lock(zoneMutex);
		if (!currentZone.empty())
			title += " - " + currentZone;
	}
	title += "###rando_debug";

	ImGui::Begin(title.c_str());

	ImGui::SeparatorText("Teleport");
	DrawFastTravel();
	DrawZoneTravel();

	ImGui::SeparatorText("Events");
	DrawEvents();

	ImGui::End();
}

void DebugMenu::TickFastTravel()
{
	if (travelRequested.exchange(false))
	{
		std::string id;
		{
			std::lock_guard<std::mutex> lock(respiteMutex);
			id = pendingTravelId;
		}
		if (!id.empty())
			FastTravelTo(id);
	}

	if (!GameManager::Instance().IsLoading())
	{
		std::lock_guard<std::mutex> lock(respiteMutex);
		if (respites.empty())
		{
			respites = ListRespites();
			if (!respites.empty())
				selectedRespite = 0;
		}
	}
}

void DebugMenu::TickZoneTravel()
{
	if (mapRequested.exchange(false))
	{
		std::string id, startTag;
		{
			std::lock_guard<std::mutex> lock(zoneMutex);
			id = pendingMapId;
			startTag = pendingMapStartTag;
		}
		if (!id.empty())
			OpenMap(id, startTag);
	}

	if (zoneRequested.exchange(false))
	{
		std::string name;
		{
			std::lock_guard<std::mutex> lock(zoneMutex);
			name = pendingZoneName;
		}
		if (!name.empty())
			TeleportToZone(name);
	}

	if (GameManager::Instance().IsLoading())
		return;

	std::lock_guard<std::mutex> lock(zoneMutex);
	if (maps.empty())
	{
		maps = ListMaps();
		if (!maps.empty())
			selectedMap = 0;
	}

	const std::string& zone = GameManager::Instance().Zone();
	currentZone = zone;
	if (zone != zonesForZone)
	{
		zonesForZone = zone;
		zones = ListZones();
		selectedZone = zones.empty() ? -1 : 0;
	}
}

void DebugMenu::DrawZoneTravel()
{
	std::lock_guard<std::mutex> lock(zoneMutex);

	DrawFilter("##mapFilter", "map", mapFilter, sizeof(mapFilter),
		(int)maps.size(), selectedMap, [this](int i) { return maps[i].id; });

	bool mapValid = selectedMap >= 0 && selectedMap < (int)maps.size();
	const char* mapPreview = mapValid ? maps[selectedMap].id.c_str() : "No match";

	ImGui::SetNextItemWidth(260.0f);
	if (ImGui::BeginCombo("##map", mapPreview))
	{
		for (int i = 0; i < (int)maps.size(); ++i)
		{
			if (!MatchesFilter(maps[i].id, mapFilter))
				continue;
			if (ImGui::Selectable(maps[i].id.c_str(), i == selectedMap))
				selectedMap = i;
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	ImGui::BeginDisabled(!mapValid);
	if (ImGui::Button("Go map"))
	{
		pendingMapId = maps[selectedMap].id;
		pendingMapStartTag = maps[selectedMap].startTag;
		mapRequested.store(true);
	}
	ImGui::EndDisabled();

	DrawFilter("##zoneFilter", "zone", zoneFilter, sizeof(zoneFilter),
		(int)zones.size(), selectedZone, [this](int i) { return zones[i].name; });

	bool zoneValid = selectedZone >= 0 && selectedZone < (int)zones.size();
	const char* zonePreview = zoneValid ? zones[selectedZone].name.c_str() : "No match";

	ImGui::SetNextItemWidth(260.0f);
	if (ImGui::BeginCombo("##zone", zonePreview))
	{
		for (int i = 0; i < (int)zones.size(); ++i)
		{
			if (!MatchesFilter(zones[i].name, zoneFilter))
				continue;
			if (ImGui::Selectable(zones[i].name.c_str(), i == selectedZone))
				selectedZone = i;
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	ImGui::BeginDisabled(!zoneValid);
	if (ImGui::Button("Go zone"))
	{
		pendingZoneName = zones[selectedZone].name;
		zoneRequested.store(true);
	}
	ImGui::EndDisabled();
}

void DebugMenu::TickEvents()
{
	int action = eventAction.exchange(0);

	if (GameManager::Instance().IsLoading())
		return;

	std::lock_guard<std::mutex> lock(eventMutex);
	bool justListed = false;
	if (events.empty())
	{
		events = ListEvents();
		if (!events.empty())
		{
			selectedEvent = 0;
			justListed = true;
		}
	}

	bool valid = selectedEvent >= 0 && selectedEvent < (int)events.size();
	if (action != 0 && valid)
	{
		if (action > 0)
			AddEvent(events[selectedEvent]);
		else
			RemoveEvent(events[selectedEvent]);
	}

	if (valid)
		selectedEventCleared = IsEventCleared(events[selectedEvent]);

	if (justListed || action != 0 || eventListOpen.load())
	{
		for (EventChoice& event : events)
			event.cleared = IsEventCleared(event);
	}
}

void DebugMenu::DrawEvents()
{
	std::lock_guard<std::mutex> lock(eventMutex);
	if (events.empty())
	{
		ImGui::TextDisabled("Events: none found");
		return;
	}

	DrawFilter("##eventFilter", "event", eventFilter, sizeof(eventFilter),
		(int)events.size(), selectedEvent, [this](int i) { return events[i].id; });

	bool valid = selectedEvent >= 0 && selectedEvent < (int)events.size();
	const char* preview = valid ? events[selectedEvent].id.c_str() : "No match";

	ImGui::SetNextItemWidth(260.0f);
	bool open = ImGui::BeginCombo("##event", preview);
	eventListOpen.store(open);
	if (open)
	{
		for (int i = 0; i < (int)events.size(); ++i)
		{
			if (!MatchesFilter(events[i].id, eventFilter))
				continue;
			ImGui::PushStyleColor(ImGuiCol_Text, events[i].cleared ? kColorCleared : kColorNotCleared);
			if (ImGui::Selectable(events[i].id.c_str(), i == selectedEvent))
				selectedEvent = i;
			ImGui::PopStyleColor();
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	ImGui::TextColored(selectedEventCleared ? kColorCleared : kColorNotCleared,
		selectedEventCleared ? "[cleared]" : "[not cleared]");

	ImGui::BeginDisabled(!valid);
	if (ImGui::Button("Add event"))
		eventAction.store(1);
	ImGui::SameLine();
	if (ImGui::Button("Remove event"))
		eventAction.store(-1);
	ImGui::EndDisabled();
}

void DebugMenu::DrawFastTravel()
{
	std::lock_guard<std::mutex> lock(respiteMutex);
	if (respites.empty())
	{
		ImGui::TextDisabled("Respites: waiting for game...");
		return;
	}

	auto label = [this](int i) { return respites[i].label + "  (" + respites[i].id + ")"; };
	DrawFilter("##respiteFilter", "respite", respiteFilter, sizeof(respiteFilter),
		(int)respites.size(), selectedRespite, label);

	bool valid = selectedRespite >= 0 && selectedRespite < (int)respites.size();
	std::string preview = valid ? label(selectedRespite) : "No match";

	ImGui::SetNextItemWidth(260.0f);
	if (ImGui::BeginCombo("##respite", preview.c_str()))
	{
		for (int i = 0; i < (int)respites.size(); ++i)
		{
			std::string entry = label(i);
			if (!MatchesFilter(entry, respiteFilter))
				continue;
			if (ImGui::Selectable(entry.c_str(), i == selectedRespite))
				selectedRespite = i;
		}
		ImGui::EndCombo();
	}

	ImGui::SameLine();
	ImGui::BeginDisabled(!valid);
	if (ImGui::Button("Go respite"))
	{
		pendingTravelId = respites[selectedRespite].id;
		travelRequested.store(true);
	}
	ImGui::EndDisabled();
}
