#pragma once
#include "SDK.hpp"
#include <optional>
#include <unordered_map>

class GameManager
{
public:
	static GameManager& Instance();
	void Init();

	void PlayerCameraManager_ReceiveTick(const SDK::APlayerCameraManagerZion* cameraManager);
	bool IsLoading();

	SDK::UWorld* World() const { return SDK::UWorld::GetWorld(); };
	SDK::AGameModeZion* Mode() const { return (SDK::AGameModeZion*)World()->AuthorityGameMode; };
	SDK::UGameInstanceZion* GameInstance() const { return SDK::UGameInstanceZion::Get(World()); };
	SDK::APlayerControllerZion* Controller() const { return SDK::APlayerControllerZion::Get(World(), 0); };
	SDK::ACharacterZion* Pawn() const { return (SDK::ACharacterZion *)Controller()->Character; };


private:
	GameManager() = default;
	~GameManager() = default;
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	void ZoneChanged(const UC::FString oldZone, UC::FString newZone);
	UC::FString currentZone;

	const std::unordered_map<std::string, SDK::UDataTable*> GetDatatables() const;
	std::optional<SDK::FDataTableRowHandle> FromItemName(std::string itemName) const;

	void ReplaceInteractableAddItems();

	static const std::unordered_map<std::string, SDK::UDataTable*> dataTables;
};

