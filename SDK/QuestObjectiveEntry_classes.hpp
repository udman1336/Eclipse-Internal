#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestObjectiveEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestObjectiveEntry.QuestObjectiveEntry_C
// 0x0040 (0x0258 - 0x0218)
class UQuestObjectiveEntry_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Appear;                                            // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BulletOverlay;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Checkmark;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestHudIcon;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestProgressWidget_C*                 QuestProgressWidget;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TaskName;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                TrackedObjective;                                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestObjectiveEntry(int32 EntryPoint);
	void SetData(class UObject* InData);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount);
	void Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount);
	void PlayAppearAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestObjectiveEntry_C">();
	}
	static class UQuestObjectiveEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestObjectiveEntry_C>();
	}
};
static_assert(alignof(UQuestObjectiveEntry_C) == 0x000008, "Wrong alignment on UQuestObjectiveEntry_C");
static_assert(sizeof(UQuestObjectiveEntry_C) == 0x000258, "Wrong size on UQuestObjectiveEntry_C");
static_assert(offsetof(UQuestObjectiveEntry_C, UberGraphFrame) == 0x000218, "Member 'UQuestObjectiveEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, Appear) == 0x000220, "Member 'UQuestObjectiveEntry_C::Appear' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, BulletOverlay) == 0x000228, "Member 'UQuestObjectiveEntry_C::BulletOverlay' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, Checkmark) == 0x000230, "Member 'UQuestObjectiveEntry_C::Checkmark' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, QuestHudIcon) == 0x000238, "Member 'UQuestObjectiveEntry_C::QuestHudIcon' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, QuestProgressWidget) == 0x000240, "Member 'UQuestObjectiveEntry_C::QuestProgressWidget' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, TaskName) == 0x000248, "Member 'UQuestObjectiveEntry_C::TaskName' has a wrong offset!");
static_assert(offsetof(UQuestObjectiveEntry_C, TrackedObjective) == 0x000250, "Member 'UQuestObjectiveEntry_C::TrackedObjective' has a wrong offset!");

}
