#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkTierWidgetNew

#include "Basic.hpp"

#include "PerkTierWidgetNew_classes.hpp"
#include "PerkTierWidgetNew_parameters.hpp"


namespace SDK
{

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkTierWidgetNew_C::ExecuteUbergraph_PerkTierWidgetNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkTierWidgetNew_C", "ExecuteUbergraph_PerkTierWidgetNew");

	Params::PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                      Perk                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortPerkWidget_NUI*              PerkWidget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkTierWidgetNew_C::OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkTierWidgetNew_C", "OnGeneratePerk");

	Params::PerkTierWidgetNew_C_OnGeneratePerk Parms{};

	Parms.Perk = std::move(Perk);
	Parms.PerkWidget_0 = PerkWidget_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkTierWidgetNew_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkTierWidgetNew_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIncludeName_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIncludeDescription_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortBrushSize                          IconSize_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerkTier                  FortPerkTier_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPerkTierWidgetNew_C::InitializeSettings(bool bIncludeName_0, bool bIncludeDescription_0, EFortBrushSize IconSize_0, const struct FFortUIPerkTier& FortPerkTier_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkTierWidgetNew_C", "InitializeSettings");

	Params::PerkTierWidgetNew_C_InitializeSettings Parms{};

	Parms.bIncludeName_0 = bIncludeName_0;
	Parms.bIncludeDescription_0 = bIncludeDescription_0;
	Parms.IconSize_0 = IconSize_0;
	Parms.FortPerkTier_0 = std::move(FortPerkTier_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
