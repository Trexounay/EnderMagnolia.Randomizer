﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMD_e0251_AttackA_Front

#include "Basic.hpp"

#include "BP_Command_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CMD_e0251_AttackA_Front.CMD_e0251_AttackA_Front_C
// 0x0000 (0x00A8 - 0x00A8)
class UCMD_e0251_AttackA_Front_C : public UBP_Command_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMD_e0251_AttackA_Front_C">();
	}
	static class UCMD_e0251_AttackA_Front_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMD_e0251_AttackA_Front_C>();
	}
};
static_assert(alignof(UCMD_e0251_AttackA_Front_C) == 0x000008, "Wrong alignment on UCMD_e0251_AttackA_Front_C");
static_assert(sizeof(UCMD_e0251_AttackA_Front_C) == 0x0000A8, "Wrong size on UCMD_e0251_AttackA_Front_C");

}

