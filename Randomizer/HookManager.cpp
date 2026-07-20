#include "HookManager.h"
#include "Logger.h"
#include "Configuration.h"
#include "GameManager.h"
#include "ArchipelagoSource.h"
#include "HookProbe.h"
#include "GUI.h"

#include <Windows.h>

HookManager::FEngineTickFn HookManager::oEngineTick = nullptr;
std::unordered_map<void*, detour_ctx_t> HookManager::ctxs;

namespace
{
	constexpr uintptr_t kOff_MarkAsCleared         = 0x4712D20;
	constexpr uintptr_t kOff_TriggerEventFinished  = 0x46BBF40;
	constexpr uintptr_t kOff_FinishAction          = 0x44F7270;
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

	oEngineTick = reinterpret_cast<FEngineTickFn>(
		HookVTableFunction(engine, SDK::Offsets::EngineTickIdx, reinterpret_cast<void*>(&EngineTick_Hook)));
	if (!oEngineTick)
		Logger::Log(LogLevel::Error, this, "Failed to hook engine tick");

	if (!HookProcessEvent(&HookManager::ProcessEvent_Hook))
		Logger::Log(LogLevel::Error, this, "Failed to hook ProcessEvent");

	if (!HookNativeFunction(SDK::UGameInstanceZion::StaticClass(), "GameInstanceZion", "SetLaunchGameIntent", reinterpret_cast<FNativeFuncPtr>(&HookManager::SetLaunchGameIntent_Hook)))
		Logger::Log(LogLevel::Error, this, "Failed to hook SetLaunchIntent");

	if (!HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlot", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameSync_Hook)))
		Logger::Log(LogLevel::Error, this, "Failed to hook SaveGameInCurrentSlot");

	if (!HookNativeFunction(SDK::USaveSubsystem::StaticClass(), "SaveSubsystem", "SaveGameInCurrentSlotAsync", reinterpret_cast<FNativeFuncPtr>(&HookManager::SaveGameAsync_Hook)))
		Logger::Log(LogLevel::Error, this, "Failed to hook SaveGameInCurrentSlotAsync");

	HookAt(kOff_TriggerEventFinished, &TriggerEventFinished_Hook);
	HookAt(kOff_MarkAsCleared, &MarkAsCleared_Hook);
	HookAt(kOff_FinishAction, &FinishAction_Hook);

#if ENABLE_HOOK_PROBE
	HookProbe::InstallNativeHooks();
#endif

	Logger::Log(this, "Init ok");
	return true;
}

void HookManager::HookAt(uintptr_t offset, void* hook)
{
	uintptr_t base = SDK::InSDKUtils::GetImageBase();
	ctxs[hook] = detour_ctx_t();
	detour_init(&ctxs[hook], reinterpret_cast<void*>(base + offset), hook);
	detour_enable(&ctxs[hook]);
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
	if (!origPtr)
	{
		Logger::Log(LogLevel::Error, this, "Failed to get original ProcessEvent function");
		return false;
	}
	this->ctxs[detour] = detour_ctx_t();
	detour_init(&this->ctxs[detour], origPtr, detour);
	return detour_enable(&this->ctxs[detour]);
}

bool HookManager::HookNativeFunction(const SDK::UClass *defaultClass, const std::string className, const std::string funcName, FNativeFuncPtr detour)
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
	this->ctxs[detour] = detour_ctx_t();
	detour_init(&this->ctxs[detour], Func->ExecFunction, detour);
	return detour_enable(&this->ctxs[detour]);
}
#pragma endregion

#pragma region Game callbacks


void HookManager::TriggerEventFinished_Hook(SDK::ATrigger_Event* self, SDK::UEventPlayer* eventPlayer, bool completed, SDK::EEventPlayerResult result)
{
	//if (completed && self && eventPlayer && eventPlayer->EventAsset)
		//GameManager::Instance().OnLocationClear(self, eventPlayer->EventAsset);
	DETOUR_ORIG_CALL(&ctxs[&TriggerEventFinished_Hook], EventFinished, self, eventPlayer, completed, result);
}

void HookManager::MarkAsCleared_Hook(SDK::UClearComponent* self)
{
	if (self)
	{
		SDK::AActor* owner = self->GetOwner();
		auto boss = owner ? owner->Cast<SDK::ABP_BossSpawner_C>() : nullptr;
		GameManager::Instance().OnLocationClear(owner, boss ? boss->LoadedDefeatEvent : nullptr);
	}
	DETOUR_ORIG_CALL(&ctxs[&MarkAsCleared_Hook], MarkCleared, self);
}

void HookManager::FinishAction_Hook(SDK::UEventAction* self)
{
	if (self && self->Class)
	{
		std::string cls = self->Class->Name.ToString();
		if ((cls == "EventAction_GrantItems" || cls == "EventAction_GrantItemsFromBlackboard") && self->EventContext)
		{
			SDK::UEventAsset* asset = self->EventContext->GetEventAsset();
#if ENABLE_HOOK_PROBE
			if (cls == "EventAction_GrantItemsFromBlackboard")
			{
				auto grant = static_cast<SDK::UEventAction_GrantItemsFromBlackboard*>(self);
				std::string assetName = asset ? asset->GetName() : "<null>";
				for (int i = 0; i < grant->ItemBlackboardKeys.Num(); ++i)
				{
					SDK::FDataTableRowHandle def{};
					auto h = self->EventContext->GetValueRowHandle(grant->ItemBlackboardKeys[i], def);
					std::string dt = h.DataTable ? h.DataTable->Name.ToString() : "<null-dt>";
					Logger::Log(LogLevel::Debug, "[FIN-BB] asset=", assetName, "key=", grant->ItemBlackboardKeys[i].GetRawString(),
						"item=", dt + "." + h.RowName.GetRawString());
				}
			}
#endif
			if (asset)
				GameManager::Instance().OnLocationClear(nullptr, asset);
		}
		else if (cls == "EventAction_SaveGame")
		{
			GameManager::Instance().OnGameSaved();
		}
	}
	DETOUR_ORIG_CALL(&ctxs[&FinishAction_Hook], FinishAction, self);
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
#if ENABLE_HOOK_PROBE
	HookProbe::OnProcessEvent(obj, func, params);
#endif
	DETOUR_ORIG_CALL(&ctxs[&ProcessEvent_Hook], ProcessEvent, obj, func, params);
}

void HookManager::SetLaunchGameIntent_Hook(SDK::UGameInstanceZion* Context, SDK::FFrame* Stack, void* Result)
{
	DETOUR_ORIG_CALL(&ctxs[&SetLaunchGameIntent_Hook], NativeFunction, Context, Stack, Result);
	GameManager::Instance().OnGameStarted();
}

void HookManager::SaveGameSync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, bool* Result)
{
	DETOUR_ORIG_CALL(&ctxs[&SaveGameSync_Hook], NativeFunction, Context, Stack, Result);
	if (Result && *Result)
		GameManager::Instance().OnGameSaved();
}

void HookManager::SaveGameAsync_Hook(SDK::USaveSubsystem* Context, SDK::FFrame* Stack, void* Result)
{
	DETOUR_ORIG_CALL(&ctxs[&SaveGameAsync_Hook], NativeFunction, Context, Stack, Result);
	GameManager::Instance().OnGameSaved();
}

#pragma endregion
