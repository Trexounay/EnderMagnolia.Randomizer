﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_Entry_Sound

#include "Basic.hpp"

#include "WBP_Settings_Entry_Sound_classes.hpp"
#include "WBP_Settings_Entry_Sound_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.BndEvt__WBP_Settings_Entry_Sound_WBP_Settings_Entry_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_Entry_Sound_C::BndEvt__WBP_Settings_Entry_Sound_WBP_Settings_Entry_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "BndEvt__WBP_Settings_Entry_Sound_WBP_Settings_Entry_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature");

	Params::WBP_Settings_Entry_Sound_C_BndEvt__WBP_Settings_Entry_Sound_WBP_Settings_Entry_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Settings_Entry_Sound_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.ExecuteUbergraph_WBP_Settings_Entry_Sound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_Entry_Sound_C::ExecuteUbergraph_WBP_Settings_Entry_Sound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "ExecuteUbergraph_WBP_Settings_Entry_Sound");

	Params::WBP_Settings_Entry_Sound_C_ExecuteUbergraph_WBP_Settings_Entry_Sound Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Settings_Entry_Sound_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "OnAddedToFocusPath");

	Params::WBP_Settings_Entry_Sound_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Settings_Entry_Sound_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "OnFocusReceived");

	Params::WBP_Settings_Entry_Sound_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.OnKeyReleased
// (BlueprintCallable, BlueprintEvent)

void UWBP_Settings_Entry_Sound_C::OnKeyReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "OnKeyReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Settings_Entry_Sound_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "OnKeyUp");

	Params::WBP_Settings_Entry_Sound_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Settings_Entry_Sound_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "OnRemovedFromFocusPath");

	Params::WBP_Settings_Entry_Sound_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_Entry_Sound_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "PreConstruct");

	Params::WBP_Settings_Entry_Sound_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_Entry_Sound.WBP_Settings_Entry_Sound_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Settings_Entry_Sound_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_Entry_Sound_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

