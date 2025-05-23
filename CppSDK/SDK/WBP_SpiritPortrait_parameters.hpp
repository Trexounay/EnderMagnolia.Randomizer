﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpiritPortrait

#include "Basic.hpp"

#include "Zion_structs.hpp"


namespace SDK::Params
{

// Function WBP_SpiritPortrait.WBP_SpiritPortrait_C.Setup
// 0x0210 (0x0210 - 0x0000)
struct WBP_SpiritPortrait_C_Setup final
{
public:
	struct FInventoryItemSpiritData               InventoryItemSpiritData;                           // 0x0000(0x0208)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpiritPortrait_C_Setup) == 0x000008, "Wrong alignment on WBP_SpiritPortrait_C_Setup");
static_assert(sizeof(WBP_SpiritPortrait_C_Setup) == 0x000210, "Wrong size on WBP_SpiritPortrait_C_Setup");
static_assert(offsetof(WBP_SpiritPortrait_C_Setup, InventoryItemSpiritData) == 0x000000, "Member 'WBP_SpiritPortrait_C_Setup::InventoryItemSpiritData' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_Setup, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000208, "Member 'WBP_SpiritPortrait_C_Setup::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_Setup, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000209, "Member 'WBP_SpiritPortrait_C_Setup::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_SpiritPortrait.WBP_SpiritPortrait_C.ExecuteUbergraph_WBP_SpiritPortrait
// 0x0268 (0x0268 - 0x0000)
struct WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemSpiritData               Temp_struct_Variable;                              // 0x0008(0x0208)(ConstParm)
	TSoftObjectPtr<class UObject>                 K2Node_ComponentBoundEvent_SoftImageObject_1;      // 0x0210(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 K2Node_ComponentBoundEvent_SoftImageObject;        // 0x0238(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait) == 0x000008, "Wrong alignment on WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait");
static_assert(sizeof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait) == 0x000268, "Wrong size on WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait");
static_assert(offsetof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait, EntryPoint) == 0x000000, "Member 'WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait, Temp_struct_Variable) == 0x000008, "Member 'WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait, K2Node_ComponentBoundEvent_SoftImageObject_1) == 0x000210, "Member 'WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait::K2Node_ComponentBoundEvent_SoftImageObject_1' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait, K2Node_ComponentBoundEvent_SoftImageObject) == 0x000238, "Member 'WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait::K2Node_ComponentBoundEvent_SoftImageObject' has a wrong offset!");
static_assert(offsetof(WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait, CallFunc_PlayAnimation_ReturnValue) == 0x000260, "Member 'WBP_SpiritPortrait_C_ExecuteUbergraph_WBP_SpiritPortrait::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_SpiritPortrait.WBP_SpiritPortrait_C.Clear
// 0x0208 (0x0208 - 0x0000)
struct WBP_SpiritPortrait_C_Clear final
{
public:
	struct FInventoryItemSpiritData               Temp_struct_Variable;                              // 0x0000(0x0208)(ConstParm)
};
static_assert(alignof(WBP_SpiritPortrait_C_Clear) == 0x000008, "Wrong alignment on WBP_SpiritPortrait_C_Clear");
static_assert(sizeof(WBP_SpiritPortrait_C_Clear) == 0x000208, "Wrong size on WBP_SpiritPortrait_C_Clear");
static_assert(offsetof(WBP_SpiritPortrait_C_Clear, Temp_struct_Variable) == 0x000000, "Member 'WBP_SpiritPortrait_C_Clear::Temp_struct_Variable' has a wrong offset!");

// Function WBP_SpiritPortrait.WBP_SpiritPortrait_C.BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature final
{
public:
	TSoftObjectPtr<class UObject>                 SoftImageObject;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature");
static_assert(sizeof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature) == 0x000028, "Wrong size on WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature");
static_assert(offsetof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature, SoftImageObject) == 0x000000, "Member 'WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_2_ImageZionEvent__DelegateSignature::SoftImageObject' has a wrong offset!");

// Function WBP_SpiritPortrait.WBP_SpiritPortrait_C.BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature final
{
public:
	TSoftObjectPtr<class UObject>                 SoftImageObject;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature");
static_assert(sizeof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature) == 0x000028, "Wrong size on WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature");
static_assert(offsetof(WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature, SoftImageObject) == 0x000000, "Member 'WBP_SpiritPortrait_C_BndEvt__WBP_SpiritPortrait_SpiritImage_K2Node_ComponentBoundEvent_1_ImageZionEvent__DelegateSignature::SoftImageObject' has a wrong offset!");

}

