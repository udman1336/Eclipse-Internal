#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityFunctions

#include "Basic.hpp"

#include "AbilityFunctions_classes.hpp"
#include "AbilityFunctions_parameters.hpp"


namespace SDK
{

// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   HitActors                                              (Parm, OutParm, ZeroConstructor)

void UAbilityFunctions_C::DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "DoNOTUse-BuildArrayOfHitActors");

	Params::AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HitActors != nullptr)
		*HitActors = std::move(Parms.HitActors);
}


// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AActor*>                   ArrayToSet                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctions_C::SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class AActor*>& ArrayToSet, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "SetArrayOfHitActors");

	Params::AbilityFunctions_C_SetArrayOfHitActors Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ArrayToSet = std::move(ArrayToSet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ArrayToSet = std::move(Parms.ArrayToSet);
}


// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutTile                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctions_C::ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "ConvertRangeToTiles");

	Params::AbilityFunctions_C_ConvertRangeToTiles Parms{};

	Parms.InRange = InRange;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTile != nullptr)
		*OutTile = Parms.OutTile;
}


// Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MovementDistance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetLocation                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityFunctions_C::GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetProjectedTeleportLocation");

	Params::AbilityFunctions_C_GetProjectedTeleportLocation Parms{};

	Parms.Actor = Actor;
	Parms.MovementDistance = MovementDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAbilityFunctions_C::ShouldHammerHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "ShouldHammerHitsHealRespondToEvent");

	Params::AbilityFunctions_C_ShouldHammerHitsHealRespondToEvent Parms{};

	Parms.Payload = std::move(Payload);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAbilityFunctions_C::ShouldSwordHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "ShouldSwordHitsHealRespondToEvent");

	Params::AbilityFunctions_C_ShouldSwordHitsHealRespondToEvent Parms{};

	Parms.Payload = std::move(Payload);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

