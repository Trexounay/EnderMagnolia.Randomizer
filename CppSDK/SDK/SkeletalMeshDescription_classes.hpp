﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkeletalMeshDescription

#include "Basic.hpp"

#include "MeshDescription_classes.hpp"


namespace SDK
{

// Class SkeletalMeshDescription.SkeletalMeshDescription
// 0x0000 (0x02F0 - 0x02F0)
class USkeletalMeshDescription final : public UMeshDescriptionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshDescription">();
	}
	static class USkeletalMeshDescription* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshDescription>();
	}
};
static_assert(alignof(USkeletalMeshDescription) == 0x000008, "Wrong alignment on USkeletalMeshDescription");
static_assert(sizeof(USkeletalMeshDescription) == 0x0002F0, "Wrong size on USkeletalMeshDescription");

}

