﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_GuardFront

#include "Basic.hpp"

#include "DM_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DM_GuardFront.DM_GuardFront_C
// 0x0000 (0x0360 - 0x0360)
class UDM_GuardFront_C final : public UDM_Base_C
{
public:
	void ToggleModule();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DM_GuardFront_C">();
	}
	static class UDM_GuardFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDM_GuardFront_C>();
	}
};
static_assert(alignof(UDM_GuardFront_C) == 0x000008, "Wrong alignment on UDM_GuardFront_C");
static_assert(sizeof(UDM_GuardFront_C) == 0x000360, "Wrong size on UDM_GuardFront_C");

}

