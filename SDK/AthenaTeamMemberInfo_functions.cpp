#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberInfo

#include "Basic.hpp"

#include "AthenaTeamMemberInfo_classes.hpp"
#include "AthenaTeamMemberInfo_parameters.hpp"


namespace SDK
{

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ExecuteUbergraph_AthenaTeamMemberInfo");

	Params::AthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapIndicatorPositionChanged
// (Event, Protected, BlueprintEvent)

void UAthenaTeamMemberInfo_C::MapIndicatorPositionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MapIndicatorPositionChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           CurrentPlatform                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerPlatformChanged(const class FString& CurrentPlatform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerPlatformChanged");

	Params::AthenaTeamMemberInfo_C_PlayerPlatformChanged Parms{};

	Parms.CurrentPlatform = std::move(CurrentPlatform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Disconnected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DisconnectedStateChanged(bool Disconnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisconnectedStateChanged");

	Params::AthenaTeamMemberInfo_C_DisconnectedStateChanged Parms{};

	Parms.Disconnected = Disconnected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_DeadStateChanged_0                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DeadStateChanged(bool Param_DeadStateChanged_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DeadStateChanged");

	Params::AthenaTeamMemberInfo_C_DeadStateChanged Parms{};

	Parms.Param_DeadStateChanged_0 = Param_DeadStateChanged_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Muted_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::MutedStateChanged(bool Muted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MutedStateChanged");

	Params::AthenaTeamMemberInfo_C_MutedStateChanged Parms{};

	Parms.Muted_0 = Muted_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ShieldPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::HitPointsChanged(float HealthPercent, float ShieldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "HitPointsChanged");

	Params::AthenaTeamMemberInfo_C_HitPointsChanged Parms{};

	Parms.HealthPercent = HealthPercent;
	Parms.ShieldPercent = ShieldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerNameChanged(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerNameChanged");

	Params::AthenaTeamMemberInfo_C_PlayerNameChanged Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bReviving                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(bool bReviving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BeingRevivedStateChanged");

	Params::AthenaTeamMemberInfo_C_BeingRevivedStateChanged Parms{};

	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bDBNO                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(bool bDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DBNOStateChanged");

	Params::AthenaTeamMemberInfo_C_DBNOStateChanged Parms{};

	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bTalking                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(bool bTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "TalkingStateChanged");

	Params::AthenaTeamMemberInfo_C_TalkingStateChanged Parms{};

	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriend_NoAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisplayAddFriend_NoAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::AthenaTeamMemberInfo_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriendIfApplicable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisplayAddFriendIfApplicable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetHealth");

	Params::AthenaTeamMemberInfo_C_SetHealth Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetShield");

	Params::AthenaTeamMemberInfo_C_SetShield Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDead");

	Params::AthenaTeamMemberInfo_C_SetDead Parms{};

	Parms.Dead = Dead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DBNO                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDBNO");

	Params::AthenaTeamMemberInfo_C_SetDBNO Parms{};

	Parms.DBNO = DBNO;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reviving                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetReviving");

	Params::AthenaTeamMemberInfo_C_SetReviving Parms{};

	Parms.Reviving = Reviving;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewMuted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetMuted");

	Params::AthenaTeamMemberInfo_C_SetMuted Parms{};

	Parms.NewMuted = NewMuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateMicIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewTalking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetTalking");

	Params::AthenaTeamMemberInfo_C_SetTalking Parms{};

	Parms.NewTalking = NewTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetPlayerDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanFriend_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::CanFriend(bool* CanFriend_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "CanFriend");

	Params::AthenaTeamMemberInfo_C_CanFriend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanFriend_0 != nullptr)
		*CanFriend_0 = Parms.CanFriend_0;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SendFriendInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SendFriendInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateUniqueID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateUniqueID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::InitSpeakerMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "InitSpeakerMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             AthenaGameState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::Mapping(class AFortGameStateAthena* AthenaGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Mapping");

	Params::AthenaTeamMemberInfo_C_Mapping Parms{};

	Parms.AthenaGameState = AthenaGameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::MapPingTimeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MapPingTimeOut");

	UObject::ProcessEvent(Func, nullptr);
}

}
