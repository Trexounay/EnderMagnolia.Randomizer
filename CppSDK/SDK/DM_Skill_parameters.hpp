﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Skill

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function DM_Skill.DM_Skill_C.ExecuteUbergraph_DM_Skill
// 0x0030 (0x0030 - 0x0000)
struct DM_Skill_C_ExecuteUbergraph_DM_Skill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveSkills_C*                          CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveSkills_C*                          K2Node_DynamicCast_AsSave_Skills;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DM_Skill_C_ExecuteUbergraph_DM_Skill) == 0x000008, "Wrong alignment on DM_Skill_C_ExecuteUbergraph_DM_Skill");
static_assert(sizeof(DM_Skill_C_ExecuteUbergraph_DM_Skill) == 0x000030, "Wrong size on DM_Skill_C_ExecuteUbergraph_DM_Skill");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, EntryPoint) == 0x000000, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::EntryPoint' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000010, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000018, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, K2Node_DynamicCast_AsSave_Skills) == 0x000020, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::K2Node_DynamicCast_AsSave_Skills' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ExecuteUbergraph_DM_Skill, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'DM_Skill_C_ExecuteUbergraph_DM_Skill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function DM_Skill.DM_Skill_C.PlayerInitialize
// 0x0010 (0x0010 - 0x0000)
struct DM_Skill_C_PlayerInitialize final
{
public:
	class ABP_CharacterZion_C*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerZion*                  CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DM_Skill_C_PlayerInitialize) == 0x000008, "Wrong alignment on DM_Skill_C_PlayerInitialize");
static_assert(sizeof(DM_Skill_C_PlayerInitialize) == 0x000010, "Wrong size on DM_Skill_C_PlayerInitialize");
static_assert(offsetof(DM_Skill_C_PlayerInitialize, Player) == 0x000000, "Member 'DM_Skill_C_PlayerInitialize::Player' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_PlayerInitialize, CallFunc_Get_ReturnValue) == 0x000008, "Member 'DM_Skill_C_PlayerInitialize::CallFunc_Get_ReturnValue' has a wrong offset!");

// Function DM_Skill.DM_Skill_C.ServiceTick
// 0x0108 (0x0108 - 0x0000)
struct DM_Skill_C_ServiceTick final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Temp_struct_Variable;                              // 0x0010(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable_1;                            // 0x0028(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable_2;                            // 0x0040(0x0018)(HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable_3;                            // 0x0058(0x0018)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    K2Node_Select_Default;                             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Select_Default_1;                           // 0x0078(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0098(0x0010)(ReferenceParm)
	class APlayerControllerZion*                  CallFunc_Get_ReturnValue;                          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue;       // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue_1;     // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue_2;     // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue_3;     // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetEquippedSkillID_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_3;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DM_Skill_C_ServiceTick) == 0x000008, "Wrong alignment on DM_Skill_C_ServiceTick");
static_assert(sizeof(DM_Skill_C_ServiceTick) == 0x000108, "Wrong size on DM_Skill_C_ServiceTick");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_int_Variable) == 0x000000, "Member 'DM_Skill_C_ServiceTick::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_byte_Variable) == 0x000004, "Member 'DM_Skill_C_ServiceTick::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_byte_Variable_1) == 0x000005, "Member 'DM_Skill_C_ServiceTick::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_byte_Variable_2) == 0x000006, "Member 'DM_Skill_C_ServiceTick::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_byte_Variable_3) == 0x000007, "Member 'DM_Skill_C_ServiceTick::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_int_Variable_1) == 0x000008, "Member 'DM_Skill_C_ServiceTick::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_struct_Variable) == 0x000010, "Member 'DM_Skill_C_ServiceTick::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_struct_Variable_1) == 0x000028, "Member 'DM_Skill_C_ServiceTick::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_struct_Variable_2) == 0x000040, "Member 'DM_Skill_C_ServiceTick::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_struct_Variable_3) == 0x000058, "Member 'DM_Skill_C_ServiceTick::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, Temp_int_Variable_2) == 0x000070, "Member 'DM_Skill_C_ServiceTick::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, K2Node_Select_Default) == 0x000074, "Member 'DM_Skill_C_ServiceTick::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, K2Node_Select_Default_1) == 0x000078, "Member 'DM_Skill_C_ServiceTick::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'DM_Skill_C_ServiceTick::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'DM_Skill_C_ServiceTick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000098, "Member 'DM_Skill_C_ServiceTick::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Get_ReturnValue) == 0x0000A8, "Member 'DM_Skill_C_ServiceTick::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_IsInputKeyDown_ReturnValue) == 0x0000B0, "Member 'DM_Skill_C_ServiceTick::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_WasInputKeyJustPressed_ReturnValue) == 0x0000B1, "Member 'DM_Skill_C_ServiceTick::CallFunc_WasInputKeyJustPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_WasInputKeyJustPressed_ReturnValue_1) == 0x0000B2, "Member 'DM_Skill_C_ServiceTick::CallFunc_WasInputKeyJustPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_WasInputKeyJustPressed_ReturnValue_2) == 0x0000B3, "Member 'DM_Skill_C_ServiceTick::CallFunc_WasInputKeyJustPressed_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_WasInputKeyJustPressed_ReturnValue_3) == 0x0000B4, "Member 'DM_Skill_C_ServiceTick::CallFunc_WasInputKeyJustPressed_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_GetEquippedSkillID_ReturnValue) == 0x0000B8, "Member 'DM_Skill_C_ServiceTick::CallFunc_GetEquippedSkillID_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Array_Find_ReturnValue) == 0x0000C0, "Member 'DM_Skill_C_ServiceTick::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'DM_Skill_C_ServiceTick::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C8, "Member 'DM_Skill_C_ServiceTick::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Percent_IntInt_ReturnValue) == 0x0000CC, "Member 'DM_Skill_C_ServiceTick::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000D0, "Member 'DM_Skill_C_ServiceTick::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Array_Get_Item) == 0x0000D4, "Member 'DM_Skill_C_ServiceTick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Array_Get_Item_1) == 0x0000DC, "Member 'DM_Skill_C_ServiceTick::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000E4, "Member 'DM_Skill_C_ServiceTick::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000E8, "Member 'DM_Skill_C_ServiceTick::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0000EC, "Member 'DM_Skill_C_ServiceTick::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Percent_IntInt_ReturnValue_3) == 0x0000F0, "Member 'DM_Skill_C_ServiceTick::CallFunc_Percent_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Array_Get_Item_2) == 0x0000F4, "Member 'DM_Skill_C_ServiceTick::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ServiceTick, CallFunc_Array_Get_Item_3) == 0x0000FC, "Member 'DM_Skill_C_ServiceTick::CallFunc_Array_Get_Item_3' has a wrong offset!");

