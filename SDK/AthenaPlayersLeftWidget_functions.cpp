#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayersLeftWidget

#include "Basic.hpp"

#include "AthenaPlayersLeftWidget_classes.hpp"
#include "AthenaPlayersLeftWidget_parameters.hpp"


namespace SDK
{

// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayersLeftWidget_C::ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "ExecuteUbergraph_AthenaPlayersLeftWidget");

	Params::AthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             PlayersText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayersLeftWidget_C::SetPlayersLeftText(const class FText& PlayersText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "SetPlayersLeftText");

	Params::AthenaPlayersLeftWidget_C_SetPlayersLeftText Parms{};

	Parms.PlayersText = std::move(PlayersText);

	UObject::ProcessEvent(Func, &Parms);
}

}
