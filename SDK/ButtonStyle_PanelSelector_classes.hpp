#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyle_PanelSelector

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-PanelSelector.ButtonStyle-PanelSelector_C
// 0x0000 (0x04F0 - 0x04F0)
class UButtonStyle_PanelSelector_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-PanelSelector_C">();
	}
	static class UButtonStyle_PanelSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_PanelSelector_C>();
	}
};
static_assert(alignof(UButtonStyle_PanelSelector_C) == 0x000008, "Wrong alignment on UButtonStyle_PanelSelector_C");
static_assert(sizeof(UButtonStyle_PanelSelector_C) == 0x0004F0, "Wrong size on UButtonStyle_PanelSelector_C");

}
