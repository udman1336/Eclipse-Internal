#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserRenameDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C
// 0x0080 (0x0470 - 0x03F0)
class UAthenaReplayBrowserRenameDialog_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ConfirmButton;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentSwitcher;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DeclineButton;                                     // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftOptionalWidget;                                // 0x0410(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          NewNameTextBox;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TapToCloseZone;                                    // 0x0420(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WaitThrobber;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   WaitThrobberColorParamName;                        // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaitThrobberColor;                                 // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnConfirmRename;                                   // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCancelRename;                                    // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaReplayBrowserRowProxyInstance*   BrowerRowProxy;                                    // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaReplayBrowserRenameDialog(int32 EntryPoint);
	void BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void CancelRename();
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaReplayBrowserRenameDialog_C">();
	}
	static class UAthenaReplayBrowserRenameDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaReplayBrowserRenameDialog_C>();
	}
};
static_assert(alignof(UAthenaReplayBrowserRenameDialog_C) == 0x000008, "Wrong alignment on UAthenaReplayBrowserRenameDialog_C");
static_assert(sizeof(UAthenaReplayBrowserRenameDialog_C) == 0x000470, "Wrong size on UAthenaReplayBrowserRenameDialog_C");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, UberGraphFrame) == 0x0003F0, "Member 'UAthenaReplayBrowserRenameDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, ConfirmButton) == 0x0003F8, "Member 'UAthenaReplayBrowserRenameDialog_C::ConfirmButton' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, ContentSwitcher) == 0x000400, "Member 'UAthenaReplayBrowserRenameDialog_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, DeclineButton) == 0x000408, "Member 'UAthenaReplayBrowserRenameDialog_C::DeclineButton' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, LeftOptionalWidget) == 0x000410, "Member 'UAthenaReplayBrowserRenameDialog_C::LeftOptionalWidget' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, NewNameTextBox) == 0x000418, "Member 'UAthenaReplayBrowserRenameDialog_C::NewNameTextBox' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, TapToCloseZone) == 0x000420, "Member 'UAthenaReplayBrowserRenameDialog_C::TapToCloseZone' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, WaitThrobber) == 0x000428, "Member 'UAthenaReplayBrowserRenameDialog_C::WaitThrobber' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, WaitThrobberColorParamName) == 0x000430, "Member 'UAthenaReplayBrowserRenameDialog_C::WaitThrobberColorParamName' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, WaitThrobberColor) == 0x000438, "Member 'UAthenaReplayBrowserRenameDialog_C::WaitThrobberColor' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, OnConfirmRename) == 0x000448, "Member 'UAthenaReplayBrowserRenameDialog_C::OnConfirmRename' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, OnCancelRename) == 0x000458, "Member 'UAthenaReplayBrowserRenameDialog_C::OnCancelRename' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRenameDialog_C, BrowerRowProxy) == 0x000468, "Member 'UAthenaReplayBrowserRenameDialog_C::BrowerRowProxy' has a wrong offset!");

}
