#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_ImpactImmunity

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_ImpactImmunity.GE_ImpactImmunity_C
// 0x0000 (0x0670 - 0x0670)
class UGE_ImpactImmunity_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ImpactImmunity_C">();
	}
	static class UGE_ImpactImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ImpactImmunity_C>();
	}
};
static_assert(alignof(UGE_ImpactImmunity_C) == 0x000010, "Wrong alignment on UGE_ImpactImmunity_C");
static_assert(sizeof(UGE_ImpactImmunity_C) == 0x000670, "Wrong size on UGE_ImpactImmunity_C");

}
