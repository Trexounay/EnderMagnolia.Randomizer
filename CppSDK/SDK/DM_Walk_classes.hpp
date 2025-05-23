﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Walk

#include "Basic.hpp"

#include "DM_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DM_Walk.DM_Walk_C
// 0x0000 (0x0360 - 0x0360)
class UDM_Walk_C final : public UDM_Base_C
{
public:
	void ServiceTick();
	void ToggleModule();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DM_Walk_C">();
	}
	static class UDM_Walk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDM_Walk_C>();
	}
};
static_assert(alignof(UDM_Walk_C) == 0x000008, "Wrong alignment on UDM_Walk_C");
static_assert(sizeof(UDM_Walk_C) == 0x000360, "Wrong size on UDM_Walk_C");

}

