#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultEditingTool

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultEditingTool.DefaultEditingTool_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ADefaultEditingTool_C final : public AFortWeap_EditingTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultEditingTool_C">();
	}
	static class ADefaultEditingTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultEditingTool_C>();
	}
};
static_assert(alignof(ADefaultEditingTool_C) == 0x000008, "Wrong alignment on ADefaultEditingTool_C");
static_assert(sizeof(ADefaultEditingTool_C) == 0x000AC0, "Wrong size on ADefaultEditingTool_C");

}
