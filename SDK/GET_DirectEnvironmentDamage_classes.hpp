#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_DirectEnvironmentDamage

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGET_DirectEnvironmentDamage_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectEnvironmentDamage_C">();
	}
	static class UGET_DirectEnvironmentDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectEnvironmentDamage_C>();
	}
};
static_assert(alignof(UGET_DirectEnvironmentDamage_C) == 0x000010, "Wrong alignment on UGET_DirectEnvironmentDamage_C");
static_assert(sizeof(UGET_DirectEnvironmentDamage_C) == 0x000670, "Wrong size on UGET_DirectEnvironmentDamage_C");

}
