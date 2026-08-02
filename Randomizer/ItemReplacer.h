#pragma once
#include <vector>
#include <string>
#include <list>
#include <functional>
#include "GameManager.h"
#include "SDK.hpp"

class ItemReplacer
{
public:
	ItemReplacer();
	void ZoneChanged(const std::string &oldZone, const std::string &newZone);
	void ZoneUnloaded();
	void ResetShopItems();

	void Tick();
	static std::vector<SDK::FItemHandleCount*> EnumerateEventItems(SDK::UEventAsset* asset);
	static std::string ActorLocationId(const std::string& actorName);
	static std::string EventLocationId(SDK::UEventAsset* asset, int index = 0);
	static std::string ShopLocationId(SDK::UDataTable* table, const SDK::FName& rowName, int index);
	static std::vector<std::string> ShopLocationsFor(const SDK::FDataTableRowHandle& item);

private:
	GameManager* GM;
	bool shop_replaced = false;

	static SDK::UDataTable* ShopTable();
	static SDK::int32 CurrencyCount(const std::string& itemName);
	bool SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item, SDK::int32* count = nullptr) const;
	std::list<std::function<bool()>> delayed_replacement;

	template<class T>
	void ReplaceItemActors()
	{
		UC::TArray<SDK::AActor*> out;
		SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), T::StaticClass(), &out);
		for (auto Actor : out)
		{
			auto typed = static_cast<T*>(Actor);
			SwapAtLocation(ActorLocationId(Actor->GetName()), typed->Item, &typed->Count);
		}
	}

	void ReplaceTriggerEvents();
	void ReplaceInteractableEvents();
	void ReplaceBossEvents();
	bool ReplaceShopItems();
	void ReplaceEventAsset(const std::string& actorName, SDK::UEventAsset* asset);
	void DisableAutoEquip(SDK::UEventAsset* asset);
	void WaitForEventAsset(SDK::AActor* owner, SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action, SDK::TSoftObjectPtr<SDK::UEventAsset> *softptr);
};
