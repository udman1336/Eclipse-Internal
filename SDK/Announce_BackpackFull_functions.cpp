#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_BackpackFull

#include "Basic.hpp"

#include "Announce_BackpackFull_classes.hpp"
#include "Announce_BackpackFull_parameters.hpp"


namespace SDK
{

// Function Announce_BackpackFull.Announce_BackpackFull_C.ExecuteUbergraph_Announce_BackpackFull
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_BackpackFull_C::ExecuteUbergraph_Announce_BackpackFull(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BackpackFull_C", "ExecuteUbergraph_Announce_BackpackFull");

	Params::Announce_BackpackFull_C_ExecuteUbergraph_Announce_BackpackFull Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_BackpackFull.Announce_BackpackFull_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_BackpackFull_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BackpackFull_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_BackpackFull.Announce_BackpackFull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_BackpackFull_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BackpackFull_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
