#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AccountNotFound

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AccountNotFound.AccountNotFound_C
// 0x0000 (0x0280 - 0x0280)
class UAccountNotFound_C final : public UFortAccountNotFound
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountNotFound_C">();
	}
	static class UAccountNotFound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountNotFound_C>();
	}
};
static_assert(alignof(UAccountNotFound_C) == 0x000008, "Wrong alignment on UAccountNotFound_C");
static_assert(sizeof(UAccountNotFound_C) == 0x000280, "Wrong size on UAccountNotFound_C");

}
