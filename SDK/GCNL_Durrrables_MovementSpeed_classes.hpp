#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Durrrables_MovementSpeed

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C
// 0x0040 (0x0480 - 0x0440)
class AGCNL_Durrrables_MovementSpeed_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class FName                                   LeftFootAttachName;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightFootAttachName;                               // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MovementSpeedParticleSystem;                       // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PickupFX;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        EarSteamParticleSystem;                            // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Durrrables_MovementSpeed(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Durrrables_MovementSpeed_C">();
	}
	static class AGCNL_Durrrables_MovementSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Durrrables_MovementSpeed_C>();
	}
};
static_assert(alignof(AGCNL_Durrrables_MovementSpeed_C) == 0x000010, "Wrong alignment on AGCNL_Durrrables_MovementSpeed_C");
static_assert(sizeof(AGCNL_Durrrables_MovementSpeed_C) == 0x000480, "Wrong size on AGCNL_Durrrables_MovementSpeed_C");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, UberGraphFrame) == 0x000440, "Member 'AGCNL_Durrrables_MovementSpeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, LeftFootAttachName) == 0x000448, "Member 'AGCNL_Durrrables_MovementSpeed_C::LeftFootAttachName' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, RightFootAttachName) == 0x000450, "Member 'AGCNL_Durrrables_MovementSpeed_C::RightFootAttachName' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, MovementSpeedParticleSystem) == 0x000458, "Member 'AGCNL_Durrrables_MovementSpeed_C::MovementSpeedParticleSystem' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, PickupFX) == 0x000460, "Member 'AGCNL_Durrrables_MovementSpeed_C::PickupFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, EarSteamParticleSystem) == 0x000468, "Member 'AGCNL_Durrrables_MovementSpeed_C::EarSteamParticleSystem' has a wrong offset!");
static_assert(offsetof(AGCNL_Durrrables_MovementSpeed_C, TargetActor) == 0x000470, "Member 'AGCNL_Durrrables_MovementSpeed_C::TargetActor' has a wrong offset!");

}
