﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugMenu_Page_DebugDisplay

#include "Basic.hpp"

#include "WBP_DebugMenu_Page_DebugDisplay_classes.hpp"
#include "WBP_DebugMenu_Page_DebugDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_DebugMenu_Page_DebugDisplay.WBP_DebugMenu_Page_DebugDisplay_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugMenu_Page_DebugDisplay_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_DebugDisplay_C", "OnFocusReceived");

	Params::WBP_DebugMenu_Page_DebugDisplay_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

