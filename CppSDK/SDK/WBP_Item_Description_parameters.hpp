﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Item_Description

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Zion_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Item_Description.WBP_Item_Description_C.Clear
// 0x0018 (0x0018 - 0x0000)
struct WBP_Item_Description_C_Clear final
{
public:
	struct FDataTableRowHandle                    DataHandle;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_Clear) == 0x000008, "Wrong alignment on WBP_Item_Description_C_Clear");
static_assert(sizeof(WBP_Item_Description_C_Clear) == 0x000018, "Wrong size on WBP_Item_Description_C_Clear");
static_assert(offsetof(WBP_Item_Description_C_Clear, DataHandle) == 0x000000, "Member 'WBP_Item_Description_C_Clear::DataHandle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_Clear, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Item_Description_C_Clear::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.ExecuteUbergraph_WBP_Item_Description
// 0x0004 (0x0004 - 0x0000)
struct WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description) == 0x000004, "Wrong alignment on WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description");
static_assert(sizeof(WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description) == 0x000004, "Wrong size on WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description");
static_assert(offsetof(WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description, EntryPoint) == 0x000000, "Member 'WBP_Item_Description_C_ExecuteUbergraph_WBP_Item_Description::EntryPoint' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.Setup
// 0x0180 (0x0180 - 0x0000)
struct WBP_Item_Description_C_Setup final
{
public:
	struct FDataTableRowHandle                    ItemHandle;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FInventoryItemData                     CallFunc_GetInventoryItemData_out_ItemData;        // 0x0010(0x0168)()
	bool                                          CallFunc_GetInventoryItemData_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_Setup) == 0x000008, "Wrong alignment on WBP_Item_Description_C_Setup");
static_assert(sizeof(WBP_Item_Description_C_Setup) == 0x000180, "Wrong size on WBP_Item_Description_C_Setup");
static_assert(offsetof(WBP_Item_Description_C_Setup, ItemHandle) == 0x000000, "Member 'WBP_Item_Description_C_Setup::ItemHandle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_Setup, CallFunc_GetInventoryItemData_out_ItemData) == 0x000010, "Member 'WBP_Item_Description_C_Setup::CallFunc_GetInventoryItemData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_Setup, CallFunc_GetInventoryItemData_ReturnValue) == 0x000178, "Member 'WBP_Item_Description_C_Setup::CallFunc_GetInventoryItemData_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupEquipmentData
// 0x01D0 (0x01D0 - 0x0000)
struct WBP_Item_Description_C_SetupEquipmentData final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FInventoryItemBaseEquipmentData        CallFunc_GetItemBaseEquipmentData_out_ItemData;    // 0x0010(0x01B8)()
	bool                                          CallFunc_GetItemBaseEquipmentData_ReturnValue;     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupEquipmentData) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupEquipmentData");
static_assert(sizeof(WBP_Item_Description_C_SetupEquipmentData) == 0x0001D0, "Wrong size on WBP_Item_Description_C_SetupEquipmentData");
static_assert(offsetof(WBP_Item_Description_C_SetupEquipmentData, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupEquipmentData::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupEquipmentData, CallFunc_GetItemBaseEquipmentData_out_ItemData) == 0x000010, "Member 'WBP_Item_Description_C_SetupEquipmentData::CallFunc_GetItemBaseEquipmentData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupEquipmentData, CallFunc_GetItemBaseEquipmentData_ReturnValue) == 0x0001C8, "Member 'WBP_Item_Description_C_SetupEquipmentData::CallFunc_GetItemBaseEquipmentData_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupPassiveData
// 0x0280 (0x0280 - 0x0000)
struct WBP_Item_Description_C_SetupPassiveData final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FInventoryItemPassiveData              CallFunc_GetItemPassiveData_out_ItemData;          // 0x0010(0x0268)()
	bool                                          CallFunc_GetItemPassiveData_ReturnValue;           // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupPassiveData) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupPassiveData");
static_assert(sizeof(WBP_Item_Description_C_SetupPassiveData) == 0x000280, "Wrong size on WBP_Item_Description_C_SetupPassiveData");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveData, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupPassiveData::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveData, CallFunc_GetItemPassiveData_out_ItemData) == 0x000010, "Member 'WBP_Item_Description_C_SetupPassiveData::CallFunc_GetItemPassiveData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveData, CallFunc_GetItemPassiveData_ReturnValue) == 0x000278, "Member 'WBP_Item_Description_C_SetupPassiveData::CallFunc_GetItemPassiveData_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupPassiveUpgrade
// 0x0428 (0x0428 - 0x0000)
struct WBP_Item_Description_C_SetupPassiveUpgrade final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          bCanBeUpgraded;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0010)(ConstParm)
	struct FInventoryItemData                     CallFunc_GetInventoryItemData_out_ItemData;        // 0x0028(0x0168)()
	bool                                          CallFunc_GetInventoryItemData_ReturnValue;         // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemPassiveData              CallFunc_GetItemPassiveData_out_ItemData;          // 0x0198(0x0268)()
	bool                                          CallFunc_GetItemPassiveData_ReturnValue;           // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRichTextInputElement>          Temp_struct_Variable;                              // 0x0408(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         Temp_string_Variable;                              // 0x0418(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_Item_Description_C_SetupPassiveUpgrade) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupPassiveUpgrade");
