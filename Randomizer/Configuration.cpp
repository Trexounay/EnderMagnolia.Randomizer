#include "Configuration.h"
#include "Logger.h"

Configuration& Configuration::Instance()
{
	static Configuration instance;
	return instance;
}

std::string Configuration::DataPath(const std::string& name) const
{
	return dataDirectory + name;
}

void Configuration::Init(const std::string& modulePath)
{
	auto slash = modulePath.find_last_of("\\/");
	dataDirectory = slash == std::string::npos ? "" : modulePath.substr(0, slash + 1);
	UseOffline();
}

void Configuration::UseOffline()
{
	bool ok = offlineSource.Load();
	activeSource = &offlineSource;
	Logger::Log(this, "source: offline, load ok=", (int)ok);
}

void Configuration::UseArchipelago()
{
	activeSource = &ArchipelagoSource::Instance();
	Logger::Log(this, "source: archipelago");
}

std::optional<std::string> Configuration::ScoutLocation(const std::string& location)
{
	if (!activeSource)
		return std::nullopt;
	return activeSource->ScoutLocation(location);
}

void Configuration::ReportCheck(const std::string& location)
{
	if (activeSource)
		activeSource->ReportCheck(location);
}

void Configuration::OnGameStart(bool isNewGame)
{
	if (activeSource)
		activeSource->OnGameStart(isNewGame);
}

void Configuration::OnGameSaved()
{
	if (activeSource)
		activeSource->OnGameSaved();
}
