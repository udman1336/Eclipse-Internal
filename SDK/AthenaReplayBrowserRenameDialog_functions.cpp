#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserRenameDialog

#include "Basic.hpp"

#include "AthenaReplayBrowserRenameDialog_classes.hpp"
#include "AthenaReplayBrowserRenameDialog_parameters.hpp"


namespace SDK
{

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.ExecuteUbergraph_AthenaReplayBrowserRenameDialog
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::ExecuteUbergraph_AthenaReplayBrowserRenameDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "ExecuteUbergraph_AthenaReplayBrowserRenameDialog");

	Params::AthenaReplayBrowserRenameDialog_C_ExecuteUbergraph_AthenaReplayBrowserRenameDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature");

	Params::AthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::AthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::AthenaReplayBrowserRenameDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaReplayBrowserRenameDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaReplayBrowserRenameDialog_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserRenameDialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "PreConstruct");

	Params::AthenaReplayBrowserRenameDialog_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.CancelRename
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayBrowserRenameDialog_C::CancelRename()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "CancelRename");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.TapToClose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaReplayBrowserRenameDialog_C::TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "TapToClose");

	Params::AthenaReplayBrowserRenameDialog_C_TapToClose Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