static_assert(sizeof(WBP_Item_Description_C_SetupPassiveUpgrade) == 0x000428, "Wrong size on WBP_Item_Description_C_SetupPassiveUpgrade");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, bCanBeUpgraded) == 0x000010, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::bCanBeUpgraded' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, Temp_text_Variable) == 0x000018, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, CallFunc_GetInventoryItemData_out_ItemData) == 0x000028, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::CallFunc_GetInventoryItemData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, CallFunc_GetInventoryItemData_ReturnValue) == 0x000190, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::CallFunc_GetInventoryItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, CallFunc_GetItemPassiveData_out_ItemData) == 0x000198, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::CallFunc_GetItemPassiveData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, CallFunc_GetItemPassiveData_ReturnValue) == 0x000400, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::CallFunc_GetItemPassiveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, Temp_struct_Variable) == 0x000408, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupPassiveUpgrade, Temp_string_Variable) == 0x000418, "Member 'WBP_Item_Description_C_SetupPassiveUpgrade::Temp_string_Variable' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupReinforcementTag
// 0x0010 (0x0010 - 0x0000)
struct WBP_Item_Description_C_SetupReinforcementTag final
{
public:
	bool                                          bUnlocked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanReinforce;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupReinforcementTag) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupReinforcementTag");
static_assert(sizeof(WBP_Item_Description_C_SetupReinforcementTag) == 0x000010, "Wrong size on WBP_Item_Description_C_SetupReinforcementTag");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, bUnlocked) == 0x000000, "Member 'WBP_Item_Description_C_SetupReinforcementTag::bUnlocked' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, bCanReinforce) == 0x000001, "Member 'WBP_Item_Description_C_SetupReinforcementTag::bCanReinforce' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, Temp_byte_Variable) == 0x000002, "Member 'WBP_Item_Description_C_SetupReinforcementTag::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Item_Description_C_SetupReinforcementTag::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, Temp_bool_Variable) == 0x000004, "Member 'WBP_Item_Description_C_SetupReinforcementTag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_Item_Description_C_SetupReinforcementTag::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, K2Node_Select_Default) == 0x000006, "Member 'WBP_Item_Description_C_SetupReinforcementTag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupReinforcementTag, K2Node_Select_Default_1) == 0x000008, "Member 'WBP_Item_Description_C_SetupReinforcementTag::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupSkill
// 0x0478 (0x0478 - 0x0000)
struct WBP_Item_Description_C_SetupSkill final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         Level;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpecialSkill;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemSkillData                CallFunc_GetItemSkillData_out_ItemData;            // 0x0018(0x0288)()
	bool                                          CallFunc_GetItemSkillData_ReturnValue;             // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A2[0x6];                                      // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillLevelData                        CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData; // 0x02A8(0x00E8)()
	bool                                          CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue; // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRichTextInputElement>          K2Node_Select_Default;                             // 0x0398(0x0010)(ReferenceParm)
	class FText                                   K2Node_Select_Default_1;                           // 0x03A8(0x0010)()
	bool                                          Temp_bool_Variable_2;                              // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x03C0(0x0010)()
	bool                                          Temp_bool_Variable_3;                              // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRichTextInputElement>          K2Node_Select_Default_3;                           // 0x03D8(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_4;                              // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillData                             K2Node_Select_Default_4;                           // 0x03F0(0x0058)()
	bool                                          Temp_bool_Variable_5;                              // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_Select_Default_5;                           // 0x0450(0x0010)(ConstParm, ReferenceParm)
	bool                                          Temp_bool_Variable_6;                              // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_Select_Default_6;                           // 0x0468(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_Item_Description_C_SetupSkill) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupSkill");
