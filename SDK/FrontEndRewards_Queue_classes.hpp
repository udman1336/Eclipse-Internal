#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Queue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C
// 0x0058 (0x0270 - 0x0218)
class UFrontEndRewards_Queue_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               OverlayMain;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class URewardsIcon_C*>                 IconList;                                          // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         IconPadding;                                       // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconScale;                                         // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 SlideIndexList;                                    // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                           IconSlideHandle;                                   // 0x0250(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         IconSlideStaggerTime;                              // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconInitStaggerTime;                               // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           IconInitHandle;                                    // 0x0260(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         InitIndex;                                         // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseIconOffset;                                    // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontEndRewards_Queue(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon);
	void DequeueReward(class UFortRewardNotificationData** OutReward);
	void ClearQueue();
	void CloneIconList(TArray<class URewardsIcon_C*>* IconListClone);
	void RandomizeDesignView();
	void PopIcon(class URewardsIcon_C** OutIcon);
	void HandleIconHideAnimationFinished(class URewardsIcon_C* Icon);
	void TickIconSlide();
	void StartDequeueAnimation();
	void SlideIcon(class URewardsIcon_C* Icon);
	void StartInitAnimation();
	void TickIconInit();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_Queue_C">();
	}
	static class UFrontEndRewards_Queue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_Queue_C>();
	}
};
static_assert(alignof(UFrontEndRewards_Queue_C) == 0x000008, "Wrong alignment on UFrontEndRewards_Queue_C");
static_assert(sizeof(UFrontEndRewards_Queue_C) == 0x000270, "Wrong size on UFrontEndRewards_Queue_C");
static_assert(offsetof(UFrontEndRewards_Queue_C, UberGraphFrame) == 0x000218, "Member 'UFrontEndRewards_Queue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, OverlayMain) == 0x000220, "Member 'UFrontEndRewards_Queue_C::OverlayMain' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconList) == 0x000228, "Member 'UFrontEndRewards_Queue_C::IconList' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconPadding) == 0x000238, "Member 'UFrontEndRewards_Queue_C::IconPadding' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconScale) == 0x00023C, "Member 'UFrontEndRewards_Queue_C::IconScale' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, SlideIndexList) == 0x000240, "Member 'UFrontEndRewards_Queue_C::SlideIndexList' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconSlideHandle) == 0x000250, "Member 'UFrontEndRewards_Queue_C::IconSlideHandle' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconSlideStaggerTime) == 0x000258, "Member 'UFrontEndRewards_Queue_C::IconSlideStaggerTime' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconInitStaggerTime) == 0x00025C, "Member 'UFrontEndRewards_Queue_C::IconInitStaggerTime' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, IconInitHandle) == 0x000260, "Member 'UFrontEndRewards_Queue_C::IconInitHandle' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, InitIndex) == 0x000268, "Member 'UFrontEndRewards_Queue_C::InitIndex' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Queue_C, BaseIconOffset) == 0x00026C, "Member 'UFrontEndRewards_Queue_C::BaseIconOffset' has a wrong offset!");

}
