﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tips_Page

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Tips_Page.WBP_Tips_Page_C.AddTips
// 0x0038 (0x0038 - 0x0000)
struct WBP_Tips_Page_C_AddTips final
{
public:
	struct FDataTableRowHandle                    TipItemHandle;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          bOwned;                                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNew;                                              // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_InventoryEntry_C* Entry)> K2Node_CreateDelegate_OutputDelegate;        // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InventoryEntry_Text_C*             CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tips_Page_C_AddTips) == 0x000008, "Wrong alignment on WBP_Tips_Page_C_AddTips");
static_assert(sizeof(WBP_Tips_Page_C_AddTips) == 0x000038, "Wrong size on WBP_Tips_Page_C_AddTips");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, TipItemHandle) == 0x000000, "Member 'WBP_Tips_Page_C_AddTips::TipItemHandle' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, bOwned) == 0x000010, "Member 'WBP_Tips_Page_C_AddTips::bOwned' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, bNew) == 0x000011, "Member 'WBP_Tips_Page_C_AddTips::bNew' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_Tips_Page_C_AddTips::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_Tips_Page_C_AddTips::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_AddTips, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'WBP_Tips_Page_C_AddTips::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_Tips_Page.WBP_Tips_Page_C.ExecuteUbergraph_WBP_Tips_Page
// 0x0010 (0x0010 - 0x0000)
struct WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InventoryEntry_C*                  K2Node_CustomEvent_Entry;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page) == 0x000008, "Wrong alignment on WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page");
static_assert(sizeof(WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page) == 0x000010, "Wrong size on WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page");
static_assert(offsetof(WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page, EntryPoint) == 0x000000, "Member 'WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page, K2Node_CustomEvent_Entry) == 0x000008, "Member 'WBP_Tips_Page_C_ExecuteUbergraph_WBP_Tips_Page::K2Node_CustomEvent_Entry' has a wrong offset!");

// Function WBP_Tips_Page.WBP_Tips_Page_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_Tips_Page_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tips_Page_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_Tips_Page_C_OnFocusReceived");
static_assert(sizeof(WBP_Tips_Page_C_OnFocusReceived) == 0x0001B8, "Wrong size on WBP_Tips_Page_C_OnFocusReceived");
static_assert(offsetof(WBP_Tips_Page_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_Tips_Page_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_Tips_Page_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_Tips_Page_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_Tips_Page_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tips_Page_C_OnFocusReceived, CallFunc_GetChildAt_ReturnValue) == 0x0001B0, "Member 'WBP_Tips_Page_C_OnFocusReceived::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");

// Function WBP_Tips_Page.WBP_Tips_Page_C.OnTipsFocused
// 0x0008 (0x0008 - 0x0000)
struct WBP_Tips_Page_C_OnTipsFocused final
{
public:
	class UWBP_InventoryEntry_C*                  Entry;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tips_Page_C_OnTipsFocused) == 0x000008, "Wrong alignment on WBP_Tips_Page_C_OnTipsFocused");
static_assert(sizeof(WBP_Tips_Page_C_OnTipsFocused) == 0x000008, "Wrong size on WBP_Tips_Page_C_OnTipsFocused");
static_assert(offsetof(WBP_Tips_Page_C_OnTipsFocused, Entry) == 0x000000, "Member 'WBP_Tips_Page_C_OnTipsFocused::Entry' has a wrong offset!");

}

