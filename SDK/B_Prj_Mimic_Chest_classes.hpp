#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Mimic_Chest

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C
// 0x0128 (0x0940 - 0x0818)
class AB_Prj_Mimic_Chest_C final : public AFortProjectileBase
{
public:
	uint8                                         Pad_818[0x8];                                      // 0x0818(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               Place_FX;                                          // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_MuzzleFlash;                                     // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio1;                                            // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Delay;                                     // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84C[0x4];                                      // 0x084C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PlacementCue;                                      // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ExplosionCue;                                      // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SecondExplosionCue;                                // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MuzzleFlashCounter;                                // 0x0870(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSlope;                                          // 0x0874(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBottleRockets;                                // 0x0878(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_BR_SpawnDelay;                                 // 0x087C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_BR_SpawnDelay;                                 // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_884[0x4];                                      // 0x0884(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Prj_BottleRocket;                                  // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BR_SpawnLoc_Offset;                                // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BottleRocketGravity;                               // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MuzzleLocOffset;                                   // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BottleRocketSpeed;                                 // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spread;                                            // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4[0x4];                                      // 0x08A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       RocketGEContainerSpec;                             // 0x08A8(0x0080)(Edit, BlueprintVisible)
	class USoundBase*                             BottleRocketFire_Sound;                            // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ForceFeedbackNear;                                 // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ForceFeedbackFar;                                  // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Mimic_Chest(int32 EntryPoint);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnStop(const struct FHitResult& Hit);
	void FlashShield();
	void UserConstructionScript();
	void TriggerMuzzleFlashFX();
	void OnRep_MuzzleFlashCounter();
	void SpawnBottleRocket(const struct FFortGameplayEffectContainerSpec& EffectContainerSpec);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Mimic_Chest_C">();
	}
	static class AB_Prj_Mimic_Chest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Mimic_Chest_C>();
	}
};
static_assert(alignof(AB_Prj_Mimic_Chest_C) == 0x000008, "Wrong alignment on AB_Prj_Mimic_Chest_C");
static_assert(sizeof(AB_Prj_Mimic_Chest_C) == 0x000940, "Wrong size on AB_Prj_Mimic_Chest_C");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, UberGraphFrame) == 0x000820, "Member 'AB_Prj_Mimic_Chest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Place_FX) == 0x000828, "Member 'AB_Prj_Mimic_Chest_C::Place_FX' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, P_MuzzleFlash) == 0x000830, "Member 'AB_Prj_Mimic_Chest_C::P_MuzzleFlash' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Mesh) == 0x000838, "Member 'AB_Prj_Mimic_Chest_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Audio1) == 0x000840, "Member 'AB_Prj_Mimic_Chest_C::Audio1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Initial_Delay) == 0x000848, "Member 'AB_Prj_Mimic_Chest_C::Initial_Delay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, PlacementCue) == 0x000850, "Member 'AB_Prj_Mimic_Chest_C::PlacementCue' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, ExplosionCue) == 0x000858, "Member 'AB_Prj_Mimic_Chest_C::ExplosionCue' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, SecondExplosionCue) == 0x000860, "Member 'AB_Prj_Mimic_Chest_C::SecondExplosionCue' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, P_Explosion) == 0x000868, "Member 'AB_Prj_Mimic_Chest_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, MuzzleFlashCounter) == 0x000870, "Member 'AB_Prj_Mimic_Chest_C::MuzzleFlashCounter' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, MaxSlope) == 0x000874, "Member 'AB_Prj_Mimic_Chest_C::MaxSlope' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, DelayBottleRockets) == 0x000878, "Member 'AB_Prj_Mimic_Chest_C::DelayBottleRockets' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Min_BR_SpawnDelay) == 0x00087C, "Member 'AB_Prj_Mimic_Chest_C::Min_BR_SpawnDelay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Max_BR_SpawnDelay) == 0x000880, "Member 'AB_Prj_Mimic_Chest_C::Max_BR_SpawnDelay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Prj_BottleRocket) == 0x000888, "Member 'AB_Prj_Mimic_Chest_C::Prj_BottleRocket' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, BR_SpawnLoc_Offset) == 0x000890, "Member 'AB_Prj_Mimic_Chest_C::BR_SpawnLoc_Offset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, BottleRocketGravity) == 0x000894, "Member 'AB_Prj_Mimic_Chest_C::BottleRocketGravity' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, MuzzleLocOffset) == 0x000898, "Member 'AB_Prj_Mimic_Chest_C::MuzzleLocOffset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, BottleRocketSpeed) == 0x00089C, "Member 'AB_Prj_Mimic_Chest_C::BottleRocketSpeed' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, Spread) == 0x0008A0, "Member 'AB_Prj_Mimic_Chest_C::Spread' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, RocketGEContainerSpec) == 0x0008A8, "Member 'AB_Prj_Mimic_Chest_C::RocketGEContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, BottleRocketFire_Sound) == 0x000928, "Member 'AB_Prj_Mimic_Chest_C::BottleRocketFire_Sound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, ForceFeedbackNear) == 0x000930, "Member 'AB_Prj_Mimic_Chest_C::ForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Mimic_Chest_C, ForceFeedbackFar) == 0x000938, "Member 'AB_Prj_Mimic_Chest_C::ForceFeedbackFar' has a wrong offset!");

}
