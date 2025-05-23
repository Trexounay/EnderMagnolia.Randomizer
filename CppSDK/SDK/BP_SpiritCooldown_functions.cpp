﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpiritCooldown

#include "Basic.hpp"

#include "BP_SpiritCooldown_classes.hpp"
#include "BP_SpiritCooldown_parameters.hpp"


namespace SDK
{

// Function BP_SpiritCooldown.BP_SpiritCooldown_C.ExecuteUbergraph_BP_SpiritCooldown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpiritCooldown_C::ExecuteUbergraph_BP_SpiritCooldown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpiritCooldown_C", "ExecuteUbergraph_BP_SpiritCooldown");

	Params::BP_SpiritCooldown_C_ExecuteUbergraph_BP_SpiritCooldown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpiritCooldown.BP_SpiritCooldown_C.OnCooldownCompleted
// (Event, Protected, BlueprintEvent)

void ABP_SpiritCooldown_C::OnCooldownCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpiritCooldown_C", "OnCooldownCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpiritCooldown.BP_SpiritCooldown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpiritCooldown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpiritCooldown_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

