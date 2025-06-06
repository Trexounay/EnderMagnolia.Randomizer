﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Event

#include "Basic.hpp"

#include "WBP_Event_classes.hpp"
#include "WBP_Event_parameters.hpp"


namespace SDK
{

// Function WBP_Event.WBP_Event_C.CleanUpChoices
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::CleanUpChoices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "CleanUpChoices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Event_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.CreateChoices
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FText>&              InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Event_C::CreateChoices(const TArray<class FText>& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "CreateChoices");

	Params::WBP_Event_C_CreateChoices Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Event.WBP_Event_C.ExecuteUbergraph_WBP_Event
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Event_C::ExecuteUbergraph_WBP_Event(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "ExecuteUbergraph_WBP_Event");

	Params::WBP_Event_C_ExecuteUbergraph_WBP_Event Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Event.WBP_Event_C.OnChoiceConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Event_Choice_C*              EventChoice                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Event_C::OnChoiceConfirmed(class UWBP_Event_Choice_C* EventChoice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnChoiceConfirmed");

	Params::WBP_Event_C_OnChoiceConfirmed Parms{};

	Parms.EventChoice = EventChoice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Event.WBP_Event_C.OnFinish_72C7DC1544F90D6FD9C218846DE402DD
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnFinish_72C7DC1544F90D6FD9C218846DE402DD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnFinish_72C7DC1544F90D6FD9C218846DE402DD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnFinish_72C7DC1544F90D6FD9C2188473B016F7
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnFinish_72C7DC1544F90D6FD9C2188473B016F7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnFinish_72C7DC1544F90D6FD9C2188473B016F7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Event_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnFocusReceived");

	Params::WBP_Event_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Event.WBP_Event_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Event_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnKeyDown");

	Params::WBP_Event_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Event.WBP_Event_C.OnNotifyEventStartPlaying
// (Event, Protected, BlueprintEvent)

void UWBP_Event_C::OnNotifyEventStartPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnNotifyEventStartPlaying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnPause
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnPause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnPause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnPlayChoices
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      SpeakerName_0                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const TArray<class FText>&              Choices                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Event_C::OnPlayChoices(const class FText& SpeakerName_0, const class FText& Text, const TArray<class FText>& Choices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnPlayChoices");

	Params::WBP_Event_C_OnPlayChoices Parms{};

	Parms.SpeakerName_0 = std::move(SpeakerName_0);
	Parms.Text = std::move(Text);
	Parms.Choices = std::move(Choices);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Event.WBP_Event_C.OnPressCancel
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Event_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnPressCancel");

	Params::WBP_Event_C_OnPressCancel Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Event.WBP_Event_C.OnRequestRemoveFromParent
// (Event, Protected, BlueprintEvent)

void UWBP_Event_C::OnRequestRemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnRequestRemoveFromParent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnSkipEvent_No
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnSkipEvent_No()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnSkipEvent_No");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnSkipEvent_Yes
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnSkipEvent_Yes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnSkipEvent_Yes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnSkipFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::OnSkipFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnSkipFadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.OnTalk
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      SpeakerName_0                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Event_C::OnTalk(const class FText& SpeakerName_0, const class FText& Text, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "OnTalk");

	Params::WBP_Event_C_OnTalk Parms{};

	Parms.SpeakerName_0 = std::move(SpeakerName_0);
	Parms.Text = std::move(Text);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Event.WBP_Event_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Event_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "Pause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Event.WBP_Event_C.WidgetAnimationEvt_HideLine_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_Event_C::WidgetAnimationEvt_HideLine_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Event_C", "WidgetAnimationEvt_HideLine_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

