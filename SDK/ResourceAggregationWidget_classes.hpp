#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResourceAggregationWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResourceAggregationWidget.ResourceAggregationWidget_C
// 0x0060 (0x02A0 - 0x0240)
class UResourceAggregationWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       ResourceIconPulseAnim;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AggregateOutroAnim;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxTotalAggregation;                              // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageResourceIcon;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPotentialResourceWidget_C*             PotentialResourceWidget;                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAggregateResourceCollected;                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAggregateResourceCollectedShadow;              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABuildingSMActor*                       ResourceHoldingObject;                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AggregateResourceCollected;                        // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActivateAggregateAnim;                            // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28D[0x3];                                      // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HideWidgetTimer;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bIgnoreHide;                                       // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ResourceAggregationWidget(int32 EntryPoint);
	void Construct();
	void HandleDamagedResourceObject(class ABuildingSMActor* DamagedResourceObject, class UFortItem* PotentialResource, bool Destroyed, bool WeakpointDamage);
	void ForceHideWidget();
	void HideWidget();
	void ResetSourceOfResource(class ABuildingSMActor* InResourceObject, class UFortItem* InPotentialResource);
	void TriggerAggregateAnimation();
	void UpdateAggregateResourceCollected(class UFortItem* InPotentialResource);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResourceAggregationWidget_C">();
	}
	static class UResourceAggregationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResourceAggregationWidget_C>();
	}
};
static_assert(alignof(UResourceAggregationWidget_C) == 0x000008, "Wrong alignment on UResourceAggregationWidget_C");
static_assert(sizeof(UResourceAggregationWidget_C) == 0x0002A0, "Wrong size on UResourceAggregationWidget_C");
static_assert(offsetof(UResourceAggregationWidget_C, UberGraphFrame) == 0x000240, "Member 'UResourceAggregationWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, ResourceIconPulseAnim) == 0x000248, "Member 'UResourceAggregationWidget_C::ResourceIconPulseAnim' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, AggregateOutroAnim) == 0x000250, "Member 'UResourceAggregationWidget_C::AggregateOutroAnim' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, HBoxTotalAggregation) == 0x000258, "Member 'UResourceAggregationWidget_C::HBoxTotalAggregation' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, ImageResourceIcon) == 0x000260, "Member 'UResourceAggregationWidget_C::ImageResourceIcon' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, PotentialResourceWidget) == 0x000268, "Member 'UResourceAggregationWidget_C::PotentialResourceWidget' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, TextAggregateResourceCollected) == 0x000270, "Member 'UResourceAggregationWidget_C::TextAggregateResourceCollected' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, TextAggregateResourceCollectedShadow) == 0x000278, "Member 'UResourceAggregationWidget_C::TextAggregateResourceCollectedShadow' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, ResourceHoldingObject) == 0x000280, "Member 'UResourceAggregationWidget_C::ResourceHoldingObject' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, AggregateResourceCollected) == 0x000288, "Member 'UResourceAggregationWidget_C::AggregateResourceCollected' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, bActivateAggregateAnim) == 0x00028C, "Member 'UResourceAggregationWidget_C::bActivateAggregateAnim' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, HideWidgetTimer) == 0x000290, "Member 'UResourceAggregationWidget_C::HideWidgetTimer' has a wrong offset!");
static_assert(offsetof(UResourceAggregationWidget_C, bIgnoreHide) == 0x000298, "Member 'UResourceAggregationWidget_C::bIgnoreHide' has a wrong offset!");

}
