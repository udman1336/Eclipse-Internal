#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericStunned

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C
// 0x0038 (0x0B20 - 0x0AE8)
class UGAB_GenericStunned_C : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 StunActiveEffect;                                  // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveStun;                                        // 0x0B00(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RestoreControlResistEffect;                        // 0x0B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ImpactImmunity;                                 // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;                              // 0x0B18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_GenericStunned(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericStunned_C">();
	}
	static class UGAB_GenericStunned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericStunned_C>();
	}
};
static_assert(alignof(UGAB_GenericStunned_C) == 0x000008, "Wrong alignment on UGAB_GenericStunned_C");
static_assert(sizeof(UGAB_GenericStunned_C) == 0x000B20, "Wrong size on UGAB_GenericStunned_C");
static_assert(offsetof(UGAB_GenericStunned_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_GenericStunned_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, StunActiveEffect) == 0x000AF8, "Member 'UGAB_GenericStunned_C::StunActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, ActiveStun) == 0x000B00, "Member 'UGAB_GenericStunned_C::ActiveStun' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, RestoreControlResistEffect) == 0x000B08, "Member 'UGAB_GenericStunned_C::RestoreControlResistEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, GE_ImpactImmunity) == 0x000B10, "Member 'UGAB_GenericStunned_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, ActiveImpactImmunity) == 0x000B18, "Member 'UGAB_GenericStunned_C::ActiveImpactImmunity' has a wrong offset!");

}
