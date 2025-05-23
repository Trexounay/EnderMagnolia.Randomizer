﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BossRushComponent

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BossRushComponent.BP_BossRushComponent_C.ExecuteUbergraph_BP_BossRushComponent
// 0x0088 (0x0088 - 0x0000)
struct BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Recollection_BossRush_Result_C*    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Recollection_BossRush_Timer_C*     CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBossRushTime_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRecollectionBossRushRecordData        K2Node_MakeStruct_RecollectionBossRushRecordData;  // 0x0034(0x0004)(NoDestructor)
	int32                                         CallFunc_TryAddNewRecord_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetTimerPaused_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentBossIndex_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetIsNewGamePlusText_ReturnValue;         // 0x0058(0x0010)()
	class FText                                   CallFunc_GetBossRushDifficultyPresetText_ReturnValue; // 0x0068(0x0010)()
	bool                                          K2Node_Event_bIsPaused;                            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentBossIndex_ReturnValue_1;        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent) == 0x000008, "Wrong alignment on BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent");
static_assert(sizeof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent) == 0x000088, "Wrong size on BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, EntryPoint) == 0x000000, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_IsValid_ReturnValue_2) == 0x000012, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_GetBossRushTime_ReturnValue) == 0x000020, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_GetBossRushTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, K2Node_MakeStruct_RecollectionBossRushRecordData) == 0x000034, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::K2Node_MakeStruct_RecollectionBossRushRecordData' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_TryAddNewRecord_ReturnValue) == 0x000038, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_TryAddNewRecord_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_SetTimerPaused_ReturnValue) == 0x00003C, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_SetTimerPaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_GetCurrentBossIndex_ReturnValue) == 0x000050, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_GetCurrentBossIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_IsValid_ReturnValue_3) == 0x000054, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_GetIsNewGamePlusText_ReturnValue) == 0x000058, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_GetIsNewGamePlusText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_GetBossRushDifficultyPresetText_ReturnValue) == 0x000068, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_GetBossRushDifficultyPresetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, K2Node_Event_bIsPaused) == 0x000078, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::K2Node_Event_bIsPaused' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_GetCurrentBossIndex_ReturnValue_1) == 0x00007C, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_GetCurrentBossIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000080, "Member 'BP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BossRushComponent.BP_BossRushComponent_C.GetBossRushDifficultyPresetText
// 0x0088 (0x0088 - 0x0000)
struct BP_BossRushComponent_C_GetBossRushDifficultyPresetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	EDifficultyPreset                             Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0010)()
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0010)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0010)()
	class FText                                   Temp_text_Variable_3;                              // 0x0048(0x0010)()
	class FText                                   Temp_text_Variable_4;                              // 0x0058(0x0010)()
	class UDifficultySystemComponent*             CallFunc_Get_ReturnValue;                          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EDifficultyPreset                             CallFunc_GetDifficultyPresetForMode_ReturnValue;   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0078(0x0010)()
};
static_assert(alignof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText) == 0x000008, "Wrong alignment on BP_BossRushComponent_C_GetBossRushDifficultyPresetText");
static_assert(sizeof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText) == 0x000088, "Wrong size on BP_BossRushComponent_C_GetBossRushDifficultyPresetText");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, ReturnValue) == 0x000000, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_byte_Variable) == 0x000010, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_text_Variable) == 0x000018, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_text_Variable_1) == 0x000028, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_text_Variable_2) == 0x000038, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_text_Variable_3) == 0x000048, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, Temp_text_Variable_4) == 0x000058, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, CallFunc_Get_ReturnValue) == 0x000068, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, CallFunc_GetDifficultyPresetForMode_ReturnValue) == 0x000070, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::CallFunc_GetDifficultyPresetForMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetBossRushDifficultyPresetText, K2Node_Select_Default) == 0x000078, "Member 'BP_BossRushComponent_C_GetBossRushDifficultyPresetText::K2Node_Select_Default' has a wrong offset!");

// Function BP_BossRushComponent.BP_BossRushComponent_C.GetIsNewGamePlusText
// 0x00D8 (0x00D8 - 0x0000)
struct BP_BossRushComponent_C_GetIsNewGamePlusText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0010)()
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0010)()
	class AGameModeZion*                          CallFunc_Get_ReturnValue;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeZion*                          CallFunc_Get_ReturnValue_1;                        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNewGamePlusGeneration_ReturnValue;     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxEnvironmentLevel_ReturnValue;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0048)(HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x00A8(0x0010)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0010)()
};
static_assert(alignof(BP_BossRushComponent_C_GetIsNewGamePlusText) == 0x000008, "Wrong alignment on BP_BossRushComponent_C_GetIsNewGamePlusText");
static_assert(sizeof(BP_BossRushComponent_C_GetIsNewGamePlusText) == 0x0000D8, "Wrong size on BP_BossRushComponent_C_GetIsNewGamePlusText");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, ReturnValue) == 0x000000, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, Temp_bool_Variable) == 0x000010, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, Temp_text_Variable) == 0x000018, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, Temp_text_Variable_1) == 0x000028, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_Get_ReturnValue) == 0x000038, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_Get_ReturnValue_1) == 0x000040, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_GetNewGamePlusGeneration_ReturnValue) == 0x000048, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_GetNewGamePlusGeneration_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_GetMaxEnvironmentLevel_ReturnValue) == 0x00004C, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_GetMaxEnvironmentLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000058, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, K2Node_Select_Default) == 0x0000A8, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BossRushComponent_C_GetIsNewGamePlusText, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'BP_BossRushComponent_C_GetIsNewGamePlusText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnSetTimerPaused
// 0x0001 (0x0001 - 0x0000)
struct BP_BossRushComponent_C_OnSetTimerPaused final
{
public:
	bool                                          bIsPaused;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossRushComponent_C_OnSetTimerPaused) == 0x000001, "Wrong alignment on BP_BossRushComponent_C_OnSetTimerPaused");
static_assert(sizeof(BP_BossRushComponent_C_OnSetTimerPaused) == 0x000001, "Wrong size on BP_BossRushComponent_C_OnSetTimerPaused");
static_assert(offsetof(BP_BossRushComponent_C_OnSetTimerPaused, bIsPaused) == 0x000000, "Member 'BP_BossRushComponent_C_OnSetTimerPaused::bIsPaused' has a wrong offset!");

}

