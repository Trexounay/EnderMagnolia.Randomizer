﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_SelfGuardFront

#include "Basic.hpp"

#include "DM_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DM_SelfGuardFront.DM_SelfGuardFront_C
// 0x0000 (0x0360 - 0x0360)
class UDM_SelfGuardFront_C final : public UDM_Base_C
{
public:
	void PlayerInitialize(class ABP_CharacterZion_C* Player);
	void ToggleModule();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DM_SelfGuardFront_C">();
	}
	static class UDM_SelfGuardFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDM_SelfGuardFront_C>();
	}
};
static_assert(alignof(UDM_SelfGuardFront_C) == 0x000008, "Wrong alignment on UDM_SelfGuardFront_C");
static_assert(sizeof(UDM_SelfGuardFront_C) == 0x000360, "Wrong size on UDM_SelfGuardFront_C");

}

