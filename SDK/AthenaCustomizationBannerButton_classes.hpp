#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationBannerButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C
// 0x0018 (0x0820 - 0x0808)
class UAthenaCustomizationBannerButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0808(0x0008)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0810(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0818(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaCustomizationBannerButton(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationBannerButton_C">();
	}
	static class UAthenaCustomizationBannerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationBannerButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationBannerButton_C) == 0x000008, "Wrong alignment on UAthenaCustomizationBannerButton_C");
static_assert(sizeof(UAthenaCustomizationBannerButton_C) == 0x000820, "Wrong size on UAthenaCustomizationBannerButton_C");
static_assert(offsetof(UAthenaCustomizationBannerButton_C, UberGraphFrame) == 0x000808, "Member 'UAthenaCustomizationBannerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationBannerButton_C, NormalBangWrapper) == 0x000810, "Member 'UAthenaCustomizationBannerButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationBannerButton_C, PlayerBanner) == 0x000818, "Member 'UAthenaCustomizationBannerButton_C::PlayerBanner' has a wrong offset!");

}
