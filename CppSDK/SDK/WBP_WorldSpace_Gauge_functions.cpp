﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldSpace_Gauge

#include "Basic.hpp"

#include "WBP_WorldSpace_Gauge_classes.hpp"
#include "WBP_WorldSpace_Gauge_parameters.hpp"


namespace SDK
{

// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.BindBurnEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::BindBurnEvents(class AActor* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "BindBurnEvents");

	Params::WBP_WorldSpace_Gauge_C_BindBurnEvents Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.BindFreezeEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::BindFreezeEvents(class AActor* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "BindFreezeEvents");

	Params::WBP_WorldSpace_Gauge_C_BindFreezeEvents Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.BindHPEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::BindHPEvents(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "BindHPEvents");

	Params::WBP_WorldSpace_Gauge_C_BindHPEvents Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.BindShockEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::BindShockEvents(class AActor* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "BindShockEvents");

	Params::WBP_WorldSpace_Gauge_C_BindShockEvents Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.BindStaminaEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::BindStaminaEvents(class AActor* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "BindStaminaEvents");

	Params::WBP_WorldSpace_Gauge_C_BindStaminaEvents Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.CanShow
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_WorldSpace_Gauge_C::CanShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "CanShow");

	Params::WBP_WorldSpace_Gauge_C_CanShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.ExecuteUbergraph_WBP_WorldSpace_Gauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::ExecuteUbergraph_WBP_WorldSpace_Gauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "ExecuteUbergraph_WBP_WorldSpace_Gauge");

	Params::WBP_WorldSpace_Gauge_C_ExecuteUbergraph_WBP_WorldSpace_Gauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnBurnChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnBurnChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnBurnChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::OnEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnEndPlay");

	Params::WBP_WorldSpace_Gauge_C_OnEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnFreezeChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnFreezeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnFreezeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnGameSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnGameSettingsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnGameSettingsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnHPChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnHPChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnHPChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnShockChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnShockChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnShockChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnStaminaBreak
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnStaminaBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnStaminaBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnStaminaChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnStaminaChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnStaminaChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnStaminaInvincibilityEnd
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnStaminaInvincibilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnStaminaInvincibilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.OnStaminaInvincibilityStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::OnStaminaInvincibilityStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "OnStaminaInvincibilityStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.RefreshSettingsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::RefreshSettingsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "RefreshSettingsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.SequenceEvent__ENTRYPOINTWBP_WorldSpace_Gauge
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::SequenceEvent__ENTRYPOINTWBP_WorldSpace_Gauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "SequenceEvent__ENTRYPOINTWBP_WorldSpace_Gauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.SetStaminaDecreaseEffect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewStaminaRatio                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::SetStaminaDecreaseEffect(double NewStaminaRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "SetStaminaDecreaseEffect");

	Params::WBP_WorldSpace_Gauge_C_SetStaminaDecreaseEffect Parms{};

	Parms.NewStaminaRatio = NewStaminaRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.SetTargetActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSpace_Gauge_C::SetTargetActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "SetTargetActor");

	Params::WBP_WorldSpace_Gauge_C_SetTargetActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.TryShow
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::TryShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "TryShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.UnbindBurnEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::UnbindBurnEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "UnbindBurnEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.UnbindFreezeEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::UnbindFreezeEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "UnbindFreezeEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.UnbindHPEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::UnbindHPEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "UnbindHPEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.UnbindShockEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::UnbindShockEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "UnbindShockEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.UnbindStaminaEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::UnbindStaminaEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "UnbindStaminaEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.WidgetAnimationEvt_Destroy_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::WidgetAnimationEvt_Destroy_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "WidgetAnimationEvt_Destroy_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.WidgetAnimationEvt_HPDamage_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::WidgetAnimationEvt_HPDamage_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "WidgetAnimationEvt_HPDamage_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSpace_Gauge.WBP_WorldSpace_Gauge_C.WidgetAnimationEvt_StaminaDamage_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWBP_WorldSpace_Gauge_C::WidgetAnimationEvt_StaminaDamage_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSpace_Gauge_C", "WidgetAnimationEvt_StaminaDamage_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}

}

