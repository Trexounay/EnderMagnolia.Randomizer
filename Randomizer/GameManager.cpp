#include "GameManager.h"
#include "Configuration.h"
#include "Logger.h"
#include "ItemReplacer.h"
#include "SDK.hpp"

GameManager& GameManager::Instance()
{
	static GameManager instance;
	return instance;
}

bool GameManager::IsLoading()
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	if (!World) return true;
	auto loader = (SDK::UWorldLoaderSubsystem*)SDK::USubsystemBlueprintLibrary::GetGameInstanceSubsystem(World, SDK::UWorldLoaderSubsystem::StaticClass());
	return !loader || loader->IsLoading(true);
}

void GameManager::Init()
{
	Logger::Log(this, "Init ok");
	itemReplacer = new ItemReplacer();
}

void GameManager::OnGameStarted()
{
	Logger::Log(this, "New Game Started", (int)(GameInstance()->GetLaunchGameIntent()));
	// read seed
	Configuration::Instance().Load();
	this->currentZone = UC::FString(L"");
}

void GameManager::OnReceiveTick()
{
	auto zoneSystem = SDK::UZoneSystemComponent::Get(World());
	if (zoneSystem && !IsLoading())
	{
		auto zone = zoneSystem->GetActiveZoneLevelName();
		if (zone != this->currentZone && (zone.IsValid() || this->currentZone.IsValid()))
			this->ZoneChanged(this->currentZone, zone);
	}
}

void GameManager::ZoneChanged(UC::FString oldZone, UC::FString newZone)
{
	this->currentZone = newZone;
	Logger::Log(LogLevel::Debug, this, "Zone Changed", oldZone.ToString(), "->", newZone.ToString());
	if (newZone.IsValid())
		itemReplacer->ZoneChanged(oldZone, newZone);
}
