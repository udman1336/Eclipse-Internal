#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Matchmaking_GameModeButton

#include "Basic.hpp"

#include "Athena_Matchmaking_GameModeButton_classes.hpp"
#include "Athena_Matchmaking_GameModeButton_parameters.hpp"


namespace SDK
{

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "ExecuteUbergraph_Athena_Matchmaking_GameModeButton");

	Params::Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::OnModeButtonHovered(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "OnModeButtonHovered");

	Params::Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature");

	Params::Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "PreConstruct");

	Params::Athena_Matchmaking_GameModeButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*              PlaylistObj                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetupGameModeButton");

	Params::Athena_Matchmaking_GameModeButton_C_SetupGameModeButton Parms{};

	Parms.PlaylistObj = PlaylistObj;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthena_Matchmaking_GameModeButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "OnFocusReceived");

	Params::Athena_Matchmaking_GameModeButton_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*              InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Available                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "IsGameModeAvailable");

	Params::Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable Parms{};

	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::DisableGameModeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "DisableGameModeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::ShowDisabledMessage(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "ShowDisabledMessage");

	Params::Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_Matchmaking_GameModeButton_C::UpdateGameModeAvailibilty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "UpdateGameModeAvailibilty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchmakingOptionsDisplay_v2_C*OwningDisplay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetOwningDisplayWidget");

	Params::Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget Parms{};

	Parms.OwningDisplay = OwningDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetButtonSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    useLargeSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::SetButtonSize(bool useLargeSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetButtonSize");

	Params::Athena_Matchmaking_GameModeButton_C_SetButtonSize Parms{};

	Parms.useLargeSize = useLargeSize;

	UObject::ProcessEvent(Func, &Parms);
}

}
