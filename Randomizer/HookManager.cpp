#include "HookManager.h"
#include "Logger.h"
#include "Configuration.h"
#include "GameManager.h"
#include "ArchipelagoSource.h"
#include "GUI.h"

#include <Windows.h>
#include "minhook/include/MinHook.h"

HookManager::FEngineTickFn HookManager::oEngineTick = nullptr;

HookManager::FEventFinishedFn HookManager::oTriggerEventFinished = nullptr;
HookManager::FMarkClearedFn HookManager::oMarkAsCleared = nullptr;
HookManager::FFinishActionFn HookManager::oFinishAction = nullptr;
HookManager::FNotifyGameEndingFn HookManager::oNotifyGameEnding = nullptr;

HookManager::FProcessEventFuncPtr HookManager::oProcessEvent = nullptr;
HookManager::FNativeFuncPtr HookManager::oSetLaunchGameIntent = nullptr;
HookManager::FNativeFuncPtr HookManager::oSaveGameSync = nullptr;
HookManager::FNativeFuncPtr HookManager::oSaveGameAsync = nullptr;
HookManager::FNativeFuncPtr HookManager::oHPReachedZero = nullptr;
HookManager::FNativeFuncPtr HookManager::oSetCurrentSlot = nullptr;

namespace
{
	constexpr uintptr_t kOff_MarkAsCleared         = 0x4712D20;
	constexpr uintptr_t kOff_TriggerEventFinished  = 0x46BBF40;
	constexpr uintptr_t kOff_FinishAction          = 0x44F7270;
	constexpr uintptr_t kOff_NotifyGameEnding      = 0x4777300;
}

HookManager& HookManager::Instance()
{
	static HookManager instance;
	return instance;
}


#pragma region Hooks installation

bool HookManager::Init()
{
	SDK::UEngine* engine = SDK::UEngine::GetEngine();
	if (!engine)
	{
		Logger::Log(LogLevel::Warning, this, "waiting for UEngine");
		return false;
	}

	auto world = SDK::UWorld::GetWorld();
	if (!world || !world->OwningGameInstance || !world->OwningGameInstance->LocalPlayers.Num() || !world->OwningGameInstance->LocalPlayers[0]->PlayerController)
	{
		Logger::Log(LogLevel::Warning, this, "waiting for UWORLD");
		return false;
	}

	MH_STATUS mhInit = MH_Initialize();
	if (mhInit != MH_OK && mhInit != MH_ERROR_ALREADY_INITIALIZED)
	{
		Logger::Log(LogLevel::Error, this, "MH_Initialize failed:", MH_StatusToString(mhInit));
		return false;
	}

	oEngineTick = reinterpret_cast<FEngineTickFn>(
		HookVTableFunction(engine, SDK::Offsets::EngineTickIdx, reinterpret_cast<void*>(&EngineTick_Hook)));
	if (!oEngineTick)
		Logger::Log(LogLevel::Error, this, "Failed to hook engine tick");

	//HookProcessEvent(&HookManager::ProcessEvent_Hook);

	//HookNativeFunction(SDK::UGameInstanceZion::StaticClass(), "GameInstanceZion", "SetLaunchGameIntent", reinterpret_cast<FNativeFuncPtr>(&HookManager::SetLaunchGameIntent_Hook), reinterpret_cast<void**>(&oSetLaunchGameIntent));

	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlot", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameSync_Hook), reinterpret_cast<void**>(&oSaveGameSync));
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlotAsync", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameAsync_Hook), reinterpret_cast<void**>(&oSaveGameAsync));
	HookNativeFunction(SDK::UDeathComponent::StaticClass(), "DeathComponent", "OnHPReachedZero", reinterpret_cast<FNativeFuncPtr>(&HookManager::HPReachedZero_Hook), reinterpret_cast<void**>(&oHPReachedZero));
	HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SetCurrentSlotIndex", reinterpret_cast<FNativeFuncPtr>(&HookManager::SetCurrentSlot_Hook), reinterpret_cast<void**>(&oSetCurrentSlot));

	//HookAt(kOff_TriggerEventFinished, &TriggerEventFinished_Hook, reinterpret_cast<void**>(&oTriggerEventFinished));
	HookAt(kOff_MarkAsCleared, &MarkAsCleared_Hook, reinterpret_cast<void**>(&oMarkAsCleared));
	HookAt(kOff_FinishAction, &FinishAction_Hook, reinterpret_cast<void**>(&oFinishAction));
	HookAt(kOff_NotifyGameEnding, &NotifyGameEnding_Hook, reinterpret_cast<void**>(&oNotifyGameEnding));

	MH_STATUS applied = MH_ApplyQueued();
	if (applied != MH_OK)
		Logger::Log(LogLevel::Error, this, "MH_ApplyQueued failed:", MH_StatusToString(applied));

	Logger::Log(this, "Init ok");
	return true;
}

bool HookManager::CreateHook(void* target, void* hook, void** original, const char* name)
{
	MH_STATUS created = MH_CreateHook(target, hook, original);
	if (created != MH_OK)
	{
		Logger::Log(LogLevel::Error, this, "MH_CreateHook failed for", name, ":", MH_StatusToString(created));
		return false;
	}

	MH_STATUS queued = MH_QueueEnableHook(target);
	if (queued != MH_OK)
	{
		Logger::Log(LogLevel::Error, this, "MH_QueueEnableHook failed for", name, ":", MH_StatusToString(queued));
		return false;
	}
	return true;
}

