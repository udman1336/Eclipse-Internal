#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions

#include "Basic.hpp"

#include "TabVideoOptions_classes.hpp"
#include "TabVideoOptions_parameters.hpp"


namespace SDK
{

// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "ExecuteUbergraph_TabVideoOptions");

	Params::TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::OnGameUserSettingsUINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "OnGameUserSettingsUINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.3D Resolution Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::ThreeD_Resolution_Changed(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "3D Resolution Changed");

	Params::TabVideoOptions_C_ThreeD_Resolution_Changed Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "PreConstruct");

	Params::TabVideoOptions_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_1(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_1");

	Params::TabVideoOptions_C_CustomEvent_1 Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent");

	Params::TabVideoOptions_C_CustomEvent Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Motion_Blur_Changed(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Motion Blur Changed");

	Params::TabVideoOptions_C_Motion_Blur_Changed Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::VSync_Changed(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "VSync Changed");

	Params::TabVideoOptions_C_VSync_Changed Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::View_Distance_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "View Distance Changed");

	Params::TabVideoOptions_C_View_Distance_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_23(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_23");

	Params::TabVideoOptions_C_CustomEvent_23 Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_22(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_22");

	Params::TabVideoOptions_C_CustomEvent_22 Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Window_Mode__Changed(int32 Selected_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Window Mode  Changed");

	Params::TabVideoOptions_C_Window_Mode__Changed Parms{};

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Quality_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Quality Changed");

	Params::TabVideoOptions_C_Quality_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Effects_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Effects Changed");

	Params::TabVideoOptions_C_Effects_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Post_Processing_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Post-Processing Changed");

	Params::TabVideoOptions_C_Post_Processing_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Textures_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Textures Changed");

	Params::TabVideoOptions_C_Textures_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Anti_Aliasing_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Anti-Aliasing Changed");

	Params::TabVideoOptions_C_Anti_Aliasing_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tab_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Shadows_Changed(int32 Tab_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Shadows Changed");

	Params::TabVideoOptions_C_Shadows_Changed Parms{};

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Initialize_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Initialize Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reset_Quality_Selector                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::Update_Data(bool Reset_Quality_Selector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Update Data");

	Params::TabVideoOptions_C_Update_Data Parms{};

	Parms.Reset_Quality_Selector = Reset_Quality_Selector;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Initialize_Display_Resolutions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Initialize Display Resolutions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOverallQualityLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::UpdateOverallQualityLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "UpdateOverallQualityLevel");

	UObject::ProcessEvent(Func, nullptr);
}

}
