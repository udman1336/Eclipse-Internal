#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurvivorAvoidEnemy

#include "Basic.hpp"

#include "GAB_SurvivorAvoidEnemy_classes.hpp"
#include "GAB_SurvivorAvoidEnemy_parameters.hpp"


namespace SDK
{

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.ExecuteUbergraph_GAB_SurvivorAvoidEnemy
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::ExecuteUbergraph_GAB_SurvivorAvoidEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "ExecuteUbergraph_GAB_SurvivorAvoidEnemy");

	Params::GAB_SurvivorAvoidEnemy_C_ExecuteUbergraph_GAB_SurvivorAvoidEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorAvoidEnemy_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "K2_OnEndAbility");

	Params::GAB_SurvivorAvoidEnemy_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnQueryFinished");

	Params::GAB_SurvivorAvoidEnemy_C_OnQueryFinished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.UpdateFocalPoint
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::UpdateFocalPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "UpdateFocalPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.TriggerOverwhelmedSpeech
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::TriggerOverwhelmedSpeech()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "TriggerOverwhelmedSpeech");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.TriggerHelpSpeech
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::TriggerHelpSpeech()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "TriggerHelpSpeech");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.StartAvoidMove
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::StartAvoidMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "StartAvoidMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Triggered_F461FD4E44811E3F3E4AFD81EB1A0127
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::Triggered_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "Triggered_F461FD4E44811E3F3E4AFD81EB1A0127");

	Params::GAB_SurvivorAvoidEnemy_C_Triggered_F461FD4E44811E3F3E4AFD81EB1A0127 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127");

	Params::GAB_SurvivorAvoidEnemy_C_Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Completed_F461FD4E44811E3F3E4AFD81EB1A0127
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::Completed_F461FD4E44811E3F3E4AFD81EB1A0127(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "Completed_F461FD4E44811E3F3E4AFD81EB1A0127");

	Params::GAB_SurvivorAvoidEnemy_C_Completed_F461FD4E44811E3F3E4AFD81EB1A0127 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnComplete_6FCA0F06404AB0DEE9586D8157793BFD
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::OnComplete_6FCA0F06404AB0DEE9586D8157793BFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnComplete_6FCA0F06404AB0DEE9586D8157793BFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorAvoidEnemy_C::OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*                    AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorAvoidEnemy_C::OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD(EPathFollowingResult Result, class AAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_SurvivorAvoidEnemy_C", "OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD");

	Params::GAB_SurvivorAvoidEnemy_C_OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD Parms{};

	Parms.Result = Result;
	Parms.AIController = AIController;

	UObject::ProcessEvent(Func, &Parms);
}

}
