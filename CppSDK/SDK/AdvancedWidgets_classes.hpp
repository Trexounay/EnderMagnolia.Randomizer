﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedWidgets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class AdvancedWidgets.RadialSlider
// 0x0688 (0x0800 - 0x0178)
class URadialSlider : public UWidget
{
public:
	float                                         Value;                                             // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x017C(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomDefaultValue;                            // 0x018C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomDefaultValue;                                // 0x0190(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     SliderRange;                                       // 0x0198(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                 ValueTags;                                         // 0x0220(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SliderHandleStartAngle;                            // 0x0230(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SliderHandleEndAngle;                              // 0x0234(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularOffset;                                     // 0x0238(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              HandStartEndRatio;                                 // 0x0240(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSliderStyle                           WidgetStyle;                                       // 0x0250(0x0500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x0750(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderProgressColor;                               // 0x0760(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderHandleColor;                                 // 0x0770(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           CenterBackgroundColor;                             // 0x0780(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Locked;                                            // 0x0790(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MouseUsesStep;                                     // 0x0791(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequiresControllerLock;                            // 0x0792(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_793[0x1];                                      // 0x0793(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StepSize;                                          // 0x0794(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x0798(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseVerticalDrag;                                   // 0x0799(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowSliderHandle;                                  // 0x079A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowSliderHand;                                    // 0x079B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79C[0x4];                                      // 0x079C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnMouseCaptureBegin;                               // 0x07A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnMouseCaptureEnd;                                 // 0x07B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnControllerCaptureBegin;                          // 0x07C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnControllerCaptureEnd;                            // 0x07D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(float Value)>   OnValueChanged;                                    // 0x07E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_7F0[0x10];                                     // 0x07F0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAngularOffset(float InValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetHandStartEndRatio(const struct FVector2D& InValue);
	void SetLocked(bool InValue);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);
	void SetStepSize(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetValue(float InValue);
	void SetValueTags(const TArray<float>& InValueTags);

	float GetCustomDefaultValue() const;
	float GetNormalizedSliderHandlePosition() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialSlider">();
	}
	static class URadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialSlider>();
	}
};
static_assert(alignof(URadialSlider) == 0x000010, "Wrong alignment on URadialSlider");
static_assert(sizeof(URadialSlider) == 0x000800, "Wrong size on URadialSlider");
static_assert(offsetof(URadialSlider, Value) == 0x000178, "Member 'URadialSlider::Value' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueDelegate) == 0x00017C, "Member 'URadialSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(URadialSlider, bUseCustomDefaultValue) == 0x00018C, "Member 'URadialSlider::bUseCustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, CustomDefaultValue) == 0x000190, "Member 'URadialSlider::CustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderRange) == 0x000198, "Member 'URadialSlider::SliderRange' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueTags) == 0x000220, "Member 'URadialSlider::ValueTags' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleStartAngle) == 0x000230, "Member 'URadialSlider::SliderHandleStartAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleEndAngle) == 0x000234, "Member 'URadialSlider::SliderHandleEndAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, AngularOffset) == 0x000238, "Member 'URadialSlider::AngularOffset' has a wrong offset!");
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 0x000240, "Member 'URadialSlider::HandStartEndRatio' has a wrong offset!");
static_assert(offsetof(URadialSlider, WidgetStyle) == 0x000250, "Member 'URadialSlider::WidgetStyle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderBarColor) == 0x000750, "Member 'URadialSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderProgressColor) == 0x000760, "Member 'URadialSlider::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleColor) == 0x000770, "Member 'URadialSlider::SliderHandleColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 0x000780, "Member 'URadialSlider::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, Locked) == 0x000790, "Member 'URadialSlider::Locked' has a wrong offset!");
static_assert(offsetof(URadialSlider, MouseUsesStep) == 0x000791, "Member 'URadialSlider::MouseUsesStep' has a wrong offset!");
static_assert(offsetof(URadialSlider, RequiresControllerLock) == 0x000792, "Member 'URadialSlider::RequiresControllerLock' has a wrong offset!");
static_assert(offsetof(URadialSlider, StepSize) == 0x000794, "Member 'URadialSlider::StepSize' has a wrong offset!");
static_assert(offsetof(URadialSlider, IsFocusable) == 0x000798, "Member 'URadialSlider::IsFocusable' has a wrong offset!");
static_assert(offsetof(URadialSlider, UseVerticalDrag) == 0x000799, "Member 'URadialSlider::UseVerticalDrag' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHandle) == 0x00079A, "Member 'URadialSlider::ShowSliderHandle' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHand) == 0x00079B, "Member 'URadialSlider::ShowSliderHand' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureBegin) == 0x0007A0, "Member 'URadialSlider::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureEnd) == 0x0007B0, "Member 'URadialSlider::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureBegin) == 0x0007C0, "Member 'URadialSlider::OnControllerCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureEnd) == 0x0007D0, "Member 'URadialSlider::OnControllerCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnValueChanged) == 0x0007E0, "Member 'URadialSlider::OnValueChanged' has a wrong offset!");

}

