﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_TeleportPlayer

#include "Basic.hpp"

#include "BP_Interactable_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Interactable_TeleportPlayer.BP_Interactable_TeleportPlayer_C
// 0x00C0 (0x03E8 - 0x0328)
class ABP_Interactable_TeleportPlayer_C  : public ABP_Interactable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Interactable_TeleportPlayer_C;   // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Warp_Direction;                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URenderStateComponent*                  RenderState;                                       // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPaperSpriteComponent*                  PaperSprite;                                       // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TeleportLocation;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TeleportSpeed;                                     // 0x0360(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOffsetByHalfHeight;                               // 0x0364(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class UState>>             TeleportStates;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<TSubclassOf<class UState>>             PostTeleportStates;                                // 0x0378(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	double                                        PostTeleportStatesDuration;                        // 0x0388(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         WarpFX;                                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         PostTeleportationWarpFX;                           // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             PostTeleportationSE;                               // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                EndLocation;                                       // 0x03C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bAppliedStates;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void OnTeleportFinished();
	void OnInteract(class APlayerController* Controller);
	void ExecuteUbergraph_BP_Interactable_TeleportPlayer(int32 EntryPoint);
	struct FVector ComputeEndLocation(const class AActor* InputPin);
	void AlignDirectionFX();
	void UpdatePawnLocation(class APawn* Pawn_0, const struct FVector& DestLocation);
	void SetPawnActive(class APawn* Pawn_0, bool bActive);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Interactable_TeleportPlayer_C">();
	}
	static class ABP_Interactable_TeleportPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Interactable_TeleportPlayer_C>();
	}
};
static_assert(alignof(ABP_Interactable_TeleportPlayer_C) == 0x000008, "Wrong alignment on ABP_Interactable_TeleportPlayer_C");
static_assert(sizeof(ABP_Interactable_TeleportPlayer_C) == 0x0003E8, "Wrong size on ABP_Interactable_TeleportPlayer_C");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, UberGraphFrame_BP_Interactable_TeleportPlayer_C) == 0x000328, "Member 'ABP_Interactable_TeleportPlayer_C::UberGraphFrame_BP_Interactable_TeleportPlayer_C' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, NS_Warp_Direction) == 0x000330, "Member 'ABP_Interactable_TeleportPlayer_C::NS_Warp_Direction' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, RenderState) == 0x000338, "Member 'ABP_Interactable_TeleportPlayer_C::RenderState' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, Niagara) == 0x000340, "Member 'ABP_Interactable_TeleportPlayer_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, PaperSprite) == 0x000348, "Member 'ABP_Interactable_TeleportPlayer_C::PaperSprite' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, Billboard) == 0x000350, "Member 'ABP_Interactable_TeleportPlayer_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, TeleportLocation) == 0x000358, "Member 'ABP_Interactable_TeleportPlayer_C::TeleportLocation' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, TeleportSpeed) == 0x000360, "Member 'ABP_Interactable_TeleportPlayer_C::TeleportSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, bOffsetByHalfHeight) == 0x000364, "Member 'ABP_Interactable_TeleportPlayer_C::bOffsetByHalfHeight' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, TeleportStates) == 0x000368, "Member 'ABP_Interactable_TeleportPlayer_C::TeleportStates' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, PostTeleportStates) == 0x000378, "Member 'ABP_Interactable_TeleportPlayer_C::PostTeleportStates' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, PostTeleportStatesDuration) == 0x000388, "Member 'ABP_Interactable_TeleportPlayer_C::PostTeleportStatesDuration' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, WarpFX) == 0x000390, "Member 'ABP_Interactable_TeleportPlayer_C::WarpFX' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, PostTeleportationWarpFX) == 0x000398, "Member 'ABP_Interactable_TeleportPlayer_C::PostTeleportationWarpFX' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, PostTeleportationSE) == 0x0003A0, "Member 'ABP_Interactable_TeleportPlayer_C::PostTeleportationSE' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, StartLocation) == 0x0003A8, "Member 'ABP_Interactable_TeleportPlayer_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, EndLocation) == 0x0003C0, "Member 'ABP_Interactable_TeleportPlayer_C::EndLocation' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, Pawn) == 0x0003D8, "Member 'ABP_Interactable_TeleportPlayer_C::Pawn' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TeleportPlayer_C, bAppliedStates) == 0x0003E0, "Member 'ABP_Interactable_TeleportPlayer_C::bAppliedStates' has a wrong offset!");

}

