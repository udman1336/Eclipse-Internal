#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_TakerMelee

#include "Basic.hpp"

#include "GAB_TakerMeleeStun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_TakerMelee.GAB_TakerMelee_C
// 0x0000 (0x0B28 - 0x0B28)
class UGAB_TakerMelee_C final : public UGAB_TakerMeleeStun_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_TakerMelee_C">();
	}
	static class UGAB_TakerMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_TakerMelee_C>();
	}
};
static_assert(alignof(UGAB_TakerMelee_C) == 0x000008, "Wrong alignment on UGAB_TakerMelee_C");
static_assert(sizeof(UGAB_TakerMelee_C) == 0x000B28, "Wrong size on UGAB_TakerMelee_C");

}

