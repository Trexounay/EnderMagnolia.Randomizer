﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Extra

#include "Basic.hpp"

#include "WBP_Extra_classes.hpp"
#include "WBP_Extra_parameters.hpp"


namespace SDK
{

// Function WBP_Extra.WBP_Extra_C.Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra.WBP_Extra_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Extra_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra.WBP_Extra_C.ExecuteUbergraph_WBP_Extra
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_C::ExecuteUbergraph_WBP_Extra(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "ExecuteUbergraph_WBP_Extra");

	Params::WBP_Extra_C_ExecuteUbergraph_WBP_Extra Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra.WBP_Extra_C.GoToPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_C::GoToPage(int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "GoToPage");

	Params::WBP_Extra_C_GoToPage Parms{};

	Parms.PageIndex = PageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra.WBP_Extra_C.OnFinish_158F7C044FDCAD9B5C67FF8320246C81
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_C::OnFinish_158F7C044FDCAD9B5C67FF8320246C81()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnFinish_158F7C044FDCAD9B5C67FF8320246C81");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra.WBP_Extra_C.OnFinish_C3CB1EDB497DD828DCDA479ED3201257
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_C::OnFinish_C3CB1EDB497DD828DCDA479ED3201257()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnFinish_C3CB1EDB497DD828DCDA479ED3201257");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra.WBP_Extra_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnFocusReceived");

	Params::WBP_Extra_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra.WBP_Extra_C.OnPressCancel
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnPressCancel");

	Params::WBP_Extra_C_OnPressCancel Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra.WBP_Extra_C.OnPressNext
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_C::OnPressNext(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnPressNext");

	Params::WBP_Extra_C_OnPressNext Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra.WBP_Extra_C.OnPressPrevious
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_C::OnPressPrevious(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnPressPrevious");

	Params::WBP_Extra_C_OnPressPrevious Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra.WBP_Extra_C.OnTabPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_GameMenu_Tab_C*              PressedButtonTab                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_C::OnTabPressed(const struct FKeyEvent& KeyEvent, class UWBP_GameMenu_Tab_C* PressedButtonTab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "OnTabPressed");

	Params::WBP_Extra_C_OnTabPressed Parms{};

	Parms.KeyEvent = std::move(KeyEvent);
	Parms.PressedButtonTab = PressedButtonTab;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra.WBP_Extra_C.SetupTabsAndPages
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_C::SetupTabsAndPages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_C", "SetupTabsAndPages");

	UObject::ProcessEvent(Func, nullptr);
}

}

