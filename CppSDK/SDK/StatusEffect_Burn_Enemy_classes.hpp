﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Burn_Enemy

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatusEffect_Burn_Enemy.StatusEffect_Burn_Enemy_C
// 0x0000 (0x0190 - 0x0190)
class UStatusEffect_Burn_Enemy_C final : public UStatusEffect_Burn
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusEffect_Burn_Enemy_C">();
	}
	static class UStatusEffect_Burn_Enemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusEffect_Burn_Enemy_C>();
	}
};
static_assert(alignof(UStatusEffect_Burn_Enemy_C) == 0x000010, "Wrong alignment on UStatusEffect_Burn_Enemy_C");
static_assert(sizeof(UStatusEffect_Burn_Enemy_C) == 0x000190, "Wrong size on UStatusEffect_Burn_Enemy_C");

}

