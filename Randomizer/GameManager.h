#pragma once
#include "SDK.hpp"
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

namespace GameTables
{
	inline SDK::UDataTable* ItemSpirits() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSpirits; }
	inline SDK::UDataTable* ItemSkills() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSkills; }
	inline SDK::UDataTable* ItemStats() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemStats; }
	inline SDK::UDataTable* ItemAptitudes() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemAptitudes; }
	inline SDK::UDataTable* GameMapTransitions() { return SDK::AGameModeZion::GetDefaultObj()->DataTableGameMapTransitions; }
	inline SDK::UDataTable* RestPoints() { return SDK::AGameModeZion::GetDefaultObj()->DataTableRestPoints; }
}

struct RespiteEntry
{
	std::string id;
	std::string label;
};

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
	void OnItemSourceChanged();
	void OnEventFinished(SDK::UEventAsset* asset);
	void OnActorCleared(SDK::AActor* actor);
	bool SetStartingWeapon();
	bool GrantItem(const std::string& itemName, int count = 1);
	bool KillPlayer();

	std::vector<RespiteEntry> ListRespites() const;
	bool FastTravelTo(const std::string& respiteId);

	bool IsLoading() const;
	int CurrentSaveSlot() const { return currentSaveSlot; }
	SDK::UWorldLoaderSubsystem* Loader() const;
	SDK::USaveSubsystem* SaveSubsystem() const;

	SDK::UWorld* World() const { return SDK::UWorld::GetWorld(); };
	SDK::AGameModeZion* Mode() const { return (SDK::AGameModeZion*)SDK::UWorld::GetWorld()->AuthorityGameMode; };
	SDK::UGameInstanceZion* GameInstance() const { return SDK::UGameInstanceZion::Get(World()); };
	SDK::APlayerControllerZion* Controller() const { return SDK::APlayerControllerZion::Get(World(), 0); };
	SDK::ACharacterZion* Pawn() const { return (SDK::ACharacterZion *)Controller()->Character; };
	const std::string& Zone() const { return currentZone; };

private:
	GameManager() = default;
	~GameManager() = default;
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	void ZoneChanged(std::string oldZone, std::string newZone);
	void ZoneReloaded(std::string zone);

	void GrantAllSpirits();
	void SetSkillCosts();
	void EquipStartingSkill();

	std::string currentZone;
	int currentSaveSlot = -1;
	bool wasLoading = false;

	ItemReplacer* itemReplacer = nullptr;
	DebugTeleporter* teleporter = nullptr;
	bool start_weapon = false;
};
