#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TODM_Disabled

#include "Basic.hpp"

#include "TODM_Disabled_classes.hpp"
#include "TODM_Disabled_parameters.hpp"


namespace SDK
{

// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATODM_Disabled_C::ExecuteUbergraph_TODM_Disabled(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "ExecuteUbergraph_TODM_Disabled");

	Params::TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATODM_Disabled_C::DisableLightAndFog(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "DisableLightAndFog");

	Params::TODM_Disabled_C_DisableLightAndFog Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATODM_Disabled_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATODM_Disabled_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
