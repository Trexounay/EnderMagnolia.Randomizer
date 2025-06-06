﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameMenu

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Zion_structs.hpp"


namespace SDK::Params
{

// Function WBP_GameMenu.WBP_GameMenu_C.ConditionalRHIDisable
// 0x0001 (0x0001 - 0x0000)
struct WBP_GameMenu_C_ConditionalRHIDisable final
{
public:
	bool                                          CallFunc_IsSwitchBuild_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_ConditionalRHIDisable) == 0x000001, "Wrong alignment on WBP_GameMenu_C_ConditionalRHIDisable");
static_assert(sizeof(WBP_GameMenu_C_ConditionalRHIDisable) == 0x000001, "Wrong size on WBP_GameMenu_C_ConditionalRHIDisable");
static_assert(offsetof(WBP_GameMenu_C_ConditionalRHIDisable, CallFunc_IsSwitchBuild_ReturnValue) == 0x000000, "Member 'WBP_GameMenu_C_ConditionalRHIDisable::CallFunc_IsSwitchBuild_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.ExecuteUbergraph_WBP_GameMenu
// 0x0178 (0x0178 - 0x0000)
struct WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayUMGAnimationAsyncAction*           CallFunc_PlayUMGAnimation_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NewPageIndex;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyEvent                              K2Node_CustomEvent_KeyEvent;                       // 0x0048(0x0040)()
	class UWBP_GameMenu_Tab_C*                    K2Node_CustomEvent_PressedButtonTab;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFadeSubsystem*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_RestPointID;                          // 0x00A0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRestPointData                         K2Node_Event_RestPointData;                        // 0x00A8(0x0088)(ConstParm)
	class AGameModeZion*                          CallFunc_Get_ReturnValue;                          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAtRestPoint_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentPageIndex_ReturnValue;          // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameViewportZion*                      CallFunc_Get_ReturnValue_1;                        // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameViewportZion*                      CallFunc_Get_ReturnValue_2;                        // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayUMGAnimationAsyncAction*           CallFunc_PlayUMGAnimation_ReturnValue_1;           // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue_1;              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu) == 0x000008, "Wrong alignment on WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu");
static_assert(sizeof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu) == 0x000178, "Wrong size on WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, EntryPoint) == 0x000000, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000020, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_PlayUMGAnimation_ReturnValue) == 0x000038, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_PlayUMGAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_Event_NewPageIndex) == 0x000040, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_Event_NewPageIndex' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_CustomEvent_KeyEvent) == 0x000048, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_CustomEvent_KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_CustomEvent_PressedButtonTab) == 0x000088, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_CustomEvent_PressedButtonTab' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x000090, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_Array_Find_ReturnValue) == 0x000098, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_Event_RestPointID) == 0x0000A0, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_Event_RestPointID' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_Event_RestPointData) == 0x0000A8, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_Event_RestPointData' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_Get_ReturnValue) == 0x000130, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_IsAtRestPoint_ReturnValue) == 0x000138, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_IsAtRestPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_GetCurrentPageIndex_ReturnValue) == 0x00013C, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_GetCurrentPageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_SetGamePaused_ReturnValue) == 0x000140, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_Get_ReturnValue_1) == 0x000148, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000150, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_Get_ReturnValue_2) == 0x000160, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_Get_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_PlayUMGAnimation_ReturnValue_1) == 0x000168, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_PlayUMGAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_IsValid_ReturnValue_1) == 0x000170, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu, CallFunc_SetGamePaused_ReturnValue_1) == 0x000171, "Member 'WBP_GameMenu_C_ExecuteUbergraph_WBP_GameMenu::CallFunc_SetGamePaused_ReturnValue_1' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.FlushCachedSpirits
// 0x0010 (0x0010 - 0x0000)
struct WBP_GameMenu_C_FlushCachedSpirits final
{
public:
	class APlayerControllerZion*                  CallFunc_Get_ReturnValue;                          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_FlushCachedSpirits) == 0x000008, "Wrong alignment on WBP_GameMenu_C_FlushCachedSpirits");
