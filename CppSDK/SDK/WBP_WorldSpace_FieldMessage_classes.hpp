﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldSpace_FieldMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorldSpace_FieldMessage.WBP_WorldSpace_FieldMessage_C
// 0x0030 (0x0348 - 0x0318)
class UWBP_WorldSpace_FieldMessage_C final : public UUserWidgetWorldSpaceText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideLine;                                          // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             LineText;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLineVisible;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_WorldSpace_FieldMessage(int32 EntryPoint);
	void Finished_D75721384C7EE3D24F7D959A98BDA4EC();
	void OnHide();
	void OnShow();
	void SetText(const class FText& Text);
	void WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_ShowAnim_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorldSpace_FieldMessage_C">();
	}
	static class UWBP_WorldSpace_FieldMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldSpace_FieldMessage_C>();
	}
};
static_assert(alignof(UWBP_WorldSpace_FieldMessage_C) == 0x000008, "Wrong alignment on UWBP_WorldSpace_FieldMessage_C");
static_assert(sizeof(UWBP_WorldSpace_FieldMessage_C) == 0x000348, "Wrong size on UWBP_WorldSpace_FieldMessage_C");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, UberGraphFrame) == 0x000318, "Member 'UWBP_WorldSpace_FieldMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, HideLine) == 0x000320, "Member 'UWBP_WorldSpace_FieldMessage_C::HideLine' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, HideAnim) == 0x000328, "Member 'UWBP_WorldSpace_FieldMessage_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, ShowAnim) == 0x000330, "Member 'UWBP_WorldSpace_FieldMessage_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, LineText) == 0x000338, "Member 'UWBP_WorldSpace_FieldMessage_C::LineText' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSpace_FieldMessage_C, IsLineVisible) == 0x000340, "Member 'UWBP_WorldSpace_FieldMessage_C::IsLineVisible' has a wrong offset!");

}

