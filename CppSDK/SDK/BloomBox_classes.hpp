﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BloomBox

#include "Basic.hpp"

#include "BloomBox_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class BloomBox.BloomBox
// 0x01E8 (0x0378 - 0x0190)
class UBloomBox final : public UContentWidget
{
public:
	EBloomBoxGenerationTiming                     GenerationTiming;                                  // 0x0190(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BloomColor;                                        // 0x0194(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         RuntimeEffectValue;                                // 0x01A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBloomBoxRuntimeSettings               RuntimeSettings;                                   // 0x01A8(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBloomBoxGenerationSettings            GenerationSettings;                                // 0x01C0(0x0150)(Edit, NativeAccessSpecifierPrivate)
	struct FBloomBoxResources                     BloomBoxResources;                                 // 0x0310(0x0050)(Edit, EditConst, NativeAccessSpecifierPrivate)
	EHorizontalAlignment                          ContentHorizontalAlignment;                        // 0x0360(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EVerticalAlignment                            ContentVerticalAlignment;                          // 0x0361(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_362[0x16];                                     // 0x0362(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RequestRender();
	void SetBloomColor(const struct FLinearColor& InColor);
	void SetRuntimeEffectValue(float InValue);

	const struct FLinearColor GetBloomColor() const;
	float GetRuntimeEffectValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BloomBox">();
	}
	static class UBloomBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBloomBox>();
	}
};
static_assert(alignof(UBloomBox) == 0x000008, "Wrong alignment on UBloomBox");
static_assert(sizeof(UBloomBox) == 0x000378, "Wrong size on UBloomBox");
static_assert(offsetof(UBloomBox, GenerationTiming) == 0x000190, "Member 'UBloomBox::GenerationTiming' has a wrong offset!");
static_assert(offsetof(UBloomBox, BloomColor) == 0x000194, "Member 'UBloomBox::BloomColor' has a wrong offset!");
static_assert(offsetof(UBloomBox, RuntimeEffectValue) == 0x0001A4, "Member 'UBloomBox::RuntimeEffectValue' has a wrong offset!");
static_assert(offsetof(UBloomBox, RuntimeSettings) == 0x0001A8, "Member 'UBloomBox::RuntimeSettings' has a wrong offset!");
static_assert(offsetof(UBloomBox, GenerationSettings) == 0x0001C0, "Member 'UBloomBox::GenerationSettings' has a wrong offset!");
static_assert(offsetof(UBloomBox, BloomBoxResources) == 0x000310, "Member 'UBloomBox::BloomBoxResources' has a wrong offset!");
static_assert(offsetof(UBloomBox, ContentHorizontalAlignment) == 0x000360, "Member 'UBloomBox::ContentHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UBloomBox, ContentVerticalAlignment) == 0x000361, "Member 'UBloomBox::ContentVerticalAlignment' has a wrong offset!");

}

