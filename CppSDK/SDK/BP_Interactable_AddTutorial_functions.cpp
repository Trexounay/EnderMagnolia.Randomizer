﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_AddTutorial

#include "Basic.hpp"

#include "BP_Interactable_AddTutorial_classes.hpp"
#include "BP_Interactable_AddTutorial_parameters.hpp"


namespace SDK
{

// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.SetupAdditionalBlackboardValues
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventBlackboardInit&            EventBlackboardInit                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Interactable_AddTutorial_C::SetupAdditionalBlackboardValues(struct FEventBlackboardInit& EventBlackboardInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "SetupAdditionalBlackboardValues");

	Params::BP_Interactable_AddTutorial_C_SetupAdditionalBlackboardValues Parms{};

	Parms.EventBlackboardInit = std::move(EventBlackboardInit);

	UObject::ProcessEvent(Func, &Parms);

	EventBlackboardInit = std::move(Parms.EventBlackboardInit);
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.OnInteract
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*                Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_AddTutorial_C::OnInteract(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "OnInteract");

	Params::BP_Interactable_AddTutorial_C_OnInteract Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.ExecuteUbergraph_BP_Interactable_AddTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_AddTutorial_C::ExecuteUbergraph_BP_Interactable_AddTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "ExecuteUbergraph_BP_Interactable_AddTutorial");

	Params::BP_Interactable_AddTutorial_C_ExecuteUbergraph_BP_Interactable_AddTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.ShouldUseNGPlusVariant
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Interactable_AddTutorial_C::ShouldUseNGPlusVariant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "ShouldUseNGPlusVariant");

	Params::BP_Interactable_AddTutorial_C_ShouldUseNGPlusVariant Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.GetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle*             Item_0                                                 (Parm, OutParm, NoDestructor)

void ABP_Interactable_AddTutorial_C::GetItem(struct FDataTableRowHandle* Item_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "GetItem");

	Params::BP_Interactable_AddTutorial_C_GetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_0 != nullptr)
		*Item_0 = std::move(Parms.Item_0);
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.GetInteractionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_Interactable_AddTutorial_C::GetInteractionText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "GetInteractionText");

	Params::BP_Interactable_AddTutorial_C_GetInteractionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Interactable_AddTutorial.BP_Interactable_AddTutorial_C.GetCount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32*                                  Count_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_AddTutorial_C::GetCount(int32* Count_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_AddTutorial_C", "GetCount");

	Params::BP_Interactable_AddTutorial_C_GetCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count_0 != nullptr)
		*Count_0 = Parms.Count_0;
}

}

