﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Dialog_ItemGet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Dialog_ItemGet.WBP_Dialog_ItemGet_C
// 0x0248 (0x06C0 - 0x0478)
class UWBP_Dialog_ItemGet_C final : public UUserWidgetItemGet
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base_Black;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Generic;                               // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Tips;                                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Crest;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Crest_Spirit;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Spirit;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemCategory;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_IconContainer;                             // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SpiritconContainer;                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              RefreshableRichTextBlock_Description;              // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              RefreshableRichTextBlock_Flavor;                   // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              RefreshableRichTextBlock_TipDescription;           // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLine;                                           // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLine_1;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TipCategory;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TipName;                                           // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_OK;                             // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_OK_Tip;                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Footer_C*                          WBP_Footer;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeparateLine_C*                    WBP_SeparateLine_1;                                // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Type;                               // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItemData                     ItemData;                                          // 0x0558(0x0168)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_Dialog_ItemGet_WBP_Button_Generic_OK_1_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_Dialog_ItemGet_WBP_Button_Generic_OK_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Construct();
	void ExecuteUbergraph_WBP_Dialog_ItemGet(int32 EntryPoint);
	void Initialize();
	void OnFinish_72C7DC1544F90D6FD9C218848AF59B62();
	void OnFinish_72C7DC1544F90D6FD9C21884942544CE();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PlaySE();
	void SetName(const class FText& InputPin);
	void SetupElementVisibility(EInventoryItemType Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Dialog_ItemGet_C">();
	}
	static class UWBP_Dialog_ItemGet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Dialog_ItemGet_C>();
	}
};
static_assert(alignof(UWBP_Dialog_ItemGet_C) == 0x000008, "Wrong alignment on UWBP_Dialog_ItemGet_C");
static_assert(sizeof(UWBP_Dialog_ItemGet_C) == 0x0006C0, "Wrong size on UWBP_Dialog_ItemGet_C");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, UberGraphFrame) == 0x000478, "Member 'UWBP_Dialog_ItemGet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, HideAnim) == 0x000480, "Member 'UWBP_Dialog_ItemGet_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, ShowAnim) == 0x000488, "Member 'UWBP_Dialog_ItemGet_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Base_Black) == 0x000490, "Member 'UWBP_Dialog_ItemGet_C::Base_Black' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, BG) == 0x000498, "Member 'UWBP_Dialog_ItemGet_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, CanvasPanel_Generic) == 0x0004A0, "Member 'UWBP_Dialog_ItemGet_C::CanvasPanel_Generic' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, CanvasPanel_Tips) == 0x0004A8, "Member 'UWBP_Dialog_ItemGet_C::CanvasPanel_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Img_Crest) == 0x0004B0, "Member 'UWBP_Dialog_ItemGet_C::Img_Crest' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Img_Crest_Spirit) == 0x0004B8, "Member 'UWBP_Dialog_ItemGet_C::Img_Crest_Spirit' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Img_Item) == 0x0004C0, "Member 'UWBP_Dialog_ItemGet_C::Img_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Img_Spirit) == 0x0004C8, "Member 'UWBP_Dialog_ItemGet_C::Img_Spirit' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, ItemCategory) == 0x0004D0, "Member 'UWBP_Dialog_ItemGet_C::ItemCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, ItemName) == 0x0004D8, "Member 'UWBP_Dialog_ItemGet_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Overlay_IconContainer) == 0x0004E0, "Member 'UWBP_Dialog_ItemGet_C::Overlay_IconContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, Overlay_SpiritconContainer) == 0x0004E8, "Member 'UWBP_Dialog_ItemGet_C::Overlay_SpiritconContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, RefreshableRichTextBlock_Description) == 0x0004F0, "Member 'UWBP_Dialog_ItemGet_C::RefreshableRichTextBlock_Description' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, RefreshableRichTextBlock_Flavor) == 0x0004F8, "Member 'UWBP_Dialog_ItemGet_C::RefreshableRichTextBlock_Flavor' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, RefreshableRichTextBlock_TipDescription) == 0x000500, "Member 'UWBP_Dialog_ItemGet_C::RefreshableRichTextBlock_TipDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, SubLine) == 0x000508, "Member 'UWBP_Dialog_ItemGet_C::SubLine' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, SubLine_1) == 0x000510, "Member 'UWBP_Dialog_ItemGet_C::SubLine_1' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, TipCategory) == 0x000518, "Member 'UWBP_Dialog_ItemGet_C::TipCategory' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, TipName) == 0x000520, "Member 'UWBP_Dialog_ItemGet_C::TipName' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WBP_Button_Generic_OK) == 0x000528, "Member 'UWBP_Dialog_ItemGet_C::WBP_Button_Generic_OK' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WBP_Button_Generic_OK_Tip) == 0x000530, "Member 'UWBP_Dialog_ItemGet_C::WBP_Button_Generic_OK_Tip' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WBP_Footer) == 0x000538, "Member 'UWBP_Dialog_ItemGet_C::WBP_Footer' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WBP_SeparateLine_1) == 0x000540, "Member 'UWBP_Dialog_ItemGet_C::WBP_SeparateLine_1' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WidgetSwitcher_Icon) == 0x000548, "Member 'UWBP_Dialog_ItemGet_C::WidgetSwitcher_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, WidgetSwitcher_Type) == 0x000550, "Member 'UWBP_Dialog_ItemGet_C::WidgetSwitcher_Type' has a wrong offset!");
static_assert(offsetof(UWBP_Dialog_ItemGet_C, ItemData) == 0x000558, "Member 'UWBP_Dialog_ItemGet_C::ItemData' has a wrong offset!");

}

