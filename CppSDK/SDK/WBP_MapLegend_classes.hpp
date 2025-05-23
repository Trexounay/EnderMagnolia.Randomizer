﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapLegend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MapLegend.WBP_MapLegend_C
// 0x00A0 (0x0550 - 0x04B0)
class UWBP_MapLegend_C final : public UUserWidgetMapLegend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           EntriesHolder;                                     // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_AreaComplete;                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_AreaIncomplete;                 // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Breakable;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_BreakableBlock;                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_BreakableBlock_1;               // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Door;                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Hook_NPC;                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Item;                           // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_MapChange;                      // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Player;                         // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_RestPoint;                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Shop;                           // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Switch;                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_Warp;                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_ZoneComplete;                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapLegendEntry_C*                  WBP_MapLegendEntry_ZoneIncomplete;                 // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Show(bool bInstant);
	void OnLegendInitialized(const TSet<EMapIconType>& VisibleIconTypes);
	void HideAndRemoveFromParent(bool bInstant);
	void Hide(bool bInstant);
	void Finished_CC0EEB0341DF7589454047A955B9FFF1();
	void ExecuteUbergraph_WBP_MapLegend(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapLegend_C">();
	}
	static class UWBP_MapLegend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapLegend_C>();
	}
};
static_assert(alignof(UWBP_MapLegend_C) == 0x000008, "Wrong alignment on UWBP_MapLegend_C");
static_assert(sizeof(UWBP_MapLegend_C) == 0x000550, "Wrong size on UWBP_MapLegend_C");
static_assert(offsetof(UWBP_MapLegend_C, UberGraphFrame) == 0x0004B0, "Member 'UWBP_MapLegend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, HideAnim) == 0x0004B8, "Member 'UWBP_MapLegend_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, ShowAnim) == 0x0004C0, "Member 'UWBP_MapLegend_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, EntriesHolder) == 0x0004C8, "Member 'UWBP_MapLegend_C::EntriesHolder' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_AreaComplete) == 0x0004D0, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_AreaComplete' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_AreaIncomplete) == 0x0004D8, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_AreaIncomplete' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Breakable) == 0x0004E0, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Breakable' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_BreakableBlock) == 0x0004E8, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_BreakableBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_BreakableBlock_1) == 0x0004F0, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_BreakableBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Door) == 0x0004F8, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Door' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Hook_NPC) == 0x000500, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Hook_NPC' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Item) == 0x000508, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Item' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_MapChange) == 0x000510, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_MapChange' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Player) == 0x000518, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Player' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_RestPoint) == 0x000520, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_RestPoint' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Shop) == 0x000528, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Shop' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Switch) == 0x000530, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Switch' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_Warp) == 0x000538, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_Warp' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_ZoneComplete) == 0x000540, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_ZoneComplete' has a wrong offset!");
static_assert(offsetof(UWBP_MapLegend_C, WBP_MapLegendEntry_ZoneIncomplete) == 0x000548, "Member 'UWBP_MapLegend_C::WBP_MapLegendEntry_ZoneIncomplete' has a wrong offset!");

}

