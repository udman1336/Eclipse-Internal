#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionIconTabButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C
// 0x0120 (0x0928 - 0x0808)
class UBP_FortExpeditionIconTabButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0808(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                AvailableVehicles;                                 // 0x0810(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0818(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Heading;                                           // 0x0820(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0828(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper_0;                               // 0x0830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0838(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0850(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                   TabId;                                             // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Hovered_Icon_Tint;                                 // 0x08E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Selected_Icon_Tint;                                // 0x08F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Deselected_Icon_Tint;                              // 0x0900(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LandVehicles;                                      // 0x0910(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LandVehiclesAvailable;                             // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SeaVehicles;                                       // 0x0918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SeaVehiclesAvailable;                              // 0x091C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AirVehicles;                                       // 0x0920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AirVehiclesAvailable;                              // 0x0924(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortExpeditionIconTabButton(int32 EntryPoint);
	void OnUnhovered();
	void OnHovered();
	void OnDeselected();
	void OnSelected();
	void Construct();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(const class FText& ButtonText_0);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Refresh_Bang_State();
	void Set_Tab_Id(class FName TabId_0);
	void Update_Available_Vehicles();
	void Update_All_Vehicles();
	void Update_Land_Vehicles();
	void Update_Sea_Vehicles();
	void Update_Air_Vehicles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionIconTabButton_C">();
	}
	static class UBP_FortExpeditionIconTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionIconTabButton_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionIconTabButton_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionIconTabButton_C");
static_assert(sizeof(UBP_FortExpeditionIconTabButton_C) == 0x000928, "Wrong size on UBP_FortExpeditionIconTabButton_C");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, UberGraphFrame) == 0x000808, "Member 'UBP_FortExpeditionIconTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AvailableVehicles) == 0x000810, "Member 'UBP_FortExpeditionIconTabButton_C::AvailableVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, CenterButtonTextWidget) == 0x000818, "Member 'UBP_FortExpeditionIconTabButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Heading) == 0x000820, "Member 'UBP_FortExpeditionIconTabButton_C::Heading' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LeftSideImage) == 0x000828, "Member 'UBP_FortExpeditionIconTabButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, NormalBangWrapper_0) == 0x000830, "Member 'UBP_FortExpeditionIconTabButton_C::NormalBangWrapper_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, ButtonText) == 0x000838, "Member 'UBP_FortExpeditionIconTabButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, IconBrush) == 0x000850, "Member 'UBP_FortExpeditionIconTabButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, TabId) == 0x0008D8, "Member 'UBP_FortExpeditionIconTabButton_C::TabId' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Hovered_Icon_Tint) == 0x0008E0, "Member 'UBP_FortExpeditionIconTabButton_C::Hovered_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Selected_Icon_Tint) == 0x0008F0, "Member 'UBP_FortExpeditionIconTabButton_C::Selected_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Deselected_Icon_Tint) == 0x000900, "Member 'UBP_FortExpeditionIconTabButton_C::Deselected_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LandVehicles) == 0x000910, "Member 'UBP_FortExpeditionIconTabButton_C::LandVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LandVehiclesAvailable) == 0x000914, "Member 'UBP_FortExpeditionIconTabButton_C::LandVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, SeaVehicles) == 0x000918, "Member 'UBP_FortExpeditionIconTabButton_C::SeaVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, SeaVehiclesAvailable) == 0x00091C, "Member 'UBP_FortExpeditionIconTabButton_C::SeaVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AirVehicles) == 0x000920, "Member 'UBP_FortExpeditionIconTabButton_C::AirVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AirVehiclesAvailable) == 0x000924, "Member 'UBP_FortExpeditionIconTabButton_C::AirVehiclesAvailable' has a wrong offset!");

}
