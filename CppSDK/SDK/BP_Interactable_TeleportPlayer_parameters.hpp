﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_TeleportPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.OnInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_OnInteract final
{
public:
	class APlayerController*                      Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_OnInteract) == 0x000008, "Wrong alignment on BP_Interactable_TeleportPlayer_C_OnInteract");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_OnInteract) == 0x000008, "Wrong size on BP_Interactable_TeleportPlayer_C_OnInteract");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_OnInteract, Controller) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_OnInteract::Controller' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.ExecuteUbergraph_BP_Interactable_TeleportPlayer
// 0x0190 (0x0190 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_Controller;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ComputeEndLocation_ReturnValue;           // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0120(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEventAtLocation_ReturnValue;          // 0x0180(0x0008)(NoDestructor)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer) == 0x000010, "Wrong alignment on BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer) == 0x000190, "Wrong size on BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, EntryPoint) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, K2Node_Event_Controller) == 0x000008, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_ComputeEndLocation_ReturnValue) == 0x000050, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_ComputeEndLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue_3) == 0x000068, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue_4) == 0x000088, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000090, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, K2Node_Event_DeltaSeconds) == 0x000098, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000A0, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_IsValid_ReturnValue_5) == 0x0000B8, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_Vector_IsNearlyZero_ReturnValue) == 0x0000D8, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_Vector_IsNearlyZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_VInterpTo_Constant_ReturnValue) == 0x0000E0, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000100, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000118, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_GetTransform_ReturnValue) == 0x000120, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_PlayEventAtLocation_ReturnValue) == 0x000180, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_PlayEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000188, "Member 'BP_Interactable_TeleportPlayer_C_ExecuteUbergraph_BP_Interactable_TeleportPlayer::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.ComputeEndLocation
// 0x0090 (0x0090 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_ComputeEndLocation final
{
public:
	const class AActor*                           InputPin;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHalfHeight_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation) == 0x000008, "Wrong alignment on BP_Interactable_TeleportPlayer_C_ComputeEndLocation");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation) == 0x000090, "Wrong size on BP_Interactable_TeleportPlayer_C_ComputeEndLocation");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, InputPin) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::InputPin' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, ReturnValue) == 0x000008, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_GetHalfHeight_ReturnValue) == 0x000020, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_GetHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000040, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000058, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_SelectVector_ReturnValue) == 0x000070, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ComputeEndLocation, CallFunc_MakeVector_Z_ImplicitCast) == 0x000088, "Member 'BP_Interactable_TeleportPlayer_C_ComputeEndLocation::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.AlignDirectionFX
// 0x01A0 (0x01A0 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_AlignDirectionFX final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZX_ReturnValue;                // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00A8(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX) == 0x000008, "Wrong alignment on BP_Interactable_TeleportPlayer_C_AlignDirectionFX");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX) == 0x0001A0, "Wrong size on BP_Interactable_TeleportPlayer_C_AlignDirectionFX");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_Normal_ReturnValue) == 0x000060, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000078, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_MakeRotFromZX_ReturnValue) == 0x000090, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_MakeRotFromZX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_AlignDirectionFX, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000A8, "Member 'BP_Interactable_TeleportPlayer_C_AlignDirectionFX::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.UpdatePawnLocation
// 0x0048 (0x0048 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_UpdatePawnLocation final
{
public:
	class APawn*                                  Pawn_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DestLocation;                                      // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation) == 0x000008, "Wrong alignment on BP_Interactable_TeleportPlayer_C_UpdatePawnLocation");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation) == 0x000048, "Wrong size on BP_Interactable_TeleportPlayer_C_UpdatePawnLocation");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation, Pawn_0) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_UpdatePawnLocation::Pawn_0' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation, DestLocation) == 0x000008, "Member 'BP_Interactable_TeleportPlayer_C_UpdatePawnLocation::DestLocation' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_Interactable_TeleportPlayer_C_UpdatePawnLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000028, "Member 'BP_Interactable_TeleportPlayer_C_UpdatePawnLocation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_UpdatePawnLocation, CallFunc_K2_TeleportTo_ReturnValue) == 0x000040, "Member 'BP_Interactable_TeleportPlayer_C_UpdatePawnLocation::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.SetPawnActive
// 0x0040 (0x0040 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_SetPawnActive final
{
public:
	class APawn*                                  Pawn_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStateComponent*                        CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_AddStatesForDuration_Duration_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_SetPawnActive) == 0x000008, "Wrong alignment on BP_Interactable_TeleportPlayer_C_SetPawnActive");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_SetPawnActive) == 0x000040, "Wrong size on BP_Interactable_TeleportPlayer_C_SetPawnActive");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, Pawn_0) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::Pawn_0' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, bActive) == 0x000008, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::bActive' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, K2Node_DynamicCast_AsPrimitive_Component) == 0x000018, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_Not_PreBool_ReturnValue_1) == 0x000032, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, Temp_bool_Variable) == 0x000033, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, Temp_byte_Variable) == 0x000034, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, Temp_byte_Variable_1) == 0x000035, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, K2Node_Select_Default) == 0x000036, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_SetPawnActive, CallFunc_AddStatesForDuration_Duration_ImplicitCast) == 0x000038, "Member 'BP_Interactable_TeleportPlayer_C_SetPawnActive::CallFunc_AddStatesForDuration_Duration_ImplicitCast' has a wrong offset!");

// Function BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Interactable_TeleportPlayer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Interactable_TeleportPlayer_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Interactable_TeleportPlayer_C_ReceiveTick");
static_assert(sizeof(BP_Interactable_TeleportPlayer_C_ReceiveTick) == 0x000004, "Wrong size on BP_Interactable_TeleportPlayer_C_ReceiveTick");
static_assert(offsetof(BP_Interactable_TeleportPlayer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Interactable_TeleportPlayer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

