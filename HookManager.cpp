#include "HookManager.h"
#include "Logger.h"
#include "Configuration.h"

// Static member
detour_ctx_t HookManager::processEventCtx;

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

	void* origPtr = (void*)(SDK::InSDKUtils::GetVirtualFunction<void(*)(const SDK::UObject*, SDK::UFunction*, void*)>(
		engine,
		SDK::Offsets::ProcessEventIdx
	));

	if (!origPtr)
	{
		Logger::Log(LogLevel::Error, this, "Failed to get original ProcessEvent function");
		return false;
	}

	detour_init(&processEventCtx, origPtr, (void*)&HookManager::ProcessEvent_Hook);
	EnableHooks();
	Logger::Log(this, "Init ok");
	return true;
}

bool HookManager::EnableHooks()
{
	auto result = detour_enable(&processEventCtx);
	return result;
}

bool HookManager::DisableHooks()
{
	auto result = detour_disable(&processEventCtx);
	return result;
}

void HookManager::AddSubscriber(const std::string& objName, const std::string& funcName, ProcessEventCallback callback)
{
	subscribers.emplace_back(objName, funcName, std::move(callback));
}

void HookManager::ProcessEvent(const SDK::UObject* obj, SDK::UFunction* func, void* params)
{
	for (auto& sub : subscribers)
		if (sub.Matches(obj, func))
			sub.callback(obj, func, params);
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
