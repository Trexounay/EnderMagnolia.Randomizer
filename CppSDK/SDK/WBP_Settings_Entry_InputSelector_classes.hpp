﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Entry_InputSelector

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "Zion_classes.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_Entry_InputSelector.WBP_Settings_Entry_InputSelector_C
// 0x0120 (0x0580 - 0x0460)
class UWBP_Settings_Entry_InputSelector_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_182;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              KeyText;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseClickImage;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              OptionalTextBlock;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_WaitInput;                                 // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WaitKeyText;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Label_C*            WBP_Settings_Entry_Label;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x04A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bIsSelectingKey;                                   // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsGamepadKey;                                      // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bAllowMouseButton;                                 // 0x04BA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB[0x5];                                      // 0x04BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputDescription                      InputDescription;                                  // 0x04C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	bool                                          UseOptionalLabel;                                  // 0x04D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OptionalLabelFormat;                               // 0x04D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FRichTextInputElement>          OptionalLabelFormatElements;                       // 0x04E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	TSet<EActionInputType>                        InvalidInputTypes;                                 // 0x04F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFooterData>                    Footer_SelectingEntries;                           // 0x0548(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FKey>                           InvalidKeys;                                       // 0x0558(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UFMODEvent*                             SE_KeySelection;                                   // 0x0568(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_KeySelected;                                    // 0x0570(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bRightSide;                                        // 0x0578(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CancelKeyRemappingProcess();
	void ExecuteUbergraph_WBP_Settings_Entry_InputSelector(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnKeySelected();
	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSelectKey();
	void PreConstruct(bool IsDesignTime);
	void RefreshWaitKeyText();
	void RemapActionKey(const struct FKey& NewKey);
	void RemapKey(const struct FKey& NewKey);
	void RemapUIKey(const struct FKey& NewKey);
	void SetupOptionalLabel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_Entry_InputSelector_C">();
	}
	static class UWBP_Settings_Entry_InputSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_Entry_InputSelector_C>();
	}
};
static_assert(alignof(UWBP_Settings_Entry_InputSelector_C) == 0x000008, "Wrong alignment on UWBP_Settings_Entry_InputSelector_C");
static_assert(sizeof(UWBP_Settings_Entry_InputSelector_C) == 0x000580, "Wrong size on UWBP_Settings_Entry_InputSelector_C");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Settings_Entry_InputSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, Image_182) == 0x000468, "Member 'UWBP_Settings_Entry_InputSelector_C::Image_182' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, KeyText) == 0x000470, "Member 'UWBP_Settings_Entry_InputSelector_C::KeyText' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, MouseClickImage) == 0x000478, "Member 'UWBP_Settings_Entry_InputSelector_C::MouseClickImage' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, OptionalTextBlock) == 0x000480, "Member 'UWBP_Settings_Entry_InputSelector_C::OptionalTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, Overlay_WaitInput) == 0x000488, "Member 'UWBP_Settings_Entry_InputSelector_C::Overlay_WaitInput' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, WaitKeyText) == 0x000490, "Member 'UWBP_Settings_Entry_InputSelector_C::WaitKeyText' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, WBP_Settings_Entry_Label) == 0x000498, "Member 'UWBP_Settings_Entry_InputSelector_C::WBP_Settings_Entry_Label' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, WidgetSwitcher) == 0x0004A0, "Member 'UWBP_Settings_Entry_InputSelector_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, Label) == 0x0004A8, "Member 'UWBP_Settings_Entry_InputSelector_C::Label' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, bIsSelectingKey) == 0x0004B8, "Member 'UWBP_Settings_Entry_InputSelector_C::bIsSelectingKey' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, IsGamepadKey) == 0x0004B9, "Member 'UWBP_Settings_Entry_InputSelector_C::IsGamepadKey' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, bAllowMouseButton) == 0x0004BA, "Member 'UWBP_Settings_Entry_InputSelector_C::bAllowMouseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, InputDescription) == 0x0004C0, "Member 'UWBP_Settings_Entry_InputSelector_C::InputDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, UseOptionalLabel) == 0x0004D0, "Member 'UWBP_Settings_Entry_InputSelector_C::UseOptionalLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, OptionalLabelFormat) == 0x0004D8, "Member 'UWBP_Settings_Entry_InputSelector_C::OptionalLabelFormat' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, OptionalLabelFormatElements) == 0x0004E8, "Member 'UWBP_Settings_Entry_InputSelector_C::OptionalLabelFormatElements' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, InvalidInputTypes) == 0x0004F8, "Member 'UWBP_Settings_Entry_InputSelector_C::InvalidInputTypes' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, Footer_SelectingEntries) == 0x000548, "Member 'UWBP_Settings_Entry_InputSelector_C::Footer_SelectingEntries' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, InvalidKeys) == 0x000558, "Member 'UWBP_Settings_Entry_InputSelector_C::InvalidKeys' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, SE_KeySelection) == 0x000568, "Member 'UWBP_Settings_Entry_InputSelector_C::SE_KeySelection' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, SE_KeySelected) == 0x000570, "Member 'UWBP_Settings_Entry_InputSelector_C::SE_KeySelected' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_InputSelector_C, bRightSide) == 0x000578, "Member 'UWBP_Settings_Entry_InputSelector_C::bRightSide' has a wrong offset!");

}

