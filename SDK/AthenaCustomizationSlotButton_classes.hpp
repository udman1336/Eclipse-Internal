#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// 0x00F0 (0x0918 - 0x0828)
class UAthenaCustomizationSlotButton_C final : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0828(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 EmptyImage;                                        // 0x0830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotType;                                     // 0x0838(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0840(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTypeIcon;                                   // 0x0848(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TooltipBody;                                       // 0x0850(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x0868(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowSubTypeIcon;                                   // 0x0880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_881[0x7];                                      // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SubTypeIcon;                                       // 0x0888(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bSuppressTooltip;                                  // 0x0910(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x0911(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_912[0x2];                                      // 0x0912(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TypeIconVerticalOffset;                            // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_SubType_Icon_Image();
	void Update_SubType_Icon_Glow(bool GlowIcon);
	void UpdateTypeIconOffset(float VerticalOffset);
	ESlateVisibility ShouldShowEmptyImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButton_C">();
	}
	static class UAthenaCustomizationSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationSlotButton_C) == 0x000008, "Wrong alignment on UAthenaCustomizationSlotButton_C");
static_assert(sizeof(UAthenaCustomizationSlotButton_C) == 0x000918, "Wrong size on UAthenaCustomizationSlotButton_C");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, UberGraphFrame) == 0x000828, "Member 'UAthenaCustomizationSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, EmptyImage) == 0x000830, "Member 'UAthenaCustomizationSlotButton_C::EmptyImage' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ImageSlotType) == 0x000838, "Member 'UAthenaCustomizationSlotButton_C::ImageSlotType' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, NormalBangWrapper) == 0x000840, "Member 'UAthenaCustomizationSlotButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OverlayTypeIcon) == 0x000848, "Member 'UAthenaCustomizationSlotButton_C::OverlayTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipBody) == 0x000850, "Member 'UAthenaCustomizationSlotButton_C::TooltipBody' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipHeader) == 0x000868, "Member 'UAthenaCustomizationSlotButton_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ShowSubTypeIcon) == 0x000880, "Member 'UAthenaCustomizationSlotButton_C::ShowSubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SubTypeIcon) == 0x000888, "Member 'UAthenaCustomizationSlotButton_C::SubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, bSuppressTooltip) == 0x000910, "Member 'UAthenaCustomizationSlotButton_C::bSuppressTooltip' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SlottedItemCardSize) == 0x000911, "Member 'UAthenaCustomizationSlotButton_C::SlottedItemCardSize' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TypeIconVerticalOffset) == 0x000914, "Member 'UAthenaCustomizationSlotButton_C::TypeIconVerticalOffset' has a wrong offset!");

}

