#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTabButtonReplay

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconTabButtonReplay.IconTabButtonReplay_C
// 0x0180 (0x0988 - 0x0808)
class UIconTabButtonReplay_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0808(0x0008)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                   BangWrapper;                                       // 0x0810(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0818(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ContentHB;                                         // 0x0820(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DisabledImage;                                     // 0x0828(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxShell;                                      // 0x0838(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0840(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0858(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UseText;                                           // 0x08E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E1[0x3];                                      // 0x08E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SelectedIconTint;                                  // 0x08E4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedIconTint;                                // 0x08F4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredIconTint;                                   // 0x0904(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DisabledIconTint;                                  // 0x0914(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBangEnabled;                                      // 0x0924(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ChangeIconColorWhenSelected;                       // 0x0925(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_926[0x2];                                      // 0x0926(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            SelectedIconColor;                                 // 0x0928(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UnSelectedIconColor;                               // 0x0950(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             CameraButtonHoverSound;                            // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CameraButtonSelectSound;                           // 0x0980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IconTabButtonReplay(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void OnDisabled();
	void OnEnabled();
	void OnUnhovered();
	void OnHovered();
	void Construct();
	void OnDeselected();
	void OnSelected();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void Set_Text(const class FText& ButtonText_0);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void ShowText();
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Bang_State(bool bBangEnabled_0);
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconTabButtonReplay_C">();
	}
	static class UIconTabButtonReplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTabButtonReplay_C>();
	}
};
static_assert(alignof(UIconTabButtonReplay_C) == 0x000008, "Wrong alignment on UIconTabButtonReplay_C");
static_assert(sizeof(UIconTabButtonReplay_C) == 0x000988, "Wrong size on UIconTabButtonReplay_C");
static_assert(offsetof(UIconTabButtonReplay_C, UberGraphFrame) == 0x000808, "Member 'UIconTabButtonReplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, BangWrapper) == 0x000810, "Member 'UIconTabButtonReplay_C::BangWrapper' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, CenterButtonTextWidget) == 0x000818, "Member 'UIconTabButtonReplay_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, ContentHB) == 0x000820, "Member 'UIconTabButtonReplay_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, DisabledImage) == 0x000828, "Member 'UIconTabButtonReplay_C::DisabledImage' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, LeftSideImage) == 0x000830, "Member 'UIconTabButtonReplay_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, SizeBoxShell) == 0x000838, "Member 'UIconTabButtonReplay_C::SizeBoxShell' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, ButtonText) == 0x000840, "Member 'UIconTabButtonReplay_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, IconBrush) == 0x000858, "Member 'UIconTabButtonReplay_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, UseText) == 0x0008E0, "Member 'UIconTabButtonReplay_C::UseText' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, SelectedIconTint) == 0x0008E4, "Member 'UIconTabButtonReplay_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, DeselectedIconTint) == 0x0008F4, "Member 'UIconTabButtonReplay_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, HoveredIconTint) == 0x000904, "Member 'UIconTabButtonReplay_C::HoveredIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, DisabledIconTint) == 0x000914, "Member 'UIconTabButtonReplay_C::DisabledIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, bBangEnabled) == 0x000924, "Member 'UIconTabButtonReplay_C::bBangEnabled' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, ChangeIconColorWhenSelected) == 0x000925, "Member 'UIconTabButtonReplay_C::ChangeIconColorWhenSelected' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, SelectedIconColor) == 0x000928, "Member 'UIconTabButtonReplay_C::SelectedIconColor' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, UnSelectedIconColor) == 0x000950, "Member 'UIconTabButtonReplay_C::UnSelectedIconColor' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, CameraButtonHoverSound) == 0x000978, "Member 'UIconTabButtonReplay_C::CameraButtonHoverSound' has a wrong offset!");
static_assert(offsetof(UIconTabButtonReplay_C, CameraButtonSelectSound) == 0x000980, "Member 'UIconTabButtonReplay_C::CameraButtonSelectSound' has a wrong offset!");

}
