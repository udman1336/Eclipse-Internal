#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Weapon_Mimic

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Weapon_Mimic.GA_Weapon_Mimic_C
// 0x0220 (0x0D08 - 0x0AE8)
class UGA_Weapon_Mimic_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	float                                         Default_Duration;                                  // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pulse_Duration;                                    // 0x0AFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0B00(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_AutomatedDefenses;                              // 0x0BB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 B_Prj_Mimic_Chest;                                 // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Prj_BR_HolderSpeed;                                // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Prj_BR_Holder_Gravity;                             // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventActivation;                                   // 0x0BE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0BE8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_BottleRocket_Explode;                           // 0x0BF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_ThrowDown;                                       // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IFFCoding;                                         // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C01[0x3];                                      // 0x0C01(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeTime;                                          // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_BottleRocketHolder_Explode;                     // 0x0C08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           NewVar;                                            // 0x0C10(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                        P_MuzzleFlash;                                     // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Muzzle;                                         // 0x0C30(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           NewVar0;                                           // 0x0C38(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                 NewVar1;                                           // 0x0C50(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_GA_Weapon_Mimic(int32 EntryPoint);
	void Bounced_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Cancelled_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Created_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Destroyed_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Exploded_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion);
	void Stopped_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Touched_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData);
	void Triggered_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Weapon_Mimic_C">();
	}
	static class UGA_Weapon_Mimic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Weapon_Mimic_C>();
	}
};
static_assert(alignof(UGA_Weapon_Mimic_C) == 0x000008, "Wrong alignment on UGA_Weapon_Mimic_C");
static_assert(sizeof(UGA_Weapon_Mimic_C) == 0x000D08, "Wrong size on UGA_Weapon_Mimic_C");
static_assert(offsetof(UGA_Weapon_Mimic_C, UberGraphFrame) == 0x000AF0, "Member 'UGA_Weapon_Mimic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, Default_Duration) == 0x000AF8, "Member 'UGA_Weapon_Mimic_C::Default_Duration' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, Pulse_Duration) == 0x000AFC, "Member 'UGA_Weapon_Mimic_C::Pulse_Duration' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, EventData) == 0x000B00, "Member 'UGA_Weapon_Mimic_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, FortPlayerPawn) == 0x000BA8, "Member 'UGA_Weapon_Mimic_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, TC_AutomatedDefenses) == 0x000BB0, "Member 'UGA_Weapon_Mimic_C::TC_AutomatedDefenses' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, B_Prj_Mimic_Chest) == 0x000BD0, "Member 'UGA_Weapon_Mimic_C::B_Prj_Mimic_Chest' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, Prj_BR_HolderSpeed) == 0x000BD8, "Member 'UGA_Weapon_Mimic_C::Prj_BR_HolderSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, Prj_BR_Holder_Gravity) == 0x000BDC, "Member 'UGA_Weapon_Mimic_C::Prj_BR_Holder_Gravity' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, EventActivation) == 0x000BE0, "Member 'UGA_Weapon_Mimic_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, EventComplete) == 0x000BE8, "Member 'UGA_Weapon_Mimic_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, EC_BottleRocket_Explode) == 0x000BF0, "Member 'UGA_Weapon_Mimic_C::EC_BottleRocket_Explode' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, M_ThrowDown) == 0x000BF8, "Member 'UGA_Weapon_Mimic_C::M_ThrowDown' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, IFFCoding) == 0x000C00, "Member 'UGA_Weapon_Mimic_C::IFFCoding' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, LifeTime) == 0x000C04, "Member 'UGA_Weapon_Mimic_C::LifeTime' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, EC_BottleRocketHolder_Explode) == 0x000C08, "Member 'UGA_Weapon_Mimic_C::EC_BottleRocketHolder_Explode' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, NewVar) == 0x000C10, "Member 'UGA_Weapon_Mimic_C::NewVar' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, P_MuzzleFlash) == 0x000C28, "Member 'UGA_Weapon_Mimic_C::P_MuzzleFlash' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, GC_Muzzle) == 0x000C30, "Member 'UGA_Weapon_Mimic_C::GC_Muzzle' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, NewVar0) == 0x000C38, "Member 'UGA_Weapon_Mimic_C::NewVar0' has a wrong offset!");
static_assert(offsetof(UGA_Weapon_Mimic_C, NewVar1) == 0x000C50, "Member 'UGA_Weapon_Mimic_C::NewVar1' has a wrong offset!");

}