bool HookManager::HookAt(uintptr_t offset, void* hook, void** original)
{
	uintptr_t base = SDK::InSDKUtils::GetImageBase();
	return CreateHook(reinterpret_cast<void*>(base + offset), hook, original, "rva hook");
}

void* HookManager::HookVTableFunction(void* instance, int index, void* hook)
{
	if (!instance)
		return nullptr;

	void** vtable = *reinterpret_cast<void***>(instance);
	if (!vtable)
		return nullptr;

	void* original = vtable[index];

	DWORD oldProtect;
	VirtualProtect(&vtable[index], sizeof(void*), PAGE_READWRITE, &oldProtect);
	vtable[index] = hook;
	VirtualProtect(&vtable[index], sizeof(void*), oldProtect, &oldProtect);

	return original;
}

bool HookManager::HookProcessEvent(FProcessEventFuncPtr detour)
{
	void* origPtr = reinterpret_cast<void*>(SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent);
	return CreateHook(origPtr, detour, reinterpret_cast<void**>(&oProcessEvent), "ProcessEvent");
}

bool HookManager::HookNativeFunction(const SDK::UClass *defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour, void** original)
{
	if (!defaultClass)
	{
		Logger::Log(LogLevel::Error, this, "no default class");
		return false;
	}
	auto Func = defaultClass->GetFunction(className, funcName);
	if (!Func || !Func->ExecFunction)
	{
		Logger::Log(LogLevel::Error, this, "no function", className, ".", funcName);
		return false;
	}
	return CreateHook(Func->ExecFunction, detour, original, funcName.c_str());
}
#pragma endregion

#pragma region Game callbacks


void HookManager::TriggerEventFinished_Hook(SDK::ATrigger_Event* self, SDK::UEventPlayer* eventPlayer, bool completed, SDK::EEventPlayerResult result)
{
	oTriggerEventFinished(self, eventPlayer, completed, result);
}

void HookManager::MarkAsCleared_Hook(SDK::UClearComponent* self)
{
	if (self)
	{
		SDK::AActor* owner = self->GetOwner();
		auto boss = owner ? owner->Cast<SDK::ABP_BossSpawner_C>() : nullptr;
		auto defeatEvent = boss ? boss->LoadedDefeatEvent : nullptr;
		if (defeatEvent)
			GameManager::Instance().OnEventFinished(defeatEvent);
		else
			GameManager::Instance().OnActorCleared(owner);
	}
	oMarkAsCleared(self);
}

void HookManager::NotifyGameEnding_Hook(SDK::AGameModeZion* self, SDK::EGameEndingType ending)
{
	oNotifyGameEnding(self, ending);
	ArchipelagoSource::Instance().OnGoalReached();
}

void HookManager::FinishAction_Hook(SDK::UEventAction* self)
{
	if (self && self->Class)
	{
		std::string cls = self->Class->Name.ToString();
		if ((cls == "EventAction_GrantItems" || cls == "EventAction_GrantItemsFromBlackboard") && self->EventContext)
		{
			SDK::UEventAsset* asset = self->EventContext->GetEventAsset();
			if (asset)
				GameManager::Instance().OnEventFinished(asset);
		}
		else if (cls == "EventAction_SaveGame")
		{
			GameManager::Instance().OnGameSaved();
		}
	}
	oFinishAction(self);
}

void __fastcall HookManager::EngineTick_Hook(void* self, float dt, bool idle)
{
	GUI::Instance().Tick();
	ArchipelagoSource::Instance().Tick();
	GameManager::Instance().Tick();
	oEngineTick(self, dt, idle);
}

void HookManager::ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params)
{
	oProcessEvent(obj, func, params);
}

void HookManager::SetLaunchGameIntent_Hook(SDK::UGameInstanceZion* Context, SDK::FFrame* Stack, void* Result)
{
	oSetLaunchGameIntent(Context, Stack, Result);
}

void HookManager::SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result)
{
	oSaveGameSync(Context, Stack, Result);
	if (Result && *Result)
		GameManager::Instance().OnGameSaved();
}

void HookManager::SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result)
{
	oSaveGameAsync(Context, Stack, Result);
	GameManager::Instance().OnGameSaved();
}

void HookManager::HPReachedZero_Hook(SDK::UDeathComponent* Context, SDK::FFrame* Stack, void* Result)
{
	oHPReachedZero(Context, Stack, Result);
	if (Context && Context->GetOwner() == GameManager::Instance().Pawn())
		ArchipelagoSource::Instance().OnPlayerDeath();
}

void HookManager::SetCurrentSlot_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result)
{
	oSetCurrentSlot(Context, Stack, Result);
	if (Context)
	{
		bool isNewGame = GameManager::Instance().GameInstance()->GetLaunchGameIntent() == SDK::ELaunchGameIntent::NewGame;
		GameManager::Instance().OnGameStart(Context->CurrentSlotIndex, isNewGame);
	}
}

#pragma endregion
