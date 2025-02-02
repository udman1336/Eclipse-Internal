#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LaserDamage

#include "Basic.hpp"

#include "GA_Ranged_GenericDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LaserDamage.GA_LaserDamage_C
// 0x0000 (0x0B38 - 0x0B38)
class UGA_LaserDamage_C final : public UGA_Ranged_GenericDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LaserDamage_C">();
	}
	static class UGA_LaserDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LaserDamage_C>();
	}
};
static_assert(alignof(UGA_LaserDamage_C) == 0x000008, "Wrong alignment on UGA_LaserDamage_C");
static_assert(sizeof(UGA_LaserDamage_C) == 0x000B38, "Wrong size on UGA_LaserDamage_C");

}

