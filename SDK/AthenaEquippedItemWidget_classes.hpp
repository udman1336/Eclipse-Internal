#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquippedItemWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEquippedItemWidget.AthenaEquippedItemWidget_C
// 0x0068 (0x02D8 - 0x0270)
class UAthenaEquippedItemWidget_C final : public UAthenaEquippedItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 AmmoIcon;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MagazineAmmoCount;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OutOfAmmo;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ResourceCount;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ResourceIcon;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Split1;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StandAloneAmmoCount;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SurplusAmmoCount;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherContent;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UtilityItemImage;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           OutOfAmmoColor;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint);
	void UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item);
	void UtilityItemCountChanged(int32 Remaining);
	void AmmoChanged(int32 MagazineAmmoCount_0, int32 BackupAmmoCount, int32 TotalRemaining);
	void HasAmmoChanged(bool bHasAmmo);
	void WeaponTypeChanged(EEquippedWeaponDisplay Mode);
	void ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount_0);
	void AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item);
	void ResourceCountChanged(int32 ResourceCount_0);
	void UpdateWidgetColor(bool HasAmmo);

	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText) const;
	void GetRemainingAmmoText(int32 RemainingAmmoCount, class FText* CurrentAmmoText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEquippedItemWidget_C">();
	}
	static class UAthenaEquippedItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquippedItemWidget_C>();
	}
};
static_assert(alignof(UAthenaEquippedItemWidget_C) == 0x000008, "Wrong alignment on UAthenaEquippedItemWidget_C");
static_assert(sizeof(UAthenaEquippedItemWidget_C) == 0x0002D8, "Wrong size on UAthenaEquippedItemWidget_C");
static_assert(offsetof(UAthenaEquippedItemWidget_C, UberGraphFrame) == 0x000270, "Member 'UAthenaEquippedItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, AmmoIcon) == 0x000278, "Member 'UAthenaEquippedItemWidget_C::AmmoIcon' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, MagazineAmmoCount) == 0x000280, "Member 'UAthenaEquippedItemWidget_C::MagazineAmmoCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, OutOfAmmo) == 0x000288, "Member 'UAthenaEquippedItemWidget_C::OutOfAmmo' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, ResourceCount) == 0x000290, "Member 'UAthenaEquippedItemWidget_C::ResourceCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, ResourceIcon) == 0x000298, "Member 'UAthenaEquippedItemWidget_C::ResourceIcon' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, Split1) == 0x0002A0, "Member 'UAthenaEquippedItemWidget_C::Split1' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, StandAloneAmmoCount) == 0x0002A8, "Member 'UAthenaEquippedItemWidget_C::StandAloneAmmoCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SurplusAmmoCount) == 0x0002B0, "Member 'UAthenaEquippedItemWidget_C::SurplusAmmoCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SwitcherContent) == 0x0002B8, "Member 'UAthenaEquippedItemWidget_C::SwitcherContent' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, UtilityItemImage) == 0x0002C0, "Member 'UAthenaEquippedItemWidget_C::UtilityItemImage' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, OutOfAmmoColor) == 0x0002C8, "Member 'UAthenaEquippedItemWidget_C::OutOfAmmoColor' has a wrong offset!");

}
