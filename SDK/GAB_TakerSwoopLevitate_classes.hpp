#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_TakerSwoopLevitate

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C
// 0x0058 (0x0B40 - 0x0AE8)
class UGAB_TakerSwoopLevitate_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	struct FVector                                Pawn_Destination;                                  // 0x0AF8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pawn_Location;                                     // 0x0B04(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B11[0x7];                                      // 0x0B11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATakerPawn_C*                           Taker;                                             // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FarAngleForTakerToLevitateTo;                      // 0x0B20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FarDistance;                                       // 0x0B24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloseAngleForTakerToLevitateTo;                    // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloseDistance;                                     // 0x0B2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TakerCollisionProfileWhenSwooping;                 // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LevitateAnimationTranslationDistance;              // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugLevitateStartTime;                            // 0x0B3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_TakerSwoopLevitate(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void EventReceived_9815869441DE62BDFB6A3794B3593B2E(const struct FGameplayEventData& Payload);
	void OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD();
	void OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_TakerSwoopLevitate_C">();
	}
	static class UGAB_TakerSwoopLevitate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_TakerSwoopLevitate_C>();
	}
};
static_assert(alignof(UGAB_TakerSwoopLevitate_C) == 0x000008, "Wrong alignment on UGAB_TakerSwoopLevitate_C");
static_assert(sizeof(UGAB_TakerSwoopLevitate_C) == 0x000B40, "Wrong size on UGAB_TakerSwoopLevitate_C");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, UberGraphFrame) == 0x000AF0, "Member 'UGAB_TakerSwoopLevitate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, Pawn_Destination) == 0x000AF8, "Member 'UGAB_TakerSwoopLevitate_C::Pawn_Destination' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, Pawn_Location) == 0x000B04, "Member 'UGAB_TakerSwoopLevitate_C::Pawn_Location' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, Debug) == 0x000B10, "Member 'UGAB_TakerSwoopLevitate_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, Taker) == 0x000B18, "Member 'UGAB_TakerSwoopLevitate_C::Taker' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, FarAngleForTakerToLevitateTo) == 0x000B20, "Member 'UGAB_TakerSwoopLevitate_C::FarAngleForTakerToLevitateTo' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, FarDistance) == 0x000B24, "Member 'UGAB_TakerSwoopLevitate_C::FarDistance' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, CloseAngleForTakerToLevitateTo) == 0x000B28, "Member 'UGAB_TakerSwoopLevitate_C::CloseAngleForTakerToLevitateTo' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, CloseDistance) == 0x000B2C, "Member 'UGAB_TakerSwoopLevitate_C::CloseDistance' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, TakerCollisionProfileWhenSwooping) == 0x000B30, "Member 'UGAB_TakerSwoopLevitate_C::TakerCollisionProfileWhenSwooping' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, LevitateAnimationTranslationDistance) == 0x000B38, "Member 'UGAB_TakerSwoopLevitate_C::LevitateAnimationTranslationDistance' has a wrong offset!");
static_assert(offsetof(UGAB_TakerSwoopLevitate_C, DebugLevitateStartTime) == 0x000B3C, "Member 'UGAB_TakerSwoopLevitate_C::DebugLevitateStartTime' has a wrong offset!");

}
