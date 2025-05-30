#include "Configuration.h"
#include "Logger.h"

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
	std::ifstream file(configPath);
	if (!file.is_open())
	{
		Logger::Log(LogLevel::Error, this, "File not found", configPath);
		return false;
	}

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

		location.erase(0, location.find_first_not_of(" \t"));
		location.erase(location.find_last_not_of(" \t") + 1);
		item.erase(0, item.find_first_not_of(" \t"));
		item.erase(item.find_last_not_of(" \t") + 1);

		checks_to_items[location] = item;
	}
	Logger::Log(LogLevel::Debug, this, "Found", checks_to_items.size(), "Items");
	return true;
}

std::optional<std::string> Configuration::ScoutLocation(const std::string& location) const
{
	auto it = checks_to_items.find(location);
	if (it == checks_to_items.end())
		return std::nullopt;
	return it->second;
}