#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Generic_Taunter

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Generic_Taunter.GCN_Generic_Taunter_C
// 0x0000 (0x0440 - 0x0440)
class AGCN_Generic_Taunter_C final : public AFortGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Generic_Taunter_C">();
	}
	static class AGCN_Generic_Taunter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Generic_Taunter_C>();
	}
};
static_assert(alignof(AGCN_Generic_Taunter_C) == 0x000010, "Wrong alignment on AGCN_Generic_Taunter_C");
static_assert(sizeof(AGCN_Generic_Taunter_C) == 0x000440, "Wrong size on AGCN_Generic_Taunter_C");

}
