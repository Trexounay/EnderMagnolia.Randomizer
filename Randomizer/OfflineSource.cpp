#include "OfflineSource.h"
#include "Logger.h"
#include "CustomItemRegistry.h"
#include "Configuration.h"
#include "GameManager.h"
#include "GUI.h"
#include "ItemReplacer.h"
#include "SDK.hpp"
#include <fstream>

OfflineSource::OfflineSource(const std::string& path)
	: path(path)
{
}

std::optional<std::string> OfflineSource::Seed() const
{
	if (seedName.empty())
		return std::nullopt;
	return seedName;
}

bool OfflineSource::NewSeed(const std::string& seed)
{
	auto& config = Configuration::Instance();
	std::string exe = config.DataPath("GenerateSeed.exe");
	std::string workingDir = config.DataPath("");

	STARTUPINFOA startup = {};
	startup.cb = sizeof(startup);
	startup.dwFlags = STARTF_USESHOWWINDOW;
	startup.wShowWindow = SW_HIDE;

	PROCESS_INFORMATION process = {};
	std::string command = "\"" + exe + "\"";
	if (!seed.empty())
		command += " --seed " + seed;
	if (!CreateProcessA(nullptr, command.data(), nullptr, nullptr, FALSE,
		CREATE_NO_WINDOW, nullptr, workingDir.c_str(), &startup, &process))
	{
		Logger::Log(LogLevel::Error, this, "cannot launch", exe);
		return false;
	}

	WaitForSingleObject(process.hProcess, INFINITE);

	DWORD exitCode = 0;
	GetExitCodeProcess(process.hProcess, &exitCode);
	CloseHandle(process.hProcess);
	CloseHandle(process.hThread);

	if (exitCode != 0)
	{
		std::ifstream error(config.DataPath("generate_error.txt"));
		std::string details((std::istreambuf_iterator<char>(error)), std::istreambuf_iterator<char>());
		Logger::Log(LogLevel::Error, this, "generation failed", details);
		return false;
	}

	return Load();
}

bool OfflineSource::Load()
{
	IndexChecks();

	checks_to_items.clear();
	ap_items.clear();
	options.clear();
	transitions.clear();
	start_inventory.clear();
	pending_start_items.clear();
	seedName.clear();
	auto fullPath = Configuration::Instance().DataPath(path);
	std::ifstream file(fullPath);
	if (!file.is_open())
	{
		Logger::Log(LogLevel::Error, this, "File not found", fullPath);
		return false;
	}

	auto trim = [](std::string& s)
	{
		auto a = s.find_first_not_of(" \t");
		if (a == std::string::npos) { s.clear(); return; }
		s.erase(0, a);
		s.erase(s.find_last_not_of(" \t") + 1);
	};

	int ap_index = 0;
	std::string line;
	while (std::getline(file, line))
	{
		if (line.empty() || line[0] == '#')
			continue;

		size_t separator = line.find(':');
		if (separator == std::string::npos)
			continue;

		std::string location = line.substr(0, separator);
		std::string item = line.substr(separator + 1);
		trim(location);
		trim(item);

		if (location == "seed")
		{
			seedName = item;
			continue;
		}

		if (location.rfind("option.", 0) == 0)
		{
			options[location.substr(7)] = std::stoi(item);
			continue;
		}

		if (location.rfind("start.", 0) == 0)
		{
			start_inventory.push_back(item);
			continue;
		}

		if (location.rfind("er.", 0) == 0)
		{
			size_t fromDot = location.find('.', 3);
			size_t toDot = item.find('.');
			GameMapTransition from{ SDK::FName::FromString(location.substr(3, fromDot - 3)),
				SDK::FName::FromString(location.substr(fromDot + 1)) };
			GameMapTransition to{ SDK::FName::FromString(item.substr(0, toDot)),
				SDK::FName::FromString(item.substr(toDot + 1)) };
			transitions[from] = to;
			continue;
		}

		size_t p1 = item.find('|');
		if (p1 != std::string::npos)
		{
			size_t p2 = item.find('|', p1 + 1);
			APItemInfo info;
			info.item = item.substr(0, p1);
			info.player = (p2 == std::string::npos) ? "" : item.substr(p1 + 1, p2 - p1 - 1);
			info.game = (p2 == std::string::npos) ? "" : item.substr(p2 + 1);
			trim(info.item);
			trim(info.player);
			trim(info.game);

			std::string key = "custom.ap_" + std::to_string(ap_index++);
			ap_items[location] = info;
			checks_to_items[location] = key;
		}
		else
		{
			checks_to_items[location] = item;
		}
	}
	return true;
}

