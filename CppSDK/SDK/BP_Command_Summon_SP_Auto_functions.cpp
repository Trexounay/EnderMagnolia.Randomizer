﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Command_Summon_SP_Auto

#include "Basic.hpp"

#include "BP_Command_Summon_SP_Auto_classes.hpp"
#include "BP_Command_Summon_SP_Auto_parameters.hpp"


namespace SDK
{

// Function BP_Command_Summon_SP_Auto.BP_Command_Summon_SP_Auto_C.ExecuteUbergraph_BP_Command_Summon_SP_Auto
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Command_Summon_SP_Auto_C::ExecuteUbergraph_BP_Command_Summon_SP_Auto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Command_Summon_SP_Auto_C", "ExecuteUbergraph_BP_Command_Summon_SP_Auto");

	Params::BP_Command_Summon_SP_Auto_C_ExecuteUbergraph_BP_Command_Summon_SP_Auto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Command_Summon_SP_Auto.BP_Command_Summon_SP_Auto_C.OnFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommandFinishType                      FinishType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Command_Summon_SP_Auto_C::OnFinish(ECommandFinishType FinishType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Command_Summon_SP_Auto_C", "OnFinish");

	Params::BP_Command_Summon_SP_Auto_C_OnFinish Parms{};

	Parms.FinishType = FinishType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Command_Summon_SP_Auto.BP_Command_Summon_SP_Auto_C.OnPreStart
// (Event, Protected, BlueprintEvent)

void UBP_Command_Summon_SP_Auto_C::OnPreStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Command_Summon_SP_Auto_C", "OnPreStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

