﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapIconDetails_ItemEntry

#include "Basic.hpp"

#include "WBP_MapIconDetails_ItemEntry_classes.hpp"
#include "WBP_MapIconDetails_ItemEntry_parameters.hpp"


namespace SDK
{

// Function WBP_MapIconDetails_ItemEntry.WBP_MapIconDetails_ItemEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapIconDetails_ItemEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_ItemEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_ItemEntry.WBP_MapIconDetails_ItemEntry_C.ExecuteUbergraph_WBP_MapIconDetails_ItemEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapIconDetails_ItemEntry_C::ExecuteUbergraph_WBP_MapIconDetails_ItemEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_ItemEntry_C", "ExecuteUbergraph_WBP_MapIconDetails_ItemEntry");

	Params::WBP_MapIconDetails_ItemEntry_C_ExecuteUbergraph_WBP_MapIconDetails_ItemEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

