﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapTransition

#include "Basic.hpp"

#include "WBP_MapTransition_classes.hpp"
#include "WBP_MapTransition_parameters.hpp"


namespace SDK
{

// Function WBP_MapTransition.WBP_MapTransition_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapTransition_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapTransition_C", "PreConstruct");

	Params::WBP_MapTransition_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapTransition.WBP_MapTransition_C.OnSetScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   NewScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapTransition_C::OnSetScale(float NewScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapTransition_C", "OnSetScale");

	Params::WBP_MapTransition_C_OnSetScale Parms{};

	Parms.NewScale = NewScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapTransition.WBP_MapTransition_C.OnSetIconsVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapTransition_C::OnSetIconsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapTransition_C", "OnSetIconsVisibility");

	Params::WBP_MapTransition_C_OnSetIconsVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapTransition.WBP_MapTransition_C.ExecuteUbergraph_WBP_MapTransition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapTransition_C::ExecuteUbergraph_WBP_MapTransition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapTransition_C", "ExecuteUbergraph_WBP_MapTransition");

	Params::WBP_MapTransition_C_ExecuteUbergraph_WBP_MapTransition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

