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

	void Tick();
	static std::vector<SDK::FItemHandleCount*> EnumerateEventItems(SDK::UEventAsset* asset);
	static std::string ActorLocationId(const std::string& actorName);
	static std::string EventLocationId(SDK::UEventAsset* asset, int index = 0);

private:
	GameManager* GM;

	void SwapAtLocation(std::string locationName, SDK::FDataTableRowHandle& item, SDK::int32* count = nullptr) const;
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
	void ReplaceEventAsset(const std::string& actorName, SDK::UEventAsset* asset);
	void DisableAutoEquip(SDK::UEventAsset* asset);
	void WaitForEventAsset(SDK::UEventAsset** asset, std::function<void(SDK::UEventAsset*)> action, SDK::TSoftObjectPtr<SDK::UEventAsset> *softptr);
};
