﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings.WBP_Settings_C
// 0x00C8 (0x0528 - 0x0460)
class UWBP_Settings_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hide;                                              // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               TabHolder;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabLine;                                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Explanation_C*                     WBP_Explanation;                                   // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Footer_C*                          WBP_Footer;                                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Scrollbox_C*                       WBP_Scrollbox;                                     // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Game_C*              WBP_Settings_Page_Game;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Gamepad_C*           WBP_Settings_Page_Gamepad;                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Keyboard_C*          WBP_Settings_Page_Keyboard;                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Language_C*          WBP_Settings_Page_Language;                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Sound_C*             WBP_Settings_Page_Sound;                           // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Page_Video_C*             WBP_Settings_Page_Video;                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Audio;                            // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Game;                             // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Gamepad;                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Keyboard;                         // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Language;                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    WBP_Settings_Tab_Video;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFMODEvent*                             SE_Tab;                                            // 0x0510(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_GameMenu_Tab_C*>            Tabs;                                              // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_Settings(int32 EntryPoint);
	void GetNewPageIndex(int32 PageOffset, int32* NewPageIndex);
	void GoToPage(int32 PageIndex);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnChildFocused(class UNativeWidgetHost* FocusedWidgetHost, const struct FFocusEvent& FocusEvent);
	void OnFinish_35A5AFFB4565480F90DB9B89C2F29C9F();
	void OnFinish_6702339C46412111223AB2824E7C73B9();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	void OnPressedNewTab(const struct FKeyEvent& KeyEvent, class UWBP_GameMenu_Tab_C* PressedButtonTab);
	void OnPressedTab(const struct FKeyEvent& KeyEvent, class UWBP_Button_Tab_C* PressedButtonTab);
	struct FEventReply OnPressNext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressPrevious(const struct FKeyEvent& KeyEvent);
	void PreConstruct(bool IsDesignTime);
	void RefreshTabSelection();
	void SetupTabs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_C">();
	}
	static class UWBP_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_C>();
	}
};
static_assert(alignof(UWBP_Settings_C) == 0x000008, "Wrong alignment on UWBP_Settings_C");
static_assert(sizeof(UWBP_Settings_C) == 0x000528, "Wrong size on UWBP_Settings_C");
static_assert(offsetof(UWBP_Settings_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, Hide) == 0x000468, "Member 'UWBP_Settings_C::Hide' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, Show) == 0x000470, "Member 'UWBP_Settings_C::Show' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, BG) == 0x000478, "Member 'UWBP_Settings_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, TabHolder) == 0x000480, "Member 'UWBP_Settings_C::TabHolder' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, TabLine) == 0x000488, "Member 'UWBP_Settings_C::TabLine' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Explanation) == 0x000490, "Member 'UWBP_Settings_C::WBP_Explanation' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Footer) == 0x000498, "Member 'UWBP_Settings_C::WBP_Footer' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Scrollbox) == 0x0004A0, "Member 'UWBP_Settings_C::WBP_Scrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Game) == 0x0004A8, "Member 'UWBP_Settings_C::WBP_Settings_Page_Game' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Gamepad) == 0x0004B0, "Member 'UWBP_Settings_C::WBP_Settings_Page_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Keyboard) == 0x0004B8, "Member 'UWBP_Settings_C::WBP_Settings_Page_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Language) == 0x0004C0, "Member 'UWBP_Settings_C::WBP_Settings_Page_Language' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Sound) == 0x0004C8, "Member 'UWBP_Settings_C::WBP_Settings_Page_Sound' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Page_Video) == 0x0004D0, "Member 'UWBP_Settings_C::WBP_Settings_Page_Video' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Audio) == 0x0004D8, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Audio' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Game) == 0x0004E0, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Game' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Gamepad) == 0x0004E8, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Keyboard) == 0x0004F0, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Language) == 0x0004F8, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Language' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WBP_Settings_Tab_Video) == 0x000500, "Member 'UWBP_Settings_C::WBP_Settings_Tab_Video' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, WidgetSwitcher) == 0x000508, "Member 'UWBP_Settings_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, SE_Tab) == 0x000510, "Member 'UWBP_Settings_C::SE_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, Tabs) == 0x000518, "Member 'UWBP_Settings_C::Tabs' has a wrong offset!");

}

