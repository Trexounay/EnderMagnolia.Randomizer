﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerSPGauge

#include "Basic.hpp"

#include "WBP_PlayerSPGauge_classes.hpp"
#include "WBP_PlayerSPGauge_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerSPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.DisableSpecialMode
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::DisableSpecialMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "DisableSpecialMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.EnableSpecialMode
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::EnableSpecialMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "EnableSpecialMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.ExecuteUbergraph_WBP_PlayerSPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::ExecuteUbergraph_WBP_PlayerSPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "ExecuteUbergraph_WBP_PlayerSPGauge");

	Params::WBP_PlayerSPGauge_C_ExecuteUbergraph_WBP_PlayerSPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.GetSPRatio
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double*                                 SPRatio                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::GetSPRatio(double* SPRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "GetSPRatio");

	Params::WBP_PlayerSPGauge_C_GetSPRatio Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SPRatio != nullptr)
		*SPRatio = Parms.SPRatio;
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.GetSPValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_PlayerSPGauge_C::GetSPValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "GetSPValue");

	Params::WBP_PlayerSPGauge_C_GetSPValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::Initialize(class APawn* Pawn, class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "Initialize");

	Params::WBP_PlayerSPGauge_C_Initialize Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_PlayerSPGauge_C_InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_1");

	Params::WBP_PlayerSPGauge_C_InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_2");

	Params::WBP_PlayerSPGauge_C_InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_2 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerSPGauge_C::InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_3");

	Params::WBP_PlayerSPGauge_C_InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_3 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.OnMaxSPChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::OnMaxSPChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "OnMaxSPChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.OnSPChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::OnSPChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "OnSPChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.OnSPReachedMax
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::OnSPReachedMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "OnSPReachedMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.RefreshAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::RefreshAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "RefreshAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.RefreshSPGauge
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::RefreshSPGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "RefreshSPGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerSPGauge.WBP_PlayerSPGauge_C.RefreshSubGauges
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerSPGauge_C::RefreshSubGauges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerSPGauge_C", "RefreshSubGauges");

	UObject::ProcessEvent(Func, nullptr);
}

}

