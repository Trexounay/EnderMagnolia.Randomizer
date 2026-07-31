#include "OfflineSource.h"
#include "Logger.h"
#include "CustomItemRegistry.h"
#include "Configuration.h"
#include <fstream>

OfflineSource::OfflineSource(const std::string& path)
	: path(path)
{
}

bool OfflineSource::Load()
{
	checks_to_items.clear();
	ap_items.clear();
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
	Logger::Log(LogLevel::Debug, this, "Found", checks_to_items.size(), "Items", ap_items.size(), "AP");
	return true;
}

void OfflineSource::OnGameStart(bool isNewGame)
{
	PopulateDataTable();
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

void OfflineSource::ReportCheck(const std::string& location)
{
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
