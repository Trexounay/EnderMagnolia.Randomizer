#include "Configuration.h"
#include "Logger.h"

Configuration& Configuration::Instance()
{
	static Configuration instance;
	return instance;
}

void Configuration::Init()
{
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

void Configuration::OnGameStart()
{
	if (activeSource)
		activeSource->OnGameStart();
}

void Configuration::OnGameSaved()
{
	if (activeSource)
		activeSource->OnGameSaved();
}
