#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Context_BouncePad_Athena

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Context_BouncePad_Athena.Trap_Context_BouncePad_Athena_C
// 0x0008 (0x0EE0 - 0x0ED8)
class ATrap_Context_BouncePad_Athena_C final : public ABuildingTrap
{
public:
	uint8                                         Pad_ED8[0x8];                                      // 0x0ED8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Context_BouncePad_Athena_C">();
	}
	static class ATrap_Context_BouncePad_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Context_BouncePad_Athena_C>();
	}
};
static_assert(alignof(ATrap_Context_BouncePad_Athena_C) == 0x000008, "Wrong alignment on ATrap_Context_BouncePad_Athena_C");
static_assert(sizeof(ATrap_Context_BouncePad_Athena_C) == 0x000EE0, "Wrong size on ATrap_Context_BouncePad_Athena_C");

}
