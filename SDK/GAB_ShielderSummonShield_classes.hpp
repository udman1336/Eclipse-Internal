#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_ShielderSummonShield

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_ShielderSummonShield.GAB_ShielderSummonShield_C
// 0x0018 (0x0B00 - 0x0AE8)
class UGAB_ShielderSummonShield_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	class AShielderPawn_C*                        Shielder;                                          // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_ShielderSummonShield(int32 EntryPoint);
	void Cancelled_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Triggered_A740968F4C3C1AF2475795BD1818ADA3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_ShielderSummonShield_C">();
	}
	static class UGAB_ShielderSummonShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_ShielderSummonShield_C>();
	}
};
static_assert(alignof(UGAB_ShielderSummonShield_C) == 0x000008, "Wrong alignment on UGAB_ShielderSummonShield_C");
static_assert(sizeof(UGAB_ShielderSummonShield_C) == 0x000B00, "Wrong size on UGAB_ShielderSummonShield_C");
static_assert(offsetof(UGAB_ShielderSummonShield_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_ShielderSummonShield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_ShielderSummonShield_C, Shielder) == 0x000AF8, "Member 'UGAB_ShielderSummonShield_C::Shielder' has a wrong offset!");

}