static_assert(sizeof(WBP_Item_Description_C_SetupSkill) == 0x000478, "Wrong size on WBP_Item_Description_C_SetupSkill");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupSkill::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Level) == 0x000010, "Member 'WBP_Item_Description_C_SetupSkill::Level' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, bSpecialSkill) == 0x000014, "Member 'WBP_Item_Description_C_SetupSkill::bSpecialSkill' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable) == 0x000015, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, CallFunc_GetItemSkillData_out_ItemData) == 0x000018, "Member 'WBP_Item_Description_C_SetupSkill::CallFunc_GetItemSkillData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, CallFunc_GetItemSkillData_ReturnValue) == 0x0002A0, "Member 'WBP_Item_Description_C_SetupSkill::CallFunc_GetItemSkillData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_1) == 0x0002A1, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData) == 0x0002A8, "Member 'WBP_Item_Description_C_SetupSkill::CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue) == 0x000390, "Member 'WBP_Item_Description_C_SetupSkill::CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default) == 0x000398, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_1) == 0x0003A8, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_2) == 0x0003B8, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_2) == 0x0003C0, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_3) == 0x0003D0, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_3) == 0x0003D8, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_4) == 0x0003E8, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_4) == 0x0003F0, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_5) == 0x000448, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_5) == 0x000450, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, Temp_bool_Variable_6) == 0x000460, "Member 'WBP_Item_Description_C_SetupSkill::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkill, K2Node_Select_Default_6) == 0x000468, "Member 'WBP_Item_Description_C_SetupSkill::K2Node_Select_Default_6' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupSkillUnlock
// 0x0018 (0x0018 - 0x0000)
struct WBP_Item_Description_C_SetupSkillUnlock final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         Level;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpecialSkill;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupSkillUnlock) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupSkillUnlock");
static_assert(sizeof(WBP_Item_Description_C_SetupSkillUnlock) == 0x000018, "Wrong size on WBP_Item_Description_C_SetupSkillUnlock");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUnlock, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupSkillUnlock::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUnlock, Level) == 0x000010, "Member 'WBP_Item_Description_C_SetupSkillUnlock::Level' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUnlock, bSpecialSkill) == 0x000014, "Member 'WBP_Item_Description_C_SetupSkillUnlock::bSpecialSkill' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupSkillUpgrade
// 0x0548 (0x0548 - 0x0000)
struct WBP_Item_Description_C_SetupSkillUpgrade final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         Level;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextLevel;                                         // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpecialSkill;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemSkillData                CallFunc_GetItemSkillData_out_ItemData;            // 0x0020(0x0288)()
	bool                                          CallFunc_GetItemSkillData_ReturnValue;             // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AA[0x6];                                      // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillLevelData                        CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData; // 0x02B0(0x00E8)()
	bool                                          CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue; // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillLevelData                        CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData_1; // 0x03A0(0x00E8)()
	bool                                          CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue_1; // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489[0x7];                                      // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillData                             K2Node_Select_Default;                             // 0x0490(0x0058)()
	bool                                          Temp_bool_Variable_1;                              // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9[0x7];                                      // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillData                             K2Node_Select_Default_1;                           // 0x04F0(0x0058)()
};
static_assert(alignof(WBP_Item_Description_C_SetupSkillUpgrade) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupSkillUpgrade");
static_assert(sizeof(WBP_Item_Description_C_SetupSkillUpgrade) == 0x000548, "Wrong size on WBP_Item_Description_C_SetupSkillUpgrade");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, Level) == 0x000010, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::Level' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, NextLevel) == 0x000014, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::NextLevel' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, bSpecialSkill) == 0x000018, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::bSpecialSkill' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetItemSkillData_out_ItemData) == 0x000020, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetItemSkillData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetItemSkillData_ReturnValue) == 0x0002A8, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetItemSkillData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, Temp_bool_Variable) == 0x0002A9, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData) == 0x0002B0, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue) == 0x000398, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData_1) == 0x0003A0, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetSkillLevelDataFromItemSkillData_out_SkillData_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue_1) == 0x000488, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::CallFunc_GetSkillLevelDataFromItemSkillData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, K2Node_Select_Default) == 0x000490, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, Temp_bool_Variable_1) == 0x0004E8, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupSkillUpgrade, K2Node_Select_Default_1) == 0x0004F0, "Member 'WBP_Item_Description_C_SetupSkillUpgrade::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupTip
// 0x0180 (0x0180 - 0x0000)
struct WBP_Item_Description_C_SetupTip final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FInventoryItemData                     CallFunc_GetInventoryItemData_out_ItemData;        // 0x0010(0x0168)()
	bool                                          CallFunc_GetInventoryItemData_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupTip) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupTip");
