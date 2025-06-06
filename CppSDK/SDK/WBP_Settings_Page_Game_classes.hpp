﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Page_Game

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_Settings_Page_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_Page_Game.WBP_Settings_Page_Game_C
// 0x0088 (0x0508 - 0x0480)
class UWBP_Settings_Page_Game_C final : public UWBP_Settings_Page_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_CrashReportSettings;                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_RevertToDefault;                // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_AutoClimbMode_C* WBP_Settings_Entry_Choice_AutoClimbMode;       // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_AutoSkipAlreadySeenEvents; // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_AutoUploadCrash;  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_CameraOscillation; // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayAchievementNotifications; // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayDamageValues; // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayEnemyGauges; // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayHealValues; // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayHPAboveGauge; // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayPlayerUI;  // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DisplayTutorial;  // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Choice_Toggle_C*    WBP_Settings_Entry_Choice_Toggle_DodgeStillHoldDown; // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Slider_C*           WBP_Settings_Entry_Slider_CameraShake;             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_Slider_C*           WBP_Settings_Entry_Slider_LowHPFeedbackOpacity;    // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Settings_Page_Game_WBP_Button_Generic_RevertToDefault_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_AutoSkipAlreadySeenEvents_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_AutoUploadCrash_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_CameraOscillation_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayAchievementNotifications_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayDamageValues_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayEnemyGauges_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayHealValues_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayHPAboveGauge_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayPlayerUI_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DisplayTutorial_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Choice_Toggle_DodgeStillHoldDown_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Slider_CameraShake_K2Node_ComponentBoundEvent_7_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Settings_Page_Game_WBP_Settings_Entry_Slider_LowHPFeedbackOpacity_K2Node_ComponentBoundEvent_6_OnSliderValueChanged__DelegateSignature(double Value);
	void Construct();
	void ExecuteUbergraph_WBP_Settings_Page_Game(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnConfirmResetToDefault();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void ResetToDefault();
	void SetupPage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_Page_Game_C">();
	}
	static class UWBP_Settings_Page_Game_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_Page_Game_C>();
	}
};
static_assert(alignof(UWBP_Settings_Page_Game_C) == 0x000008, "Wrong alignment on UWBP_Settings_Page_Game_C");
static_assert(sizeof(UWBP_Settings_Page_Game_C) == 0x000508, "Wrong size on UWBP_Settings_Page_Game_C");
static_assert(offsetof(UWBP_Settings_Page_Game_C, UberGraphFrame) == 0x000480, "Member 'UWBP_Settings_Page_Game_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, VerticalBox_CrashReportSettings) == 0x000488, "Member 'UWBP_Settings_Page_Game_C::VerticalBox_CrashReportSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Button_Generic_RevertToDefault) == 0x000490, "Member 'UWBP_Settings_Page_Game_C::WBP_Button_Generic_RevertToDefault' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_AutoClimbMode) == 0x000498, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_AutoClimbMode' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_AutoSkipAlreadySeenEvents) == 0x0004A0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_AutoSkipAlreadySeenEvents' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_AutoUploadCrash) == 0x0004A8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_AutoUploadCrash' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_CameraOscillation) == 0x0004B0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_CameraOscillation' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayAchievementNotifications) == 0x0004B8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayAchievementNotifications' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayDamageValues) == 0x0004C0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayDamageValues' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayEnemyGauges) == 0x0004C8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayEnemyGauges' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayHealValues) == 0x0004D0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayHealValues' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayHPAboveGauge) == 0x0004D8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayHPAboveGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayPlayerUI) == 0x0004E0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayPlayerUI' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DisplayTutorial) == 0x0004E8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DisplayTutorial' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Choice_Toggle_DodgeStillHoldDown) == 0x0004F0, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Choice_Toggle_DodgeStillHoldDown' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Slider_CameraShake) == 0x0004F8, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Slider_CameraShake' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Game_C, WBP_Settings_Entry_Slider_LowHPFeedbackOpacity) == 0x000500, "Member 'UWBP_Settings_Page_Game_C::WBP_Settings_Entry_Slider_LowHPFeedbackOpacity' has a wrong offset!");

}

