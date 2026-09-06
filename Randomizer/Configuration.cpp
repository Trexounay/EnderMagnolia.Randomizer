#include "Configuration.h"
#include "ArchipelagoSource.h"
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
	dataDirectory += "EnderMagnolia.Randomizer\\";
	CreateDirectoryA(dataDirectory.c_str(), nullptr);
	UseOffline();
}

void Configuration::UseOffline()
{
	bool ok = offlineSource.Load();
	SetSource(&offlineSource);
	Logger::Log(this, "source: offline, load ok=", (int)ok);
}

bool Configuration::NewSeed(const std::string& seed)
{
	APState apState = ArchipelagoSource::Instance().GetState();
	if (apState == APState::Error || apState == APState::Reconnecting)
		ArchipelagoSource::Instance().Disconnect();

	bool ok = offlineSource.NewSeed(seed);
	Logger::Log(this, "new seed generated ok=", (int)ok);
	if (ok && activeSource == &offlineSource)
		GameManager::Instance().OnItemSourceChanged();
	return ok;
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

std::optional<GameMapTransition> Configuration::ScoutTransition(const GameMapTransition& from)
{
	if (!activeSource)
		return std::nullopt;
	return activeSource->ScoutTransition(from);
}
 
std::optional<SDK::FName> Configuration::StartingRestPoint()
{
	int index = Option("starting_respite");
	if (index <= 0)
		return std::nullopt;

	auto& rows = GameTables::RestPoints()->RowMap;
	if (!rows.IsValidIndex(index))
		return std::nullopt;
	return rows[index].Key();
}

std::optional<std::string> Configuration::Seed() const
{
	if (!activeSource)
		return std::nullopt;
	return activeSource->Seed();
}

int Configuration::Option(const std::string& name, int fallback) const
{
	auto local = localOptions.find(name);
	if (local != localOptions.end())
		return local->second;

	if (!activeSource)
		return fallback;
	return activeSource->Option(name, fallback);
}

void Configuration::SetOption(const std::string& name, int value)
{
	localOptions[name] = value;
}

float Configuration::Progress() const
{
	if (!activeSource)
		return 0.0f;
	return activeSource->Progress();
}

void Configuration::ReportCheck(const std::string& location)
{
	if (!activeSource)
		return;

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

void Configuration::Tick()
{
	ArchipelagoSource::Instance().Tick();
	offlineSource.Tick();
}
