#include "HookManager.h"
#include "Logger.h"
#include "Configuration.h"
#include "GameManager.h"

// Static member
std::unordered_map<void*, detour_ctx_t> HookManager::ctxs;

HookManager& HookManager::Instance()
{
	static HookManager instance;
	return instance;
}

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

	// Process Event
	if (!HookProcessEvent(&HookManager::ProcessEvent_Hook))
		Logger::Log(LogLevel::Error, this, "Failed to hook ProcessEvent");

	// SetLaunchGameIntent
	if (!HookNativeFunction(SDK::UGameInstanceZion::StaticClass(), "GameInstanceZion", "SetLaunchGameIntent", &HookManager::SetLaunchGameIntent_Hook))
		Logger::Log(LogLevel::Error, this, "Failed to hook SetLaunchIntent");

	// tick
//	if (!HookNativeFunction(SDK::UActorComponent::StaticClass(), "ActorComponent", "ReceiveTick", &HookManager::DEBUG_Hook))
//		Logger::Log(LogLevel::Error, this, "Failed to hook tick");

	/*s
	for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
	{
		SDK::UObject* Object = SDK::UObject::GObjects->GetByIndex(i);

		if (!Object)
			continue;

		if (Object->HasTypeFlag(SDK::EClassCastFlags::Function) && Object->GetName() == "ReceiveTick")
		{
			Logger::Log(LogLevel::Error, this, "FUNC: ", Object->GetFullName());
		}
	}
	for (const SDK::UStruct* Clss = SDK::APlayerController::StaticClass(); Clss; Clss = Clss->Super)
	{
		for (SDK::UField* Field = Clss->Children; Field; Field = Field->Next)
		{
			if (Field->HasTypeFlag(SDK::EClassCastFlags::Function))
				Logger::Log(LogLevel::Error, this, Clss->GetName(), "." , Field->GetName());
		}
	}*/

	// Enable Hooks
	Logger::Log(this, "Init ok");
	return true;
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

void HookManager::ProcessEvent(const SDK::UObject* obj, SDK::UFunction* func, void* params)
{
	static Subscriber PlayerCameraManager_ReceiveTick("CameraAnimationCameraModifier", "BlueprintModifyCamera");
	if (PlayerCameraManager_ReceiveTick.Matches(obj, func))
		GameManager::Instance().OnReceiveTick();
}

void HookManager::SetLaunchGameIntent(SDK::UObject* Context, void* TheStack, void* Result)
{
	GameManager::Instance().OnGameStarted();
}

inline bool HookManager::Subscriber::Matches(const SDK::UObject* obj, const SDK::UFunction* func)
{
	if (!obj || !func) return false;
	if (_objFName.ComparisonIndex != 0 && _funcFName.ComparisonIndex != 0)
	{
		return obj->Class->Name == _objFName && func->Name == _funcFName;
	}
	auto match = objName == obj->Class->Name.ToString() && funcName == func->Name.GetRawString();
	if (match)
	{
		_objFName = obj->Class->Name;
		_funcFName = func->Name;
	}
	return match;
}
