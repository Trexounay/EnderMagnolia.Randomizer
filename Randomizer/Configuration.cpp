#include "Configuration.h"
#include "Logger.h"
#include "SDK.hpp"
#include "GameManager.h"
#include "DataTableRowInserter.h"

Configuration& Configuration::Instance()
{
	static Configuration instance;
	return instance;
}


bool Configuration::Init(const std::string& path)
{
	std::ifstream file(path);
	if (!file.good())
	{
		Logger::Log(LogLevel::Warning, this, "File not found", path);
		return false;
	}
	configPath = path;
	Logger::Log(this, "Init ok");

	return true;
}

bool Configuration::Load()
{
	checks_to_items.clear();
	ap_items.clear();
	std::ifstream file(configPath);
	if (!file.is_open())
	{
		Logger::Log(LogLevel::Error, this, "File not found", configPath);
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

			std::string key = "DT_ItemStats.ap_" + std::to_string(ap_index++);
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

std::optional<std::string> Configuration::ScoutLocation(const std::string& location) const
{
	auto it = checks_to_items.find(location);
	if (it == checks_to_items.end())
		return std::nullopt;
	return it->second;
}

std::optional<APItemInfo> Configuration::ScoutAPItem(const std::string& location) const
{
	auto it = ap_items.find(location);
	if (it == ap_items.end())
		return std::nullopt;
	return it->second;
}

SDK::TSoftObjectPtr<SDK::UPaperSprite> AchievementIcon(SDK::UDataTable* table, int enumValue)
{
	if (table)
		for (auto It = begin(table->RowMap); It != end(table->RowMap); ++It)
		{
			auto row = (SDK::FAchievementData*)It->Value();
			if ((int)row->Achievement == enumValue)
				return row->UnlockedIcon;
		}
	return {};
}

void Configuration::PopulateDataTable(SDK::UDataTable* table)
{
	if (!table || ap_items.empty())
		return;

	auto source = (SDK::FInventoryItemData*)table->FindRow("hp_up_s");
	if (!source)
		return;

	auto icon = AchievementIcon(GameManager::Instance().Mode()->DataTableAchievements, 21);

	auto crouch = (SDK::FInventoryItemData*)GameManager::Instance().Mode()->DataTableItemAptitudes->FindRow("Crouch");
	icon = crouch->Icon;

	for (auto& kv : ap_items)
	{
		auto keyName = ScoutLocation(kv.first);
		if (!keyName)
			continue;
		auto dot = keyName->find('.');
		std::string rowName = (dot == std::string::npos) ? *keyName : keyName->substr(dot + 1);
		if (table->FindRow(rowName))
			continue;

		const APItemInfo& info = kv.second;
		// maybe unsafe
		auto clone = (SDK::FInventoryItemData*)malloc(sizeof(SDK::FInventoryItemData));
		memcpy(clone, source, sizeof(SDK::FInventoryItemData));

		clone->ItemType = SDK::EInventoryItemType::None;
		clone->Name = SDK::FText::FromString(info.item);
		clone->Description = SDK::FText::FromString("Item for " + info.player);
		clone->FlavorText = SDK::FText::FromString("This is an Archipelago item for " + info.game);
		clone->DescriptionFormatElements.Clear();
		clone->DescriptionStringElements.Clear();
		clone->FlavorTextFormatElements.Clear();
		clone->FlavorStringElements.Clear();
		clone->Icon = icon;

		auto fname = SDK::FName::FromString(rowName);
		if (!DataTableRowInserter::AddRowViaVtable(table, fname, reinterpret_cast<uint8_t*>(clone)))
			free(clone);
	}
}
