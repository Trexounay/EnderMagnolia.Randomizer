﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Recollection_BossRush_RecordEntry_Current

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Recollection_BossRush_RecordEntry_Current.WBP_Recollection_BossRush_RecordEntry_Current_C
// 0x0020 (0x0480 - 0x0460)
class UWBP_Recollection_BossRush_RecordEntry_Current_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CurrentResultAnim;                                 // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Overlay_CurrentResult;                             // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_BossRush_RecordEntry_Text_C* WBP_Recollection_BossRush_RecordEntry_Text; // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Recollection_BossRush_RecordEntry_Current(int32 EntryPoint);
	void Set_Record_Text(const struct FRecollectionBossRushRecordData& RecordData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Recollection_BossRush_RecordEntry_Current_C">();
	}
	static class UWBP_Recollection_BossRush_RecordEntry_Current_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Recollection_BossRush_RecordEntry_Current_C>();
	}
};
static_assert(alignof(UWBP_Recollection_BossRush_RecordEntry_Current_C) == 0x000008, "Wrong alignment on UWBP_Recollection_BossRush_RecordEntry_Current_C");
static_assert(sizeof(UWBP_Recollection_BossRush_RecordEntry_Current_C) == 0x000480, "Wrong size on UWBP_Recollection_BossRush_RecordEntry_Current_C");
static_assert(offsetof(UWBP_Recollection_BossRush_RecordEntry_Current_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Recollection_BossRush_RecordEntry_Current_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_RecordEntry_Current_C, CurrentResultAnim) == 0x000468, "Member 'UWBP_Recollection_BossRush_RecordEntry_Current_C::CurrentResultAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_RecordEntry_Current_C, Overlay_CurrentResult) == 0x000470, "Member 'UWBP_Recollection_BossRush_RecordEntry_Current_C::Overlay_CurrentResult' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_RecordEntry_Current_C, WBP_Recollection_BossRush_RecordEntry_Text) == 0x000478, "Member 'UWBP_Recollection_BossRush_RecordEntry_Current_C::WBP_Recollection_BossRush_RecordEntry_Text' has a wrong offset!");

}

