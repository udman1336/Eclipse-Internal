#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_HuskBaseRadialMelee

#include "Basic.hpp"

#include "GAB_HuskBaseRadialMelee_classes.hpp"
#include "GAB_HuskBaseRadialMelee_parameters.hpp"


namespace SDK
{

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.ExecuteUbergraph_GAB_HuskBaseRadialMelee
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskBaseRadialMelee_C::ExecuteUbergraph_GAB_HuskBaseRadialMelee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "ExecuteUbergraph_GAB_HuskBaseRadialMelee");

	Params::GAB_HuskBaseRadialMelee_C_ExecuteUbergraph_GAB_HuskBaseRadialMelee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskBaseRadialMelee_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskBaseRadialMelee_C::Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D");

	Params::GAB_HuskBaseRadialMelee_C_Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskBaseRadialMelee_C::Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D");

	Params::GAB_HuskBaseRadialMelee_C_Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Completed_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskBaseRadialMelee_C::Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "Completed_A0D25C0C4C9CDEEB0EB0018B3334307D");

	Params::GAB_HuskBaseRadialMelee_C_Completed_A0D25C0C4C9CDEEB0EB0018B3334307D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGAB_HuskBaseRadialMelee_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_HuskBaseRadialMelee_C", "K2_CanActivateAbility");

	Params::GAB_HuskBaseRadialMelee_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
