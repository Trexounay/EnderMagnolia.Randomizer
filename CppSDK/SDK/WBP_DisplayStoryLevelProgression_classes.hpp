﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DisplayStoryLevelProgression

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DisplayStoryLevelProgression.WBP_DisplayStoryLevelProgression_C
// 0x0080 (0x04E0 - 0x0460)
class UWBP_DisplayStoryLevelProgression_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GoalDescription;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapIcon_StoryEvent_C*              WBP_MapIcon_StoryEvent;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStoryLevelData                        StoryLevelData;                                    // 0x0490(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

public:
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_DisplayStoryLevelProgression(int32 EntryPoint);
	void OnFinish_98E5E2974ECD62545C69B0ABF6AEDE13();
	void SetGoalDescription(const class FText& MapAreaName);
	void WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_ShowAnim_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DisplayStoryLevelProgression_C">();
	}
	static class UWBP_DisplayStoryLevelProgression_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DisplayStoryLevelProgression_C>();
	}
};
static_assert(alignof(UWBP_DisplayStoryLevelProgression_C) == 0x000008, "Wrong alignment on UWBP_DisplayStoryLevelProgression_C");
static_assert(sizeof(UWBP_DisplayStoryLevelProgression_C) == 0x0004E0, "Wrong size on UWBP_DisplayStoryLevelProgression_C");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, UberGraphFrame) == 0x000460, "Member 'UWBP_DisplayStoryLevelProgression_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, HideAnim) == 0x000468, "Member 'UWBP_DisplayStoryLevelProgression_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, ShowAnim) == 0x000470, "Member 'UWBP_DisplayStoryLevelProgression_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, Frame) == 0x000478, "Member 'UWBP_DisplayStoryLevelProgression_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, GoalDescription) == 0x000480, "Member 'UWBP_DisplayStoryLevelProgression_C::GoalDescription' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, WBP_MapIcon_StoryEvent) == 0x000488, "Member 'UWBP_DisplayStoryLevelProgression_C::WBP_MapIcon_StoryEvent' has a wrong offset!");
static_assert(offsetof(UWBP_DisplayStoryLevelProgression_C, StoryLevelData) == 0x000490, "Member 'UWBP_DisplayStoryLevelProgression_C::StoryLevelData' has a wrong offset!");

}

