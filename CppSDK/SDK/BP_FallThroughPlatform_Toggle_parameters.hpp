﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FallThroughPlatform_Toggle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000118, "Wrong size on BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_FallThroughPlatform_Toggle_C_BndEvt__BP_FallThroughPlatform_Toggle_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.ExecuteUbergraph_BP_FallThroughPlatform_Toggle
// 0x01E8 (0x01E8 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SafeDivide_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SafeDivide_ReturnValue_1;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0038(0x00F8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsPlayer_ReturnValue;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Alpha_2;                        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Alpha_1;                        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Alpha;                          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SafeDivide_ReturnValue_2;                 // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnDisappearProcessUpdate_Alpha_ImplicitCast; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnRespawnProcessUpdate_Alpha_ImplicitCast; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnPostDisappearProcessUpdate_Alpha_ImplicitCast; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast_1;       // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetColorOnPlatform_Alpha_ImplicitCast;    // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetColorOnPlatform_Alpha_ImplicitCast_1;  // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast_2;       // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle) == 0x0001E8, "Wrong size on BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, EntryPoint) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SafeDivide_ReturnValue) == 0x000008, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SafeDivide_ReturnValue_1) == 0x000010, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SafeDivide_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000018, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_OtherActor) == 0x000020, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_OtherComp) == 0x000028, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000030, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_bFromSweep) == 0x000034, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_ComponentBoundEvent_SweepResult) == 0x000038, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_IsPlayer_ReturnValue) == 0x000130, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_IsPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_CreateDelegate_OutputDelegate) == 0x000134, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000144, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000148, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000150, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000160, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000168, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Not_PreBool_ReturnValue) == 0x000170, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_CustomEvent_Alpha_2) == 0x000178, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_CustomEvent_Alpha_2' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Not_PreBool_ReturnValue_1) == 0x000180, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000188, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_CustomEvent_Alpha_1) == 0x000190, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_CustomEvent_Alpha_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, K2Node_CustomEvent_Alpha) == 0x000198, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::K2Node_CustomEvent_Alpha' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SafeDivide_ReturnValue_2) == 0x0001A0, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SafeDivide_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_OnDisappearProcessUpdate_Alpha_ImplicitCast) == 0x0001A8, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_OnDisappearProcessUpdate_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_OnRespawnProcessUpdate_Alpha_ImplicitCast) == 0x0001B0, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_OnRespawnProcessUpdate_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_OnPostDisappearProcessUpdate_Alpha_ImplicitCast) == 0x0001B8, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_OnPostDisappearProcessUpdate_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x0001C0, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SetPlayRate_NewRate_ImplicitCast_1) == 0x0001C4, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SetPlayRate_NewRate_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x0001D0, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SetColorOnPlatform_Alpha_ImplicitCast) == 0x0001D8, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SetColorOnPlatform_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SetColorOnPlatform_Alpha_ImplicitCast_1) == 0x0001DC, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SetColorOnPlatform_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle, CallFunc_SetPlayRate_NewRate_ImplicitCast_2) == 0x0001E0, "Member 'BP_FallThroughPlatform_Toggle_C_ExecuteUbergraph_BP_FallThroughPlatform_Toggle::CallFunc_SetPlayRate_NewRate_ImplicitCast_2' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.OnDisappearProcessUpdate
// 0x0008 (0x0008 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate) == 0x000008, "Wrong size on BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate, Alpha) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_OnDisappearProcessUpdate::Alpha' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.OnPostDisappearProcessUpdate
// 0x0008 (0x0008 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate) == 0x000008, "Wrong size on BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate, Alpha) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_OnPostDisappearProcessUpdate::Alpha' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.OnRespawnProcessUpdate
// 0x0008 (0x0008 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate) == 0x000008, "Wrong size on BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate, Alpha) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_OnRespawnProcessUpdate::Alpha' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.SetColorOnPlatform
// 0x0030 (0x0030 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform) == 0x000008, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform) == 0x000030, "Wrong size on BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform, Alpha) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform::Alpha' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform, CallFunc_LinearColorLerp_ReturnValue) == 0x000004, "Member 'BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000018, "Member 'BP_FallThroughPlatform_Toggle_C_SetColorOnPlatform::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");

// Function BP_FallThroughPlatform_Toggle.BP_FallThroughPlatform_Toggle_C.TogglePlatform
// 0x0001 (0x0001 - 0x0000)
struct BP_FallThroughPlatform_Toggle_C_TogglePlatform final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallThroughPlatform_Toggle_C_TogglePlatform) == 0x000001, "Wrong alignment on BP_FallThroughPlatform_Toggle_C_TogglePlatform");
static_assert(sizeof(BP_FallThroughPlatform_Toggle_C_TogglePlatform) == 0x000001, "Wrong size on BP_FallThroughPlatform_Toggle_C_TogglePlatform");
static_assert(offsetof(BP_FallThroughPlatform_Toggle_C_TogglePlatform, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BP_FallThroughPlatform_Toggle_C_TogglePlatform::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

