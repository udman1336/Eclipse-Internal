#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyKnockback

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// 0x00E8 (0x0BD0 - 0x0AE8)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 GE_TransferKnockback;                              // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_KnockbackActive;                                // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KnockbackPropagationThreshold;                     // 0x0B08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B0C[0x4];                                      // 0x0B0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           KnockbackUpMontage;                                // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KnockbackUpMontageSection;                         // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           KnockbackDownMontage;                              // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KnockbackDownMontageSection;                       // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           KnockbackLandMontage;                              // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KnockbackLandMontageSection;                       // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           KnockbackLandToIdleMontage;                        // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KnockbackLandToIdleMontageSection;                 // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           KnockbackLandToStunMontage;                        // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KnockbackLandToStunMontageSection;                 // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDraw;                                         // 0x0B60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugNumbers;                                      // 0x0B61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugForceKnockbackValues;                         // 0x0B62(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOrientToImpulse;                                  // 0x0B63(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            ActiveKnockback;                                   // 0x0B64(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OrientDirection;                                   // 0x0B6C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitDirection;                                      // 0x0B78(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpulseDirectionVelocityOrRotation;                // 0x0B84(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DebugLastLocation;                                 // 0x0B90(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9C[0x4];                                      // 0x0B9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           TC_NPCStatusLockedInPlace;                         // 0x0BA0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         LockedInPlaceKnockbackAngle;                       // 0x0BA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LockedInPlaceKnockbackMagnitude;                   // 0x0BAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_RestoreControlResistance;                       // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ImpactImmunity;                                 // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;                              // 0x0BC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasImpactImmunity;                                // 0x0BC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC9[0x3];                                      // 0x0BC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         F_OneFrameDelay;                                   // 0x0BCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint);
	void DebugLine();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnPawnLanded(const struct FHitResult& Hit);
	void SetupMontageSectionsAndOrientDirection();
	void OnReachedJumpApex();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn* InPawn);
	void GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn);
	void DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyKnockback_C">();
	}
	static class UGAB_GenericApplyKnockback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyKnockback_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyKnockback_C) == 0x000008, "Wrong alignment on UGAB_GenericApplyKnockback_C");
static_assert(sizeof(UGAB_GenericApplyKnockback_C) == 0x000BD0, "Wrong size on UGAB_GenericApplyKnockback_C");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_GenericApplyKnockback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_TransferKnockback) == 0x000AF8, "Member 'UGAB_GenericApplyKnockback_C::GE_TransferKnockback' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_KnockbackActive) == 0x000B00, "Member 'UGAB_GenericApplyKnockback_C::GE_KnockbackActive' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackPropagationThreshold) == 0x000B08, "Member 'UGAB_GenericApplyKnockback_C::KnockbackPropagationThreshold' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackUpMontage) == 0x000B10, "Member 'UGAB_GenericApplyKnockback_C::KnockbackUpMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackUpMontageSection) == 0x000B18, "Member 'UGAB_GenericApplyKnockback_C::KnockbackUpMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackDownMontage) == 0x000B20, "Member 'UGAB_GenericApplyKnockback_C::KnockbackDownMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackDownMontageSection) == 0x000B28, "Member 'UGAB_GenericApplyKnockback_C::KnockbackDownMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandMontage) == 0x000B30, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandMontageSection) == 0x000B38, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToIdleMontage) == 0x000B40, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToIdleMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToIdleMontageSection) == 0x000B48, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToIdleMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToStunMontage) == 0x000B50, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToStunMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToStunMontageSection) == 0x000B58, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToStunMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugDraw) == 0x000B60, "Member 'UGAB_GenericApplyKnockback_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugNumbers) == 0x000B61, "Member 'UGAB_GenericApplyKnockback_C::DebugNumbers' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugForceKnockbackValues) == 0x000B62, "Member 'UGAB_GenericApplyKnockback_C::DebugForceKnockbackValues' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, bOrientToImpulse) == 0x000B63, "Member 'UGAB_GenericApplyKnockback_C::bOrientToImpulse' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ActiveKnockback) == 0x000B64, "Member 'UGAB_GenericApplyKnockback_C::ActiveKnockback' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, OrientDirection) == 0x000B6C, "Member 'UGAB_GenericApplyKnockback_C::OrientDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, HitDirection) == 0x000B78, "Member 'UGAB_GenericApplyKnockback_C::HitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ImpulseDirectionVelocityOrRotation) == 0x000B84, "Member 'UGAB_GenericApplyKnockback_C::ImpulseDirectionVelocityOrRotation' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugLastLocation) == 0x000B90, "Member 'UGAB_GenericApplyKnockback_C::DebugLastLocation' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, TC_NPCStatusLockedInPlace) == 0x000BA0, "Member 'UGAB_GenericApplyKnockback_C::TC_NPCStatusLockedInPlace' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, LockedInPlaceKnockbackAngle) == 0x000BA8, "Member 'UGAB_GenericApplyKnockback_C::LockedInPlaceKnockbackAngle' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, LockedInPlaceKnockbackMagnitude) == 0x000BAC, "Member 'UGAB_GenericApplyKnockback_C::LockedInPlaceKnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_RestoreControlResistance) == 0x000BB0, "Member 'UGAB_GenericApplyKnockback_C::GE_RestoreControlResistance' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_ImpactImmunity) == 0x000BB8, "Member 'UGAB_GenericApplyKnockback_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ActiveImpactImmunity) == 0x000BC0, "Member 'UGAB_GenericApplyKnockback_C::ActiveImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, bHasImpactImmunity) == 0x000BC8, "Member 'UGAB_GenericApplyKnockback_C::bHasImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, F_OneFrameDelay) == 0x000BCC, "Member 'UGAB_GenericApplyKnockback_C::F_OneFrameDelay' has a wrong offset!");

}
