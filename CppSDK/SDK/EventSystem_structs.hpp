﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum EventSystem.EEventPlayerResult
// NumValues: 0x0005
enum class EEventPlayerResult : uint8
{
	None                                     = 0,
	Completed                                = 1,
	Skipped                                  = 2,
	Aborted                                  = 3,
	EEventPlayerResult_MAX                   = 4,
};

// Enum EventSystem.EActorBindingType
// NumValues: 0x0003
enum class EActorBindingType : uint32
{
	Runtime                                  = 0,
	Spawn                                    = 1,
	EActorBindingType_MAX                    = 2,
};

// Enum EventSystem.EActorBindingTransformType
// NumValues: 0x0004
enum class EActorBindingTransformType : uint32
{
	LocalSpace                               = 0,
	WorldSpace                               = 1,
	ActorBinding                             = 2,
	EActorBindingTransformType_MAX           = 3,
};

// Enum EventSystem.EEventActionState
// NumValues: 0x0004
enum class EEventActionState : uint8
{
	None                                     = 0,
	InProgress                               = 1,
	Finished                                 = 2,
	EEventActionState_MAX                    = 3,
};

// Enum EventSystem.EActorAnchor
// NumValues: 0x0004
enum class EActorAnchor : uint8
{
	Center                                   = 0,
	Top                                      = 1,
	Bottom                                   = 2,
	EActorAnchor_MAX                         = 3,
};

// Enum EventSystem.EActorPivotTarget
// NumValues: 0x0004
enum class EActorPivotTarget : uint8
{
	Center                                   = 0,
	Bottom                                   = 1,
	Top                                      = 2,
	EActorPivotTarget_MAX                    = 3,
};

// Enum EventSystem.EWaitType
// NumValues: 0x0003
enum class EWaitType : uint32
{
	Time                                     = 0,
	Frame                                    = 1,
	EWaitType_MAX                            = 2,
};

// Enum EventSystem.EEventNodeState
// NumValues: 0x0004
enum class EEventNodeState : uint8
{
	None                                     = 0,
	InProgress                               = 1,
	Finished                                 = 2,
	EEventNodeState_MAX                      = 3,
};

// Enum EventSystem.EEventPlayerState
// NumValues: 0x0009
enum class EEventPlayerState : uint32
{
	None                                     = 0,
	Initializing                             = 1,
	PostInitialize                           = 2,
	Playing                                  = 3,
	Skipping                                 = 4,
	PostSkip                                 = 5,
	Finishing                                = 6,
	Aborting                                 = 7,
	EEventPlayerState_MAX                    = 8,
};

// ScriptStruct EventSystem.ActorBindingKey
// 0x0008 (0x0008 - 0x0000)
struct FActorBindingKey final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FActorBindingKey) == 0x000004, "Wrong alignment on FActorBindingKey");
static_assert(sizeof(FActorBindingKey) == 0x000008, "Wrong size on FActorBindingKey");
static_assert(offsetof(FActorBindingKey, Name) == 0x000000, "Member 'FActorBindingKey::Name' has a wrong offset!");

// ScriptStruct EventSystem.ActorBindingSpawnInfos
// 0x00D0 (0x00D0 - 0x0000)
struct FActorBindingSpawnInfos final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDestroyOnEventFinish;                             // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOffsetByHalfHeight;                               // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSpawnVisible;                                     // 0x002A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EActorBindingTransformType                    TransformType;                                     // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorBindingKey                       ActorBinding;                                      // 0x0030(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnTransform;                                    // 0x0040(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   DefaultControllerClass;                            // 0x00A0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActorBindingSpawnInfos) == 0x000010, "Wrong alignment on FActorBindingSpawnInfos");
static_assert(sizeof(FActorBindingSpawnInfos) == 0x0000D0, "Wrong size on FActorBindingSpawnInfos");
static_assert(offsetof(FActorBindingSpawnInfos, ActorClass) == 0x000000, "Member 'FActorBindingSpawnInfos::ActorClass' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, bDestroyOnEventFinish) == 0x000028, "Member 'FActorBindingSpawnInfos::bDestroyOnEventFinish' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, bOffsetByHalfHeight) == 0x000029, "Member 'FActorBindingSpawnInfos::bOffsetByHalfHeight' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, bSpawnVisible) == 0x00002A, "Member 'FActorBindingSpawnInfos::bSpawnVisible' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, TransformType) == 0x00002C, "Member 'FActorBindingSpawnInfos::TransformType' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, ActorBinding) == 0x000030, "Member 'FActorBindingSpawnInfos::ActorBinding' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, SpawnTransform) == 0x000040, "Member 'FActorBindingSpawnInfos::SpawnTransform' has a wrong offset!");
static_assert(offsetof(FActorBindingSpawnInfos, DefaultControllerClass) == 0x0000A0, "Member 'FActorBindingSpawnInfos::DefaultControllerClass' has a wrong offset!");

