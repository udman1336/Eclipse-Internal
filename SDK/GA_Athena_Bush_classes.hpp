#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Bush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Bush.GA_Athena_Bush_C
// 0x0090 (0x0B78 - 0x0AE8)
class UGA_Athena_Bush_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo        AnimMontageInfo;                                   // 0x0AF8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0B60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B64[0x4];                                      // 0x0B64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UseBushObjectiveStat;                              // 0x0B68(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_GA_Athena_Bush(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6FA77BEE4AD5C961BBDC6682C81BD718(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Bush_C">();
	}
	static class UGA_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Bush_C>();
	}
};
static_assert(alignof(UGA_Athena_Bush_C) == 0x000008, "Wrong alignment on UGA_Athena_Bush_C");
static_assert(sizeof(UGA_Athena_Bush_C) == 0x000B78, "Wrong size on UGA_Athena_Bush_C");
static_assert(offsetof(UGA_Athena_Bush_C, UberGraphFrame) == 0x000AF0, "Member 'UGA_Athena_Bush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, AnimMontageInfo) == 0x000AF8, "Member 'UGA_Athena_Bush_C::AnimMontageInfo' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, PlayerPawn) == 0x000B58, "Member 'UGA_Athena_Bush_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, TriggerDuration) == 0x000B60, "Member 'UGA_Athena_Bush_C::TriggerDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Bush_C, UseBushObjectiveStat) == 0x000B68, "Member 'UGA_Athena_Bush_C::UseBushObjectiveStat' has a wrong offset!");

}
