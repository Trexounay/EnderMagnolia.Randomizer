#pragma once

#include "SDK.hpp"
extern "C" {
#include "Lib/libdetour.h"
}

void Tick();
void ProcessEvent_Hook(const SDK::UObject* obj, SDK::UFunction* func, void* params);
bool DoDetour();
