﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AbilityRepeatLauncher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Zion_structs.hpp"


namespace SDK::Params
{

// Function BP_AbilityRepeatLauncher.BP_AbilityRepeatLauncher_C.SetupTimer
// 0x0040 (0x0040 - 0x0000)
struct BP_AbilityRepeatLauncher_C_SetupTimer final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AbilityRepeatLauncher_C_SetupTimer) == 0x000008, "Wrong alignment on BP_AbilityRepeatLauncher_C_SetupTimer");
static_assert(sizeof(BP_AbilityRepeatLauncher_C_SetupTimer) == 0x000040, "Wrong size on BP_AbilityRepeatLauncher_C_SetupTimer");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_SetupTimer, CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast) == 0x000038, "Member 'BP_AbilityRepeatLauncher_C_SetupTimer::CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast' has a wrong offset!");

// Function BP_AbilityRepeatLauncher.BP_AbilityRepeatLauncher_C.ExecuteUbergraph_BP_AbilityRepeatLauncher
// 0x0090 (0x0090 - 0x0000)
struct BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityAdditionalData                 Temp_struct_Variable_1;                            // 0x0070(0x0010)(ConstParm, NoDestructor)
	class AAbility*                               CallFunc_LaunchAbility_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher) == 0x000010, "Wrong alignment on BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher");
static_assert(sizeof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher) == 0x000090, "Wrong size on BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher, EntryPoint) == 0x000000, "Member 'BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher, Temp_struct_Variable) == 0x000010, "Member 'BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher, Temp_struct_Variable_1) == 0x000070, "Member 'BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher, CallFunc_LaunchAbility_ReturnValue) == 0x000080, "Member 'BP_AbilityRepeatLauncher_C_ExecuteUbergraph_BP_AbilityRepeatLauncher::CallFunc_LaunchAbility_ReturnValue' has a wrong offset!");

}

