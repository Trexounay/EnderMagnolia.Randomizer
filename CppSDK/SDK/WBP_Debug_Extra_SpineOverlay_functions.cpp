﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_Extra_SpineOverlay

#include "Basic.hpp"

#include "WBP_Debug_Extra_SpineOverlay_classes.hpp"
#include "WBP_Debug_Extra_SpineOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.SetZoomMinMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ZoomMin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ZoomMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::SetZoomMinMax(float ZoomMin, float ZoomMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "SetZoomMinMax");

	Params::WBP_Debug_Extra_SpineOverlay_C_SetZoomMinMax Parms{};

	Parms.ZoomMin = ZoomMin;
	Parms.ZoomMax = ZoomMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.SetSceneOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 SceneOffset_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::SetSceneOffset(const struct FVector2D& SceneOffset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "SetSceneOffset");

	Params::WBP_Debug_Extra_SpineOverlay_C_SetSceneOffset Parms{};

	Parms.SceneOffset_0 = std::move(SceneOffset_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.SetOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::SetOffset(const struct FVector2D& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "SetOffset");

	Params::WBP_Debug_Extra_SpineOverlay_C_SetOffset Parms{};

	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.ExecuteUbergraph_WBP_Debug_Extra_SpineOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::ExecuteUbergraph_WBP_Debug_Extra_SpineOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "ExecuteUbergraph_WBP_Debug_Extra_SpineOverlay");

	Params::WBP_Debug_Extra_SpineOverlay_C_ExecuteUbergraph_WBP_Debug_Extra_SpineOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Debug_Extra_SpineOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMin_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMin_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMin_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMin_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMax_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMax_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMax_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_ZoomMax_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_Y_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_Y_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_Y_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_Y_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_X_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_X_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_X_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_X_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneY_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneY_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneY_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneY_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Extra_SpineOverlay.WBP_Debug_Extra_SpineOverlay_C.BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneX_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Extra_SpineOverlay_C::BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneX_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Extra_SpineOverlay_C", "BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneX_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_Debug_Extra_SpineOverlay_C_BndEvt__WBP_Debug_Extra_SpineOverlay_SpinBox_SceneX_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

