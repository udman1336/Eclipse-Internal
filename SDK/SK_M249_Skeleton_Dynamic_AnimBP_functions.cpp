#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_M249_Skeleton_Dynamic_AnimBP

#include "Basic.hpp"

#include "SK_M249_Skeleton_Dynamic_AnimBP_classes.hpp"
#include "SK_M249_Skeleton_Dynamic_AnimBP_parameters.hpp"


namespace SDK
{

// Function SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M249_Skeleton_Dynamic_AnimBP_C::ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_M249_Skeleton_Dynamic_AnimBP_C", "ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP");

	Params::SK_M249_Skeleton_Dynamic_AnimBP_C_ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
