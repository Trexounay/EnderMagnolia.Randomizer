﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AEP_s5040_SP

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AEP_s5040_SP.AEP_s5040_SP_C
// 0x0000 (0x0370 - 0x0370)
class UAEP_s5040_SP_C final : public UAbilityEffectProcess
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AEP_s5040_SP_C">();
	}
	static class UAEP_s5040_SP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAEP_s5040_SP_C>();
	}
};
static_assert(alignof(UAEP_s5040_SP_C) == 0x000010, "Wrong alignment on UAEP_s5040_SP_C");
static_assert(sizeof(UAEP_s5040_SP_C) == 0x000370, "Wrong size on UAEP_s5040_SP_C");

}

