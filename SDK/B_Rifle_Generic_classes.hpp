#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rifle_Generic

#include "Basic.hpp"

#include "B_Ranged_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Rifle_Generic.B_Rifle_Generic_C
// 0x0000 (0x0E58 - 0x0E58)
class AB_Rifle_Generic_C : public AB_Ranged_Generic_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rifle_Generic_C">();
	}
	static class AB_Rifle_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rifle_Generic_C>();
	}
};
static_assert(alignof(AB_Rifle_Generic_C) == 0x000008, "Wrong alignment on AB_Rifle_Generic_C");
static_assert(sizeof(AB_Rifle_Generic_C) == 0x000E58, "Wrong size on AB_Rifle_Generic_C");

}
