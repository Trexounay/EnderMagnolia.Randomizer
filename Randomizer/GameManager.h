#pragma once
#include "SDK.hpp"
#include <map>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace GameTables
{
	inline SDK::UDataTable* ItemSpirits() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSpirits; }
	inline SDK::UDataTable* ItemSkills() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemSkills; }
	inline SDK::UDataTable* ItemStats() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemStats; }
	inline SDK::UDataTable* ItemAptitudes() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemAptitudes; }
	inline SDK::UDataTable* ItemPassives() { return SDK::AGameModeZion::GetDefaultObj()->DataTableItemPassives; }
	inline SDK::UDataTable* GameMapTransitions() { return SDK::AGameModeZion::GetDefaultObj()->DataTableGameMapTransitions; }
	inline SDK::UDataTable* GameMaps() { return SDK::AGameModeZion::GetDefaultObj()->DataTableGameMaps; }
	inline SDK::UDataTable* RestPoints() { return SDK::AGameModeZion::GetDefaultObj()->DataTableRestPoints; }
}

class ItemReplacer;

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
	void SetSkillMenuNavigation(SDK::UWBP_GameMenu_Page_Skill_C* page);
	void SetMultiSkillPerSpirit();
	void RefreshZoneLabels(SDK::UWBP_Map_C* map = nullptr);
	bool GrantItem(const std::string& itemName, int count = 1);
	bool KillPlayer();
	bool GoHome();
	int ClampChapter();

	SDK::UFMODEvent* SwapBGM(SDK::UFMODEvent* event);

	bool IsLoading() const;
	bool IsInGame() const { return !currentZone.empty() && !IsLoading(); }
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
	void GameLoaded();

	void InitSkills();
	void GrantAllSpirits();
	void SetSkillCosts();
	void EquipStartingSkill();

	void SetShopPrices();
	void CapturePassiveCosts();
	void ShufflePassiveCosts();
	void CaptureUpgradeCosts();
	void ShuffleUpgradeCosts();
	void ShuffleBGM();
	void ShuffleSpecialSkills();

	void ExcludeLeversFromZoneCompletion();
	void CreateZoneLabels(SDK::UWBP_Map_C* map);

	void DuplicateDoorSwitches(const std::string& zone);
	void DuplicateDoorSwitch(SDK::ABP_Interactable_Door_Magic_C* original);

	std::string currentZone;
	int currentSaveSlot = -1;
	bool wasLoading = false;
	bool gameLoaded = false;

	struct PassiveCost { int tier; int cost; };
	std::unordered_map<std::string, PassiveCost> vanillaPassiveCosts;
	std::vector<std::pair<SDK::FSkillLevelData*, SDK::TArray<SDK::FSkillMaterialData>>> vanillaUpgradeCosts;
	std::vector<std::pair<SDK::int32, std::wstring>> bgmTracks;
	std::vector<int> bgmShuffle;
	struct SpecialSkill { SDK::FSkillData* data; std::vector<uint8_t> vanilla; };
	std::map<int, std::map<std::string, SpecialSkill>> vanillaSpecials;

	ItemReplacer* itemReplacer = nullptr;
	bool skillsInitialized = false;
	bool multiSkillPatched = false;
	SDK::uint8 multiSkillOriginalBytes[2] = {};
};
