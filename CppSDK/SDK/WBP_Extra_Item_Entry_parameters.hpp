﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Extra_Item_Entry

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.ExecuteUbergraph_WBP_Extra_Item_Entry
// 0x0004 (0x0004 - 0x0000)
struct WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry) == 0x000004, "Wrong alignment on WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry");
static_assert(sizeof(WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry) == 0x000004, "Wrong size on WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry");
static_assert(offsetof(WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry, EntryPoint) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_ExecuteUbergraph_WBP_Extra_Item_Entry::EntryPoint' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetCheckBox
// 0x000A (0x000A - 0x0000)
struct WBP_Extra_Item_Entry_C_SetCheckBox final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChecked;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetCheckBox) == 0x000001, "Wrong alignment on WBP_Extra_Item_Entry_C_SetCheckBox");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetCheckBox) == 0x00000A, "Wrong size on WBP_Extra_Item_Entry_C_SetCheckBox");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, bVisible) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::bVisible' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, bChecked) == 0x000001, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::bChecked' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_bool_Variable) == 0x000002, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_byte_Variable) == 0x000003, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_byte_Variable_1) == 0x000004, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, K2Node_Select_Default) == 0x000006, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_byte_Variable_2) == 0x000007, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, Temp_byte_Variable_3) == 0x000008, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCheckBox, K2Node_Select_Default_1) == 0x000009, "Member 'WBP_Extra_Item_Entry_C_SetCheckBox::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetCurrencyValue
// 0x0008 (0x0008 - 0x0000)
struct WBP_Extra_Item_Entry_C_SetCurrencyValue final
{
public:
	struct FCurrencyValue                         CurrencyValue;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetCurrencyValue) == 0x000004, "Wrong alignment on WBP_Extra_Item_Entry_C_SetCurrencyValue");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetCurrencyValue) == 0x000008, "Wrong size on WBP_Extra_Item_Entry_C_SetCurrencyValue");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetCurrencyValue, CurrencyValue) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetCurrencyValue::CurrencyValue' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetFocusedState
// 0x0010 (0x0010 - 0x0000)
struct WBP_Extra_Item_Entry_C_SetFocusedState final
{
public:
	bool                                          Focus;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetFocusedState) == 0x000008, "Wrong alignment on WBP_Extra_Item_Entry_C_SetFocusedState");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetFocusedState) == 0x000010, "Wrong size on WBP_Extra_Item_Entry_C_SetFocusedState");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, Focus) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::Focus' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, Temp_byte_Variable) == 0x000001, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, Temp_bool_Variable) == 0x000003, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, K2Node_Select_Default) == 0x000004, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetFocusedState, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Extra_Item_Entry_C_SetFocusedState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetIsBought
// 0x0005 (0x0005 - 0x0000)
struct WBP_Extra_Item_Entry_C_SetIsBought final
{
public:
	bool                                          bIsBought;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetIsBought) == 0x000001, "Wrong alignment on WBP_Extra_Item_Entry_C_SetIsBought");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetIsBought) == 0x000005, "Wrong size on WBP_Extra_Item_Entry_C_SetIsBought");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsBought, bIsBought) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetIsBought::bIsBought' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsBought, Temp_byte_Variable) == 0x000001, "Member 'WBP_Extra_Item_Entry_C_SetIsBought::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsBought, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_Extra_Item_Entry_C_SetIsBought::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsBought, Temp_bool_Variable) == 0x000003, "Member 'WBP_Extra_Item_Entry_C_SetIsBought::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsBought, K2Node_Select_Default) == 0x000004, "Member 'WBP_Extra_Item_Entry_C_SetIsBought::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetIsNew
// 0x0005 (0x0005 - 0x0000)
struct WBP_Extra_Item_Entry_C_SetIsNew final
{
public:
	bool                                          IsNew;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetIsNew) == 0x000001, "Wrong alignment on WBP_Extra_Item_Entry_C_SetIsNew");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetIsNew) == 0x000005, "Wrong size on WBP_Extra_Item_Entry_C_SetIsNew");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsNew, IsNew) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetIsNew::IsNew' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsNew, Temp_bool_Variable) == 0x000001, "Member 'WBP_Extra_Item_Entry_C_SetIsNew::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsNew, Temp_byte_Variable) == 0x000002, "Member 'WBP_Extra_Item_Entry_C_SetIsNew::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsNew, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Extra_Item_Entry_C_SetIsNew::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetIsNew, K2Node_Select_Default) == 0x000004, "Member 'WBP_Extra_Item_Entry_C_SetIsNew::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Extra_Item_Entry.WBP_Extra_Item_Entry_C.SetItemName
// 0x0010 (0x0010 - 0x0000)
struct WBP_Extra_Item_Entry_C_SetItemName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Extra_Item_Entry_C_SetItemName) == 0x000008, "Wrong alignment on WBP_Extra_Item_Entry_C_SetItemName");
static_assert(sizeof(WBP_Extra_Item_Entry_C_SetItemName) == 0x000010, "Wrong size on WBP_Extra_Item_Entry_C_SetItemName");
static_assert(offsetof(WBP_Extra_Item_Entry_C_SetItemName, Name_0) == 0x000000, "Member 'WBP_Extra_Item_Entry_C_SetItemName::Name_0' has a wrong offset!");

}

