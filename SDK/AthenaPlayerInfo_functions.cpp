#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerInfo

#include "Basic.hpp"

#include "AthenaPlayerInfo_classes.hpp"
#include "AthenaPlayerInfo_parameters.hpp"


namespace SDK
{

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerInfo_C::ExecuteUbergraph_AthenaPlayerInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerInfo_C", "ExecuteUbergraph_AthenaPlayerInfo");

	Params::AthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              PlayerInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UAthenaPlayerInfo_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerInfo_C", "HandlePlayerStateChanged");

	Params::AthenaPlayerInfo_C_HandlePlayerStateChanged Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              Player_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UAthenaPlayerInfo_C::UpdateLocalPlayerInfo(struct FFortTeamMemberInfo& Player_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerInfo_C", "UpdateLocalPlayerInfo");

	Params::AthenaPlayerInfo_C_UpdateLocalPlayerInfo Parms{};

	Parms.Player_Info = std::move(Player_Info);

	UObject::ProcessEvent(Func, &Parms);

	Player_Info = std::move(Parms.Player_Info);
}

}
