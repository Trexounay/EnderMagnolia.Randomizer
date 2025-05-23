﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpiritSkillSet

#include "Basic.hpp"

#include "WBP_SpiritSkillSet_classes.hpp"
#include "WBP_SpiritSkillSet_parameters.hpp"


namespace SDK
{

// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SpiritSkillSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.ExecuteUbergraph_WBP_SpiritSkillSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::ExecuteUbergraph_WBP_SpiritSkillSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "ExecuteUbergraph_WBP_SpiritSkillSet");

	Params::WBP_SpiritSkillSet_C_ExecuteUbergraph_WBP_SpiritSkillSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.Get First Valid Entry from Index Desc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SpiritSkillEntry_C**         SkillEntry                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::Get_First_Valid_Entry_from_Index_Desc(int32 Index_0, class UWBP_SpiritSkillEntry_C** SkillEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "Get First Valid Entry from Index Desc");

	Params::WBP_SpiritSkillSet_C_Get_First_Valid_Entry_from_Index_Desc Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillEntry != nullptr)
		*SkillEntry = Parms.SkillEntry;
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.GetFocusedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  FocusedIndex_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::GetFocusedIndex(int32* FocusedIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "GetFocusedIndex");

	Params::WBP_SpiritSkillSet_C_GetFocusedIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FocusedIndex_0 != nullptr)
		*FocusedIndex_0 = Parms.FocusedIndex_0;
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_SpiritSkillSet_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "OnFocusReceived");

	Params::WBP_SpiritSkillSet_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_SpiritSkillSet_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "OnRemovedFromFocusPath");

	Params::WBP_SpiritSkillSet_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.OnSpiritSkillEntryFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SpiritSkillEntry_C*          SpiritSkillEntry                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::OnSpiritSkillEntryFocused(class UWBP_SpiritSkillEntry_C* SpiritSkillEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "OnSpiritSkillEntryFocused");

	Params::WBP_SpiritSkillSet_C_OnSpiritSkillEntryFocused Parms{};

	Parms.SpiritSkillEntry = SpiritSkillEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.OnSpiritSkillEntryPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SpiritSkillEntry_C*          SpiritSkillEntry                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::OnSpiritSkillEntryPressed(class UWBP_SpiritSkillEntry_C* SpiritSkillEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "OnSpiritSkillEntryPressed");

	Params::WBP_SpiritSkillSet_C_OnSpiritSkillEntryPressed Parms{};

	Parms.SpiritSkillEntry = SpiritSkillEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SpiritSkillSet_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.SetEntryCustomBoundaryNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUINavigation                           Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(EUINavigation Navigation)>CustomDelegate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::SetEntryCustomBoundaryNavigation(int32 EntryIndex, EUINavigation Direction, TDelegate<void(EUINavigation Navigation)> CustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "SetEntryCustomBoundaryNavigation");

	Params::WBP_SpiritSkillSet_C_SetEntryCustomBoundaryNavigation Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.Direction = Direction;
	Parms.CustomDelegate = CustomDelegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.SetEntryExplicitNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUINavigation                           Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SpiritSkillSet_C::SetEntryExplicitNavigation(int32 EntryIndex, EUINavigation Direction, class UWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "SetEntryExplicitNavigation");

	Params::WBP_SpiritSkillSet_C_SetEntryExplicitNavigation Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.Direction = Direction;
	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SpiritSkillSet.WBP_SpiritSkillSet_C.UnEquipAllSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SpiritSkillSet_C::UnEquipAllSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SpiritSkillSet_C", "UnEquipAllSkills");

	UObject::ProcessEvent(Func, nullptr);
}

}

