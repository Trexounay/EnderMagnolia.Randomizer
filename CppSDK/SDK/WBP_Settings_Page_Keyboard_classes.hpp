﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Page_Keyboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_Settings_Page_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_Page_Keyboard.WBP_Settings_Page_Keyboard_C
// 0x0158 (0x05D8 - 0x0480)
class UWBP_Settings_Page_Keyboard_C final : public UWBP_Settings_Page_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_RevertToDefault;                // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeparateLine2_C*                   WBP_SeparateLine2;                                 // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeparateLine2_C*                   WBP_SeparateLine2_1;                               // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Attack_A;         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Attack_B;         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Attack_C;         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Attack_D;         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_CameraDown;       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_CameraLeft;       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_CameraRight;      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_CameraUp;         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Dodge;            // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Down;             // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Heal;             // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Hook;             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Interact;         // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Jump;             // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Left;             // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Menu;             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Minimap;          // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Pause;            // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Right;            // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_SpecialAttack_A;  // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_SpecialAttack_B;  // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_SpecialAttack_C;  // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_SpecialAttack_D;  // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_SpecialModifier;  // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Cancel;        // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Confirm;       // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Context;       // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_ContextAlt;    // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Down;          // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Left;          // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Next;          // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_NextAlt;       // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Prev;          // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_PrevAlt;       // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Right;         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_UI_Up;            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Entry_InputSelector_C*    WBP_Settings_Entry_InputSelector_Up;               // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_GameInputs;                                // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_UIInputs;                                  // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Settings_Page_Keyboard_WBP_Button_Generic_RevertToDefault_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ExecuteUbergraph_WBP_Settings_Page_Keyboard(int32 EntryPoint);
	void OnConfirmResetToDefault();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void SetupCustomNavigation(class UPanelWidget* Target, int32 ElementPerLine);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_Page_Keyboard_C">();
	}
	static class UWBP_Settings_Page_Keyboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_Page_Keyboard_C>();
	}
};
static_assert(alignof(UWBP_Settings_Page_Keyboard_C) == 0x000008, "Wrong alignment on UWBP_Settings_Page_Keyboard_C");
static_assert(sizeof(UWBP_Settings_Page_Keyboard_C) == 0x0005D8, "Wrong size on UWBP_Settings_Page_Keyboard_C");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, UberGraphFrame) == 0x000480, "Member 'UWBP_Settings_Page_Keyboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Button_Generic_RevertToDefault) == 0x000488, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Button_Generic_RevertToDefault' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_SeparateLine2) == 0x000490, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_SeparateLine2' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_SeparateLine2_1) == 0x000498, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_SeparateLine2_1' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Attack_A) == 0x0004A0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Attack_A' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Attack_B) == 0x0004A8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Attack_B' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Attack_C) == 0x0004B0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Attack_C' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Attack_D) == 0x0004B8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Attack_D' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_CameraDown) == 0x0004C0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_CameraDown' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_CameraLeft) == 0x0004C8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_CameraLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_CameraRight) == 0x0004D0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_CameraRight' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_CameraUp) == 0x0004D8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_CameraUp' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Dodge) == 0x0004E0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Dodge' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Down) == 0x0004E8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Heal) == 0x0004F0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Heal' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Hook) == 0x0004F8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Hook' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Interact) == 0x000500, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Interact' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Jump) == 0x000508, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Jump' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Left) == 0x000510, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Menu) == 0x000518, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Menu' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Minimap) == 0x000520, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Minimap' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Pause) == 0x000528, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Pause' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Right) == 0x000530, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_SpecialAttack_A) == 0x000538, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_SpecialAttack_A' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_SpecialAttack_B) == 0x000540, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_SpecialAttack_B' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_SpecialAttack_C) == 0x000548, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_SpecialAttack_C' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_SpecialAttack_D) == 0x000550, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_SpecialAttack_D' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_SpecialModifier) == 0x000558, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_SpecialModifier' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Cancel) == 0x000560, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Confirm) == 0x000568, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Confirm' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Context) == 0x000570, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Context' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_ContextAlt) == 0x000578, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_ContextAlt' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Down) == 0x000580, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Left) == 0x000588, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Next) == 0x000590, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Next' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_NextAlt) == 0x000598, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_NextAlt' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Prev) == 0x0005A0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Prev' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_PrevAlt) == 0x0005A8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_PrevAlt' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Right) == 0x0005B0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_UI_Up) == 0x0005B8, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_UI_Up' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WBP_Settings_Entry_InputSelector_Up) == 0x0005C0, "Member 'UWBP_Settings_Page_Keyboard_C::WBP_Settings_Entry_InputSelector_Up' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WrapBox_GameInputs) == 0x0005C8, "Member 'UWBP_Settings_Page_Keyboard_C::WrapBox_GameInputs' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_Page_Keyboard_C, WrapBox_UIInputs) == 0x0005D0, "Member 'UWBP_Settings_Page_Keyboard_C::WrapBox_UIInputs' has a wrong offset!");

}

