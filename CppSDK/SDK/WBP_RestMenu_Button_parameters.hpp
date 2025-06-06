﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RestMenu_Button

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.ExecuteUbergraph_WBP_RestMenu_Button
// 0x0018 (0x0018 - 0x0000)
struct WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0008(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0010(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button) == 0x000004, "Wrong alignment on WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button");
static_assert(sizeof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button) == 0x000018, "Wrong size on WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button");
static_assert(offsetof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button, EntryPoint) == 0x000000, "Member 'WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button, K2Node_Event_InFocusEvent_1) == 0x000008, "Member 'WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button, K2Node_Event_InFocusEvent) == 0x000010, "Member 'WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_RestMenu_Button_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_RestMenu_Button_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_RestMenu_Button_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_RestMenu_Button_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_RestMenu_Button_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_RestMenu_Button_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_RestMenu_Button_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnPressConfirm
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_RestMenu_Button_C_OnPressConfirm final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_RestMenu_Button_C_OnPressConfirm) == 0x000008, "Wrong alignment on WBP_RestMenu_Button_C_OnPressConfirm");
static_assert(sizeof(WBP_RestMenu_Button_C_OnPressConfirm) == 0x0001B0, "Wrong size on WBP_RestMenu_Button_C_OnPressConfirm");
static_assert(offsetof(WBP_RestMenu_Button_C_OnPressConfirm, KeyEvent) == 0x000000, "Member 'WBP_RestMenu_Button_C_OnPressConfirm::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_OnPressConfirm, ReturnValue) == 0x000040, "Member 'WBP_RestMenu_Button_C_OnPressConfirm::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_OnPressConfirm, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_RestMenu_Button_C_OnPressConfirm::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_RestMenu_Button_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_RestMenu_Button_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_RestMenu_Button_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_RestMenu_Button_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_RestMenu_Button_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_RestMenu_Button_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_RestMenu_Button_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_RestMenu_Button_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RestMenu_Button_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_RestMenu_Button_C_PreConstruct");
static_assert(sizeof(WBP_RestMenu_Button_C_PreConstruct) == 0x000001, "Wrong size on WBP_RestMenu_Button_C_PreConstruct");
static_assert(offsetof(WBP_RestMenu_Button_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_RestMenu_Button_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetFocusedState
// 0x0020 (0x0020 - 0x0000)
struct WBP_RestMenu_Button_C_SetFocusedState final
{
public:
	bool                                          Focus;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RestMenu_Button_C_SetFocusedState) == 0x000008, "Wrong alignment on WBP_RestMenu_Button_C_SetFocusedState");
static_assert(sizeof(WBP_RestMenu_Button_C_SetFocusedState) == 0x000020, "Wrong size on WBP_RestMenu_Button_C_SetFocusedState");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, Focus) == 0x000000, "Member 'WBP_RestMenu_Button_C_SetFocusedState::Focus' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, Temp_byte_Variable) == 0x000001, "Member 'WBP_RestMenu_Button_C_SetFocusedState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_RestMenu_Button_C_SetFocusedState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_RestMenu_Button_C_SetFocusedState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, Temp_bool_Variable) == 0x000010, "Member 'WBP_RestMenu_Button_C_SetFocusedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, K2Node_Select_Default) == 0x000011, "Member 'WBP_RestMenu_Button_C_SetFocusedState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetFocusedState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_RestMenu_Button_C_SetFocusedState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetNewVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_RestMenu_Button_C_SetNewVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RestMenu_Button_C_SetNewVisibility) == 0x000001, "Wrong alignment on WBP_RestMenu_Button_C_SetNewVisibility");
static_assert(sizeof(WBP_RestMenu_Button_C_SetNewVisibility) == 0x000005, "Wrong size on WBP_RestMenu_Button_C_SetNewVisibility");
static_assert(offsetof(WBP_RestMenu_Button_C_SetNewVisibility, bVisible) == 0x000000, "Member 'WBP_RestMenu_Button_C_SetNewVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetNewVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_RestMenu_Button_C_SetNewVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetNewVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_RestMenu_Button_C_SetNewVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetNewVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_RestMenu_Button_C_SetNewVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RestMenu_Button_C_SetNewVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_RestMenu_Button_C_SetNewVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetText
// 0x0010 (0x0010 - 0x0000)
struct WBP_RestMenu_Button_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_RestMenu_Button_C_SetText) == 0x000008, "Wrong alignment on WBP_RestMenu_Button_C_SetText");
static_assert(sizeof(WBP_RestMenu_Button_C_SetText) == 0x000010, "Wrong size on WBP_RestMenu_Button_C_SetText");
static_assert(offsetof(WBP_RestMenu_Button_C_SetText, InText) == 0x000000, "Member 'WBP_RestMenu_Button_C_SetText::InText' has a wrong offset!");

}

