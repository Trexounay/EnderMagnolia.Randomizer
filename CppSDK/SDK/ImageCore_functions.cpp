﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageCore

#include "Basic.hpp"

#include "ImageCore_classes.hpp"
#include "ImageCore_parameters.hpp"


namespace SDK
{

// Function ImageCore.SharedImageConstRefBlueprintFns.GetHeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USharedImageConstRefBlueprintFns::GetHeight(const struct FSharedImageConstRefBlueprint& Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "GetHeight");

	Params::SharedImageConstRefBlueprintFns_GetHeight Parms{};

	Parms.Image = std::move(Image);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ImageCore.SharedImageConstRefBlueprintFns.GetPixelLinearColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   X                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Y                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                                   bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FLinearColor&              FailureColor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USharedImageConstRefBlueprintFns::GetPixelLinearColor(const struct FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool* bValid, const struct FLinearColor& FailureColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "GetPixelLinearColor");

	Params::SharedImageConstRefBlueprintFns_GetPixelLinearColor Parms{};

	Parms.Image = std::move(Image);
	Parms.X = X;
	Parms.Y = Y;
	Parms.FailureColor = std::move(FailureColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	return Parms.ReturnValue;
}


// Function ImageCore.SharedImageConstRefBlueprintFns.GetPixelValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   X                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Y                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                                   bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4f                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4f USharedImageConstRefBlueprintFns::GetPixelValue(const struct FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "GetPixelValue");

	Params::SharedImageConstRefBlueprintFns_GetPixelValue Parms{};

	Parms.Image = std::move(Image);
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	return Parms.ReturnValue;
}


// Function ImageCore.SharedImageConstRefBlueprintFns.GetSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2f                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f USharedImageConstRefBlueprintFns::GetSize(const struct FSharedImageConstRefBlueprint& Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "GetSize");

	Params::SharedImageConstRefBlueprintFns_GetSize Parms{};

	Parms.Image = std::move(Image);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ImageCore.SharedImageConstRefBlueprintFns.GetWidth
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USharedImageConstRefBlueprintFns::GetWidth(const struct FSharedImageConstRefBlueprint& Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "GetWidth");

	Params::SharedImageConstRefBlueprintFns_GetWidth Parms{};

	Parms.Image = std::move(Image);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ImageCore.SharedImageConstRefBlueprintFns.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FSharedImageConstRefBlueprint&Image                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USharedImageConstRefBlueprintFns::IsValid(const struct FSharedImageConstRefBlueprint& Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SharedImageConstRefBlueprintFns", "IsValid");

	Params::SharedImageConstRefBlueprintFns_IsValid Parms{};

	Parms.Image = std::move(Image);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

