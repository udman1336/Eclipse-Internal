#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_InstantHeal

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_InstantHeal.GAB_InstantHeal_C.ExecuteUbergraph_GAB_InstantHeal
// 0x0010 (0x0010 - 0x0000)
struct GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal) == 0x000004, "Wrong alignment on GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal");
static_assert(sizeof(GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal) == 0x000010, "Wrong size on GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal");
static_assert(offsetof(GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal, EntryPoint) == 0x000000, "Member 'GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal, CallFunc_K2_CommitAbility_ReturnValue) == 0x00000C, "Member 'GAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

}

