#include "GameManager.h"
#include "Configuration.h"
#include "Logger.h"
#include "ItemReplacer.h"
#include "DebugTeleporter.h"
#include "SDK.hpp"

GameManager& GameManager::Instance()
{
	static GameManager instance;
	return instance;
}

SDK::UWorldLoaderSubsystem* GameManager::Loader() const
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	if (!World) return nullptr;
	return (SDK::UWorldLoaderSubsystem*)SDK::USubsystemBlueprintLibrary::GetGameInstanceSubsystem(World, SDK::UWorldLoaderSubsystem::StaticClass());

}

bool GameManager::IsLoading() const
{
	auto loader = Loader();
	return !loader || loader->IsLoading(true);
}

void GameManager::Init()
{
	Logger::Log(this, "Init ok");
	itemReplacer = new ItemReplacer();
	teleporter = new DebugTeleporter();
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
		itemReplacer->Tick(zone);
		// teleport to every room/zone in the game 
		//teleporter->Tick();
	}
}

void GameManager::ZoneChanged(UC::FString oldZone, UC::FString newZone)
{
	this->currentZone = newZone;
	Logger::Log(this, "Zone Changed", oldZone.ToString(), "->", newZone.ToString());
	if (newZone.IsValid())
		itemReplacer->ZoneChanged(oldZone, newZone);
}
