#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TakerDirectDamage

#include "Basic.hpp"

#include "GE_DirectCreatureDamage_DoNotDamageObjectives_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_TakerDirectDamage.GE_TakerDirectDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGE_TakerDirectDamage_C final : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TakerDirectDamage_C">();
	}
	static class UGE_TakerDirectDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TakerDirectDamage_C>();
	}
};
static_assert(alignof(UGE_TakerDirectDamage_C) == 0x000010, "Wrong alignment on UGE_TakerDirectDamage_C");
static_assert(sizeof(UGE_TakerDirectDamage_C) == 0x000670, "Wrong size on UGE_TakerDirectDamage_C");

}
