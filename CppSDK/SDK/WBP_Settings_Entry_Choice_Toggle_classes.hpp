﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Entry_Choice_Toggle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_Entry_Choice_Toggle.WBP_Settings_Entry_Choice_Toggle_C
// 0x0088 (0x04E8 - 0x0460)
class UWBP_Settings_Entry_Choice_Toggle_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Settings_Entry_Choice_Text_C*      WBP_Settings_Entry_Choice_Text;                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x0470(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          ToggleValue;                                       // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool ToggleValue)> OnToggle;                                       // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ToggleOFF;                                         // 0x0498(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	class FText                                   ToggleON;                                          // 0x04A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bColorValue;                                       // 0x04B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x3];                                      // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            ColorOFF;                                          // 0x04BC(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                            ColorON;                                           // 0x04D0(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void BndEvt__WBP_Settings_Entry_Choice_Toggle_WBP_Settings_Entry_Choice_Text_K2Node_ComponentBoundEvent_2_OnLeft__DelegateSignature();
	void BndEvt__WBP_Settings_Entry_Choice_Toggle_WBP_Settings_Entry_Choice_Text_K2Node_ComponentBoundEvent_3_OnRight__DelegateSignature();
	void ExecuteUbergraph_WBP_Settings_Entry_Choice_Toggle(int32 EntryPoint);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnSetIsEnabled(bool bInIsEnabled);
	void PreConstruct(bool IsDesignTime);
	void RefreshOptionText();
	void SetLabel(const class FText& InText);
	void SetToggle(bool ToggleValue_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_Entry_Choice_Toggle_C">();
	}
	static class UWBP_Settings_Entry_Choice_Toggle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_Entry_Choice_Toggle_C>();
	}
};
static_assert(alignof(UWBP_Settings_Entry_Choice_Toggle_C) == 0x000008, "Wrong alignment on UWBP_Settings_Entry_Choice_Toggle_C");
static_assert(sizeof(UWBP_Settings_Entry_Choice_Toggle_C) == 0x0004E8, "Wrong size on UWBP_Settings_Entry_Choice_Toggle_C");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, WBP_Settings_Entry_Choice_Text) == 0x000468, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::WBP_Settings_Entry_Choice_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, Label) == 0x000470, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::Label' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, ToggleValue) == 0x000480, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::ToggleValue' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, OnToggle) == 0x000488, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::OnToggle' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, ToggleOFF) == 0x000498, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::ToggleOFF' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, ToggleON) == 0x0004A8, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::ToggleON' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, bColorValue) == 0x0004B8, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::bColorValue' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, ColorOFF) == 0x0004BC, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::ColorOFF' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Entry_Choice_Toggle_C, ColorON) == 0x0004D0, "Member 'UWBP_Settings_Entry_Choice_Toggle_C::ColorON' has a wrong offset!");

}

