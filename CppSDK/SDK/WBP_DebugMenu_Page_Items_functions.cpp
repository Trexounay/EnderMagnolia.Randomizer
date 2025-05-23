﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugMenu_Page_Items

#include "Basic.hpp"

#include "WBP_DebugMenu_Page_Items_classes.hpp"
#include "WBP_DebugMenu_Page_Items_parameters.hpp"


namespace SDK
{

// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.SwitchPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugMenu_Page_Items_C::SwitchPage(int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "SwitchPage");

	Params::WBP_DebugMenu_Page_Items_C_SwitchPage Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.OnPressPreviousAlt
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugMenu_Page_Items_C::OnPressPreviousAlt(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "OnPressPreviousAlt");

	Params::WBP_DebugMenu_Page_Items_C_OnPressPreviousAlt Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.OnPressNextAlt
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugMenu_Page_Items_C::OnPressNextAlt(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "OnPressNextAlt");

	Params::WBP_DebugMenu_Page_Items_C_OnPressNextAlt Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugMenu_Page_Items_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "OnFocusReceived");

	Params::WBP_DebugMenu_Page_Items_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DebugMenu_Element_ItemButton_C*ItemButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugMenu_Page_Items_C::OnButtonPressed(class UWBP_DebugMenu_Element_ItemButton_C* ItemButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "OnButtonPressed");

	Params::WBP_DebugMenu_Page_Items_C_OnButtonPressed Parms{};

	Parms.ItemButton = ItemButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.ExecuteUbergraph_WBP_DebugMenu_Page_Items
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugMenu_Page_Items_C::ExecuteUbergraph_WBP_DebugMenu_Page_Items(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "ExecuteUbergraph_WBP_DebugMenu_Page_Items");

	Params::WBP_DebugMenu_Page_Items_C_ExecuteUbergraph_WBP_DebugMenu_Page_Items Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.CreateLists
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_DebugMenu_Page_Items_C::CreateLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "CreateLists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.CreateListFromDataTable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       Table                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      CategoryLabel_0                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DebugMenu_Page_Items_C::CreateListFromDataTable(class UDataTable* Table, int32 Count, const class FText& CategoryLabel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "CreateListFromDataTable");

	Params::WBP_DebugMenu_Page_Items_C_CreateListFromDataTable Parms{};

	Parms.Table = Table;
	Parms.Count = Count;
	Parms.CategoryLabel_0 = std::move(CategoryLabel_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugMenu_Page_Items.WBP_DebugMenu_Page_Items_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugMenu_Page_Items_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugMenu_Page_Items_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

