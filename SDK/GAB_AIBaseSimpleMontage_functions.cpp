#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AIBaseSimpleMontage

#include "Basic.hpp"

#include "GAB_AIBaseSimpleMontage_classes.hpp"
#include "GAB_AIBaseSimpleMontage_parameters.hpp"


namespace SDK
{

// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.ExecuteUbergraph_GAB_AIBaseSimpleMontage
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseSimpleMontage_C::ExecuteUbergraph_GAB_AIBaseSimpleMontage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AIBaseSimpleMontage_C", "ExecuteUbergraph_GAB_AIBaseSimpleMontage");

	Params::GAB_AIBaseSimpleMontage_C_ExecuteUbergraph_GAB_AIBaseSimpleMontage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Cancelled_19E6A1264ED43B37D77327A113073715
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseSimpleMontage_C::Cancelled_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AIBaseSimpleMontage_C", "Cancelled_19E6A1264ED43B37D77327A113073715");

	Params::GAB_AIBaseSimpleMontage_C_Cancelled_19E6A1264ED43B37D77327A113073715 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Completed_19E6A1264ED43B37D77327A113073715
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseSimpleMontage_C::Completed_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AIBaseSimpleMontage_C", "Completed_19E6A1264ED43B37D77327A113073715");

	Params::GAB_AIBaseSimpleMontage_C_Completed_19E6A1264ED43B37D77327A113073715 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_AIBaseSimpleMontage_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AIBaseSimpleMontage_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Triggered_19E6A1264ED43B37D77327A113073715
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIBaseSimpleMontage_C::Triggered_19E6A1264ED43B37D77327A113073715(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AIBaseSimpleMontage_C", "Triggered_19E6A1264ED43B37D77327A113073715");

	Params::GAB_AIBaseSimpleMontage_C_Triggered_19E6A1264ED43B37D77327A113073715 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

