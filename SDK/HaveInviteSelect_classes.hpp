#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HaveInviteSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HaveInviteSelect.HaveInviteSelect_C
// 0x0030 (0x0440 - 0x0410)
class UHaveInviteSelect_C final : public UFortHaveInviteSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_1;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_6;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_InviteOnly;                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInviteEventTitle_C*                    InviteEventTitle;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HaveInviteSelect(int32 EntryPoint);
	void OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HaveInviteSelect_C">();
	}
	static class UHaveInviteSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHaveInviteSelect_C>();
	}
};
static_assert(alignof(UHaveInviteSelect_C) == 0x000008, "Wrong alignment on UHaveInviteSelect_C");
static_assert(sizeof(UHaveInviteSelect_C) == 0x000440, "Wrong size on UHaveInviteSelect_C");
static_assert(offsetof(UHaveInviteSelect_C, UberGraphFrame) == 0x000410, "Member 'UHaveInviteSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHaveInviteSelect_C, Intro) == 0x000418, "Member 'UHaveInviteSelect_C::Intro' has a wrong offset!");
static_assert(offsetof(UHaveInviteSelect_C, CommonTextBlock_1) == 0x000420, "Member 'UHaveInviteSelect_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UHaveInviteSelect_C, CommonTextBlock_6) == 0x000428, "Member 'UHaveInviteSelect_C::CommonTextBlock_6' has a wrong offset!");
static_assert(offsetof(UHaveInviteSelect_C, CommonWidgetSwitcher_InviteOnly) == 0x000430, "Member 'UHaveInviteSelect_C::CommonWidgetSwitcher_InviteOnly' has a wrong offset!");
static_assert(offsetof(UHaveInviteSelect_C, InviteEventTitle) == 0x000438, "Member 'UHaveInviteSelect_C::InviteEventTitle' has a wrong offset!");

}
