﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameMenu_Page_Map

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameMenu_Page_Map.WBP_GameMenu_Page_Map_C
// 0x0018 (0x0490 - 0x0478)
class UWBP_GameMenu_Page_Map_C final : public UUserWidgetGameMenu_Page
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Overlay;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_C*                             CachedMapWidgetInstance;                           // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_GameMenu_Page_Map(int32 EntryPoint);
	void InstantiateMapWidget();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnPageClosed();
	void OnPageOpened();
	void OnRequestedFastTravel(class FName RestPointID, const struct FRestPointData& RestPointData);
	void SetupMapWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameMenu_Page_Map_C">();
	}
	static class UWBP_GameMenu_Page_Map_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameMenu_Page_Map_C>();
	}
};
static_assert(alignof(UWBP_GameMenu_Page_Map_C) == 0x000008, "Wrong alignment on UWBP_GameMenu_Page_Map_C");
static_assert(sizeof(UWBP_GameMenu_Page_Map_C) == 0x000490, "Wrong size on UWBP_GameMenu_Page_Map_C");
static_assert(offsetof(UWBP_GameMenu_Page_Map_C, UberGraphFrame) == 0x000478, "Member 'UWBP_GameMenu_Page_Map_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameMenu_Page_Map_C, Overlay) == 0x000480, "Member 'UWBP_GameMenu_Page_Map_C::Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_GameMenu_Page_Map_C, CachedMapWidgetInstance) == 0x000488, "Member 'UWBP_GameMenu_Page_Map_C::CachedMapWidgetInstance' has a wrong offset!");

}

