#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TextRotator.TextRotator_C
// 0x0010 (0x0890 - 0x0880)
class UTextRotator_C final : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          MainBorder;                                        // 0x0888(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_TextRotator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextRotator_C">();
	}
	static class UTextRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextRotator_C>();
	}
};
static_assert(alignof(UTextRotator_C) == 0x000008, "Wrong alignment on UTextRotator_C");
static_assert(sizeof(UTextRotator_C) == 0x000890, "Wrong size on UTextRotator_C");
static_assert(offsetof(UTextRotator_C, UberGraphFrame) == 0x000880, "Member 'UTextRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextRotator_C, MainBorder) == 0x000888, "Member 'UTextRotator_C::MainBorder' has a wrong offset!");

}
