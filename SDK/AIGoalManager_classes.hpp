#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIGoalManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIGoalManager.AIGoalManager_C
// 0x0008 (0x0438 - 0x0430)
class AAIGoalManager_C final : public AFortAIGoalManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIGoalManager_C">();
	}
	static class AAIGoalManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIGoalManager_C>();
	}
};
static_assert(alignof(AAIGoalManager_C) == 0x000008, "Wrong alignment on AAIGoalManager_C");
static_assert(sizeof(AAIGoalManager_C) == 0x000438, "Wrong size on AAIGoalManager_C");
static_assert(offsetof(AAIGoalManager_C, DefaultSceneRoot) == 0x000430, "Member 'AAIGoalManager_C::DefaultSceneRoot' has a wrong offset!");

}
