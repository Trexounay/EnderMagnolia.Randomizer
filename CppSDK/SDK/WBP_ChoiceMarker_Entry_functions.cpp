﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChoiceMarker_Entry

#include "Basic.hpp"

#include "WBP_ChoiceMarker_Entry_classes.hpp"
#include "WBP_ChoiceMarker_Entry_parameters.hpp"


namespace SDK
{

// Function WBP_ChoiceMarker_Entry.WBP_ChoiceMarker_Entry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChoiceMarker_Entry_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChoiceMarker_Entry_C", "SetSelected");

	Params::WBP_ChoiceMarker_Entry_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

