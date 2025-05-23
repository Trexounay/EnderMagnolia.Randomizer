﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BeforeReinforcement

#include "Basic.hpp"

#include "WBP_BeforeReinforcement_classes.hpp"
#include "WBP_BeforeReinforcement_parameters.hpp"


namespace SDK
{

// Function WBP_BeforeReinforcement.WBP_BeforeReinforcement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BeforeReinforcement_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BeforeReinforcement_C", "PreConstruct");

	Params::WBP_BeforeReinforcement_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BeforeReinforcement.WBP_BeforeReinforcement_C.ExecuteUbergraph_WBP_BeforeReinforcement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BeforeReinforcement_C::ExecuteUbergraph_WBP_BeforeReinforcement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BeforeReinforcement_C", "ExecuteUbergraph_WBP_BeforeReinforcement");

	Params::WBP_BeforeReinforcement_C_ExecuteUbergraph_WBP_BeforeReinforcement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

