﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameplayCondition_Passive_HasOneOrMore

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GameplayCondition_Passive_HasOneOrMore.BP_GameplayCondition_Passive_HasOneOrMore_C.OnCheckCondition
// 0x0028 (0x0028 - 0x0000)
struct BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInventoryComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetPassiveInventory_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemCount_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition) == 0x000008, "Wrong alignment on BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition");
static_assert(sizeof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition) == 0x000028, "Wrong size on BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, PlayerController) == 0x000000, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, ReturnValue) == 0x000008, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, CallFunc_GetPassiveInventory_ReturnValue) == 0x000018, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::CallFunc_GetPassiveInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, CallFunc_GetItemCount_ReturnValue) == 0x000020, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::CallFunc_GetItemCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_GameplayCondition_Passive_HasOneOrMore_C_OnCheckCondition::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

