#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoEntry

#include "Basic.hpp"

#include "InfoEntry_classes.hpp"
#include "InfoEntry_parameters.hpp"


namespace SDK
{

// Function InfoEntry.InfoEntry_C.ExecuteUbergraph_InfoEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::ExecuteUbergraph_InfoEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "ExecuteUbergraph_InfoEntry");

	Params::InfoEntry_C_ExecuteUbergraph_InfoEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");

	Params::InfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "SetData");

	Params::InfoEntry_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInfoEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInfoEntry_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInfoEntry_C::ToggleExpansion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "ToggleExpansion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInfoEntry_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "SetSelected");

	Params::InfoEntry_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndexInList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfoEntry_C::SetIndexInList(int32 InIndexInList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "SetIndexInList");

	Params::InfoEntry_C_SetIndexInList Parms{};

	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInfoEntry_C::SetExpanded(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "SetExpanded");

	Params::InfoEntry_C_SetExpanded Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(class UUserWidget* Widget)>Callback                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UInfoEntry_C::RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "RegisterOnClicked");

	Params::InfoEntry_C_RegisterOnClicked Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InfoEntry.InfoEntry_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInfoEntry_C::Private_OnExpanderArrowShiftClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "Private_OnExpanderArrowShiftClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UInfoEntry_C::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "OnReleaseToPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UInfoEntry_C::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "OnAcquireFromPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InfoEntry.InfoEntry_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UInfoEntry_C::GetData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "GetData");

	Params::InfoEntry_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InfoEntry.InfoEntry_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInfoEntry_C::IsItemExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "IsItemExpanded");

	Params::InfoEntry_C_IsItemExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InfoEntry.InfoEntry_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UInfoEntry_C::DoesItemHaveChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "DoesItemHaveChildren");

	Params::InfoEntry_C_DoesItemHaveChildren Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InfoEntry.InfoEntry_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UInfoEntry_C::GetIndentLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoEntry_C", "GetIndentLevel");

	Params::InfoEntry_C_GetIndentLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
