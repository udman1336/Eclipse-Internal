#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pistol_Revolver_SideAction_AnimBP

#include "Basic.hpp"

#include "Pistol_Revolver_SideAction_AnimBP_classes.hpp"
#include "Pistol_Revolver_SideAction_AnimBP_parameters.hpp"


namespace SDK
{

// Function Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPistol_Revolver_SideAction_AnimBP_C::ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP_C", "ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP");

	Params::Pistol_Revolver_SideAction_AnimBP_C_ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
