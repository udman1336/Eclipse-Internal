#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionHeader_Level

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CollectionHeader-Level.CollectionHeader-Level_C
// 0x0000 (0x00B0 - 0x00B0)
class UCollectionHeader_Level_C : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionHeader-Level_C">();
	}
	static class UCollectionHeader_Level_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionHeader_Level_C>();
	}
};
static_assert(alignof(UCollectionHeader_Level_C) == 0x000008, "Wrong alignment on UCollectionHeader_Level_C");
static_assert(sizeof(UCollectionHeader_Level_C) == 0x0000B0, "Wrong size on UCollectionHeader_Level_C");

}