void OfflineSource::IndexChecks()
{
	if (!actor_checks.empty())
		return;

	std::unordered_map<std::string, SDK::FName> names;
	auto name = [&](const std::string& text)
	{
		auto known = names.find(text);
		if (known == names.end())
			known = names.emplace(text, SDK::FName::FromString(text)).first;
		return known->second;
	};

	std::ifstream file(Configuration::Instance().DataPath("apids.txt"));
	std::string line;
	while (std::getline(file, line))
	{
		size_t separator = line.find(':');
		if (separator == std::string::npos)
			continue;
		if (std::strtoll(line.c_str(), nullptr, 10) >= 1000)
			break;

		std::string location = line.substr(separator + 1);
		location.erase(location.find_last_not_of(" \t\r") + 1);

		if (location == "starting_skill")
			continue;

		size_t dot = location.find('.');
		if (location.rfind("DT_Shop_Main.", 0) == 0)
			++shop_checks;
		else if (location.rfind("EVT_", 0) == 0)
			event_checks.insert(name(location.substr(0, dot)));
		else
			actor_checks[name(location.substr(0, dot))].insert(name(location.substr(dot + 1)));
	}
}

float OfflineSource::Progress() const
{
	auto& game = GameManager::Instance();
	if (!game.IsInGame())
		return 0.0f;

	auto controller = game.Controller();
	auto clearManager = SDK::UClearManagerComponent::Get(game.World());

	int total = shop_checks + (int)event_checks.size() + 1;
	for (const auto& zone : actor_checks)
		total += (int)zone.second.size();

	int cleared = 0;

	auto& clearedActors = clearManager->ClearedSavedActors;
	for (int z = 0; z < clearedActors.NumAllocated(); ++z)
	{
		if (!clearedActors.IsValidIndex(z))
			continue;

		auto zone = actor_checks.find(clearedActors[z].Key());
		if (zone == actor_checks.end())
			continue;

		auto& actors = clearedActors[z].Value().Set;
		for (int a = 0; a < actors.NumAllocated(); ++a)
			if (actors.IsValidIndex(a) && zone->second.count(actors[a]))
				++cleared;
	}

	auto& clearedEvents = controller->ClearedEvents;
	for (int e = 0; e < clearedEvents.NumAllocated(); ++e)
	{
		if (!clearedEvents.IsValidIndex(e))
			continue;

		if (event_checks.count(clearedEvents[e]))
			++cleared;
	}

	int bought = 0;
	auto& histories = controller->ShopInfoComponent->ShopHistories;
	for (int h = 0; h < histories.NumAllocated(); ++h)
	{
		if (!histories.IsValidIndex(h))
			continue;

		auto& items = histories[h].Value().Items;
		for (int i = 0; i < items.NumAllocated(); ++i)
			if (items.IsValidIndex(i))
				bought += items[i].Value();
	}
	cleared += bought < shop_checks ? bought : shop_checks;

	if (controller->SkillComponent->HasAnyEquippedSkill())
		++cleared;

	return (float)cleared / total;
}

void OfflineSource::OnGameStart(bool isNewGame)
{
	PopulateDataTable();

	pending_start_items.clear();
	if (isNewGame)
		pending_start_items.assign(start_inventory.begin(), start_inventory.end());
}

void OfflineSource::Tick()
{
	DeliverStartInventory();
}

void OfflineSource::DeliverStartInventory()
{
	if (GameManager::Instance().IsLoading())
		return;

	while (!pending_start_items.empty())
	{
		const std::string& item = pending_start_items.front();
		if (!GameManager::Instance().GrantItem(item, ItemReplacer::CurrencyCount(item)))
			return;

		Logger::Log(LogLevel::Debug, this, "granted starting item", item);
		GUI::Instance().NotifyItem(item, "Starting item");
		pending_start_items.pop_front();
	}
}

void OfflineSource::OnGameSaved()
{
}

std::optional<std::string> OfflineSource::ScoutLocation(const std::string& location)
{
	auto it = checks_to_items.find(location);
	if (it == checks_to_items.end())
		return std::nullopt;
	return it->second;
}

std::optional<GameMapTransition> OfflineSource::ScoutTransition(const GameMapTransition& from)
{
	auto it = transitions.find(from);
	if (it == transitions.end())
		return std::nullopt;
	return it->second;
}

void OfflineSource::ReportCheck(const std::string& location)
{
}

int OfflineSource::Option(const std::string& name, int fallback) const
{
	auto it = options.find(name);
	return it == options.end() ? fallback : it->second;
}

void OfflineSource::PopulateDataTable()
{
	for (auto& kv : ap_items)
	{
		auto keyName = ScoutLocation(kv.first);
		if (!keyName)
			continue;

		const APItemInfo& info = kv.second;
		RandomizerItemDef def;
		def.id = *keyName;
		def.name = info.item;
		def.description = "Item for " + info.player;
		def.flavorText = "This is an Archipelago item for " + info.game;
		CustomItemRegistry::Instance().CreateItem(def);
	}
}