// ScriptStruct EventSystem.ActorBinding
// 0x00E0 (0x00E0 - 0x0000)
struct FActorBinding final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EActorBindingType                             ActorBindingType;                                  // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActorBindingSpawnInfos                SpawnInfos;                                        // 0x0010(0x00D0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FActorBinding) == 0x000010, "Wrong alignment on FActorBinding");
static_assert(sizeof(FActorBinding) == 0x0000E0, "Wrong size on FActorBinding");
static_assert(offsetof(FActorBinding, Name) == 0x000000, "Member 'FActorBinding::Name' has a wrong offset!");
static_assert(offsetof(FActorBinding, ActorBindingType) == 0x000008, "Member 'FActorBinding::ActorBindingType' has a wrong offset!");
static_assert(offsetof(FActorBinding, SpawnInfos) == 0x000010, "Member 'FActorBinding::SpawnInfos' has a wrong offset!");

// ScriptStruct EventSystem.ViewTargetBlendSettings
// 0x000C (0x000C - 0x0000)
struct FViewTargetBlendSettings final
{
public:
	float                                         BlendTime;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EViewTargetBlendFunction                      BlendFunction;                                     // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendExp;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FViewTargetBlendSettings) == 0x000004, "Wrong alignment on FViewTargetBlendSettings");
static_assert(sizeof(FViewTargetBlendSettings) == 0x00000C, "Wrong size on FViewTargetBlendSettings");
static_assert(offsetof(FViewTargetBlendSettings, BlendTime) == 0x000000, "Member 'FViewTargetBlendSettings::BlendTime' has a wrong offset!");
static_assert(offsetof(FViewTargetBlendSettings, BlendFunction) == 0x000004, "Member 'FViewTargetBlendSettings::BlendFunction' has a wrong offset!");
static_assert(offsetof(FViewTargetBlendSettings, BlendExp) == 0x000008, "Member 'FViewTargetBlendSettings::BlendExp' has a wrong offset!");

// ScriptStruct EventSystem.EventBlackboardInit
// 0x0140 (0x0140 - 0x0000)
struct FEventBlackboardInit final
{
public:
	TMap<class FName, class FName>                Names;                                             // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                       Booleans;                                          // 0x0050(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                      Integers;                                          // 0x00A0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FDataTableRowHandle> RowHandles;                                        // 0x00F0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEventBlackboardInit) == 0x000008, "Wrong alignment on FEventBlackboardInit");
static_assert(sizeof(FEventBlackboardInit) == 0x000140, "Wrong size on FEventBlackboardInit");
static_assert(offsetof(FEventBlackboardInit, Names) == 0x000000, "Member 'FEventBlackboardInit::Names' has a wrong offset!");
static_assert(offsetof(FEventBlackboardInit, Booleans) == 0x000050, "Member 'FEventBlackboardInit::Booleans' has a wrong offset!");
static_assert(offsetof(FEventBlackboardInit, Integers) == 0x0000A0, "Member 'FEventBlackboardInit::Integers' has a wrong offset!");
static_assert(offsetof(FEventBlackboardInit, RowHandles) == 0x0000F0, "Member 'FEventBlackboardInit::RowHandles' has a wrong offset!");

}

