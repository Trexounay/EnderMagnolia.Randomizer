﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_s5211_Fenris

#include "Basic.hpp"

#include "BP_s5211_Fenris_classes.hpp"
#include "BP_s5211_Fenris_parameters.hpp"


namespace SDK
{

// Function BP_s5211_Fenris.BP_s5211_Fenris_C.ExecuteUbergraph_BP_s5211_Fenris
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_s5211_Fenris_C::ExecuteUbergraph_BP_s5211_Fenris(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_s5211_Fenris_C", "ExecuteUbergraph_BP_s5211_Fenris");

	Params::BP_s5211_Fenris_C_ExecuteUbergraph_BP_s5211_Fenris Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_s5211_Fenris.BP_s5211_Fenris_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_s5211_Fenris_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_s5211_Fenris_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

