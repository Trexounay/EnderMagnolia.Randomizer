﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RestMenu_Button

#include "Basic.hpp"

#include "WBP_RestMenu_Button_classes.hpp"
#include "WBP_RestMenu_Button_parameters.hpp"


namespace SDK
{

// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RestMenu_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.ExecuteUbergraph_WBP_RestMenu_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RestMenu_Button_C::ExecuteUbergraph_WBP_RestMenu_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "ExecuteUbergraph_WBP_RestMenu_Button");

	Params::WBP_RestMenu_Button_C_ExecuteUbergraph_WBP_RestMenu_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_RestMenu_Button_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "OnAddedToFocusPath");

	Params::WBP_RestMenu_Button_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnPressConfirm
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_RestMenu_Button_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "OnPressConfirm");

	Params::WBP_RestMenu_Button_C_OnPressConfirm Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_RestMenu_Button_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "OnRemovedFromFocusPath");

	Params::WBP_RestMenu_Button_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RestMenu_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "PreConstruct");

	Params::WBP_RestMenu_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_RestMenu_Button_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetFocusedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RestMenu_Button_C::SetFocusedState(bool Focus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "SetFocusedState");

	Params::WBP_RestMenu_Button_C_SetFocusedState Parms{};

	Parms.Focus = Focus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetNewVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RestMenu_Button_C::SetNewVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "SetNewVisibility");

	Params::WBP_RestMenu_Button_C_SetNewVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RestMenu_Button.WBP_RestMenu_Button_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RestMenu_Button_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RestMenu_Button_C", "SetText");

	Params::WBP_RestMenu_Button_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

