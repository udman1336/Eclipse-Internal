#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_EmptyBaseGlider

#include "Basic.hpp"

#include "B_EmptyBaseGlider_classes.hpp"


namespace SDK
{

// Function B_EmptyBaseGlider.B_EmptyBaseGlider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_EmptyBaseGlider_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmptyBaseGlider_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

