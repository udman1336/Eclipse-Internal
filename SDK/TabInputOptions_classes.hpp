#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabInputOptions

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0050 (0x02B0 - 0x0260)
class UTabInputOptions_C final : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          OverlayBorder;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Currently_Selected_Input;                          // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Currently_Primary;                              // 0x0274(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Enable_Overlay;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Disable_Overlay;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Using_Gamepad;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Gamepad_Changed;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint);
	void UpdateOptionsTab();
	void Construct();
	void Input_Clicked(int32 Number_in_List, bool Is_Primary_Button);
	void ClearAndConstructKeybindList();
	void UnbindClicked(int32 Number_in_List, class UOptionsMenuInput_C* Widget);
	void HandleUsingGamepadChanged(ECommonInputType bNewInputType);
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void CenterOnTab();
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void Set_Input_Enabled(bool Enabled);
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabInputOptions_C">();
	}
	static class UTabInputOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabInputOptions_C>();
	}
};
static_assert(alignof(UTabInputOptions_C) == 0x000008, "Wrong alignment on UTabInputOptions_C");
static_assert(sizeof(UTabInputOptions_C) == 0x0002B0, "Wrong size on UTabInputOptions_C");
static_assert(offsetof(UTabInputOptions_C, UberGraphFrame) == 0x000260, "Member 'UTabInputOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, OverlayBorder) == 0x000268, "Member 'UTabInputOptions_C::OverlayBorder' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Currently_Selected_Input) == 0x000270, "Member 'UTabInputOptions_C::Currently_Selected_Input' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Is_Currently_Primary) == 0x000274, "Member 'UTabInputOptions_C::Is_Currently_Primary' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Enable_Overlay) == 0x000278, "Member 'UTabInputOptions_C::Enable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Disable_Overlay) == 0x000288, "Member 'UTabInputOptions_C::Disable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Using_Gamepad) == 0x000298, "Member 'UTabInputOptions_C::Using_Gamepad' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Gamepad_Changed) == 0x0002A0, "Member 'UTabInputOptions_C::Gamepad_Changed' has a wrong offset!");

}
