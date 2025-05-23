﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Stat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Stat.WBP_Stat_C
// 0x0070 (0x04D0 - 0x0460)
class UWBP_Stat_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 base;                                              // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelText;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           OverStatBar;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ResultValue;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           StatBar;                                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_;                                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value__0;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Operator;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x04B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UPaperSprite*                           IconSprite;                                        // 0x04C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseInvalidSymbolForZero;                          // 0x04C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Stat(int32 EntryPoint);
	struct FLinearColor GetGaugeColor(int32 Value, int32 ComparatorValue);
	struct FSlateColor GetTextColor(int32 Value, int32 ComparatorValue);
	class FText GetValueText(int32 Value);
	void PreConstruct(bool IsDesignTime);
	void Setup(int32 Value, int32 ComparatorValue, int32 MaxValue);
	void SetupGauge(int32 Value, int32 ComparatorValue, int32 MaxValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Stat_C">();
	}
	static class UWBP_Stat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Stat_C>();
	}
};
static_assert(alignof(UWBP_Stat_C) == 0x000008, "Wrong alignment on UWBP_Stat_C");
static_assert(sizeof(UWBP_Stat_C) == 0x0004D0, "Wrong size on UWBP_Stat_C");
static_assert(offsetof(UWBP_Stat_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Stat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, base) == 0x000468, "Member 'UWBP_Stat_C::base' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, Icon) == 0x000470, "Member 'UWBP_Stat_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, LabelText) == 0x000478, "Member 'UWBP_Stat_C::LabelText' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, OverStatBar) == 0x000480, "Member 'UWBP_Stat_C::OverStatBar' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, ResultValue) == 0x000488, "Member 'UWBP_Stat_C::ResultValue' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, StatBar) == 0x000490, "Member 'UWBP_Stat_C::StatBar' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, Value_) == 0x000498, "Member 'UWBP_Stat_C::Value_' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, Value__0) == 0x0004A0, "Member 'UWBP_Stat_C::Value__0' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, WidgetSwitcher_Operator) == 0x0004A8, "Member 'UWBP_Stat_C::WidgetSwitcher_Operator' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, Label) == 0x0004B0, "Member 'UWBP_Stat_C::Label' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, IconSprite) == 0x0004C0, "Member 'UWBP_Stat_C::IconSprite' has a wrong offset!");
static_assert(offsetof(UWBP_Stat_C, bUseInvalidSymbolForZero) == 0x0004C8, "Member 'UWBP_Stat_C::bUseInvalidSymbolForZero' has a wrong offset!");

}

