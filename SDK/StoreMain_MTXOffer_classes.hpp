#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_MTXOffer

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
// 0x00A0 (0x0950 - 0x08B0)
class UStoreMain_MTXOffer_C final : public UFortMtxStoreOfferBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Embiggen;                                          // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       HighlightGlow_Founders;                            // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       HighlightGlow_VBuck;                               // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       GradientFade;                                      // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseColor;                                         // 0x08E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BonusCurrencySB;                                   // 0x08E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderAll;                                         // 0x08F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BaseQuantity;                           // 0x08F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BonusQuantity;                          // 0x0900(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyArt;                                            // 0x0908(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayGradient;                                   // 0x0910(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySalePrice;                                  // 0x0918(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpotHighlight;                                     // 0x0920(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice;                             // 0x0928(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferName;                                     // 0x0930(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice;                                 // 0x0938(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   AboutToShowDetails;                                // 0x0940(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint);
	void OnUnhovered();
	void OnHovered();
	void OnClick(class UCommonButton* Button);
	void Construct();
	void InitOffer();
	void ShowDetails();
	void InitialReset();
	void TriggerIntro();
	void TriggerReset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_MTXOffer_C">();
	}
	static class UStoreMain_MTXOffer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_MTXOffer_C>();
	}
};
static_assert(alignof(UStoreMain_MTXOffer_C) == 0x000008, "Wrong alignment on UStoreMain_MTXOffer_C");
static_assert(sizeof(UStoreMain_MTXOffer_C) == 0x000950, "Wrong size on UStoreMain_MTXOffer_C");
static_assert(offsetof(UStoreMain_MTXOffer_C, UberGraphFrame) == 0x0008B0, "Member 'UStoreMain_MTXOffer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Intro) == 0x0008B8, "Member 'UStoreMain_MTXOffer_C::Intro' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Embiggen) == 0x0008C0, "Member 'UStoreMain_MTXOffer_C::Embiggen' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, HighlightGlow_Founders) == 0x0008C8, "Member 'UStoreMain_MTXOffer_C::HighlightGlow_Founders' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, HighlightGlow_VBuck) == 0x0008D0, "Member 'UStoreMain_MTXOffer_C::HighlightGlow_VBuck' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, GradientFade) == 0x0008D8, "Member 'UStoreMain_MTXOffer_C::GradientFade' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BaseColor) == 0x0008E0, "Member 'UStoreMain_MTXOffer_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BonusCurrencySB) == 0x0008E8, "Member 'UStoreMain_MTXOffer_C::BonusCurrencySB' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BorderAll) == 0x0008F0, "Member 'UStoreMain_MTXOffer_C::BorderAll' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, CommonText_BaseQuantity) == 0x0008F8, "Member 'UStoreMain_MTXOffer_C::CommonText_BaseQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, CommonText_BonusQuantity) == 0x000900, "Member 'UStoreMain_MTXOffer_C::CommonText_BonusQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, KeyArt) == 0x000908, "Member 'UStoreMain_MTXOffer_C::KeyArt' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, OverlayGradient) == 0x000910, "Member 'UStoreMain_MTXOffer_C::OverlayGradient' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, OverlaySalePrice) == 0x000918, "Member 'UStoreMain_MTXOffer_C::OverlaySalePrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, SpotHighlight) == 0x000920, "Member 'UStoreMain_MTXOffer_C::SpotHighlight' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOfferDisplayPrice) == 0x000928, "Member 'UStoreMain_MTXOffer_C::TextOfferDisplayPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOfferName) == 0x000930, "Member 'UStoreMain_MTXOffer_C::TextOfferName' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOriginalPrice) == 0x000938, "Member 'UStoreMain_MTXOffer_C::TextOriginalPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, AboutToShowDetails) == 0x000940, "Member 'UStoreMain_MTXOffer_C::AboutToShowDetails' has a wrong offset!");

}
