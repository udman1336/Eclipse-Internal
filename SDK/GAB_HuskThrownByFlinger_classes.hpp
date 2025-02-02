#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskThrownByFlinger

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C
// 0x0068 (0x0B50 - 0x0AE8)
class UGAB_HuskThrownByFlinger_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	class AHuskPawn_C*                            HuskPawn;                                          // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              FlingerPawn;                                       // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZVelocityWhenShot;                                 // 0x0B08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         XYVelocityMaintainedWhenShot;                      // 0x0B0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HuskPawnCapsuleDefaultCollisionProfileName;        // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger; // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FireLocation;                                      // 0x0B20(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2C[0x4];                                      // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MontageSectionFlyingLoop;                          // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HuskPawnOriginalGravityScale;                      // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3C[0x4];                                      // 0x0B3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECollisionResponse>                    StoredCollisionResponses;                          // 0x0B40(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GAB_HuskThrownByFlinger(int32 EntryPoint);
	void ResetGravityScale();
	void HuskFaceForwardOFF();
	void HuskFaceForwardON();
	void RotationCheck();
	void UnBindHuskLanded();
	void BindHuskLanded();
	void UnBindHuskDamaged();
	void HuskHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void HuskLanded(const struct FHitResult& Hit);
	void BindHuskDamaged();
	void K2_OnEndAbility(bool bWasCancelled);
	void HuskDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Triggered_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SaveCollisionSettings(class AHuskPawn_C* Pawn);
	void RestoreCollisionSettings(class AHuskPawn_C* Pawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_HuskThrownByFlinger_C">();
	}
	static class UGAB_HuskThrownByFlinger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_HuskThrownByFlinger_C>();
	}
};
static_assert(alignof(UGAB_HuskThrownByFlinger_C) == 0x000008, "Wrong alignment on UGAB_HuskThrownByFlinger_C");
static_assert(sizeof(UGAB_HuskThrownByFlinger_C) == 0x000B50, "Wrong size on UGAB_HuskThrownByFlinger_C");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_HuskThrownByFlinger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, HuskPawn) == 0x000AF8, "Member 'UGAB_HuskThrownByFlinger_C::HuskPawn' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, FlingerPawn) == 0x000B00, "Member 'UGAB_HuskThrownByFlinger_C::FlingerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, ZVelocityWhenShot) == 0x000B08, "Member 'UGAB_HuskThrownByFlinger_C::ZVelocityWhenShot' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, XYVelocityMaintainedWhenShot) == 0x000B0C, "Member 'UGAB_HuskThrownByFlinger_C::XYVelocityMaintainedWhenShot' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, HuskPawnCapsuleDefaultCollisionProfileName) == 0x000B10, "Member 'UGAB_HuskThrownByFlinger_C::HuskPawnCapsuleDefaultCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger) == 0x000B18, "Member 'UGAB_HuskThrownByFlinger_C::HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, FireLocation) == 0x000B20, "Member 'UGAB_HuskThrownByFlinger_C::FireLocation' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, MontageSectionFlyingLoop) == 0x000B30, "Member 'UGAB_HuskThrownByFlinger_C::MontageSectionFlyingLoop' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, HuskPawnOriginalGravityScale) == 0x000B38, "Member 'UGAB_HuskThrownByFlinger_C::HuskPawnOriginalGravityScale' has a wrong offset!");
static_assert(offsetof(UGAB_HuskThrownByFlinger_C, StoredCollisionResponses) == 0x000B40, "Member 'UGAB_HuskThrownByFlinger_C::StoredCollisionResponses' has a wrong offset!");

}

