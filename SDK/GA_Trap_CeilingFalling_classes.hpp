#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_CeilingFalling

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_CeilingFalling.GA_Trap_CeilingFalling_C
// 0x0000 (0x0B30 - 0x0B30)
class UGA_Trap_CeilingFalling_C final : public UFortGameplayAbility_CeilingFallingTrap
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_CeilingFalling_C">();
	}
	static class UGA_Trap_CeilingFalling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_CeilingFalling_C>();
	}
};
static_assert(alignof(UGA_Trap_CeilingFalling_C) == 0x000008, "Wrong alignment on UGA_Trap_CeilingFalling_C");
static_assert(sizeof(UGA_Trap_CeilingFalling_C) == 0x000B30, "Wrong size on UGA_Trap_CeilingFalling_C");

}

