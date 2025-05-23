﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PassiveUnlock_Button

#include "Basic.hpp"

#include "WBP_PassiveUnlock_Button_classes.hpp"
#include "WBP_PassiveUnlock_Button_parameters.hpp"


namespace SDK
{

// Function WBP_PassiveUnlock_Button.WBP_PassiveUnlock_Button_C.ExecuteUbergraph_WBP_PassiveUnlock_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveUnlock_Button_C::ExecuteUbergraph_WBP_PassiveUnlock_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveUnlock_Button_C", "ExecuteUbergraph_WBP_PassiveUnlock_Button");

	Params::WBP_PassiveUnlock_Button_C_ExecuteUbergraph_WBP_PassiveUnlock_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveUnlock_Button.WBP_PassiveUnlock_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveUnlock_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveUnlock_Button_C", "PreConstruct");

	Params::WBP_PassiveUnlock_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

