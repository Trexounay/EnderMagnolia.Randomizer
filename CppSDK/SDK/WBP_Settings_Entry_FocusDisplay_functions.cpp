﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Entry_FocusDisplay

#include "Basic.hpp"

#include "WBP_Settings_Entry_FocusDisplay_classes.hpp"
#include "WBP_Settings_Entry_FocusDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_Entry_FocusDisplay.WBP_Settings_Entry_FocusDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Settings_Entry_FocusDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_FocusDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_Entry_FocusDisplay.WBP_Settings_Entry_FocusDisplay_C.ExecuteUbergraph_WBP_Settings_Entry_FocusDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_Entry_FocusDisplay_C::ExecuteUbergraph_WBP_Settings_Entry_FocusDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_FocusDisplay_C", "ExecuteUbergraph_WBP_Settings_Entry_FocusDisplay");

	Params::WBP_Settings_Entry_FocusDisplay_C_ExecuteUbergraph_WBP_Settings_Entry_FocusDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_FocusDisplay.WBP_Settings_Entry_FocusDisplay_C.SetFocusDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focused_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_Entry_FocusDisplay_C::SetFocusDisplay(bool Focused_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_FocusDisplay_C", "SetFocusDisplay");

	Params::WBP_Settings_Entry_FocusDisplay_C_SetFocusDisplay Parms{};

	Parms.Focused_0 = Focused_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

