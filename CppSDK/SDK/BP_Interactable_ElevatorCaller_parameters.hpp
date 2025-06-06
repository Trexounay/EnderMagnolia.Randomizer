﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_ElevatorCaller

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Interactable_ElevatorCaller.BP_Interactable_ElevatorCaller_C.GetElevatorMovementComponent
// 0x0010 (0x0010 - 0x0000)
struct BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent final
{
public:
	class UElevatorMovementComponent*             ElevatorMovementComponent;                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent) == 0x000008, "Wrong alignment on BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent");
static_assert(sizeof(BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent) == 0x000010, "Wrong size on BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent");
static_assert(offsetof(BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent, ElevatorMovementComponent) == 0x000000, "Member 'BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent::ElevatorMovementComponent' has a wrong offset!");
static_assert(offsetof(BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_Interactable_ElevatorCaller_C_GetElevatorMovementComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

