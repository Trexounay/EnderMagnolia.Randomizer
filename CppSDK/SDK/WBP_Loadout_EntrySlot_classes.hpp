﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Loadout_EntrySlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Loadout_EntrySlot.WBP_Loadout_EntrySlot_C
// 0x0020 (0x0480 - 0x0460)
class UWBP_Loadout_EntrySlot_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DefaultIcon;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedIcon;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSelected(bool bSelected);
	void ExecuteUbergraph_WBP_Loadout_EntrySlot(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Loadout_EntrySlot_C">();
	}
	static class UWBP_Loadout_EntrySlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Loadout_EntrySlot_C>();
	}
};
static_assert(alignof(UWBP_Loadout_EntrySlot_C) == 0x000008, "Wrong alignment on UWBP_Loadout_EntrySlot_C");
static_assert(sizeof(UWBP_Loadout_EntrySlot_C) == 0x000480, "Wrong size on UWBP_Loadout_EntrySlot_C");
static_assert(offsetof(UWBP_Loadout_EntrySlot_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Loadout_EntrySlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Loadout_EntrySlot_C, DefaultIcon) == 0x000468, "Member 'UWBP_Loadout_EntrySlot_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Loadout_EntrySlot_C, SelectedIcon) == 0x000470, "Member 'UWBP_Loadout_EntrySlot_C::SelectedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Loadout_EntrySlot_C, WidgetSwitcher) == 0x000478, "Member 'UWBP_Loadout_EntrySlot_C::WidgetSwitcher' has a wrong offset!");

}

