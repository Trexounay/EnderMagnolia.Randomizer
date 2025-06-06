﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AbilityHitbox_Moving

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AbilityHitbox_Moving.BP_AbilityHitbox_Moving_C
// 0x0010 (0x0AD0 - 0x0AC0)
class ABP_AbilityHitbox_Moving_C : public AAbilityHitboxMoving
{
public:
	class UBoxComponent*                          Box;                                               // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AbilityHitbox_Moving_C">();
	}
	static class ABP_AbilityHitbox_Moving_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AbilityHitbox_Moving_C>();
	}
};
static_assert(alignof(ABP_AbilityHitbox_Moving_C) == 0x000010, "Wrong alignment on ABP_AbilityHitbox_Moving_C");
static_assert(sizeof(ABP_AbilityHitbox_Moving_C) == 0x000AD0, "Wrong size on ABP_AbilityHitbox_Moving_C");
static_assert(offsetof(ABP_AbilityHitbox_Moving_C, Box) == 0x000AC0, "Member 'ABP_AbilityHitbox_Moving_C::Box' has a wrong offset!");

}

