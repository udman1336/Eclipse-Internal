#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AthenaInVehicle

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_AthenaInVehicle.GA_AthenaInVehicle_C
// 0x0030 (0x0B18 - 0x0AE8)
class UGA_AthenaInVehicle_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                  ExitTag;                                           // 0x0AF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_AthenaInVehicle(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AthenaInVehicle_C">();
	}
	static class UGA_AthenaInVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AthenaInVehicle_C>();
	}
};
static_assert(alignof(UGA_AthenaInVehicle_C) == 0x000008, "Wrong alignment on UGA_AthenaInVehicle_C");
static_assert(sizeof(UGA_AthenaInVehicle_C) == 0x000B18, "Wrong size on UGA_AthenaInVehicle_C");
static_assert(offsetof(UGA_AthenaInVehicle_C, UberGraphFrame) == 0x000AF0, "Member 'UGA_AthenaInVehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_AthenaInVehicle_C, ExitTag) == 0x000AF8, "Member 'UGA_AthenaInVehicle_C::ExitTag' has a wrong offset!");

}
