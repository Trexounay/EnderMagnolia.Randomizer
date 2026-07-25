#pragma once
#include "SDK.hpp"
#include <optional>
#include <unordered_map>

namespace GameTables
{
	inline SDK::UDataTable* ItemSpirits() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSpirits; }
	inline SDK::UDataTable* ItemSkills() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSkills; }
	inline SDK::UDataTable* ItemStats() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemStats; }
	inline SDK::UDataTable* ItemAptitudes() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemAptitudes; }
	inline SDK::UDataTable* GameMapTransitions() { return SDK::AGameModeZion::GetDefaultObj()->DataTableGameMapTransitions; }
}

class ItemReplacer;
class DebugTeleporter;

class GameManager
{
public:
	static GameManager& Instance();
	void Init();

	void Tick();
	void OnGameStart(int slot, bool isNewGame);
	void OnGameSaved();
	void OnEventFinished(SDK::UEventAsset* asset);
	void OnActorCleared(SDK::AActor* actor);
	bool SetStartingWeapon();
	bool GrantItem(const std::string& itemName, int count = 1);
	bool KillPlayer();

	bool IsLoading() const;
	int CurrentSaveSlot() const { return currentSaveSlot; }
	SDK::UWorldLoaderSubsystem* Loader() const;
	SDK::USaveSubsystem* SaveSubsystem() const;

	SDK::UWorld* World() const { return SDK::UWorld::GetWorld(); };
	SDK::AGameModeZion* Mode() const { return (SDK::AGameModeZion*)SDK::UWorld::GetWorld()->AuthorityGameMode; };
	SDK::UGameInstanceZion* GameInstance() const { return SDK::UGameInstanceZion::Get(World()); };
	SDK::APlayerControllerZion* Controller() const { return SDK::APlayerControllerZion::Get(World(), 0); };
	SDK::ACharacterZion* Pawn() const { return (SDK::ACharacterZion *)Controller()->Character; };
	const UC::FString& Zone() const { return currentZone; };

private:
	GameManager() = default;
	~GameManager() = default;
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	void ZoneChanged(const UC::FString oldZone, UC::FString newZone);

	void GrantAllSpirits();
	void SetSkillCosts();
	void EquipStartingSkill();

	UC::FString currentZone;
	int currentSaveSlot = -1;

	ItemReplacer* itemReplacer = nullptr;
	DebugTeleporter* teleporter = nullptr;
	bool start_weapon = false;
};
