#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreatPostProcessManagerAndParticleBlueprint

#include "Basic.hpp"

#include "ThreatPostProcessManagerAndParticleBlueprint_classes.hpp"
#include "ThreatPostProcessManagerAndParticleBlueprint_parameters.hpp"


namespace SDK
{

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::ForceUpdateLensEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ForceUpdateLensEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::StartTraceTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "StartTraceTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::VFX_RainTracePeriodic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "VFX_RainTracePeriodic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
// (Event, Protected, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo>      ThreatLocationInfo                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "OnThreatCloudsChanged");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged Parms{};

	Parms.ThreatLocationInfo = std::move(ThreatLocationInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "ReceiveTick");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
// (BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
// (BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "Ramp Up down values on death__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BoxMin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          BoxMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   VolumePlayerCoveragePercentage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatPostProcessManagerAndParticleBlueprint_C", "CalculatePlayerPositionNearBox");

	Params::ThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox Parms{};

	Parms.BoxMin = std::move(BoxMin);
	Parms.BoxMax = std::move(BoxMax);

	UObject::ProcessEvent(Func, &Parms);

	if (VolumePlayerCoveragePercentage != nullptr)
		*VolumePlayerCoveragePercentage = Parms.VolumePlayerCoveragePercentage;
}

}
