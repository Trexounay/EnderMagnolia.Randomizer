﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_Door_Default

#include "Basic.hpp"

#include "BP_Interactable_Door_Default_classes.hpp"
#include "BP_Interactable_Door_Default_parameters.hpp"


namespace SDK
{

// Function BP_Interactable_Door_Default.BP_Interactable_Door_Default_C.PlayAnimation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRequestInstant                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_Door_Default_C::PlayAnimation(bool bOpen, bool bRequestInstant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_Door_Default_C", "PlayAnimation");

	Params::BP_Interactable_Door_Default_C_PlayAnimation Parms{};

	Parms.bOpen = bOpen;
	Parms.bRequestInstant = bRequestInstant;

	UObject::ProcessEvent(Func, &Parms);
}

}

