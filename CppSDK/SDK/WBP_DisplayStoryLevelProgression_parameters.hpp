﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DisplayStoryLevelProgression

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_DisplayStoryLevelProgression.WBP_DisplayStoryLevelProgression_C.Close
// 0x0018 (0x0018 - 0x0000)
struct WBP_DisplayStoryLevelProgression_C_Close final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeZion*                          CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DisplayStoryLevelProgression_C_Close) == 0x000008, "Wrong alignment on WBP_DisplayStoryLevelProgression_C_Close");
static_assert(sizeof(WBP_DisplayStoryLevelProgression_C_Close) == 0x000018, "Wrong size on WBP_DisplayStoryLevelProgression_C_Close");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_Close, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_DisplayStoryLevelProgression_C_Close::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_Close, CallFunc_Get_ReturnValue) == 0x000010, "Member 'WBP_DisplayStoryLevelProgression_C_Close::CallFunc_Get_ReturnValue' has a wrong offset!");

// Function WBP_DisplayStoryLevelProgression.WBP_DisplayStoryLevelProgression_C.ExecuteUbergraph_WBP_DisplayStoryLevelProgression
// 0x0050 (0x0050 - 0x0000)
struct WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWaitGameReadyAsyncAction*              CallFunc_WaitGameReady_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeZion*                          CallFunc_Get_ReturnValue;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression) == 0x000008, "Wrong alignment on WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression");
static_assert(sizeof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression) == 0x000050, "Wrong size on WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, EntryPoint) == 0x000000, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, CallFunc_WaitGameReady_ReturnValue) == 0x000018, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::CallFunc_WaitGameReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000030, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, CallFunc_Get_ReturnValue) == 0x000038, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_DisplayStoryLevelProgression_C_ExecuteUbergraph_WBP_DisplayStoryLevelProgression::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_DisplayStoryLevelProgression.WBP_DisplayStoryLevelProgression_C.SetGoalDescription
// 0x0010 (0x0010 - 0x0000)
struct WBP_DisplayStoryLevelProgression_C_SetGoalDescription final
{
public:
	class FText                                   MapAreaName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_DisplayStoryLevelProgression_C_SetGoalDescription) == 0x000008, "Wrong alignment on WBP_DisplayStoryLevelProgression_C_SetGoalDescription");
static_assert(sizeof(WBP_DisplayStoryLevelProgression_C_SetGoalDescription) == 0x000010, "Wrong size on WBP_DisplayStoryLevelProgression_C_SetGoalDescription");
static_assert(offsetof(WBP_DisplayStoryLevelProgression_C_SetGoalDescription, MapAreaName) == 0x000000, "Member 'WBP_DisplayStoryLevelProgression_C_SetGoalDescription::MapAreaName' has a wrong offset!");

}

