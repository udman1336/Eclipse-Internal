#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_FlingerRanged

#include "Basic.hpp"

#include "GAB_FlingerRanged_classes.hpp"
#include "GAB_FlingerRanged_parameters.hpp"


namespace SDK
{

// Function GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerRanged_C::ExecuteUbergraph_GAB_FlingerRanged(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "ExecuteUbergraph_GAB_FlingerRanged");

	Params::GAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRanged_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_OnEndAbility");

	Params::GAB_FlingerRanged_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerRanged_C::SpawnFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "SpawnFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerRanged_C::StopFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "StopFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_FlingerRanged_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
