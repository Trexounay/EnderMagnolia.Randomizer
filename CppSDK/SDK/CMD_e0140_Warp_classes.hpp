﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMD_e0140_Warp

#include "Basic.hpp"

#include "BP_Command_AI_WarpTo_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CMD_e0140_Warp.CMD_e0140_Warp_C
// 0x0000 (0x0138 - 0x0138)
class UCMD_e0140_Warp_C final : public UBP_Command_AI_WarpTo_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMD_e0140_Warp_C">();
	}
	static class UCMD_e0140_Warp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMD_e0140_Warp_C>();
	}
};
static_assert(alignof(UCMD_e0140_Warp_C) == 0x000008, "Wrong alignment on UCMD_e0140_Warp_C");
static_assert(sizeof(UCMD_e0140_Warp_C) == 0x000138, "Wrong size on UCMD_e0140_Warp_C");

}

