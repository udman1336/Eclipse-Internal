#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResolutionScaleSlider

#include "Basic.hpp"

#include "ResolutionScaleSlider_classes.hpp"
#include "ResolutionScaleSlider_parameters.hpp"


namespace SDK
{

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.ExecuteUbergraph_ResolutionScaleSlider
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionScaleSlider_C::ExecuteUbergraph_ResolutionScaleSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "ExecuteUbergraph_ResolutionScaleSlider");

	Params::ResolutionScaleSlider_C_ExecuteUbergraph_ResolutionScaleSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::ResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	Params::ResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResolutionScaleSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "OnMouseEnter");

	Params::ResolutionScaleSlider_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResolutionScaleSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "OnMouseLeave");

	Params::ResolutionScaleSlider_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResolutionScaleSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Update Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Slider_Text                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Hover_Text_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*                 Tooltip_Text_Block                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionScaleSlider_C::Update_Slider(const class FText& Slider_Text, const class FText& Hover_Text_0, class UCommonTextBlock* Tooltip_Text_Block)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "Update Slider");

	Params::ResolutionScaleSlider_C_Update_Slider Parms{};

	Parms.Slider_Text = std::move(Slider_Text);
	Parms.Hover_Text_0 = std::move(Hover_Text_0);
	Parms.Tooltip_Text_Block = Tooltip_Text_Block;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::Center_on_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "Center on Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UResolutionScaleSlider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "OnFocusReceived");

	Params::ResolutionScaleSlider_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Set Brightness
// (Public, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::Set_Brightness()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "Set Brightness");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.RefreshRenderScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::RefreshRenderScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionScaleSlider_C", "RefreshRenderScale");

	UObject::ProcessEvent(Func, nullptr);
}

}
