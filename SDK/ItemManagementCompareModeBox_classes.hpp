#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementCompareModeBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementCompareModeBox.ItemManagementCompareModeBox_C
// 0x0050 (0x0460 - 0x0410)
class UItemManagementCompareModeBox_C final : public UFortItemCompareModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ComparisonModeBox;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_30;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_31;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_62;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NoSelectionDetailsBox;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoSelectionText;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RightSideSwitcher;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxWidget;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectionPromptText;                               // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementCompareModeBox(int32 EntryPoint);
	void OnDeactivated();
	void OnActivated();
	void Construct();
	void HandleDifferentItemToCompareSetBP();
	void HandleDifferentItemToDetailSetBP();
	void UpdateFocusedItems();
	void HandleBack(bool* Passthrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementCompareModeBox_C">();
	}
	static class UItemManagementCompareModeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementCompareModeBox_C>();
	}
};
static_assert(alignof(UItemManagementCompareModeBox_C) == 0x000008, "Wrong alignment on UItemManagementCompareModeBox_C");
static_assert(sizeof(UItemManagementCompareModeBox_C) == 0x000460, "Wrong size on UItemManagementCompareModeBox_C");
static_assert(offsetof(UItemManagementCompareModeBox_C, UberGraphFrame) == 0x000410, "Member 'UItemManagementCompareModeBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, ComparisonModeBox) == 0x000418, "Member 'UItemManagementCompareModeBox_C::ComparisonModeBox' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, Image_30) == 0x000420, "Member 'UItemManagementCompareModeBox_C::Image_30' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, Image_31) == 0x000428, "Member 'UItemManagementCompareModeBox_C::Image_31' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, Image_62) == 0x000430, "Member 'UItemManagementCompareModeBox_C::Image_62' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, NoSelectionDetailsBox) == 0x000438, "Member 'UItemManagementCompareModeBox_C::NoSelectionDetailsBox' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, NoSelectionText) == 0x000440, "Member 'UItemManagementCompareModeBox_C::NoSelectionText' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, RightSideSwitcher) == 0x000448, "Member 'UItemManagementCompareModeBox_C::RightSideSwitcher' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, ScrollBoxWidget) == 0x000450, "Member 'UItemManagementCompareModeBox_C::ScrollBoxWidget' has a wrong offset!");
static_assert(offsetof(UItemManagementCompareModeBox_C, SelectionPromptText) == 0x000458, "Member 'UItemManagementCompareModeBox_C::SelectionPromptText' has a wrong offset!");

}
