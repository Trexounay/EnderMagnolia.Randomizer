﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Extra_SpineAnimation_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Extra_SpineAnimation_Entry.WBP_Extra_SpineAnimation_Entry_C
// 0x0108 (0x0568 - 0x0460)
class UWBP_Extra_SpineAnimation_Entry_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Focused;                                           // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AnimationName;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EF_IsActive;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EF_IsActive_1;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_FocusedContainer;                          // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Play;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Play_BG;                                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Play_Icon;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItemGenericAnimationData     AnimationData;                                     // 0x04A8(0x00A0)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	TMulticastInlineDelegate<void(class UWBP_Extra_SpineAnimation_Entry_C* Entry)> OnFocused;        // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_Extra_SpineAnimation_Entry_C* Entry)> OnPressed;        // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Extra_SpineAnimation_Entry(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Set_Is_Active(bool Active);
	void SetAnimationName(const class FText& AnimationName_0);
	void SetFocusedState(bool Focused_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Extra_SpineAnimation_Entry_C">();
	}
	static class UWBP_Extra_SpineAnimation_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Extra_SpineAnimation_Entry_C>();
	}
};
static_assert(alignof(UWBP_Extra_SpineAnimation_Entry_C) == 0x000008, "Wrong alignment on UWBP_Extra_SpineAnimation_Entry_C");
static_assert(sizeof(UWBP_Extra_SpineAnimation_Entry_C) == 0x000568, "Wrong size on UWBP_Extra_SpineAnimation_Entry_C");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Extra_SpineAnimation_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, Focused) == 0x000468, "Member 'UWBP_Extra_SpineAnimation_Entry_C::Focused' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, AnimationName) == 0x000470, "Member 'UWBP_Extra_SpineAnimation_Entry_C::AnimationName' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, EF_IsActive) == 0x000478, "Member 'UWBP_Extra_SpineAnimation_Entry_C::EF_IsActive' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, EF_IsActive_1) == 0x000480, "Member 'UWBP_Extra_SpineAnimation_Entry_C::EF_IsActive_1' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, Overlay_FocusedContainer) == 0x000488, "Member 'UWBP_Extra_SpineAnimation_Entry_C::Overlay_FocusedContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, Overlay_Play) == 0x000490, "Member 'UWBP_Extra_SpineAnimation_Entry_C::Overlay_Play' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, Play_BG) == 0x000498, "Member 'UWBP_Extra_SpineAnimation_Entry_C::Play_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, Play_Icon) == 0x0004A0, "Member 'UWBP_Extra_SpineAnimation_Entry_C::Play_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, AnimationData) == 0x0004A8, "Member 'UWBP_Extra_SpineAnimation_Entry_C::AnimationData' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, OnFocused) == 0x000548, "Member 'UWBP_Extra_SpineAnimation_Entry_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_Extra_SpineAnimation_Entry_C, OnPressed) == 0x000558, "Member 'UWBP_Extra_SpineAnimation_Entry_C::OnPressed' has a wrong offset!");

}

