#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorRescuedCounter

#include "Basic.hpp"

#include "SurvivorRescuedCounter_classes.hpp"
#include "SurvivorRescuedCounter_parameters.hpp"


namespace SDK
{

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorRescuedCounter_C::ExecuteUbergraph_SurvivorRescuedCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorRescuedCounter_C", "ExecuteUbergraph_SurvivorRescuedCounter");

	Params::SurvivorRescuedCounter_C_ExecuteUbergraph_SurvivorRescuedCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USurvivorRescuedCounter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorRescuedCounter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SurvivorsRescued                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorRescuedCounter_C::UpdateSurvivorsRescued(int32 SurvivorsRescued)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorRescuedCounter_C", "UpdateSurvivorsRescued");

	Params::SurvivorRescuedCounter_C_UpdateSurvivorsRescued Parms{};

	Parms.SurvivorsRescued = SurvivorsRescued;

	UObject::ProcessEvent(Func, &Parms);
}

}
