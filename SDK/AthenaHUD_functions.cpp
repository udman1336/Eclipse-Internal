#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUD

#include "Basic.hpp"

#include "AthenaHUD_classes.hpp"
#include "AthenaHUD_parameters.hpp"


namespace SDK
{

// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::ExecuteUbergraph_AthenaHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ExecuteUbergraph_AthenaHUD");

	Params::AthenaHUD_C_ExecuteUbergraph_AthenaHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.SetFullScreenMapVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetFullScreenMapVisibility(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetFullScreenMapVisibility");

	Params::AthenaHUD_C_SetFullScreenMapVisibility Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HUDScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::OnHUDScaleChanged(float HUDScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnHUDScaleChanged");

	Params::AthenaHUD_C_OnHUDScaleChanged Parms{};

	Parms.HUDScale = HUDScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.ViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*           ViewModel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::ViewModelChanged(class UAthenaPlayerViewModel* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ViewModelChanged");

	Params::AthenaHUD_C_ViewModelChanged Parms{};

	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.On Team Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::On_Team_Won()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "On Team Won");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleRevived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleRevived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnRevived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnRevived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.On Player Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::On_Player_Won()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "On Player Won");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::PrepareToShowEndGameUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "PrepareToShowEndGameUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "On Player Died");

	Params::AthenaHUD_C_On_Player_Died Parms{};

	Parms.DeathReport = std::move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::Prepare_Game_Over()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Prepare Game Over");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            FailedReason                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             FailureText                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const class FText& FailureText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnUnableToPerformAction");

	Params::AthenaHUD_C_OnUnableToPerformAction Parms{};

	Parms.FailedReason = std::move(FailedReason);
	Parms.FailureText = std::move(FailureText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleInputMethodChanged");

	Params::AthenaHUD_C_HandleInputMethodChanged Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState                State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaHUD_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "PushContentWidgetInternal");

	Params::AthenaHUD_C_PushContentWidgetInternal Parms{};

	Parms.Widget = Widget;
	Parms.State = std::move(State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>           Quests                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaHUD_C::QuestsCompleted(const TArray<class UFortQuestItem*>& Quests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "QuestsCompleted");

	Params::AthenaHUD_C_QuestsCompleted Parms{};

	Parms.Quests = std::move(Quests);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState                            PreviousUIState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::OnEnterState(EFortUIState PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnEnterState");

	Params::AthenaHUD_C_OnEnterState Parms{};

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CursorModeContentCustomWidget                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleCursorModeChanged");

	Params::AthenaHUD_C_HandleCursorModeChanged Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          Quickbar_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleQuickbarSlotFocusSlotChanged(EFortQuickBars Quickbar_Index, int32 Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleQuickbarSlotFocusSlotChanged");

	Params::AthenaHUD_C_HandleQuickbarSlotFocusSlotChanged Parms{};

	Parms.Quickbar_Index = Quickbar_Index;
	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetQuickbarSizes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetQuickbarSizes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnHandleAction
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                      Result                                                 (Parm, OutParm)
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnHandleAction");

	Params::AthenaHUD_C_OnHandleAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTargeting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "OnPlayerTargetingChanged");

	Params::AthenaHUD_C_OnPlayerTargetingChanged Parms{};

	Parms.IsTargeting = IsTargeting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InidicatorsEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleIndicatorModeChanged");

	Params::AthenaHUD_C_HandleIndicatorModeChanged Parms{};

	Parms.InidicatorsEnabled = InidicatorsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetPersistentHUDContentVisibility");

	Params::AthenaHUD_C_SetPersistentHUDContentVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ToggleChat(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ToggleChat");

	Params::AthenaHUD_C_ToggleChat Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleFocusChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleFocusChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                         Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InitialOption                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFirstAccept                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "ShowPicker");

	Params::AthenaHUD_C_ShowPicker Parms{};

	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.IgnoreFirstAccept = IgnoreFirstAccept;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState                State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaHUD_C::PopContentWidgetInternal(const struct FContentPushState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "PopContentWidgetInternal");

	Params::AthenaHUD_C_PopContentWidgetInternal Parms{};

	Parms.State = std::move(State);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            HiddenHUDElementTags                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     HUDElementTagToCheck                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          HUDElement                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "CheckHUDElementVisibility");

	Params::AthenaHUD_C_CheckHUDElementVisibility Parms{};

	Parms.HiddenHUDElementTags = std::move(HiddenHUDElementTags);
	Parms.HUDElementTagToCheck = std::move(HUDElementTagToCheck);
	Parms.HUDElement = HUDElement;

	UObject::ProcessEvent(Func, &Parms);

	HiddenHUDElementTags = std::move(Parms.HiddenHUDElementTags);
	HUDElement = Parms.HUDElement;
}


// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleAircraftModeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandleAircraftModeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetupCameraMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "SetupCameraMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandlePawnSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_VisibilityUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandlePawnSet_VisibilityUpdates(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet_VisibilityUpdates");

	Params::AthenaHUD_C_HandlePawnSet_VisibilityUpdates Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_RCPawnVisibilityUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandlePawnSet_RCPawnVisibilityUpdates(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HandlePawnSet_RCPawnVisibilityUpdates");

	Params::AthenaHUD_C_HandlePawnSet_RCPawnVisibilityUpdates Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaHUD.AthenaHUD_C.GetForceAllowCameraMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ForceAllowCameraMode                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::GetForceAllowCameraMode(bool* ForceAllowCameraMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "GetForceAllowCameraMode");

	Params::AthenaHUD_C_GetForceAllowCameraMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ForceAllowCameraMode != nullptr)
		*ForceAllowCameraMode = Parms.ForceAllowCameraMode;
}


// Function AthenaHUD.AthenaHUD_C.HasClientBeenNotifiedOfWin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bClientWon                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bTeamWon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HasClientBeenNotifiedOfWin(bool* bClientWon, bool* bTeamWon) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaHUD_C", "HasClientBeenNotifiedOfWin");

	Params::AthenaHUD_C_HasClientBeenNotifiedOfWin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bClientWon != nullptr)
		*bClientWon = Parms.bClientWon;

	if (bTeamWon != nullptr)
		*bTeamWon = Parms.bTeamWon;
}

}
