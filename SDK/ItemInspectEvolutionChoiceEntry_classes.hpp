#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionChoiceEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PanelButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C
// 0x0070 (0x08C0 - 0x0850)
class UItemInspectEvolutionChoiceEntry_C final : public UPanelButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemInspectEvolutionChoiceEntry_C;  // 0x0850(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Grow;                                              // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               DisabledOverlay;                                   // 0x0860(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0868(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0870(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0878(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnEvolutionChoiceHovered;                          // 0x0880(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnEvolutionChoiceUnhovered;                        // 0x0890(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnEvolutionChoiceSelected;                         // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                              ItemRepresented;                                   // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RecipeIndexRepresented;                            // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int32 EntryPoint);
	void OnSelected();
	void SetItemToRepresent(class UFortItem* Item, int32 RecipeIndex, bool EnabledChoice);
	void SelectEvolutionChoice();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolutionChoiceEntry_C">();
	}
	static class UItemInspectEvolutionChoiceEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolutionChoiceEntry_C>();
	}
};
static_assert(alignof(UItemInspectEvolutionChoiceEntry_C) == 0x000008, "Wrong alignment on UItemInspectEvolutionChoiceEntry_C");
static_assert(sizeof(UItemInspectEvolutionChoiceEntry_C) == 0x0008C0, "Wrong size on UItemInspectEvolutionChoiceEntry_C");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, UberGraphFrame_ItemInspectEvolutionChoiceEntry_C) == 0x000850, "Member 'UItemInspectEvolutionChoiceEntry_C::UberGraphFrame_ItemInspectEvolutionChoiceEntry_C' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, Grow) == 0x000858, "Member 'UItemInspectEvolutionChoiceEntry_C::Grow' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, DisabledOverlay) == 0x000860, "Member 'UItemInspectEvolutionChoiceEntry_C::DisabledOverlay' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, Image_0) == 0x000868, "Member 'UItemInspectEvolutionChoiceEntry_C::Image_0' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, Image_1) == 0x000870, "Member 'UItemInspectEvolutionChoiceEntry_C::Image_1' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, ItemCard) == 0x000878, "Member 'UItemInspectEvolutionChoiceEntry_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, OnEvolutionChoiceHovered) == 0x000880, "Member 'UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceHovered' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, OnEvolutionChoiceUnhovered) == 0x000890, "Member 'UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceUnhovered' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, OnEvolutionChoiceSelected) == 0x0008A0, "Member 'UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceSelected' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, ItemRepresented) == 0x0008B0, "Member 'UItemInspectEvolutionChoiceEntry_C::ItemRepresented' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionChoiceEntry_C, RecipeIndexRepresented) == 0x0008B8, "Member 'UItemInspectEvolutionChoiceEntry_C::RecipeIndexRepresented' has a wrong offset!");

}