// Function DM_Skill.DM_Skill_C.ToggleModule
// 0x0050 (0x0050 - 0x0000)
struct DM_Skill_C_ToggleModule final
{
public:
	ESkillSlot                                    Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_3;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_6;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    Temp_byte_Variable_7;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillSlot                                    K2Node_Select_Default_1;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerControllerZion*                  CallFunc_Get_ReturnValue;                          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetEquippedSkillID_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DM_Skill_C_ToggleModule) == 0x000008, "Wrong alignment on DM_Skill_C_ToggleModule");
static_assert(sizeof(DM_Skill_C_ToggleModule) == 0x000050, "Wrong size on DM_Skill_C_ToggleModule");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable) == 0x000000, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_1) == 0x000001, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_2) == 0x000002, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_3) == 0x000003, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_int_Variable) == 0x000004, "Member 'DM_Skill_C_ToggleModule::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_4) == 0x000008, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_5) == 0x000009, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_6) == 0x00000A, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_byte_Variable_7) == 0x00000B, "Member 'DM_Skill_C_ToggleModule::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'DM_Skill_C_ToggleModule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'DM_Skill_C_ToggleModule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_int_Array_Index_Variable) == 0x000014, "Member 'DM_Skill_C_ToggleModule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_int_Variable_1) == 0x000018, "Member 'DM_Skill_C_ToggleModule::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, K2Node_Select_Default) == 0x00001C, "Member 'DM_Skill_C_ToggleModule::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, Temp_int_Variable_2) == 0x000020, "Member 'DM_Skill_C_ToggleModule::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, K2Node_Select_Default_1) == 0x000024, "Member 'DM_Skill_C_ToggleModule::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000025, "Member 'DM_Skill_C_ToggleModule::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'DM_Skill_C_ToggleModule::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Get_ReturnValue) == 0x000030, "Member 'DM_Skill_C_ToggleModule::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_GetEquippedSkillID_ReturnValue) == 0x000038, "Member 'DM_Skill_C_ToggleModule::CallFunc_GetEquippedSkillID_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Array_Get_Item) == 0x000040, "Member 'DM_Skill_C_ToggleModule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'DM_Skill_C_ToggleModule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_SaveGameToSlot_ReturnValue) == 0x00004C, "Member 'DM_Skill_C_ToggleModule::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DM_Skill_C_ToggleModule, CallFunc_Less_IntInt_ReturnValue) == 0x00004D, "Member 'DM_Skill_C_ToggleModule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

