﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AEP_Modechange

#include "Basic.hpp"

#include "AEProcess_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AEP_Modechange.AEP_Modechange_C
// 0x0000 (0x0370 - 0x0370)
class UAEP_Modechange_C  : public UAEProcess_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AEP_Modechange_C">();
	}
	static class UAEP_Modechange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAEP_Modechange_C>();
	}
};
static_assert(alignof(UAEP_Modechange_C) == 0x000010, "Wrong alignment on UAEP_Modechange_C");
static_assert(sizeof(UAEP_Modechange_C) == 0x000370, "Wrong size on UAEP_Modechange_C");

}

