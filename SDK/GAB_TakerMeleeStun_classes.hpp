#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_TakerMeleeStun

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_TakerMeleeStun.GAB_TakerMeleeStun_C
// 0x0040 (0x0B28 - 0x0AE8)
class UGAB_TakerMeleeStun_C : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	float                                         MoveStopRadius;                                    // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationRateWhenAttacking;                         // 0x0AFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATakerPawn_C*                           TakerPawn;                                         // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMovementUrgency                          DefaultMovementUrgency;                            // 0x0B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMovementUrgency                          MovementUrgencyWhenAttacking;                      // 0x0B09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyHitOnce;                                       // 0x0B0A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnlyHitAbilityTarget;                              // 0x0B0B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B0C[0x4];                                      // 0x0B0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HitActors;                                         // 0x0B10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortAbilityTask_MoveAI*                MoveWhileAttacking;                                // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_TakerMeleeStun(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ResetDoOnce();
	void MoveTimerComplete();
	void Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnComplete_513D85AB446CCC17A8F8AAA9835468D1();
	void OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1();
	void OnCancelled_513D85AB446CCC17A8F8AAA9835468D1();
	void OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1();
	void OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1(EPathFollowingResult Result, class AAIController* AIController);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_TakerMeleeStun_C">();
	}
	static class UGAB_TakerMeleeStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_TakerMeleeStun_C>();
	}
};
static_assert(alignof(UGAB_TakerMeleeStun_C) == 0x000008, "Wrong alignment on UGAB_TakerMeleeStun_C");
static_assert(sizeof(UGAB_TakerMeleeStun_C) == 0x000B28, "Wrong size on UGAB_TakerMeleeStun_C");
static_assert(offsetof(UGAB_TakerMeleeStun_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_TakerMeleeStun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, MoveStopRadius) == 0x000AF8, "Member 'UGAB_TakerMeleeStun_C::MoveStopRadius' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, RotationRateWhenAttacking) == 0x000AFC, "Member 'UGAB_TakerMeleeStun_C::RotationRateWhenAttacking' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, TakerPawn) == 0x000B00, "Member 'UGAB_TakerMeleeStun_C::TakerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, DefaultMovementUrgency) == 0x000B08, "Member 'UGAB_TakerMeleeStun_C::DefaultMovementUrgency' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, MovementUrgencyWhenAttacking) == 0x000B09, "Member 'UGAB_TakerMeleeStun_C::MovementUrgencyWhenAttacking' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, OnlyHitOnce) == 0x000B0A, "Member 'UGAB_TakerMeleeStun_C::OnlyHitOnce' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, OnlyHitAbilityTarget) == 0x000B0B, "Member 'UGAB_TakerMeleeStun_C::OnlyHitAbilityTarget' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, HitActors) == 0x000B10, "Member 'UGAB_TakerMeleeStun_C::HitActors' has a wrong offset!");
static_assert(offsetof(UGAB_TakerMeleeStun_C, MoveWhileAttacking) == 0x000B20, "Member 'UGAB_TakerMeleeStun_C::MoveWhileAttacking' has a wrong offset!");

}
