#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SmasherMelee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAB_AIBaseMelee_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SmasherMelee.GAB_SmasherMelee_C
// 0x0088 (0x0B88 - 0x0B00)
class UGAB_SmasherMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_SmasherMelee_C;                 // 0x0B00(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 GE_SmasherMeleeSuccess;                            // 0x0B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SmasherMeleeFailure;                            // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AllHitActors;                                      // 0x0B18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;     // 0x0B28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NPCBehaviorProhibitsAbilityAttackAny;           // 0x0B48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         AllHitActorsAfterRemovingInvalidTargets;           // 0x0B68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*                SmasherMove;                                       // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_ConstructorBullrushing;                         // 0x0B80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SmasherMelee(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void MoveToLoop();
	void K2_ActivateAbility();
	void OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC();
	void OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC(EPathFollowingResult Result, class AAIController* AIController);
	void Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SmasherMelee_C">();
	}
	static class UGAB_SmasherMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SmasherMelee_C>();
	}
};
static_assert(alignof(UGAB_SmasherMelee_C) == 0x000008, "Wrong alignment on UGAB_SmasherMelee_C");
static_assert(sizeof(UGAB_SmasherMelee_C) == 0x000B88, "Wrong size on UGAB_SmasherMelee_C");
static_assert(offsetof(UGAB_SmasherMelee_C, UberGraphFrame_GAB_SmasherMelee_C) == 0x000B00, "Member 'UGAB_SmasherMelee_C::UberGraphFrame_GAB_SmasherMelee_C' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, GE_SmasherMeleeSuccess) == 0x000B08, "Member 'UGAB_SmasherMelee_C::GE_SmasherMeleeSuccess' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, GE_SmasherMeleeFailure) == 0x000B10, "Member 'UGAB_SmasherMelee_C::GE_SmasherMeleeFailure' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, AllHitActors) == 0x000B18, "Member 'UGAB_SmasherMelee_C::AllHitActors' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, TC_NPCBehaviorProhibitsAbilityAttackMeleeBump) == 0x000B28, "Member 'UGAB_SmasherMelee_C::TC_NPCBehaviorProhibitsAbilityAttackMeleeBump' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, TC_NPCBehaviorProhibitsAbilityAttackAny) == 0x000B48, "Member 'UGAB_SmasherMelee_C::TC_NPCBehaviorProhibitsAbilityAttackAny' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, AllHitActorsAfterRemovingInvalidTargets) == 0x000B68, "Member 'UGAB_SmasherMelee_C::AllHitActorsAfterRemovingInvalidTargets' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, SmasherMove) == 0x000B78, "Member 'UGAB_SmasherMelee_C::SmasherMove' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherMelee_C, TC_ConstructorBullrushing) == 0x000B80, "Member 'UGAB_SmasherMelee_C::TC_ConstructorBullrushing' has a wrong offset!");

}
