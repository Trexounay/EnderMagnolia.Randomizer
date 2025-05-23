﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Button_Item

#include "Basic.hpp"

#include "WBP_Button_Item_classes.hpp"
#include "WBP_Button_Item_parameters.hpp"


namespace SDK
{

// Function WBP_Button_Item.WBP_Button_Item_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Button_Item_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "OnAddedToFocusPath");

	Params::WBP_Button_Item_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.ExecuteUbergraph_WBP_Button_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Item_C::ExecuteUbergraph_WBP_Button_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "ExecuteUbergraph_WBP_Button_Item");

	Params::WBP_Button_Item_C_ExecuteUbergraph_WBP_Button_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Button_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Button_Item.WBP_Button_Item_C.OnPressConfirm
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Button_Item_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "OnPressConfirm");

	Params::WBP_Button_Item_C_OnPressConfirm Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Button_Item.WBP_Button_Item_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Button_Item_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "OnRemovedFromFocusPath");

	Params::WBP_Button_Item_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.RefreshNewVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Button_Item_C::RefreshNewVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "RefreshNewVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Button_Item.WBP_Button_Item_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Item_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "SetColor");

	Params::WBP_Button_Item_C_SetColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.SetFocusedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Item_C::SetFocusedState(bool Focus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "SetFocusedState");

	Params::WBP_Button_Item_C_SetFocusedState Parms{};

	Parms.Focus = Focus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDataTableRowHandle&       ItemHandle_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      FallbackText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bNew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Item_C::Setup(const struct FDataTableRowHandle& ItemHandle_0, int32 Count, const class FText& FallbackText, bool bNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "Setup");

	Params::WBP_Button_Item_C_Setup Parms{};

	Parms.ItemHandle_0 = std::move(ItemHandle_0);
	Parms.Count = Count;
	Parms.FallbackText = std::move(FallbackText);
	Parms.bNew = bNew;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Button_Item.WBP_Button_Item_C.TryMarkItemAsChecked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Button_Item_C::TryMarkItemAsChecked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Button_Item_C", "TryMarkItemAsChecked");

	UObject::ProcessEvent(Func, nullptr);
}

}

