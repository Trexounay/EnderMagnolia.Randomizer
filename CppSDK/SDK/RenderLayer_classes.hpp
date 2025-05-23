﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RenderLayer

#include "Basic.hpp"

#include "RenderLayer_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class RenderLayer.RenderLayerComponent
// 0x0038 (0x00D8 - 0x00A0)
class URenderLayerComponent final : public UActorComponent
{
public:
	ERenderLayerTypes                             RenderLayerType;                                   // 0x00A0(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FComponentReference>            ComponentsToSet;                                   // 0x00A8(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<int32>                                 RenderLayerPriorities;                             // 0x00B8(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C8[0x10];                                      // 0x00C8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RenderLayerComponent">();
	}
	static class URenderLayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URenderLayerComponent>();
	}
};
static_assert(alignof(URenderLayerComponent) == 0x000008, "Wrong alignment on URenderLayerComponent");
static_assert(sizeof(URenderLayerComponent) == 0x0000D8, "Wrong size on URenderLayerComponent");
static_assert(offsetof(URenderLayerComponent, RenderLayerType) == 0x0000A0, "Member 'URenderLayerComponent::RenderLayerType' has a wrong offset!");
static_assert(offsetof(URenderLayerComponent, ComponentsToSet) == 0x0000A8, "Member 'URenderLayerComponent::ComponentsToSet' has a wrong offset!");
static_assert(offsetof(URenderLayerComponent, RenderLayerPriorities) == 0x0000B8, "Member 'URenderLayerComponent::RenderLayerPriorities' has a wrong offset!");

// Class RenderLayer.RenderLayerSubsystem
// 0x0050 (0x0080 - 0x0030)
class URenderLayerSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x50];                                      // 0x0030(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static int32 GetPriorityForRenderLayer(const ERenderLayerTypes& RenderLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RenderLayerSubsystem">();
	}
	static class URenderLayerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<URenderLayerSubsystem>();
	}
};
static_assert(alignof(URenderLayerSubsystem) == 0x000008, "Wrong alignment on URenderLayerSubsystem");
static_assert(sizeof(URenderLayerSubsystem) == 0x000080, "Wrong size on URenderLayerSubsystem");

}

