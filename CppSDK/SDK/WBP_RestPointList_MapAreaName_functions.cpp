﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RestPointList_MapAreaName

#include "Basic.hpp"

#include "WBP_RestPointList_MapAreaName_classes.hpp"
#include "WBP_RestPointList_MapAreaName_parameters.hpp"


namespace SDK
{

// Function WBP_RestPointList_MapAreaName.WBP_RestPointList_MapAreaName_C.SetCompleteState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CompleteState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RestPointList_MapAreaName_C::SetCompleteState(bool CompleteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestPointList_MapAreaName_C", "SetCompleteState");

	Params::WBP_RestPointList_MapAreaName_C_SetCompleteState Parms{};

	Parms.CompleteState = CompleteState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestPointList_MapAreaName.WBP_RestPointList_MapAreaName_C.SetMapAreaName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      MapAreaName_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RestPointList_MapAreaName_C::SetMapAreaName(const class FText& MapAreaName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestPointList_MapAreaName_C", "SetMapAreaName");

	Params::WBP_RestPointList_MapAreaName_C_SetMapAreaName Parms{};

	Parms.MapAreaName_0 = std::move(MapAreaName_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

