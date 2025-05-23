﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterZionSpirit_RestPoint

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CharacterZionSpirit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterZionSpirit_RestPoint.BP_CharacterZionSpirit_RestPoint_C
// 0x0090 (0x0CB0 - 0x0C20)
class ABP_CharacterZionSpirit_RestPoint_C : public ABP_CharacterZionSpirit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSpineAnimationDefinition              IdleAnimationDefinition;                           // 0x0C20(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	double                                        MinActionDelay;                                    // 0x0C88(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxActionDelay;                                    // 0x0C90(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpineAnimationDefinition>      ActionAnimationDefinitions;                        // 0x0C98(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FTimerHandle                           TimerHandle;                                       // 0x0CA8(0x0008)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CharacterZionSpirit_RestPoint(int32 EntryPoint);
	void OnActionAnimationFinished();
	void OnDismiss();
	void OnIdleTimer();
	void OnPreSummon();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterZionSpirit_RestPoint_C">();
	}
	static class ABP_CharacterZionSpirit_RestPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterZionSpirit_RestPoint_C>();
	}
};
static_assert(alignof(ABP_CharacterZionSpirit_RestPoint_C) == 0x000010, "Wrong alignment on ABP_CharacterZionSpirit_RestPoint_C");
static_assert(sizeof(ABP_CharacterZionSpirit_RestPoint_C) == 0x000CB0, "Wrong size on ABP_CharacterZionSpirit_RestPoint_C");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, UberGraphFrame) == 0x000C18, "Member 'ABP_CharacterZionSpirit_RestPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, IdleAnimationDefinition) == 0x000C20, "Member 'ABP_CharacterZionSpirit_RestPoint_C::IdleAnimationDefinition' has a wrong offset!");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, MinActionDelay) == 0x000C88, "Member 'ABP_CharacterZionSpirit_RestPoint_C::MinActionDelay' has a wrong offset!");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, MaxActionDelay) == 0x000C90, "Member 'ABP_CharacterZionSpirit_RestPoint_C::MaxActionDelay' has a wrong offset!");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, ActionAnimationDefinitions) == 0x000C98, "Member 'ABP_CharacterZionSpirit_RestPoint_C::ActionAnimationDefinitions' has a wrong offset!");
static_assert(offsetof(ABP_CharacterZionSpirit_RestPoint_C, TimerHandle) == 0x000CA8, "Member 'ABP_CharacterZionSpirit_RestPoint_C::TimerHandle' has a wrong offset!");

}

