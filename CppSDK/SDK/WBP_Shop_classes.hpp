﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Shop

#include "Basic.hpp"

#include "Zion_structs.hpp"
#include "Zion_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Shop.WBP_Shop_C
// 0x02B0 (0x0710 - 0x0460)
class UWBP_Shop_C final : public UUserWidgetZion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hide;                                              // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 base;                                              // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Effect;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_LeftGradation;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Line;                                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_RightGradation;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_TopGradation;                                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FilterName;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FilterName_1;                                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FilterName_2;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HedderBox;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               HeldCountContainer;                                // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeldCountText;                                     // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              Left;                                              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*              Right;                                             // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ShopEntryContainer;                                // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               TabHolder;                                         // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleSeparator;                                    // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleSeparator_1;                                  // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_All;                                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Armor;                              // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Assist;                             // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Materials;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Passives;                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Shield;                             // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                      WBP_Button_Tab_Stats;                              // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Currency_C*                        WBP_Currency;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Footer_C*                          WBP_Footer;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Item_Description_C*                WBP_Item_Description;                              // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Scrollbox_C*                       WBP_Scrollbox;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shop_Comparator_C*                 WBP_Shop_Comparator;                               // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EShopType                                     ShopType;                                          // 0x0578(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_579[0x7];                                      // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             ShopDataTable;                                     // 0x0580(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<int32, EInventoryItemType>               TabIndexForItemTypes;                              // 0x0588(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	int32                                         TabIndexForEquipmentDefault;                       // 0x05D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabIndexForEquipmentExtra;                         // 0x05DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Shop_Entry_C*>              Entries;                                           // 0x05E0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	TArray<class UWBP_Button_Tab_C*>              Tabs;                                              // 0x05F0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	int32                                         CurrPageIndex;                                     // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_604[0x4];                                      // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFooterData                            FooterEntry_Buy;                                   // 0x0608(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFooterData                            FooterEntry_CompareEquip;                          // 0x0660(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bAllowCompare;                                     // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bDisplayCompare;                                   // 0x06B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_6BA[0x6];                                      // 0x06BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             SE_OpenShop;                                       // 0x06C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_Tab;                                            // 0x06C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_BuyConfirm;                                     // 0x06D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_BuySuccess;                                     // 0x06D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_BuyFailure;                                     // 0x06E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             SE_ToggleComparator;                               // 0x06E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Shop_Entry_C*                      BuyingEntry;                                       // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameMenu_C*                        gamemenu;                                          // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         DefaultMenuPageIndex;                              // 0x0700(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_704[0x4];                                      // 0x0704(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             SE_OpenMenu;                                       // 0x0708(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BuyItem(class UWBP_Shop_Entry_C* ShopEntry);
	void CanBuyItemShop(class UWBP_Shop_Entry_C* ShopEntry, bool* bCanBuy);
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_Shop(int32 EntryPoint);
	void GenerateShopEntries();
	void GoToPageIndex(int32 PageIndex);
	void OnEmptyStock();
	void OnFastTravel();
	void OnFinish_968C9A5A43D6A0220EDC72B9CEB633A6();
	void OnFinish_DEBD088F4DA9EB9006458EAB158C28F7();
	void OnFocusedShopEntry(class UWBP_Shop_Entry_C* ShopEntry);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnItemBought();
	void OnNoShopEntryFocus();
	void OnNotEnoughCurrency();
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressContextAlt(const struct FKeyEvent& KeyEvent);
	void OnPressedShopEntry(const struct FKeyEvent& KeyEvent, class UWBP_Shop_Entry_C* ShopEntry);
	struct FEventReply OnPressNext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressPrevious(const struct FKeyEvent& KeyEvent);
	void OnTabPressed(const struct FKeyEvent& KeyEvent, class UWBP_Button_Tab_C* PressedButtonTab);
	void RefreshAllowCompare(class UWBP_Shop_Entry_C* ShopEntry);
	void RefreshCurrency(class UWBP_Shop_Entry_C* Target);
	void RefreshFilterName();
	void SetupComparator(const struct FDataTableRowHandle& ItemHandle);
	void SetupFooterForShopEntry(class UWBP_Shop_Entry_C* ShopEntry);
	void SetupHeldCount(class UWBP_Shop_Entry_C* ShopEntry);
	void SetupTabs();
	bool ShouldDisplayShopEntry(class UWBP_Shop_Entry_C* ShopEntry, int32 PageIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Shop_C">();
	}
	static class UWBP_Shop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Shop_C>();
	}
};
static_assert(alignof(UWBP_Shop_C) == 0x000008, "Wrong alignment on UWBP_Shop_C");
static_assert(sizeof(UWBP_Shop_C) == 0x000710, "Wrong size on UWBP_Shop_C");
static_assert(offsetof(UWBP_Shop_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Shop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Hide) == 0x000468, "Member 'UWBP_Shop_C::Hide' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Show) == 0x000470, "Member 'UWBP_Shop_C::Show' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, base) == 0x000478, "Member 'UWBP_Shop_C::base' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BG_Effect) == 0x000480, "Member 'UWBP_Shop_C::BG_Effect' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BG_LeftGradation) == 0x000488, "Member 'UWBP_Shop_C::BG_LeftGradation' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BG_Line) == 0x000490, "Member 'UWBP_Shop_C::BG_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BG_RightGradation) == 0x000498, "Member 'UWBP_Shop_C::BG_RightGradation' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BG_TopGradation) == 0x0004A0, "Member 'UWBP_Shop_C::BG_TopGradation' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, FilterName) == 0x0004A8, "Member 'UWBP_Shop_C::FilterName' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, FilterName_1) == 0x0004B0, "Member 'UWBP_Shop_C::FilterName_1' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, FilterName_2) == 0x0004B8, "Member 'UWBP_Shop_C::FilterName_2' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, HedderBox) == 0x0004C0, "Member 'UWBP_Shop_C::HedderBox' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, HeldCountContainer) == 0x0004C8, "Member 'UWBP_Shop_C::HeldCountContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, HeldCountText) == 0x0004D0, "Member 'UWBP_Shop_C::HeldCountText' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Image) == 0x0004D8, "Member 'UWBP_Shop_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Image_0) == 0x0004E0, "Member 'UWBP_Shop_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Left) == 0x0004E8, "Member 'UWBP_Shop_C::Left' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Right) == 0x0004F0, "Member 'UWBP_Shop_C::Right' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, ShopEntryContainer) == 0x0004F8, "Member 'UWBP_Shop_C::ShopEntryContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TabHolder) == 0x000500, "Member 'UWBP_Shop_C::TabHolder' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TitleSeparator) == 0x000508, "Member 'UWBP_Shop_C::TitleSeparator' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TitleSeparator_1) == 0x000510, "Member 'UWBP_Shop_C::TitleSeparator_1' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_All) == 0x000518, "Member 'UWBP_Shop_C::WBP_Button_Tab_All' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Armor) == 0x000520, "Member 'UWBP_Shop_C::WBP_Button_Tab_Armor' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Assist) == 0x000528, "Member 'UWBP_Shop_C::WBP_Button_Tab_Assist' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Materials) == 0x000530, "Member 'UWBP_Shop_C::WBP_Button_Tab_Materials' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Passives) == 0x000538, "Member 'UWBP_Shop_C::WBP_Button_Tab_Passives' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Shield) == 0x000540, "Member 'UWBP_Shop_C::WBP_Button_Tab_Shield' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Button_Tab_Stats) == 0x000548, "Member 'UWBP_Shop_C::WBP_Button_Tab_Stats' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Currency) == 0x000550, "Member 'UWBP_Shop_C::WBP_Currency' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Footer) == 0x000558, "Member 'UWBP_Shop_C::WBP_Footer' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Item_Description) == 0x000560, "Member 'UWBP_Shop_C::WBP_Item_Description' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Scrollbox) == 0x000568, "Member 'UWBP_Shop_C::WBP_Scrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, WBP_Shop_Comparator) == 0x000570, "Member 'UWBP_Shop_C::WBP_Shop_Comparator' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, ShopType) == 0x000578, "Member 'UWBP_Shop_C::ShopType' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, ShopDataTable) == 0x000580, "Member 'UWBP_Shop_C::ShopDataTable' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TabIndexForItemTypes) == 0x000588, "Member 'UWBP_Shop_C::TabIndexForItemTypes' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TabIndexForEquipmentDefault) == 0x0005D8, "Member 'UWBP_Shop_C::TabIndexForEquipmentDefault' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, TabIndexForEquipmentExtra) == 0x0005DC, "Member 'UWBP_Shop_C::TabIndexForEquipmentExtra' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Entries) == 0x0005E0, "Member 'UWBP_Shop_C::Entries' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, Tabs) == 0x0005F0, "Member 'UWBP_Shop_C::Tabs' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, CurrPageIndex) == 0x000600, "Member 'UWBP_Shop_C::CurrPageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, FooterEntry_Buy) == 0x000608, "Member 'UWBP_Shop_C::FooterEntry_Buy' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, FooterEntry_CompareEquip) == 0x000660, "Member 'UWBP_Shop_C::FooterEntry_CompareEquip' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, bAllowCompare) == 0x0006B8, "Member 'UWBP_Shop_C::bAllowCompare' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, bDisplayCompare) == 0x0006B9, "Member 'UWBP_Shop_C::bDisplayCompare' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_OpenShop) == 0x0006C0, "Member 'UWBP_Shop_C::SE_OpenShop' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_Tab) == 0x0006C8, "Member 'UWBP_Shop_C::SE_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_BuyConfirm) == 0x0006D0, "Member 'UWBP_Shop_C::SE_BuyConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_BuySuccess) == 0x0006D8, "Member 'UWBP_Shop_C::SE_BuySuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_BuyFailure) == 0x0006E0, "Member 'UWBP_Shop_C::SE_BuyFailure' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_ToggleComparator) == 0x0006E8, "Member 'UWBP_Shop_C::SE_ToggleComparator' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, BuyingEntry) == 0x0006F0, "Member 'UWBP_Shop_C::BuyingEntry' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, gamemenu) == 0x0006F8, "Member 'UWBP_Shop_C::gamemenu' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, DefaultMenuPageIndex) == 0x000700, "Member 'UWBP_Shop_C::DefaultMenuPageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Shop_C, SE_OpenMenu) == 0x000708, "Member 'UWBP_Shop_C::SE_OpenMenu' has a wrong offset!");

}

