﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapIconDetails_RestPoint

#include "Basic.hpp"

#include "WBP_MapIconDetails_RestPoint_classes.hpp"
#include "WBP_MapIconDetails_RestPoint_parameters.hpp"


namespace SDK
{

// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.CanFastTravel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   CanFastTravel_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapIconDetails_RestPoint_C::CanFastTravel(bool* CanFastTravel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "CanFastTravel");

	Params::WBP_MapIconDetails_RestPoint_C_CanFastTravel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanFastTravel_0 != nullptr)
		*CanFastTravel_0 = Parms.CanFastTravel_0;
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.ExecuteUbergraph_WBP_MapIconDetails_RestPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapIconDetails_RestPoint_C::ExecuteUbergraph_WBP_MapIconDetails_RestPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "ExecuteUbergraph_WBP_MapIconDetails_RestPoint");

	Params::WBP_MapIconDetails_RestPoint_C_ExecuteUbergraph_WBP_MapIconDetails_RestPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnFinish_62ADF4714227018B5CF2B9AED9E7AE61
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::OnFinish_62ADF4714227018B5CF2B9AED9E7AE61()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnFinish_62ADF4714227018B5CF2B9AED9E7AE61");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnFinish_E2B585F54F7C767FFF6D0FA937C0B766
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::OnFinish_E2B585F54F7C767FFF6D0FA937C0B766()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnFinish_E2B585F54F7C767FFF6D0FA937C0B766");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_MapIconDetails_RestPoint_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnFocusReceived");

	Params::WBP_MapIconDetails_RestPoint_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnPressConfirm
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_MapIconDetails_RestPoint_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnPressConfirm");

	Params::WBP_MapIconDetails_RestPoint_C_OnPressConfirm Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnPressFastTravel
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::OnPressFastTravel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnPressFastTravel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.OnRemoveIconDetails
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInstant                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapIconDetails_RestPoint_C::OnRemoveIconDetails(bool bInstant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "OnRemoveIconDetails");

	Params::WBP_MapIconDetails_RestPoint_C_OnRemoveIconDetails Parms{};

	Parms.bInstant = bInstant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.Refresh Fast Travel Button
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::Refresh_Fast_Travel_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "Refresh Fast Travel Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.RefreshWidgetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MapIconDetails_RestPoint_C::RefreshWidgetDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "RefreshWidgetDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapIconDetails_RestPoint.WBP_MapIconDetails_RestPoint_C.SetIgnoreCanFastTravelCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IgnoreCanFastTravelCheck_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapIconDetails_RestPoint_C::SetIgnoreCanFastTravelCheck(bool IgnoreCanFastTravelCheck_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapIconDetails_RestPoint_C", "SetIgnoreCanFastTravelCheck");

	Params::WBP_MapIconDetails_RestPoint_C_SetIgnoreCanFastTravelCheck Parms{};

	Parms.IgnoreCanFastTravelCheck_0 = IgnoreCanFastTravelCheck_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