static_assert(sizeof(WBP_Item_Description_C_SetupTip) == 0x000180, "Wrong size on WBP_Item_Description_C_SetupTip");
static_assert(offsetof(WBP_Item_Description_C_SetupTip, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupTip::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTip, CallFunc_GetInventoryItemData_out_ItemData) == 0x000010, "Member 'WBP_Item_Description_C_SetupTip::CallFunc_GetInventoryItemData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTip, CallFunc_GetInventoryItemData_ReturnValue) == 0x000178, "Member 'WBP_Item_Description_C_SetupTip::CallFunc_GetInventoryItemData_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupTutorial
// 0x0318 (0x0318 - 0x0000)
struct WBP_Item_Description_C_SetupTutorial final
{
public:
	struct FDataTableRowHandle                    Handle;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FInventoryItemData                     CallFunc_GetInventoryItemData_out_ItemData;        // 0x0010(0x0168)()
	bool                                          CallFunc_GetInventoryItemData_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemTutorialData             CallFunc_GetItemTutorialData_out_ItemData;         // 0x0180(0x0190)()
	bool                                          CallFunc_GetItemTutorialData_ReturnValue;          // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Item_Description_C_SetupTutorial) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupTutorial");
static_assert(sizeof(WBP_Item_Description_C_SetupTutorial) == 0x000318, "Wrong size on WBP_Item_Description_C_SetupTutorial");
static_assert(offsetof(WBP_Item_Description_C_SetupTutorial, Handle) == 0x000000, "Member 'WBP_Item_Description_C_SetupTutorial::Handle' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTutorial, CallFunc_GetInventoryItemData_out_ItemData) == 0x000010, "Member 'WBP_Item_Description_C_SetupTutorial::CallFunc_GetInventoryItemData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTutorial, CallFunc_GetInventoryItemData_ReturnValue) == 0x000178, "Member 'WBP_Item_Description_C_SetupTutorial::CallFunc_GetInventoryItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTutorial, CallFunc_GetItemTutorialData_out_ItemData) == 0x000180, "Member 'WBP_Item_Description_C_SetupTutorial::CallFunc_GetItemTutorialData_out_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Item_Description_C_SetupTutorial, CallFunc_GetItemTutorialData_ReturnValue) == 0x000310, "Member 'WBP_Item_Description_C_SetupTutorial::CallFunc_GetItemTutorialData_ReturnValue' has a wrong offset!");

// Function WBP_Item_Description.WBP_Item_Description_C.SetupTexts
// 0x0168 (0x0168 - 0x0000)
struct WBP_Item_Description_C_SetupTexts final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0168)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Item_Description_C_SetupTexts) == 0x000008, "Wrong alignment on WBP_Item_Description_C_SetupTexts");
static_assert(sizeof(WBP_Item_Description_C_SetupTexts) == 0x000168, "Wrong size on WBP_Item_Description_C_SetupTexts");
static_assert(offsetof(WBP_Item_Description_C_SetupTexts, InventoryItemData) == 0x000000, "Member 'WBP_Item_Description_C_SetupTexts::InventoryItemData' has a wrong offset!");

}

