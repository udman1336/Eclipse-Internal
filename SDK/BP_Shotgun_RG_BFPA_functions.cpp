#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_RG_BFPA

#include "Basic.hpp"

#include "BP_Shotgun_RG_BFPA_classes.hpp"
#include "BP_Shotgun_RG_BFPA_parameters.hpp"


namespace SDK
{

// Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_RG_BFPA_C::ExecuteUbergraph_BP_Shotgun_RG_BFPA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_RG_BFPA_C", "ExecuteUbergraph_BP_Shotgun_RG_BFPA");

	Params::BP_Shotgun_RG_BFPA_C_ExecuteUbergraph_BP_Shotgun_RG_BFPA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
