﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Command_Heal

#include "Basic.hpp"

#include "Zion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Command_Heal.BP_Command_Heal_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_Command_Heal_C final : public UCommand_Heal
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Command_Heal_C">();
	}
	static class UBP_Command_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Command_Heal_C>();
	}
};
static_assert(alignof(UBP_Command_Heal_C) == 0x000010, "Wrong alignment on UBP_Command_Heal_C");
static_assert(sizeof(UBP_Command_Heal_C) == 0x0001D0, "Wrong size on UBP_Command_Heal_C");

}

