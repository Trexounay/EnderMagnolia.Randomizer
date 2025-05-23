﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SkillEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillEntry.WBP_SkillEntry_C
// 0x0478 (0x08D8 - 0x0460)
class UWBP_SkillEntry_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Execute;                                           // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialMode_Unavailable_Out;                       // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialMode_Unavailable_In;                        // 0x0478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialStartToOut;                                 // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialStartToIn;                                  // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialMode_Out;                                   // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpecialMode_In;                                    // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSpecialUnavailable;                              // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSpecialAvailable;                                // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CooldownFinished;                                  // 0x04B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CooldownStart;                                     // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Cooldown;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Frame;                                          // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Frame_SpecialStart;                             // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Button;                                     // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Button_Special;                             // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Effect;                                     // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              ButtonText;                                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              ButtonText_Special;                                // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cooldown_Gauge;                                    // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Deathblow_Base;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_153;                           // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillAutoMarker;                                   // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillEffect;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillIcon;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillIcon_Deathblow;                               // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillIcon_Deathblow_Effect;                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillPossibleEffect;                               // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SPFlame;                                           // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESkillSlot                                    SkillSlot;                                         // 0x0560(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActionInputType                              ActionInputType;                                   // 0x0561(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_562[0x6];                                      // 0x0562(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillComponent*                        SkillComponent;                                    // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FInventoryItemSkillData                ItemSkillData;                                     // 0x0570(0x0288)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class UCommandComponent*                      CommandComponent;                                  // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSkillData                             SkillData;                                         // 0x0800(0x0058)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	struct FSkillData                             SpecialSkillData;                                  // 0x0858(0x0058)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class UCommandSet*                            CommandSet;                                        // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                           CooldownHandle;                                    // 0x08B8(0x0008)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStatSPComponent*                       StatSPComponent;                                   // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpecialAvailable;                                 // 0x08C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bShowingSpecial;                                   // 0x08C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_8CA[0x2];                                      // 0x08CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpecialSPCost;                                     // 0x08CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USummonComponent*                       SummonComponent;                                   // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BindEvents();
	void CacheSkillData();
	void ClearCachedSkillData();
	void Construct();
	void Destruct();
	void DisableSpecialMode();
	void EnableSpecialMode();
	void ExecuteUbergraph_WBP_SkillEntry(int32 EntryPoint);
	void InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Special_Modifier_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	bool IsAssociatedCommandNormal(class UCommand* Command);
	bool IsAssociatedCommandSpecial(class UCommand* Command);
	void IsAssociatedSpirit();
	void OnAutoSpiritDisabled(const class ACharacterZionSpirit* Spirit, const class UCommandSet* CommandSet_0);
	void OnAutoSpiritEnabled(const class ACharacterZionSpirit* Spirit, const class UCommandSet* CommandSet_0);
	void OnCommandCooldownFinished(const class UCommandSet* CommandSet_0, bool Reset);
	void OnCommandPostStart(const class UCommand* Command);
	void OnEquipSkill(const ESkillSlot SkillSlot_0);
	void OnSPValueChanged();
	void OnTickCooldown();
	void OnUnequipSkill(const ESkillSlot SkillSlot_0);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshCooldown(bool* IsCompleted);
	void RefreshSpecialAvailibility();
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTWBP_SkillEntry();
	void SetupButtonText();
	void StartCooldown();
	void StopCooldown();
	void UnbindEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillEntry_C">();
	}
	static class UWBP_SkillEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillEntry_C>();
	}
};
static_assert(alignof(UWBP_SkillEntry_C) == 0x000008, "Wrong alignment on UWBP_SkillEntry_C");
static_assert(sizeof(UWBP_SkillEntry_C) == 0x0008D8, "Wrong size on UWBP_SkillEntry_C");
static_assert(offsetof(UWBP_SkillEntry_C, UberGraphFrame) == 0x000460, "Member 'UWBP_SkillEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Execute) == 0x000468, "Member 'UWBP_SkillEntry_C::Execute' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialMode_Unavailable_Out) == 0x000470, "Member 'UWBP_SkillEntry_C::SpecialMode_Unavailable_Out' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialMode_Unavailable_In) == 0x000478, "Member 'UWBP_SkillEntry_C::SpecialMode_Unavailable_In' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialStartToOut) == 0x000480, "Member 'UWBP_SkillEntry_C::SpecialStartToOut' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialStartToIn) == 0x000488, "Member 'UWBP_SkillEntry_C::SpecialStartToIn' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialMode_Out) == 0x000490, "Member 'UWBP_SkillEntry_C::SpecialMode_Out' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialMode_In) == 0x000498, "Member 'UWBP_SkillEntry_C::SpecialMode_In' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, OnSpecialUnavailable) == 0x0004A0, "Member 'UWBP_SkillEntry_C::OnSpecialUnavailable' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, OnSpecialAvailable) == 0x0004A8, "Member 'UWBP_SkillEntry_C::OnSpecialAvailable' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, CooldownFinished) == 0x0004B0, "Member 'UWBP_SkillEntry_C::CooldownFinished' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, CooldownStart) == 0x0004B8, "Member 'UWBP_SkillEntry_C::CooldownStart' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, BG) == 0x0004C0, "Member 'UWBP_SkillEntry_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, BG_Cooldown) == 0x0004C8, "Member 'UWBP_SkillEntry_C::BG_Cooldown' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, BG_Frame) == 0x0004D0, "Member 'UWBP_SkillEntry_C::BG_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, BG_Frame_SpecialStart) == 0x0004D8, "Member 'UWBP_SkillEntry_C::BG_Frame_SpecialStart' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Border_Button) == 0x0004E0, "Member 'UWBP_SkillEntry_C::Border_Button' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Border_Button_Special) == 0x0004E8, "Member 'UWBP_SkillEntry_C::Border_Button_Special' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Button_Effect) == 0x0004F0, "Member 'UWBP_SkillEntry_C::Button_Effect' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, ButtonText) == 0x0004F8, "Member 'UWBP_SkillEntry_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, ButtonText_Special) == 0x000500, "Member 'UWBP_SkillEntry_C::ButtonText_Special' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Cooldown_Gauge) == 0x000508, "Member 'UWBP_SkillEntry_C::Cooldown_Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Deathblow_Base) == 0x000510, "Member 'UWBP_SkillEntry_C::Deathblow_Base' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, Image_0) == 0x000518, "Member 'UWBP_SkillEntry_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, NiagaraSystemWidget_153) == 0x000520, "Member 'UWBP_SkillEntry_C::NiagaraSystemWidget_153' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillAutoMarker) == 0x000528, "Member 'UWBP_SkillEntry_C::SkillAutoMarker' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillEffect) == 0x000530, "Member 'UWBP_SkillEntry_C::SkillEffect' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillIcon) == 0x000538, "Member 'UWBP_SkillEntry_C::SkillIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillIcon_Deathblow) == 0x000540, "Member 'UWBP_SkillEntry_C::SkillIcon_Deathblow' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillIcon_Deathblow_Effect) == 0x000548, "Member 'UWBP_SkillEntry_C::SkillIcon_Deathblow_Effect' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillPossibleEffect) == 0x000550, "Member 'UWBP_SkillEntry_C::SkillPossibleEffect' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SPFlame) == 0x000558, "Member 'UWBP_SkillEntry_C::SPFlame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillSlot) == 0x000560, "Member 'UWBP_SkillEntry_C::SkillSlot' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, ActionInputType) == 0x000561, "Member 'UWBP_SkillEntry_C::ActionInputType' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillComponent) == 0x000568, "Member 'UWBP_SkillEntry_C::SkillComponent' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, ItemSkillData) == 0x000570, "Member 'UWBP_SkillEntry_C::ItemSkillData' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, CommandComponent) == 0x0007F8, "Member 'UWBP_SkillEntry_C::CommandComponent' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SkillData) == 0x000800, "Member 'UWBP_SkillEntry_C::SkillData' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialSkillData) == 0x000858, "Member 'UWBP_SkillEntry_C::SpecialSkillData' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, CommandSet) == 0x0008B0, "Member 'UWBP_SkillEntry_C::CommandSet' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, CooldownHandle) == 0x0008B8, "Member 'UWBP_SkillEntry_C::CooldownHandle' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, StatSPComponent) == 0x0008C0, "Member 'UWBP_SkillEntry_C::StatSPComponent' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, bSpecialAvailable) == 0x0008C8, "Member 'UWBP_SkillEntry_C::bSpecialAvailable' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, bShowingSpecial) == 0x0008C9, "Member 'UWBP_SkillEntry_C::bShowingSpecial' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SpecialSPCost) == 0x0008CC, "Member 'UWBP_SkillEntry_C::SpecialSPCost' has a wrong offset!");
static_assert(offsetof(UWBP_SkillEntry_C, SummonComponent) == 0x0008D0, "Member 'UWBP_SkillEntry_C::SummonComponent' has a wrong offset!");

}

