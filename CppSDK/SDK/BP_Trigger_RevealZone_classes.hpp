﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Trigger_RevealZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Trigger_RevealZone.BP_Trigger_RevealZone_C
// 0x0030 (0x02D0 - 0x02A0)
class ABP_Trigger_RevealZone_C final : public ATrigger
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   BoxEditorVisual;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URenderStateComponent*                  RenderState;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClearComponent*                        Clear;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldClearOnRendered;                             // 0x02C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnClearStatusCheckedOverlap();
	void MarkAsClear();
	void ExecuteUbergraph_BP_Trigger_RevealZone(int32 EntryPoint);
	void BndEvt__BP_Trigger_RevealZone_RenderState_K2Node_ComponentBoundEvent_1_RenderStateDelegate__DelegateSignature();
	void BndEvt__BP_Trigger_RevealZone_Clear_K2Node_ComponentBoundEvent_0_ClearableDelegate__DelegateSignature(EClearStatus ClearStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Trigger_RevealZone_C">();
	}
	static class ABP_Trigger_RevealZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Trigger_RevealZone_C>();
	}
};
static_assert(alignof(ABP_Trigger_RevealZone_C) == 0x000008, "Wrong alignment on ABP_Trigger_RevealZone_C");
static_assert(sizeof(ABP_Trigger_RevealZone_C) == 0x0002D0, "Wrong size on ABP_Trigger_RevealZone_C");
static_assert(offsetof(ABP_Trigger_RevealZone_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_Trigger_RevealZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_RevealZone_C, BoxEditorVisual) == 0x0002A8, "Member 'ABP_Trigger_RevealZone_C::BoxEditorVisual' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_RevealZone_C, RenderState) == 0x0002B0, "Member 'ABP_Trigger_RevealZone_C::RenderState' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_RevealZone_C, Clear) == 0x0002B8, "Member 'ABP_Trigger_RevealZone_C::Clear' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_RevealZone_C, Box) == 0x0002C0, "Member 'ABP_Trigger_RevealZone_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_RevealZone_C, ShouldClearOnRendered) == 0x0002C8, "Member 'ABP_Trigger_RevealZone_C::ShouldClearOnRendered' has a wrong offset!");

}

