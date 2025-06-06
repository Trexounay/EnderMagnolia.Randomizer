﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Currency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Currency.WBP_Currency_C
// 0x0048 (0x04A8 - 0x0460)
class UWBP_Currency_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             CurrencyAfterValue;                                // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CurrencyIcon;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrencyText;                                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrencyValue;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_CurrencyAfterContainer;              // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECurrencyType                                 Currency_Type;                                     // 0x0490(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              ConfirmSpendCurrency;                              // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_Currency(int32 EntryPoint);
	void GetCurrencyValue(int32* Currency);
	void PreConstruct(bool IsDesignTime);
	void RefreshCurrencyAfterText(int32 Cost, bool bShowCurrencyAfter);
	void RefreshCurrencyText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Currency_C">();
	}
	static class UWBP_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Currency_C>();
	}
};
static_assert(alignof(UWBP_Currency_C) == 0x000008, "Wrong alignment on UWBP_Currency_C");
static_assert(sizeof(UWBP_Currency_C) == 0x0004A8, "Wrong size on UWBP_Currency_C");
static_assert(offsetof(UWBP_Currency_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Currency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, CurrencyAfterValue) == 0x000468, "Member 'UWBP_Currency_C::CurrencyAfterValue' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, CurrencyIcon) == 0x000470, "Member 'UWBP_Currency_C::CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, CurrencyText) == 0x000478, "Member 'UWBP_Currency_C::CurrencyText' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, CurrencyValue) == 0x000480, "Member 'UWBP_Currency_C::CurrencyValue' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, HorizontalBox_CurrencyAfterContainer) == 0x000488, "Member 'UWBP_Currency_C::HorizontalBox_CurrencyAfterContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, Currency_Type) == 0x000490, "Member 'UWBP_Currency_C::Currency_Type' has a wrong offset!");
static_assert(offsetof(UWBP_Currency_C, ConfirmSpendCurrency) == 0x000498, "Member 'UWBP_Currency_C::ConfirmSpendCurrency' has a wrong offset!");

}

