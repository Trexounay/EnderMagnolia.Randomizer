#include "GameManager.h"
#include "HookManager.h"
#include "Configuration.h"
#include "Logger.h"
#include "SDK.hpp"


const std::unordered_map<std::string, SDK::UDataTable*> GameManager::GetDatatables() const
{
	auto Mode = this->Mode();
	std::vector<SDK::UDataTable*> datatables =
	{
		Mode->DataTableItemCurrencies,
		Mode->DataTableItemAptitudes,
		Mode->DataTableItemSpirits,
		Mode->DataTableItemSkills,
		Mode->DataTableItemStats,
		Mode->DataTableItemPassives,
		Mode->DataTableItemEquipments,
		Mode->DataTableItemEquipments,
		Mode->DataTableItemAssists,
		Mode->DataTableItemMaterials,
		Mode->DataTableItemTips,
		Mode->DataTableItemKeys,
		Mode->DataTableItemQuests,
		Mode->DataTableItemCostumes,
		Mode->DataTableItemCostumes,
		Mode->DataTableItemGallery,
	};
	std::unordered_map<std::string, SDK::UDataTable*> tableMap;
	for (auto* table : datatables)
		tableMap[table->Name.ToString()] = table;
	return tableMap;
}

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
	HookManager::Instance().AddSubscriber(
		"BP_PlayerCameraManagerZion_C",
		"ReceiveTick", [this](const SDK::UObject* obj, SDK::UFunction* func, void* params) {
			this->PlayerCameraManager_ReceiveTick(static_cast<const SDK::APlayerCameraManagerZion*>(obj));
		});
	Logger::Log(this, "Init ok");
	Configuration::Instance().Load();
}

void GameManager::PlayerCameraManager_ReceiveTick(const SDK::APlayerCameraManagerZion* cameraManager)
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
		ReplaceInteractableAddItems();
}

std::optional<SDK::FDataTableRowHandle> GameManager::FromItemName(std::string itemName) const
{
	static const std::unordered_map<std::string, SDK::UDataTable*> dataTables = GetDatatables();

	SDK::FDataTableRowHandle Item;
	auto separator = itemName.find('.');
	if (separator == std::string::npos)
		return std::nullopt;
	std::string tableName = itemName.substr(0, separator);  // DT_ItemTips
	std::string rowName = itemName.substr(separator + 1);		// tip_corrosionboard_01

	auto it = dataTables.find(tableName);
	if (it == dataTables.end())
		return std::nullopt;

	Item.DataTable = it->second;
	for (auto It = begin(Item.DataTable->RowMap); It != end(Item.DataTable->RowMap); ++It)
	{
		if (It->Key().GetRawString() == rowName)
		{
			Item.RowName = It->Key();
			break;
		}
	}
	return Item;
}


void GameManager::ReplaceInteractableAddItems()
{
	UC::TArray<SDK::AActor*> out;
	SDK::UGameplayStatics::GetAllActorsOfClass(World(), SDK::ABP_Interactable_AddItem_C::StaticClass(), &out);

	for (auto Actor : out)
	{
		auto interactable = static_cast<SDK::ABP_Interactable_AddItem_C*>(Actor);
		auto id = this->currentZone.ToString() + "." + Actor->GetName();
		Logger::Log(LogLevel::Debug, this, "Item found", id);
		if (auto newItem = Configuration::Instance().ScoutLocation(id))
		{
			Logger::Log(LogLevel::Debug, this, "found replacement", newItem.value());
			if (auto item = FromItemName(newItem.value()))
			{
				interactable->Item = item.value();
				Logger::Log(LogLevel::Debug, this, "replaced");
			}
		}
	}
}
