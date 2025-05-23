﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldSpace_Interact

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Zion_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorldSpace_Interact.WBP_WorldSpace_Interact_C
// 0x0058 (0x0370 - 0x0318)
class UWBP_WorldSpace_Interact_C final : public UUserWidgetWorldSpaceText_Interact
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBloomBox*                              BloomBox_0;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InteractText;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_TextContainer;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Color_InteractAvailable;                           // 0x0350(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_InteractUnavailable;                         // 0x0360(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_WorldSpace_Interact(int32 EntryPoint);
	void OnHide();
	void OnShow();
	void SetAvailable(bool bAvailable);
	void SetText(const class FText& Text);
	void WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorldSpace_Interact_C">();
	}
	static class UWBP_WorldSpace_Interact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldSpace_Interact_C>();
	}
};
static_assert(alignof(UWBP_WorldSpace_Interact_C) == 0x000008, "Wrong alignment on UWBP_WorldSpace_Interact_C");
static_assert(sizeof(UWBP_WorldSpace_Interact_C) == 0x000370, "Wrong size on UWBP_WorldSpace_Interact_C");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, UberGraphFrame) == 0x000318, "Member 'UWBP_WorldSpace_Interact_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, HideAnim) == 0x000320, "Member 'UWBP_WorldSpace_Interact_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, ShowAnim) == 0x000328, "Member 'UWBP_WorldSpace_Interact_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, BG) == 0x000330, "Member 'UWBP_WorldSpace_Interact_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, BloomBox_0) == 0x000338, "Member 'UWBP_WorldSpace_Interact_C::BloomBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, InteractText) == 0x000340, "Member 'UWBP_WorldSpace_Interact_C::InteractText' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, Overlay_TextContainer) == 0x000348, "Member 'UWBP_WorldSpace_Interact_C::Overlay_TextContainer' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, Color_InteractAvailable) == 0x000350, "Member 'UWBP_WorldSpace_Interact_C::Color_InteractAvailable' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_Interact_C, Color_InteractUnavailable) == 0x000360, "Member 'UWBP_WorldSpace_Interact_C::Color_InteractUnavailable' has a wrong offset!");

}

