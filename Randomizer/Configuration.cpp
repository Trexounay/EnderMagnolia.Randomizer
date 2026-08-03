#include "Configuration.h"
#include "GameManager.h"
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
	SetSource(&offlineSource);
	Logger::Log(this, "source: offline, load ok=", (int)ok);
}

void Configuration::UseArchipelago()
{
	SetSource(&ArchipelagoSource::Instance());
	Logger::Log(this, "source: archipelago");
}

void Configuration::SetSource(IItemSource* source)
{
	if (activeSource == source)
		return;

	bool hadSource = activeSource != nullptr;
	activeSource = source;
	if (hadSource)
		GameManager::Instance().OnItemSourceChanged();
}

std::optional<std::string> Configuration::ScoutLocation(const std::string& location)
{
	if (!activeSource)
		return std::nullopt;
	return activeSource->ScoutLocation(location);
}

std::optional<std::string> Configuration::StartingRestPoint()
{
	return ScoutLocation("starting_respite");
}

std::optional<std::string> Configuration::Seed() const
{
	if (!activeSource)
		return std::nullopt;
	return activeSource->Seed();
}

int Configuration::Option(const std::string& name, int fallback) const
{
	if (!activeSource)
		return fallback;
	return activeSource->Option(name, fallback);
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
