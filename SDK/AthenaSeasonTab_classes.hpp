#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonTab

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSeasonTab.AthenaSeasonTab_C
// 0x0140 (0x0600 - 0x04C0)
class UAthenaSeasonTab_C final : public USeasonPassScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(Transient, DuplicateTransient)
	class UAthenaSeasonBPTrackerWidget_C*         AthenaSeasonBPTrackerWidget;                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundGradient;                                // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_SaleInfo;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrentPageNumber;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemName;                                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemType;                                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  LevelPageWidgetSwitcher;                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MainViewItemInfoOverlay;                           // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainViewItemInfoVB;                                // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OutOfSeasonSwitcher;                               // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         PageLeftBtn;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         PageRightBtn;                                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PassCompleted;                                     // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PassNotOwned;                                      // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PassOwned;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PurchaseBattlePassText;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseLevelBtn;                                  // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PurchaseLevelDescription;                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseSeasonBtn;                                 // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityGlow;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rule;                                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*               SeasonCountdown;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonHeadingTextLabel;                            // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonNameSmall;                                   // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SeasonPassOwnedSwitcher;                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ShortDescription;                                  // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                        SwipePanel;                                        // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_ExclusiveText;                                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TotalPageNumber;                                   // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSeasonPageWidget_C*              CurrentPage;                                       // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        SeasonCatalogOffer;                                // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoNotNavigateToFirstLevel;                         // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1[0x7];                                      // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    Input_ShowHelp;                                    // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Input_Purchase;                                    // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	ECommonSwitcherTransition                     OriginalSwitcherTransitionType;                    // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETransitionCurve                              OriginalSwitcherTransitionCurve;                   // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA[0x2];                                      // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OriginalSwitcherTransitionDuration;                // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CurrentInputType;                                  // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1[0x3];                                      // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxTranslationAmount;                              // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TouchTranslationPercent;                           // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TranslationDecayRate;                              // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSeasonTab(int32 EntryPoint);
	void OnNoCurrentSeason();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnFAQStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason);
	void SetupInput();
	void UpdateStoreHasStarsNotification(bool bShowNotification);
	void ScrollNegative();
	void ScrollPositive();
	void NoOffersAvailable();
	void BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandlePageRight();
	void HandlePageLeft();
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnLevelsGenerated();
	void BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSeasonPassChanged();
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData);
	void OnOffersGenerated();
	void OnStartReadingOffers();
	void OnNavigateToLevel(int32 Level);
	void OnDeactivated();
	void OnActivated();
	void Construct();
	TArray<class USeasonPassLevelWidget*> GenerateLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo);
	void SelectPageByLevel(int32 TargetLevel);
	void SetupViewedItemData(class UFortItem* Item);
	void UpdateSeasonPurchaseState();
	void UpdatePageCount();
	void SetupViewedItemName(class UFortItem* Item);
	void Handle_ShowFAQ(bool* Passthrough);
	void Handle_GiftBattlePass(bool* Passthrough);
	void OpenPurchaseScreen();
	void OnUpdateInputType(ECommonInputType NewInputType);
	void UpdateLevelPageWidgetSwitcherTranslation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonTab_C">();
	}
	static class UAthenaSeasonTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonTab_C>();
	}
};
static_assert(alignof(UAthenaSeasonTab_C) == 0x000008, "Wrong alignment on UAthenaSeasonTab_C");
static_assert(sizeof(UAthenaSeasonTab_C) == 0x000600, "Wrong size on UAthenaSeasonTab_C");
static_assert(offsetof(UAthenaSeasonTab_C, UberGraphFrame) == 0x0004C0, "Member 'UAthenaSeasonTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, AthenaSeasonBPTrackerWidget) == 0x0004C8, "Member 'UAthenaSeasonTab_C::AthenaSeasonBPTrackerWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, BackgroundGradient) == 0x0004D0, "Member 'UAthenaSeasonTab_C::BackgroundGradient' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, Border_SaleInfo) == 0x0004D8, "Member 'UAthenaSeasonTab_C::Border_SaleInfo' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, CurrentPageNumber) == 0x0004E0, "Member 'UAthenaSeasonTab_C::CurrentPageNumber' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, ItemName) == 0x0004E8, "Member 'UAthenaSeasonTab_C::ItemName' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, ItemType) == 0x0004F0, "Member 'UAthenaSeasonTab_C::ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, LevelPageWidgetSwitcher) == 0x0004F8, "Member 'UAthenaSeasonTab_C::LevelPageWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, MainViewItemInfoOverlay) == 0x000500, "Member 'UAthenaSeasonTab_C::MainViewItemInfoOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, MainViewItemInfoVB) == 0x000508, "Member 'UAthenaSeasonTab_C::MainViewItemInfoVB' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, OutOfSeasonSwitcher) == 0x000510, "Member 'UAthenaSeasonTab_C::OutOfSeasonSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PageLeftBtn) == 0x000518, "Member 'UAthenaSeasonTab_C::PageLeftBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PageRightBtn) == 0x000520, "Member 'UAthenaSeasonTab_C::PageRightBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PassCompleted) == 0x000528, "Member 'UAthenaSeasonTab_C::PassCompleted' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PassNotOwned) == 0x000530, "Member 'UAthenaSeasonTab_C::PassNotOwned' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PassOwned) == 0x000538, "Member 'UAthenaSeasonTab_C::PassOwned' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PurchaseBattlePassText) == 0x000540, "Member 'UAthenaSeasonTab_C::PurchaseBattlePassText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PurchaseLevelBtn) == 0x000548, "Member 'UAthenaSeasonTab_C::PurchaseLevelBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PurchaseLevelDescription) == 0x000550, "Member 'UAthenaSeasonTab_C::PurchaseLevelDescription' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, PurchaseSeasonBtn) == 0x000558, "Member 'UAthenaSeasonTab_C::PurchaseSeasonBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, RarityGlow) == 0x000560, "Member 'UAthenaSeasonTab_C::RarityGlow' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, Rule) == 0x000568, "Member 'UAthenaSeasonTab_C::Rule' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SeasonCountdown) == 0x000570, "Member 'UAthenaSeasonTab_C::SeasonCountdown' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SeasonHeadingTextLabel) == 0x000578, "Member 'UAthenaSeasonTab_C::SeasonHeadingTextLabel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SeasonNameSmall) == 0x000580, "Member 'UAthenaSeasonTab_C::SeasonNameSmall' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SeasonPassOwnedSwitcher) == 0x000588, "Member 'UAthenaSeasonTab_C::SeasonPassOwnedSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, ShortDescription) == 0x000590, "Member 'UAthenaSeasonTab_C::ShortDescription' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SwipePanel) == 0x000598, "Member 'UAthenaSeasonTab_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, T_ExclusiveText) == 0x0005A0, "Member 'UAthenaSeasonTab_C::T_ExclusiveText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, TotalPageNumber) == 0x0005A8, "Member 'UAthenaSeasonTab_C::TotalPageNumber' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, CurrentPage) == 0x0005B0, "Member 'UAthenaSeasonTab_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, SeasonCatalogOffer) == 0x0005B8, "Member 'UAthenaSeasonTab_C::SeasonCatalogOffer' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, DoNotNavigateToFirstLevel) == 0x0005C0, "Member 'UAthenaSeasonTab_C::DoNotNavigateToFirstLevel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, Input_ShowHelp) == 0x0005C8, "Member 'UAthenaSeasonTab_C::Input_ShowHelp' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, Input_Purchase) == 0x0005D8, "Member 'UAthenaSeasonTab_C::Input_Purchase' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, OriginalSwitcherTransitionType) == 0x0005E8, "Member 'UAthenaSeasonTab_C::OriginalSwitcherTransitionType' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, OriginalSwitcherTransitionCurve) == 0x0005E9, "Member 'UAthenaSeasonTab_C::OriginalSwitcherTransitionCurve' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, OriginalSwitcherTransitionDuration) == 0x0005EC, "Member 'UAthenaSeasonTab_C::OriginalSwitcherTransitionDuration' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, CurrentInputType) == 0x0005F0, "Member 'UAthenaSeasonTab_C::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, MaxTranslationAmount) == 0x0005F4, "Member 'UAthenaSeasonTab_C::MaxTranslationAmount' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, TouchTranslationPercent) == 0x0005F8, "Member 'UAthenaSeasonTab_C::TouchTranslationPercent' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonTab_C, TranslationDecayRate) == 0x0005FC, "Member 'UAthenaSeasonTab_C::TranslationDecayRate' has a wrong offset!");

}

