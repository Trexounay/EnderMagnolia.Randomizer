﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugMenu_Page_Aptitudes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_DebugMenu_Page_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DebugMenu_Page_Aptitudes.WBP_DebugMenu_Page_Aptitudes_C
// 0x0018 (0x0498 - 0x0480)
class UWBP_DebugMenu_Page_Aptitudes_C final : public UWBP_DebugMenu_Page_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             GridPanel;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ColumnsCount;                                      // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_DebugMenu_Page_Aptitudes(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebugMenu_Page_Aptitudes_C">();
	}
	static class UWBP_DebugMenu_Page_Aptitudes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebugMenu_Page_Aptitudes_C>();
	}
};
static_assert(alignof(UWBP_DebugMenu_Page_Aptitudes_C) == 0x000008, "Wrong alignment on UWBP_DebugMenu_Page_Aptitudes_C");
static_assert(sizeof(UWBP_DebugMenu_Page_Aptitudes_C) == 0x000498, "Wrong size on UWBP_DebugMenu_Page_Aptitudes_C");
static_assert(offsetof(UWBP_DebugMenu_Page_Aptitudes_C, UberGraphFrame) == 0x000480, "Member 'UWBP_DebugMenu_Page_Aptitudes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DebugMenu_Page_Aptitudes_C, GridPanel) == 0x000488, "Member 'UWBP_DebugMenu_Page_Aptitudes_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UWBP_DebugMenu_Page_Aptitudes_C, ColumnsCount) == 0x000490, "Member 'UWBP_DebugMenu_Page_Aptitudes_C::ColumnsCount' has a wrong offset!");

}

