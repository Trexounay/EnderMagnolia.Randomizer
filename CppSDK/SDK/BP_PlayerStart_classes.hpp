﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStart

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerStart.BP_PlayerStart_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_PlayerStart_C final : public APlayerStartZion
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStart_C">();
	}
	static class ABP_PlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerStart_C>();
	}
};
static_assert(alignof(ABP_PlayerStart_C) == 0x000008, "Wrong alignment on ABP_PlayerStart_C");
static_assert(sizeof(ABP_PlayerStart_C) == 0x0002C0, "Wrong size on ABP_PlayerStart_C");

}