static_assert(sizeof(WBP_GameMenu_C_FlushCachedSpirits) == 0x000010, "Wrong size on WBP_GameMenu_C_FlushCachedSpirits");
static_assert(offsetof(WBP_GameMenu_C_FlushCachedSpirits, CallFunc_Get_ReturnValue) == 0x000000, "Member 'WBP_GameMenu_C_FlushCachedSpirits::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_FlushCachedSpirits, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_GameMenu_C_FlushCachedSpirits::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnFastTravelRequested
// 0x0090 (0x0090 - 0x0000)
struct WBP_GameMenu_C_OnFastTravelRequested final
{
public:
	class FName                                   RestPointID;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRestPointData                         RestPointData;                                     // 0x0008(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_GameMenu_C_OnFastTravelRequested) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnFastTravelRequested");
static_assert(sizeof(WBP_GameMenu_C_OnFastTravelRequested) == 0x000090, "Wrong size on WBP_GameMenu_C_OnFastTravelRequested");
static_assert(offsetof(WBP_GameMenu_C_OnFastTravelRequested, RestPointID) == 0x000000, "Member 'WBP_GameMenu_C_OnFastTravelRequested::RestPointID' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnFastTravelRequested, RestPointData) == 0x000008, "Member 'WBP_GameMenu_C_OnFastTravelRequested::RestPointData' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_GameMenu_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnFocusReceived");
static_assert(sizeof(WBP_GameMenu_C_OnFocusReceived) == 0x0001B8, "Wrong size on WBP_GameMenu_C_OnFocusReceived");
static_assert(offsetof(WBP_GameMenu_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_GameMenu_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_GameMenu_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_GameMenu_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_GameMenu_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnFocusReceived, CallFunc_GetActiveWidget_ReturnValue) == 0x0001B0, "Member 'WBP_GameMenu_C_OnFocusReceived::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnKeyDown
// 0x02C8 (0x02C8 - 0x0000)
struct WBP_GameMenu_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0138(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0150(0x00B8)()
	bool                                          CallFunc_IsActionInputTypeKey_ReturnValue;         // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0210(0x00B8)()
};
static_assert(alignof(WBP_GameMenu_C_OnKeyDown) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnKeyDown");
static_assert(sizeof(WBP_GameMenu_C_OnKeyDown) == 0x0002C8, "Wrong size on WBP_GameMenu_C_OnKeyDown");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'WBP_GameMenu_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'WBP_GameMenu_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, ReturnValue) == 0x000078, "Member 'WBP_GameMenu_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, CallFunc_MakeLiteralByte_ReturnValue) == 0x000130, "Member 'WBP_GameMenu_C_OnKeyDown::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000138, "Member 'WBP_GameMenu_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000150, "Member 'WBP_GameMenu_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, CallFunc_IsActionInputTypeKey_ReturnValue) == 0x000208, "Member 'WBP_GameMenu_C_OnKeyDown::CallFunc_IsActionInputTypeKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000210, "Member 'WBP_GameMenu_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnPageChanged
// 0x0004 (0x0004 - 0x0000)
struct WBP_GameMenu_C_OnPageChanged final
{
public:
	int32                                         NewPageIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_OnPageChanged) == 0x000004, "Wrong alignment on WBP_GameMenu_C_OnPageChanged");
static_assert(sizeof(WBP_GameMenu_C_OnPageChanged) == 0x000004, "Wrong size on WBP_GameMenu_C_OnPageChanged");
static_assert(offsetof(WBP_GameMenu_C_OnPageChanged, NewPageIndex) == 0x000000, "Member 'WBP_GameMenu_C_OnPageChanged::NewPageIndex' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnPressCancel
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_GameMenu_C_OnPressCancel final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_GameMenu_C_OnPressCancel) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnPressCancel");
static_assert(sizeof(WBP_GameMenu_C_OnPressCancel) == 0x0001B0, "Wrong size on WBP_GameMenu_C_OnPressCancel");
static_assert(offsetof(WBP_GameMenu_C_OnPressCancel, KeyEvent) == 0x000000, "Member 'WBP_GameMenu_C_OnPressCancel::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressCancel, ReturnValue) == 0x000040, "Member 'WBP_GameMenu_C_OnPressCancel::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressCancel, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_GameMenu_C_OnPressCancel::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnPressedTab
// 0x0048 (0x0048 - 0x0000)
struct WBP_GameMenu_C_OnPressedTab final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_GameMenu_Tab_C*                    PressedButtonTab;                                  // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_OnPressedTab) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnPressedTab");
static_assert(sizeof(WBP_GameMenu_C_OnPressedTab) == 0x000048, "Wrong size on WBP_GameMenu_C_OnPressedTab");
static_assert(offsetof(WBP_GameMenu_C_OnPressedTab, KeyEvent) == 0x000000, "Member 'WBP_GameMenu_C_OnPressedTab::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressedTab, PressedButtonTab) == 0x000040, "Member 'WBP_GameMenu_C_OnPressedTab::PressedButtonTab' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnPressNext
// 0x01C8 (0x01C8 - 0x0000)
struct WBP_GameMenu_C_OnPressNext final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	int32                                         CallFunc_GetPageCount_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentPageIndex_ReturnValue;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_LoopAround_ReturnValue;                   // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_OnPressNext) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnPressNext");
static_assert(sizeof(WBP_GameMenu_C_OnPressNext) == 0x0001C8, "Wrong size on WBP_GameMenu_C_OnPressNext");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, KeyEvent) == 0x000000, "Member 'WBP_GameMenu_C_OnPressNext::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, ReturnValue) == 0x000040, "Member 'WBP_GameMenu_C_OnPressNext::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_GetPageCount_ReturnValue) == 0x0001B0, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_GetPageCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_GetCurrentPageIndex_ReturnValue) == 0x0001B4, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_GetCurrentPageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001B8, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_Add_IntInt_ReturnValue) == 0x0001BC, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressNext, CallFunc_LoopAround_ReturnValue) == 0x0001C0, "Member 'WBP_GameMenu_C_OnPressNext::CallFunc_LoopAround_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.OnPressPrevious
// 0x01C8 (0x01C8 - 0x0000)
struct WBP_GameMenu_C_OnPressPrevious final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	int32                                         CallFunc_GetPageCount_ReturnValue;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentPageIndex_ReturnValue;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_LoopAround_ReturnValue;                   // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_OnPressPrevious) == 0x000008, "Wrong alignment on WBP_GameMenu_C_OnPressPrevious");
static_assert(sizeof(WBP_GameMenu_C_OnPressPrevious) == 0x0001C8, "Wrong size on WBP_GameMenu_C_OnPressPrevious");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, KeyEvent) == 0x000000, "Member 'WBP_GameMenu_C_OnPressPrevious::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, ReturnValue) == 0x000040, "Member 'WBP_GameMenu_C_OnPressPrevious::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_GetPageCount_ReturnValue) == 0x0001B0, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_GetPageCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_GetCurrentPageIndex_ReturnValue) == 0x0001B4, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_GetCurrentPageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001B8, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001BC, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_OnPressPrevious, CallFunc_LoopAround_ReturnValue) == 0x0001C0, "Member 'WBP_GameMenu_C_OnPressPrevious::CallFunc_LoopAround_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.RefreshTabSelection
// 0x0028 (0x0028 - 0x0000)
struct WBP_GameMenu_C_RefreshTabSelection final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentPageIndex_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameMenu_Tab_C*                    CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_RefreshTabSelection) == 0x000008, "Wrong alignment on WBP_GameMenu_C_RefreshTabSelection");
static_assert(sizeof(WBP_GameMenu_C_RefreshTabSelection) == 0x000028, "Wrong size on WBP_GameMenu_C_RefreshTabSelection");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_GameMenu_C_RefreshTabSelection::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_GameMenu_C_RefreshTabSelection::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_GetCurrentPageIndex_ReturnValue) == 0x00000C, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_GetCurrentPageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_RefreshTabSelection, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WBP_GameMenu_C_RefreshTabSelection::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.SetupTabs
// 0x0040 (0x0040 - 0x0000)
struct WBP_GameMenu_C_SetupTabs final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GameMenu_Tab_C*                    CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FKeyEvent& KeyEvent, class UWBP_GameMenu_Tab_C* PressedButtonTab)> K2Node_CreateDelegate_OutputDelegate; // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_GameMenu_Tab_C*>            K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_GameMenu_C_SetupTabs) == 0x000008, "Wrong alignment on WBP_GameMenu_C_SetupTabs");
static_assert(sizeof(WBP_GameMenu_C_SetupTabs) == 0x000040, "Wrong size on WBP_GameMenu_C_SetupTabs");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_GameMenu_C_SetupTabs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_GameMenu_C_SetupTabs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_GameMenu_C_SetupTabs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_GameMenu_C_SetupTabs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_GameMenu_C_SetupTabs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_GameMenu_C_SetupTabs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_GameMenu_C_SetupTabs::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameMenu_C_SetupTabs, K2Node_MakeArray_Array) == 0x000030, "Member 'WBP_GameMenu_C_SetupTabs::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_GameMenu.WBP_GameMenu_C.GetFooter
// 0x0008 (0x0008 - 0x0000)
struct WBP_GameMenu_C_GetFooter final
{
public:
	class UUserWidgetFooter*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameMenu_C_GetFooter) == 0x000008, "Wrong alignment on WBP_GameMenu_C_GetFooter");
static_assert(sizeof(WBP_GameMenu_C_GetFooter) == 0x000008, "Wrong size on WBP_GameMenu_C_GetFooter");
static_assert(offsetof(WBP_GameMenu_C_GetFooter, ReturnValue) == 0x000000, "Member 'WBP_GameMenu_C_GetFooter::ReturnValue' has a wrong offset!");

}

