#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOffer_SpecialBanner

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C
// 0x00B0 (0x02C0 - 0x0210)
class UAthenaDirectAcquisitionOffer_SpecialBanner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          Border_SaleInfo;                                   // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_BattlePassStarsSupplemental;                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BattleStarSupplemental;                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_BattleStarInfoSupplemental;                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_SaleInfo;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Main;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowBanner;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasBattlePassStars;                               // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24A[0x6];                                      // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SalesInfoText;                                     // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NumOfBattlePassStars;                              // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FText>              BannerOverrides;                                   // 0x0270(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner(int32 EntryPoint);
	void SetupSpecialOfferBanner(bool bHasSale, const class FText& SaleText, const class FString& BannerOverrideTag, bool bHasBattlePassStars_0, int32 iNumOfBattlePassStars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOffer_SpecialBanner_C">();
	}
	static class UAthenaDirectAcquisitionOffer_SpecialBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOffer_SpecialBanner_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionOffer_SpecialBanner_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionOffer_SpecialBanner_C");
static_assert(sizeof(UAthenaDirectAcquisitionOffer_SpecialBanner_C) == 0x0002C0, "Wrong size on UAthenaDirectAcquisitionOffer_SpecialBanner_C");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, UberGraphFrame) == 0x000210, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, Border_SaleInfo) == 0x000218, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::Border_SaleInfo' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, HB_BattlePassStarsSupplemental) == 0x000220, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::HB_BattlePassStarsSupplemental' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, Image_BattleStarSupplemental) == 0x000228, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::Image_BattleStarSupplemental' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, T_BattleStarInfoSupplemental) == 0x000230, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::T_BattleStarInfoSupplemental' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, T_SaleInfo) == 0x000238, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::T_SaleInfo' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, WidgetSwitcher_Main) == 0x000240, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::WidgetSwitcher_Main' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, bShowBanner) == 0x000248, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::bShowBanner' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, bHasBattlePassStars) == 0x000249, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::bHasBattlePassStars' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, SalesInfoText) == 0x000250, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::SalesInfoText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, NumOfBattlePassStars) == 0x000268, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::NumOfBattlePassStars' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOffer_SpecialBanner_C, BannerOverrides) == 0x000270, "Member 'UAthenaDirectAcquisitionOffer_SpecialBanner_C::BannerOverrides' has a wrong offset!");

}
