#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SmasherTired

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_AIBaseSimpleMontage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C
// 0x0010 (0x0B08 - 0x0AF8)
class UGAB_SmasherTired_C final : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_SmasherTired_C;                 // 0x0AF8(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 GE_SmasherClearChargeEffects;                      // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SmasherTired(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SmasherTired_C">();
	}
	static class UGAB_SmasherTired_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SmasherTired_C>();
	}
};
static_assert(alignof(UGAB_SmasherTired_C) == 0x000008, "Wrong alignment on UGAB_SmasherTired_C");
static_assert(sizeof(UGAB_SmasherTired_C) == 0x000B08, "Wrong size on UGAB_SmasherTired_C");
static_assert(offsetof(UGAB_SmasherTired_C, UberGraphFrame_GAB_SmasherTired_C) == 0x000AF8, "Member 'UGAB_SmasherTired_C::UberGraphFrame_GAB_SmasherTired_C' has a wrong offset!");
static_assert(offsetof(UGAB_SmasherTired_C, GE_SmasherClearChargeEffects) == 0x000B00, "Member 'UGAB_SmasherTired_C::GE_SmasherClearChargeEffects' has a wrong offset!");

}
