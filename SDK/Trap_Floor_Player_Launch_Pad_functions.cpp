#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Launch_Pad

#include "Basic.hpp"

#include "Trap_Floor_Player_Launch_Pad_classes.hpp"
#include "Trap_Floor_Player_Launch_Pad_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Launch_Pad
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Launch_Pad_C::ExecuteUbergraph_Trap_Floor_Player_Launch_Pad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "ExecuteUbergraph_Trap_Floor_Player_Launch_Pad");

	Params::Trap_Floor_Player_Launch_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Launch_Pad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.TriggerLaunchEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Launch_Pad_C::TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "TriggerLaunchEffects");

	Params::Trap_Floor_Player_Launch_Pad_C_TriggerLaunchEffects Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Launch_Pad_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Launch_Pad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Launch_Pad_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	Params::Trap_Floor_Player_Launch_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Launch_Pad_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Launch_Pad_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Launch_Pad_C::OnReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "OnReloadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Launch_Pad_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Launch_Pad_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
