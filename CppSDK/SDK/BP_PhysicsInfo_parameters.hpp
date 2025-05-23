﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PhysicsInfo.BP_PhysicsInfo_C.ExecuteUbergraph_BP_PhysicsInfo
// 0x0028 (0x0028 - 0x0000)
struct BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Text_C*                            CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_deltaT_ImplicitCast;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo) == 0x000008, "Wrong alignment on BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo");
static_assert(sizeof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo) == 0x000028, "Wrong size on BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, EntryPoint) == 0x000000, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00000D, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo, K2Node_VariableSet_deltaT_ImplicitCast) == 0x000020, "Member 'BP_PhysicsInfo_C_ExecuteUbergraph_BP_PhysicsInfo::K2Node_VariableSet_deltaT_ImplicitCast' has a wrong offset!");

// Function BP_PhysicsInfo.BP_PhysicsInfo_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PhysicsInfo_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhysicsInfo_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PhysicsInfo_C_ReceiveTick");
static_assert(sizeof(BP_PhysicsInfo_C_ReceiveTick) == 0x000004, "Wrong size on BP_PhysicsInfo_C_ReceiveTick");
static_assert(offsetof(BP_PhysicsInfo_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PhysicsInfo_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PhysicsInfo.BP_PhysicsInfo_C.SetDetail
// 0x01A0 (0x01A0 - 0x0000)
struct BP_PhysicsInfo_C_SetDetail final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UStatBreakableComponent*>        CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ACharacterZion*                         K2Node_DynamicCast_AsCharacter_Zion;               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStatBreakableComponent*                CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxValue_ReturnValue;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_1;                         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartsWith_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue_1;        // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrValue_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhysicsInfo_C_SetDetail) == 0x000008, "Wrong alignment on BP_PhysicsInfo_C_SetDetail");
static_assert(sizeof(BP_PhysicsInfo_C_SetDetail) == 0x0001A0, "Wrong size on BP_PhysicsInfo_C_SetDetail");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PhysicsInfo_C_SetDetail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PhysicsInfo_C_SetDetail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_PhysicsInfo_C_SetDetail::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_IsEmpty_ReturnValue_1) == 0x000021, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'BP_PhysicsInfo_C_SetDetail::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_SelectString_ReturnValue) == 0x000028, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000058, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, K2Node_DynamicCast_AsCharacter_Zion) == 0x000068, "Member 'BP_PhysicsInfo_C_SetDetail::K2Node_DynamicCast_AsCharacter_Zion' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_PhysicsInfo_C_SetDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetMaxValue_ReturnValue) == 0x000080, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetMaxValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetClassDisplayName_ReturnValue) == 0x0000A8, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_StartsWith_ReturnValue) == 0x0000B9, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_StartsWith_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Replace_ReturnValue) == 0x0000C0, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetObjectClass_ReturnValue) == 0x0000D0, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetClassDisplayName_ReturnValue_1) == 0x0000E8, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetClassDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Replace_ReturnValue_1) == 0x0000F8, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_GetCurrValue_ReturnValue) == 0x000108, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_GetCurrValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Replace_ReturnValue_2) == 0x000110, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000120, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000130, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Array_Length_ReturnValue_1) == 0x000140, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000148, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Less_IntInt_ReturnValue_1) == 0x000158, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000160, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000170, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000180, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetDetail, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000190, "Member 'BP_PhysicsInfo_C_SetDetail::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");

// Function BP_PhysicsInfo.BP_PhysicsInfo_C.SetLocation
// 0x0058 (0x0058 - 0x0000)
struct BP_PhysicsInfo_C_SetLocation final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhysicsInfo_C_SetLocation) == 0x000008, "Wrong alignment on BP_PhysicsInfo_C_SetLocation");
static_assert(sizeof(BP_PhysicsInfo_C_SetLocation) == 0x000058, "Wrong size on BP_PhysicsInfo_C_SetLocation");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_BreakVector_X) == 0x000020, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_BreakVector_Y) == 0x000028, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_BreakVector_Z) == 0x000030, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetLocation, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_PhysicsInfo_C_SetLocation::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function BP_PhysicsInfo.BP_PhysicsInfo_C.SetText
// 0x03B0 (0x03B0 - 0x0000)
struct BP_PhysicsInfo_C_SetText final
{
public:
	bool                                          Detail_0;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0010)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0018(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0070(0x0048)(HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00D0(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0118(0x0048)(HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_2;                      // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_3;                      // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0178(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x01C0(0x0048)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0220(0x0010)()
	int32                                         CallFunc_Round_ReturnValue_4;                      // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_5;                      // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_4;            // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_5;            // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0248(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0290(0x0048)(HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_6;                      // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_7;                      // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_6;            // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_7;            // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x02F0(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0338(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0380(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0390(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x03A0(0x0010)()
};
static_assert(alignof(BP_PhysicsInfo_C_SetText) == 0x000008, "Wrong alignment on BP_PhysicsInfo_C_SetText");
static_assert(sizeof(BP_PhysicsInfo_C_SetText) == 0x0003B0, "Wrong size on BP_PhysicsInfo_C_SetText");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, Detail_0) == 0x000000, "Member 'BP_PhysicsInfo_C_SetText::Detail_0' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000018, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000070, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue) == 0x0000B8, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_1) == 0x0000BC, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000C0, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000C8, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000D0, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_3) == 0x000118, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_2) == 0x000160, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_3) == 0x000164, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000168, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000170, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_4) == 0x000178, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_5) == 0x0001C0, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, Temp_bool_Variable) == 0x000208, "Member 'BP_PhysicsInfo_C_SetText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeArray_Array) == 0x000210, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Format_ReturnValue) == 0x000220, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_4) == 0x000230, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_5) == 0x000234, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_4) == 0x000238, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_5) == 0x000240, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_6) == 0x000248, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_7) == 0x000290, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_6) == 0x0002D8, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Round_ReturnValue_7) == 0x0002DC, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Round_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_6) == 0x0002E0, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue_7) == 0x0002E8, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_8) == 0x0002F0, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeStruct_FormatArgumentData_9) == 0x000338, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_MakeArray_Array_1) == 0x000380, "Member 'BP_PhysicsInfo_C_SetText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, CallFunc_Format_ReturnValue_1) == 0x000390, "Member 'BP_PhysicsInfo_C_SetText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PhysicsInfo_C_SetText, K2Node_Select_Default) == 0x0003A0, "Member 'BP_PhysicsInfo_C_SetText::K2Node_Select_Default' has a wrong offset!");

}

