﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Passive_EquippedList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Passive_EquippedList.WBP_Passive_EquippedList_C
// 0x00D0 (0x0530 - 0x0460)
class UWBP_Passive_EquippedList_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               PassiveContainer;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotCountLabel;                                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotCountText_1;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_1;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_2;                                // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_3;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_4;                                // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_5;                                // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_6;                                // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_7;                                // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_8;                                // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PassiveEntry_C*                    WBP_PassiveEntry_9;                                // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPassiveComponent*                      PassiveComponent;                                  // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UWBP_PassiveEntry_C*>            PassiveEntries;                                    // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         UnequippingEntryIndex;                             // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UWBP_PassiveEntry_C* PassiveEntry)> OnPressedEntry;          // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_PassiveEntry_C* PassiveEntry)> OnPressedContextEntry;   // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_PassiveEntry_C* PassiveEntry)> OnFocusedEntry;          // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         WrapSize;                                          // 0x0520(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PassiveEntry_C*                    FocusedPassiveEntry;                               // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void CachePassiveEntries();
	void Construct();
	void ExecuteUbergraph_WBP_Passive_EquippedList(int32 EntryPoint);
	void GetEntryAtIndex(int32 Index_0, class UWBP_PassiveEntry_C** PassiveEntry);
	int32 GetEntryIndex(const class UWBP_PassiveEntry_C*& PassiveEntry);
	void GetFocusedEntry(class UWBP_PassiveEntry_C** FocusedPassiveEntry_0);
	bool HasValidEntries();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnPassiveEntryFocused(class UWBP_PassiveEntry_C* PassiveEntry);
	void OnPassiveEntryPressed(class UWBP_PassiveEntry_C* PassiveEntry);
	void OnPassiveEntryPressedContext(class UWBP_PassiveEntry_C* PassiveEntry);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshSlotText();
	void SetFocusOnEntryIndex(int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Passive_EquippedList_C">();
	}
	static class UWBP_Passive_EquippedList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Passive_EquippedList_C>();
	}
};
static_assert(alignof(UWBP_Passive_EquippedList_C) == 0x000008, "Wrong alignment on UWBP_Passive_EquippedList_C");
static_assert(sizeof(UWBP_Passive_EquippedList_C) == 0x000530, "Wrong size on UWBP_Passive_EquippedList_C");
static_assert(offsetof(UWBP_Passive_EquippedList_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Passive_EquippedList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, PassiveContainer) == 0x000468, "Member 'UWBP_Passive_EquippedList_C::PassiveContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, SlotCountLabel) == 0x000470, "Member 'UWBP_Passive_EquippedList_C::SlotCountLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, SlotCountText_1) == 0x000478, "Member 'UWBP_Passive_EquippedList_C::SlotCountText_1' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry) == 0x000480, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_1) == 0x000488, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_2) == 0x000490, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_3) == 0x000498, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_4) == 0x0004A0, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_4' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_5) == 0x0004A8, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_5' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_6) == 0x0004B0, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_6' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_7) == 0x0004B8, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_7' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_8) == 0x0004C0, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_8' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WBP_PassiveEntry_9) == 0x0004C8, "Member 'UWBP_Passive_EquippedList_C::WBP_PassiveEntry_9' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, PassiveComponent) == 0x0004D0, "Member 'UWBP_Passive_EquippedList_C::PassiveComponent' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, PassiveEntries) == 0x0004D8, "Member 'UWBP_Passive_EquippedList_C::PassiveEntries' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, UnequippingEntryIndex) == 0x0004E8, "Member 'UWBP_Passive_EquippedList_C::UnequippingEntryIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, OnPressedEntry) == 0x0004F0, "Member 'UWBP_Passive_EquippedList_C::OnPressedEntry' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, OnPressedContextEntry) == 0x000500, "Member 'UWBP_Passive_EquippedList_C::OnPressedContextEntry' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, OnFocusedEntry) == 0x000510, "Member 'UWBP_Passive_EquippedList_C::OnFocusedEntry' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, WrapSize) == 0x000520, "Member 'UWBP_Passive_EquippedList_C::WrapSize' has a wrong offset!");
static_assert(offsetof(UWBP_Passive_EquippedList_C, FocusedPassiveEntry) == 0x000528, "Member 'UWBP_Passive_EquippedList_C::FocusedPassiveEntry' has a wrong offset!");

}

