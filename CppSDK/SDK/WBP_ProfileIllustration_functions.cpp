﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileIllustration

#include "Basic.hpp"

#include "WBP_ProfileIllustration_classes.hpp"
#include "WBP_ProfileIllustration_parameters.hpp"


namespace SDK
{

// Function WBP_ProfileIllustration.WBP_ProfileIllustration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProfileIllustration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileIllustration_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ProfileIllustration.WBP_ProfileIllustration_C.ExecuteUbergraph_WBP_ProfileIllustration
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ProfileIllustration_C::ExecuteUbergraph_WBP_ProfileIllustration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileIllustration_C", "ExecuteUbergraph_WBP_ProfileIllustration");

	Params::WBP_ProfileIllustration_C_ExecuteUbergraph_WBP_ProfileIllustration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileIllustration.WBP_ProfileIllustration_C.SetupIllustration
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ProfileIllustration_C::SetupIllustration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileIllustration_C", "SetupIllustration");

	UObject::ProcessEvent(Func, nullptr);
}

}

