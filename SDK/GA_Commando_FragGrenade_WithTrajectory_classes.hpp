#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_FragGrenade_WithTrajectory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GAT_CommandoActiveAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// 0x0320 (0x0EE0 - 0x0BC0)
class UGA_Commando_FragGrenade_WithTrajectory_C final : public UGAT_CommandoActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C; // 0x0BC0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0BC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0BD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Prj_Grenade;                                       // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMin;                                   // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMax;                                   // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GravityScale;                                      // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BEC[0x4];                                      // 0x0BEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             GrenadeSound;                                      // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ClusterBomb;                                    // 0x0BF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxClusterGrenades;                                // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1C[0x4];                                      // 0x0C1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Prj_Cluster;                                       // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterSpeedMax;                                   // 0x0C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2C[0x4];                                      // 0x0C2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_BiggerIsBetter;                                 // 0x0C30(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0C50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_IncreasedRadius;                                // 0x0C58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       EC_ReturnedEffect;                                 // 0x0C60(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ExplosionRadius;                                   // 0x0CE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdditionalThrowAngle;                              // 0x0CE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterMinPitch;                                   // 0x0CE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterMaxPitch;                                   // 0x0CEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_ClusterExplosion;                               // 0x0CF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterSpeedMin;                                   // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CFC[0x4];                                      // 0x0CFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortFeedbackHandle                    GrenadeDialogFeedback;                             // 0x0D00(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                  TC_KeepOut;                                        // 0x0D18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_KeepOut;                                        // 0x0D38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AOE_KeepOut;                                       // 0x0D40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BiggerIsBetter;                                    // 0x0D48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ClusterBomb;                                       // 0x0D49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          KeepOut;                                           // 0x0D4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D4B[0x5];                                      // 0x0D4B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_GrenadeAmmo;                                    // 0x0D50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_GrenadeCost;                                    // 0x0D70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_GrenadeDamage;                                  // 0x0D90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          GrenadeAmmo;                                       // 0x0DB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GrenadeCost;                                       // 0x0DB1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GrenadeDamage;                                     // 0x0DB2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DB3[0x1];                                      // 0x0DB3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GrenadeAmmoUpgrade;                                // 0x0DB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GrenadeAmmoDefault;                                // 0x0DB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxGrenadeAmmo;                                    // 0x0DBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusTooltip;                            // 0x0DC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusDefault;                            // 0x0DC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusUpgrade;                            // 0x0DC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DCC[0x4];                                      // 0x0DCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_PlasmaGrenades;                                 // 0x0DD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PlasmaGrenades;                                    // 0x0DF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF1[0x7];                                      // 0x0DF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_Flashbang;                                      // 0x0DF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Flashbang;                                         // 0x0E18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E19[0x3];                                      // 0x0E19(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0E1C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DummyShouldBounce;                                 // 0x0E30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E31[0x3];                                      // 0x0E31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBounciness;                                   // 0x0E34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyFriction;                                     // 0x0E38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrajectoryUpdateInterval;                          // 0x0E3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0E44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0E48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0E4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InThrowWindup;                                     // 0x0E50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E51[0x7];                                      // 0x0E51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0E60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo        ThrowWindupMontage;                                // 0x0E68(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AbilityKeyPressed;                                 // 0x0EC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EC9[0x3];                                      // 0x0EC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSpeedPitch;                                     // 0x0ECC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSpeedPitch;                                     // 0x0ED0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0ED4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTrajectoryBounces;                              // 0x0ED8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32 EntryPoint);
	void TossGrenade();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void Triggered_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void SetupDummyProjectile();
	void UpdateTrajectorySpline();
	void SpawnFragGrenade(class UClass* ProjectileClass_0, struct FVector& SpawnLocation, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale_0);

	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot) const;
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Commando_FragGrenade_WithTrajectory_C">();
	}
	static class UGA_Commando_FragGrenade_WithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Commando_FragGrenade_WithTrajectory_C>();
	}
};
static_assert(alignof(UGA_Commando_FragGrenade_WithTrajectory_C) == 0x000008, "Wrong alignment on UGA_Commando_FragGrenade_WithTrajectory_C");
static_assert(sizeof(UGA_Commando_FragGrenade_WithTrajectory_C) == 0x000EE0, "Wrong size on UGA_Commando_FragGrenade_WithTrajectory_C");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C) == 0x000BC0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EventActivation) == 0x000BC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EventComplete) == 0x000BD0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Prj_Grenade) == 0x000BD8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Prj_Grenade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSpeedMin) == 0x000BE0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSpeedMin' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSpeedMax) == 0x000BE4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSpeedMax' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GravityScale) == 0x000BE8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSound) == 0x000BF0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSound' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_ClusterBomb) == 0x000BF8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_ClusterBomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxClusterGrenades) == 0x000C18, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxClusterGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Prj_Cluster) == 0x000C20, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Prj_Cluster' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterSpeedMax) == 0x000C28, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterSpeedMax' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_BiggerIsBetter) == 0x000C30, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_BiggerIsBetter' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_DefaultExplosion) == 0x000C50, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_IncreasedRadius) == 0x000C58, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_IncreasedRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_ReturnedEffect) == 0x000C60, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_ReturnedEffect' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadius) == 0x000CE0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AdditionalThrowAngle) == 0x000CE4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterMinPitch) == 0x000CE8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterMinPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterMaxPitch) == 0x000CEC, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterMaxPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_ClusterExplosion) == 0x000CF0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_ClusterExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterSpeedMin) == 0x000CF8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterSpeedMin' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeDialogFeedback) == 0x000D00, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeDialogFeedback' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_KeepOut) == 0x000D18, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_KeepOut) == 0x000D38, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AOE_KeepOut) == 0x000D40, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AOE_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, BiggerIsBetter) == 0x000D48, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::BiggerIsBetter' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterBomb) == 0x000D49, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterBomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, KeepOut) == 0x000D4A, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeAmmo) == 0x000D50, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeCost) == 0x000D70, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeCost' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeDamage) == 0x000D90, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeDamage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmo) == 0x000DB0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeCost) == 0x000DB1, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeCost' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeDamage) == 0x000DB2, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeDamage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmoUpgrade) == 0x000DB4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmoUpgrade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmoDefault) == 0x000DB8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmoDefault' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxGrenadeAmmo) == 0x000DBC, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxGrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusTooltip) == 0x000DC0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusTooltip' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusDefault) == 0x000DC4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusDefault' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusUpgrade) == 0x000DC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusUpgrade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_PlasmaGrenades) == 0x000DD0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_PlasmaGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, PlasmaGrenades) == 0x000DF0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::PlasmaGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_Flashbang) == 0x000DF8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_Flashbang' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Flashbang) == 0x000E18, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Flashbang' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeTargetingOriginOffset) == 0x000E1C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyProjectile) == 0x000E28, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyShouldBounce) == 0x000E30, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyShouldBounce' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyBounciness) == 0x000E34, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyBounciness' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyFriction) == 0x000E38, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyFriction' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryUpdateInterval) == 0x000E3C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyMaxSpeed) == 0x000E40, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyGravity) == 0x000E44, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyTimeStep) == 0x000E48, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyExtent) == 0x000E4C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, InThrowWindup) == 0x000E50, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryIndicator) == 0x000E58, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryIndicatorClass) == 0x000E60, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ThrowWindupMontage) == 0x000E68, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ThrowWindupMontage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AbilityKeyPressed) == 0x000EC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxSpeedPitch) == 0x000ECC, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MinSpeedPitch) == 0x000ED0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MinSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxTossPitch) == 0x000ED4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxTrajectoryBounces) == 0x000ED8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxTrajectoryBounces' has a wrong offset!");

}
