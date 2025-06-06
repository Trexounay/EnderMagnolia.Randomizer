﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_EventNPC

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Interactable_EventNPC.BP_Interactable_EventNPC_C
// 0x0008 (0x0630 - 0x0628)
class ABP_Interactable_EventNPC_C : public AInteractable_EventNPC
{
public:
	class USphereComponent*                       SphereCollider;                                    // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Interactable_EventNPC_C">();
	}
	static class ABP_Interactable_EventNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Interactable_EventNPC_C>();
	}
};
static_assert(alignof(ABP_Interactable_EventNPC_C) == 0x000008, "Wrong alignment on ABP_Interactable_EventNPC_C");
static_assert(sizeof(ABP_Interactable_EventNPC_C) == 0x000630, "Wrong size on ABP_Interactable_EventNPC_C");
static_assert(offsetof(ABP_Interactable_EventNPC_C, SphereCollider) == 0x000628, "Member 'ABP_Interactable_EventNPC_C::SphereCollider' has a wrong offset!");

}

