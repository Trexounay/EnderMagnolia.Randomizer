﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Extra_Character_Entry

#include "Basic.hpp"

#include "WBP_Extra_Character_Entry_classes.hpp"
#include "WBP_Extra_Character_Entry_parameters.hpp"


namespace SDK
{

// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Extra_Character_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.ExecuteUbergraph_WBP_Extra_Character_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_Character_Entry_C::ExecuteUbergraph_WBP_Extra_Character_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "ExecuteUbergraph_WBP_Extra_Character_Entry");

	Params::WBP_Extra_Character_Entry_C_ExecuteUbergraph_WBP_Extra_Character_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Character_Entry_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.IsCharacterDataAlreadyBought
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsAlreadyBought                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_Character_Entry_C::IsCharacterDataAlreadyBought(bool* IsAlreadyBought)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "IsCharacterDataAlreadyBought");

	Params::WBP_Extra_Character_Entry_C_IsCharacterDataAlreadyBought Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlreadyBought != nullptr)
		*IsAlreadyBought = Parms.IsAlreadyBought;
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Extra_Character_Entry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "OnAddedToFocusPath");

	Params::WBP_Extra_Character_Entry_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.OnPressConfirm
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Character_Entry_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "OnPressConfirm");

	Params::WBP_Extra_Character_Entry_C_OnPressConfirm Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Extra_Character_Entry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "OnRemovedFromFocusPath");

	Params::WBP_Extra_Character_Entry_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.RefreshPrice
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Character_Entry_C::RefreshPrice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "RefreshPrice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.SetFocusedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_Character_Entry_C::SetFocusedState(bool Focus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "SetFocusedState");

	Params::WBP_Extra_Character_Entry_C_SetFocusedState Parms{};

	Parms.Focus = Focus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Character_Entry.WBP_Extra_Character_Entry_C.SetIsBought
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Character_Entry_C::SetIsBought()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Character_Entry_C", "SetIsBought");

	UObject::ProcessEvent(Func, nullptr);
}

}

