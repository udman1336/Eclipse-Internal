#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerTrapBaseDamageModCalculation

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerTrapBaseDamageModCalculation.PlayerTrapBaseDamageModCalculation_C
// 0x0000 (0x0068 - 0x0068)
class UPlayerTrapBaseDamageModCalculation_C final : public UPlayerTrapBonusModMagnitudeCalculation
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerTrapBaseDamageModCalculation_C">();
	}
	static class UPlayerTrapBaseDamageModCalculation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerTrapBaseDamageModCalculation_C>();
	}
};
static_assert(alignof(UPlayerTrapBaseDamageModCalculation_C) == 0x000008, "Wrong alignment on UPlayerTrapBaseDamageModCalculation_C");
static_assert(sizeof(UPlayerTrapBaseDamageModCalculation_C) == 0x000068, "Wrong size on UPlayerTrapBaseDamageModCalculation_C");

}
