﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Fade_Linear

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Fade_Linear.WBP_Fade_Linear_C
// 0x0020 (0x04B8 - 0x0498)
class UWBP_Fade_Linear_C : public UUserWidgetFade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeOut;                                       // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimFadeIn;                                        // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FadeImage;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void WidgetAnimationEvt_AnimFadeOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimFadeIn_K2Node_WidgetAnimationEvent_0();
	void SetupFadeIn(const struct FFadeParameters& FadeParameters);
	void SetupFade(const struct FFadeParameters& FadeParameters);
	void PlayFadeAnimation(class UWidgetAnimation* Animation, const struct FFadeParameters& FadeParameters);
	void LaunchFadeOut(const struct FFadeParameters& FadeParameters);
	void LaunchFadeIn(const struct FFadeParameters& FadeParameters);
	void ExecuteUbergraph_WBP_Fade_Linear(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Fade_Linear_C">();
	}
	static class UWBP_Fade_Linear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Fade_Linear_C>();
	}
};
static_assert(alignof(UWBP_Fade_Linear_C) == 0x000008, "Wrong alignment on UWBP_Fade_Linear_C");
static_assert(sizeof(UWBP_Fade_Linear_C) == 0x0004B8, "Wrong size on UWBP_Fade_Linear_C");
static_assert(offsetof(UWBP_Fade_Linear_C, UberGraphFrame) == 0x000498, "Member 'UWBP_Fade_Linear_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Fade_Linear_C, AnimFadeOut) == 0x0004A0, "Member 'UWBP_Fade_Linear_C::AnimFadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_Fade_Linear_C, AnimFadeIn) == 0x0004A8, "Member 'UWBP_Fade_Linear_C::AnimFadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Fade_Linear_C, FadeImage) == 0x0004B0, "Member 'UWBP_Fade_Linear_C::FadeImage' has a wrong offset!");

}

