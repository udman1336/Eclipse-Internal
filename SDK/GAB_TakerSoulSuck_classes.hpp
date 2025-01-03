#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_TakerSoulSuck

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_TakerSoulSuck.GAB_TakerSoulSuck_C
// 0x00D0 (0x0BB8 - 0x0AE8)
class UGAB_TakerSoulSuck_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	bool                                          Debug;                                             // 0x0AF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AF9[0x7];                                      // 0x0AF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              GoalPawn;                                          // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATakerPawn_C*                           TakerPawn;                                         // 0x0B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            TakerController;                                   // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckTickTime;                                  // 0x0B18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckLowDamagePeriod;                           // 0x0B1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckDamageBeganAtThisTime;                     // 0x0B20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckLastDamageTime;                            // 0x0B24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoulSuckMontageSection;                            // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoulSuckCurrentMontageSection;                     // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckGoalActorNormalizedHealth;                 // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckHitNothingTimeoutDuration;                 // 0x0B3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             KnockTakerAwaySound;                               // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KnockTakerAwayMomentum;                            // 0x0B48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4C[0x4];                                      // 0x0B4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_TakerSoulSuckAttack;                            // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TakerDirectDamageSoulSuckHeavy;                 // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TakerSoulSuckHeal;                              // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_NPCAbilityAttackMeleeSoulSuck;                  // 0x0B68(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_TakerSoulSuckRelease;                           // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TakerMeleeStunCooldown;                         // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TakerSwoopCooldown;                             // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActors;                                         // 0x0BA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                           TC_NPCEnemyTypeBASE;                               // 0x0BB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_TakerSoulSuck(int32 EntryPoint);
	void Goal_Pawn_Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void K2_OnEndAbility(bool bWasCancelled);
	void UnbindAllEvents();
	void Taker_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Taker_Destroyed(class AActor* DestroyedActor);
	void SoulSuck();
	void Taker_Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HitNothingTimeout();
	void Goal_Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Cancelled_4C2B63DE432CB715866443AE4D6362FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void OnComplete_7817BC4E41E9CF270861B286146C2D8C();
	void OnComplete_7817BC4E41E9CF270861B28630504E0D();
	void OnComplete_7817BC4E41E9CF270861B2865D46D1D6();
	void OnComplete_7817BC4E41E9CF270861B28664B32580();
	void OnComplete_7817BC4E41E9CF270861B28685B20041();
	void OnInterrupted_7817BC4E41E9CF270861B286146C2D8C();
	void OnInterrupted_7817BC4E41E9CF270861B28630504E0D();
	void OnInterrupted_7817BC4E41E9CF270861B2865D46D1D6();
	void OnInterrupted_7817BC4E41E9CF270861B28664B32580();
	void OnInterrupted_7817BC4E41E9CF270861B28685B20041();
	void Targeted_4C2B63DE432CB715866443AE4D6362FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A9A1CE59416C7C1D5AF25DADAE0C61C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_TakerSoulSuck_C">();
	}
	static class UGAB_TakerSoulSuck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_TakerSoulSuck_C>();
	}
};
static_assert(alignof(UGAB_TakerSoulSuck_C) == 0x000008, "Wrong alignment on UGAB_TakerSoulSuck_C");
static_assert(sizeof(UGAB_TakerSoulSuck_C) == 0x000BB8, "Wrong size on UGAB_TakerSoulSuck_C");
static_assert(offsetof(UGAB_TakerSoulSuck_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_TakerSoulSuck_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, Debug) == 0x000AF8, "Member 'UGAB_TakerSoulSuck_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GoalPawn) == 0x000B00, "Member 'UGAB_TakerSoulSuck_C::GoalPawn' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, TakerPawn) == 0x000B08, "Member 'UGAB_TakerSoulSuck_C::TakerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, TakerController) == 0x000B10, "Member 'UGAB_TakerSoulSuck_C::TakerController' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckTickTime) == 0x000B18, "Member 'UGAB_TakerSoulSuck_C::SoulSuckTickTime' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckLowDamagePeriod) == 0x000B1C, "Member 'UGAB_TakerSoulSuck_C::SoulSuckLowDamagePeriod' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckDamageBeganAtThisTime) == 0x000B20, "Member 'UGAB_TakerSoulSuck_C::SoulSuckDamageBeganAtThisTime' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckLastDamageTime) == 0x000B24, "Member 'UGAB_TakerSoulSuck_C::SoulSuckLastDamageTime' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckMontageSection) == 0x000B28, "Member 'UGAB_TakerSoulSuck_C::SoulSuckMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckCurrentMontageSection) == 0x000B30, "Member 'UGAB_TakerSoulSuck_C::SoulSuckCurrentMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckGoalActorNormalizedHealth) == 0x000B38, "Member 'UGAB_TakerSoulSuck_C::SoulSuckGoalActorNormalizedHealth' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, SoulSuckHitNothingTimeoutDuration) == 0x000B3C, "Member 'UGAB_TakerSoulSuck_C::SoulSuckHitNothingTimeoutDuration' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, KnockTakerAwaySound) == 0x000B40, "Member 'UGAB_TakerSoulSuck_C::KnockTakerAwaySound' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, KnockTakerAwayMomentum) == 0x000B48, "Member 'UGAB_TakerSoulSuck_C::KnockTakerAwayMomentum' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerSoulSuckAttack) == 0x000B50, "Member 'UGAB_TakerSoulSuck_C::GE_TakerSoulSuckAttack' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerDirectDamageSoulSuckHeavy) == 0x000B58, "Member 'UGAB_TakerSoulSuck_C::GE_TakerDirectDamageSoulSuckHeavy' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerSoulSuckHeal) == 0x000B60, "Member 'UGAB_TakerSoulSuck_C::GE_TakerSoulSuckHeal' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, TC_NPCAbilityAttackMeleeSoulSuck) == 0x000B68, "Member 'UGAB_TakerSoulSuck_C::TC_NPCAbilityAttackMeleeSoulSuck' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerSoulSuckRelease) == 0x000B88, "Member 'UGAB_TakerSoulSuck_C::GE_TakerSoulSuckRelease' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerMeleeStunCooldown) == 0x000B90, "Member 'UGAB_TakerSoulSuck_C::GE_TakerMeleeStunCooldown' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, GE_TakerSwoopCooldown) == 0x000B98, "Member 'UGAB_TakerSoulSuck_C::GE_TakerSwoopCooldown' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, HitActors) == 0x000BA0, "Member 'UGAB_TakerSoulSuck_C::HitActors' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSoulSuck_C, TC_NPCEnemyTypeBASE) == 0x000BB0, "Member 'UGAB_TakerSoulSuck_C::TC_NPCEnemyTypeBASE' has a wrong offset!");

}

