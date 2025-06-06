﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_e0073_Pod

#include "Basic.hpp"

#include "BP_CharacterZion_Enemy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_e0073_Pod.BP_e0073_Pod_C
// 0x0010 (0x0A30 - 0x0A20)
class ABP_e0073_Pod_C  : public ABP_CharacterZion_Enemy_C
{
public:
	uint8                                         Pad_A11[0x7];                                      // 0x0A11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USpineSkinFromFacing*                   SpineSkinFromFacing;                               // 0x0A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Hurtbox;                                           // 0x0A20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_e0073_Pod_C">();
	}
	static class ABP_e0073_Pod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_e0073_Pod_C>();
	}
};
static_assert(alignof(ABP_e0073_Pod_C) == 0x000010, "Wrong alignment on ABP_e0073_Pod_C");
static_assert(sizeof(ABP_e0073_Pod_C) == 0x000A30, "Wrong size on ABP_e0073_Pod_C");
static_assert(offsetof(ABP_e0073_Pod_C, SpineSkinFromFacing) == 0x000A18, "Member 'ABP_e0073_Pod_C::SpineSkinFromFacing' has a wrong offset!");
static_assert(offsetof(ABP_e0073_Pod_C, Hurtbox) == 0x000A20, "Member 'ABP_e0073_Pod_C::Hurtbox' has a wrong offset!");

}

