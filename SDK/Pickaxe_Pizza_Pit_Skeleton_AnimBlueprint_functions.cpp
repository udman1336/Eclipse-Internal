#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_classes.hpp"
#include "Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint");

	Params::Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
