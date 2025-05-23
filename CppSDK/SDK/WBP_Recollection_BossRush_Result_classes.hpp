﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Recollection_BossRush_Result

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Zion_structs.hpp"
#include "Zion_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Recollection_BossRush_Result.WBP_Recollection_BossRush_Result_C
// 0x00D8 (0x0538 - 0x0460)
class UWBP_Recollection_BossRush_Result_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Deco_Left;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Deco_Right;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DifficultySettings_NewGame;                   // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DifficultySettings_Preset;                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Records;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Result;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_Quit;                           // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Generic_C*                  WBP_Button_Generic_TryAgain;                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Footer_C*                          WBP_Footer;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_BossRush_Leaderboard_C* WBP_Recollection_BossRush_Leaderboard;           // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_BossRush_RecordEntry_Current_C* WBP_Recollection_BossRush_RecordEntry_Current; // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeparateLine2_C*                   WBP_SeparateLine2;                                 // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SeparateLine2_C*                   WBP_SeparateLine2_1;                               // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentBossRushResultIndex;                        // 0x04E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnQuit;                                            // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FRecollectionBossRushRecordData        RecordData;                                        // 0x0500(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnTryAgain;                                        // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   IsNewGamePlusText;                                 // 0x0518(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	class FText                                   BossRushDifficultyPresetText;                      // 0x0528(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

public:
	void BndEvt__WBP_Recollection_BossRush_Result_WBP_Button_Generic_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_Recollection_BossRush_Result_WBP_Button_Generic_Quit_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Construct();
	void ExecuteUbergraph_WBP_Recollection_BossRush_Result(int32 EntryPoint);
	void OnFinish_72C7DC1544F90D6FD9C2188426D18BA0();
	void OnFinish_72C7DC1544F90D6FD9C2188470882583();
	void OnFinish_72C7DC1544F90D6FD9C218847D2722D4();
	void SetupNewRecordFlag();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Recollection_BossRush_Result_C">();
	}
	static class UWBP_Recollection_BossRush_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Recollection_BossRush_Result_C>();
	}
};
static_assert(alignof(UWBP_Recollection_BossRush_Result_C) == 0x000008, "Wrong alignment on UWBP_Recollection_BossRush_Result_C");
static_assert(sizeof(UWBP_Recollection_BossRush_Result_C) == 0x000538, "Wrong size on UWBP_Recollection_BossRush_Result_C");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Recollection_BossRush_Result_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, HideAnim) == 0x000468, "Member 'UWBP_Recollection_BossRush_Result_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, ShowAnim) == 0x000470, "Member 'UWBP_Recollection_BossRush_Result_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, BG) == 0x000478, "Member 'UWBP_Recollection_BossRush_Result_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Frame_Deco_Left) == 0x000480, "Member 'UWBP_Recollection_BossRush_Result_C::Frame_Deco_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Frame_Deco_Right) == 0x000488, "Member 'UWBP_Recollection_BossRush_Result_C::Frame_Deco_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Text_DifficultySettings_NewGame) == 0x000490, "Member 'UWBP_Recollection_BossRush_Result_C::Text_DifficultySettings_NewGame' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Text_DifficultySettings_Preset) == 0x000498, "Member 'UWBP_Recollection_BossRush_Result_C::Text_DifficultySettings_Preset' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Text_Records) == 0x0004A0, "Member 'UWBP_Recollection_BossRush_Result_C::Text_Records' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, Text_Result) == 0x0004A8, "Member 'UWBP_Recollection_BossRush_Result_C::Text_Result' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_Button_Generic_Quit) == 0x0004B0, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_Button_Generic_Quit' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_Button_Generic_TryAgain) == 0x0004B8, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_Button_Generic_TryAgain' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_Footer) == 0x0004C0, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_Footer' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_Recollection_BossRush_Leaderboard) == 0x0004C8, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_Recollection_BossRush_Leaderboard' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_Recollection_BossRush_RecordEntry_Current) == 0x0004D0, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_Recollection_BossRush_RecordEntry_Current' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_SeparateLine2) == 0x0004D8, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_SeparateLine2' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, WBP_SeparateLine2_1) == 0x0004E0, "Member 'UWBP_Recollection_BossRush_Result_C::WBP_SeparateLine2_1' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, CurrentBossRushResultIndex) == 0x0004E8, "Member 'UWBP_Recollection_BossRush_Result_C::CurrentBossRushResultIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, OnQuit) == 0x0004F0, "Member 'UWBP_Recollection_BossRush_Result_C::OnQuit' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, RecordData) == 0x000500, "Member 'UWBP_Recollection_BossRush_Result_C::RecordData' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, OnTryAgain) == 0x000508, "Member 'UWBP_Recollection_BossRush_Result_C::OnTryAgain' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, IsNewGamePlusText) == 0x000518, "Member 'UWBP_Recollection_BossRush_Result_C::IsNewGamePlusText' has a wrong offset!");
static_assert(offsetof(UWBP_Recollection_BossRush_Result_C, BossRushDifficultyPresetText) == 0x000528, "Member 'UWBP_Recollection_BossRush_Result_C::BossRushDifficultyPresetText' has a wrong offset!");

}

