#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleSquadSlotButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleSquadSlotButton.SimpleSquadSlotButton_C
// 0x0100 (0x0988 - 0x0888)
class USimpleSquadSlotButton_C final : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0888(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0890(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotType;                                     // 0x0898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotTypeShadow;                               // 0x08A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        InputActionOverride;                               // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x08B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTypeIcon;                                   // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TooltipBody;                                       // 0x08C0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x08D8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowSubTypeIcon;                                   // 0x08F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8F1[0x7];                                      // 0x08F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SubTypeIcon;                                       // 0x08F8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bSuppressTooltip;                                  // 0x0980(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x0981(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_982[0x2];                                      // 0x0982(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TypeIconVerticalOffset;                            // 0x0984(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleSquadSlotButton(int32 EntryPoint);
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void OnSelected();
	void SquadSlotWidgetUpdated();
	void HandlePostDifferentSquadSlotSetBP();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class UWidget* GetSimpleSquadButtonTooltipWidget();
	void Update_Bang_State();
	void Mark_Squad_Slot_Seen_State();
	void IsSlotEmpty(bool* isEmpty);
	void Update_SubType_Icon_Image();
	void Update_SubType_Icon_Glow(bool GlowIcon);
	void UpdateTypeIconOffset(float VerticalOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleSquadSlotButton_C">();
	}
	static class USimpleSquadSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleSquadSlotButton_C>();
	}
};
static_assert(alignof(USimpleSquadSlotButton_C) == 0x000008, "Wrong alignment on USimpleSquadSlotButton_C");
static_assert(sizeof(USimpleSquadSlotButton_C) == 0x000988, "Wrong size on USimpleSquadSlotButton_C");
static_assert(offsetof(USimpleSquadSlotButton_C, UberGraphFrame) == 0x000888, "Member 'USimpleSquadSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, CommonBorder_0) == 0x000890, "Member 'USimpleSquadSlotButton_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, ImageSlotType) == 0x000898, "Member 'USimpleSquadSlotButton_C::ImageSlotType' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, ImageSlotTypeShadow) == 0x0008A0, "Member 'USimpleSquadSlotButton_C::ImageSlotTypeShadow' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, InputActionOverride) == 0x0008A8, "Member 'USimpleSquadSlotButton_C::InputActionOverride' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, NormalBangWrapper) == 0x0008B0, "Member 'USimpleSquadSlotButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, OverlayTypeIcon) == 0x0008B8, "Member 'USimpleSquadSlotButton_C::OverlayTypeIcon' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, TooltipBody) == 0x0008C0, "Member 'USimpleSquadSlotButton_C::TooltipBody' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, TooltipHeader) == 0x0008D8, "Member 'USimpleSquadSlotButton_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, ShowSubTypeIcon) == 0x0008F0, "Member 'USimpleSquadSlotButton_C::ShowSubTypeIcon' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, SubTypeIcon) == 0x0008F8, "Member 'USimpleSquadSlotButton_C::SubTypeIcon' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, bSuppressTooltip) == 0x000980, "Member 'USimpleSquadSlotButton_C::bSuppressTooltip' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, SlottedItemCardSize) == 0x000981, "Member 'USimpleSquadSlotButton_C::SlottedItemCardSize' has a wrong offset!");
static_assert(offsetof(USimpleSquadSlotButton_C, TypeIconVerticalOffset) == 0x000984, "Member 'USimpleSquadSlotButton_C::TypeIconVerticalOffset' has a wrong offset!");

}
