﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_SelfGuardBack

#include "Basic.hpp"

#include "DM_SelfGuardBack_classes.hpp"
#include "DM_SelfGuardBack_parameters.hpp"


namespace SDK
{

// Function DM_SelfGuardBack.DM_SelfGuardBack_C.PlayerInitialize
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CharacterZion_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDM_SelfGuardBack_C::PlayerInitialize(class ABP_CharacterZion_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_SelfGuardBack_C", "PlayerInitialize");

	Params::DM_SelfGuardBack_C_PlayerInitialize Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DM_SelfGuardBack.DM_SelfGuardBack_C.ToggleModule
// (Public, BlueprintCallable, BlueprintEvent)

void UDM_SelfGuardBack_C::ToggleModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_SelfGuardBack_C", "ToggleModule");

	UObject::ProcessEvent(Func, nullptr);
}

}

