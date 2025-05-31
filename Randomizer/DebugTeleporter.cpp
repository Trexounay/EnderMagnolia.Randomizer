#include "DebugTeleporter.h"
#include "GameManager.h"
#include "Logger.h"


void DebugTeleporter::Init()
{
	GM = &GameManager::Instance();
	for (auto data : GM->Mode()->DataTableGameMapTransitions->RowMap)
	{
		auto transData = (SDK::FMapTransitionRowData*)(data.Second);
		for (auto trans : transData->TransitionSpawnPoints)
		{
			auto row = trans.GameMapID;
			if (maps.find(row.RowName.ComparisonIndex) == maps.end())
			{
				maps[row.RowName.ComparisonIndex] = trans;
			}
		}
	}
	for (auto m : maps)
		maps_ordered.push_back(m.second);
	zone = -1;
	gamemap = -1;
	zones.Clear();
}

void DebugTeleporter::Tick()
{
	if (GM->IsLoading())
		return;
	if (maps_ordered.empty())
		Init();
	else if (count < 20)
		count++;
	else
		Teleport();
}

void DebugTeleporter::Teleport()
{
	count = 0;
	if (zones.Num() <= 0)
	{
		SDK::UGameplayStatics::GetAllActorsOfClass(GM->World(), SDK::AStaticVolume_Zone::StaticClass(), &zones);
		zone = -1;
	}
	else if (zone < (int)(zones.Num() - 1))
	{
		NextZone();
	}
	else if (gamemap < (int)(maps_ordered.size() - 1))
	{
		NextMap();
	}
}

void DebugTeleporter::NextZone()
{
	zone++;
	Logger::Log(this, "zone", zone, "/", zones.Num());
	GM->Pawn()->K2_TeleportTo(zones[zone]->GetTransform().Translation, SDK::FRotator());
	GM->Pawn()->StatHPComponent->DoHeal(GM->Controller(), 100);
}

void DebugTeleporter::NextMap()
{
	gamemap++;
	Logger::Log(this, "map", gamemap, "/", maps_ordered.size());
	auto row = maps_ordered[gamemap];
	auto fadein = SDK::FFadeDescriptionData();
	auto fadeout = SDK::FFadeDescriptionData();
	Logger::Log(this, "teleport to", row.GameMapID.RowName.GetRawString(), row.PlayerStartTag.GetRawString());
	GM->Loader()->OpenGameMap(row.GameMapID, row.PlayerStartTag, true, fadein, fadeout);
	zones.Clear();
}