﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Extra_Dialog_GalleryImage

#include "Basic.hpp"

#include "WBP_Extra_Dialog_GalleryImage_classes.hpp"
#include "WBP_Extra_Dialog_GalleryImage_parameters.hpp"


namespace SDK
{

// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.ExecuteUbergraph_WBP_Extra_Dialog_GalleryImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_Dialog_GalleryImage_C::ExecuteUbergraph_WBP_Extra_Dialog_GalleryImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "ExecuteUbergraph_WBP_Extra_Dialog_GalleryImage");

	Params::WBP_Extra_Dialog_GalleryImage_C_ExecuteUbergraph_WBP_Extra_Dialog_GalleryImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FAnalogInputEvent&         InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnAnalogValueChanged");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnDownNext
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnDownNext(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnDownNext");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnDownNext Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnDownPrevious
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnDownPrevious(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnDownPrevious");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnDownPrevious Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnFinish_72C7DC1544F90D6FD9C21884B4596412
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::OnFinish_72C7DC1544F90D6FD9C21884B4596412()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnFinish_72C7DC1544F90D6FD9C21884B4596412");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnFinish_72C7DC1544F90D6FD9C21884DB8C79F1
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::OnFinish_72C7DC1544F90D6FD9C21884DB8C79F1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnFinish_72C7DC1544F90D6FD9C21884DB8C79F1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnImageStreamingFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>           SoftImageObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Extra_Dialog_GalleryImage_C::OnImageStreamingFinish(TSoftObjectPtr<class UObject> SoftImageObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnImageStreamingFinish");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnImageStreamingFinish Parms{};

	Parms.SoftImageObject = SoftImageObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnImageStreamingStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>           SoftImageObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Extra_Dialog_GalleryImage_C::OnImageStreamingStart(TSoftObjectPtr<class UObject> SoftImageObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnImageStreamingStart");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnImageStreamingStart Parms{};

	Parms.SoftImageObject = SoftImageObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnMouseButtonDown");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnMouseWheel");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnPressCancel
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnPressCancel");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnPressCancel Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnPressConfirm
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnPressConfirm");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnPressConfirm Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnPressContext
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnPressContext");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnPressContext Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnPressNext
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnPressNext(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnPressNext");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnPressNext Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnPressPrevious
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Extra_Dialog_GalleryImage_C::OnPressPrevious(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnPressPrevious");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnPressPrevious Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.OnZoomChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewZoomValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Extra_Dialog_GalleryImage_C::OnZoomChanged(double NewZoomValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "OnZoomChanged");

	Params::WBP_Extra_Dialog_GalleryImage_C_OnZoomChanged Parms{};

	Parms.NewZoomValue = NewZoomValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.RequestNextImage
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::RequestNextImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "RequestNextImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.RequestPreviousImage
// (BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::RequestPreviousImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "RequestPreviousImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.SetGalleryItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FInventoryItemGalleryData& GalleryItemData_0                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Extra_Dialog_GalleryImage_C::SetGalleryItemData(const struct FInventoryItemGalleryData& GalleryItemData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "SetGalleryItemData");

	Params::WBP_Extra_Dialog_GalleryImage_C_SetGalleryItemData Parms{};

	Parms.GalleryItemData_0 = std::move(GalleryItemData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.SetupCanChangeImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::SetupCanChangeImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "SetupCanChangeImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.ToggleUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Extra_Dialog_GalleryImage_C::ToggleUIVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "ToggleUIVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Extra_Dialog_GalleryImage.WBP_Extra_Dialog_GalleryImage_C.GetCurrentScaleFactor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_Extra_Dialog_GalleryImage_C::GetCurrentScaleFactor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Extra_Dialog_GalleryImage_C", "GetCurrentScaleFactor");

	Params::WBP_Extra_Dialog_GalleryImage_C_GetCurrentScaleFactor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

