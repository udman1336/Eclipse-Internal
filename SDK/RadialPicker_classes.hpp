#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialPicker

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RadialPicker.RadialPicker_C
// 0x00E8 (0x0300 - 0x0218)
class URadialPicker_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           CancelVertBox;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CenterBox;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRadialPointer;                                // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindPickerCancel;                               // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindPickerConfirm;                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OkVertBox;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption0;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption1;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption2;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption3;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption4;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption5;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption6;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPickerItem_C*                    PickerOption7;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_OK;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ActiveOption;                                      // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOptions;                                        // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YAxisMultiplier;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PickerClosing;                                     // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortPickerMode                               PickerMode;                                        // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EControllerAnalogStick                        Thumbstick;                                        // 0x02B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B7[0x1];                                      // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundOnAccept;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnCancel;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnSelect;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URadialPickerItem_C*>            PickerOptions;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bUsingGamepad;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIgnoringMoveInput;                                // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIgnoringLookInput;                                // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E3[0x1];                                      // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentPointerAngle;                               // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowingMouseCursor;                               // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Picker_Closing;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_RadialPicker(int32 EntryPoint);
	void BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option);
	void OnPickerRefreshItems();
	void AcceptChosenOption(int32 PickerOption);
	void ClosePicker();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Event_CancelPicker();
	void Event_AcceptOption();
	void InitializePicker(EFortPickerMode PickerMode_0, int32 InitialOption);
	void GetOptionPosition(int32 Option, struct FVector2D* Position);
	void GetAngleDifference(float AngleA, float AngleB, float* Difference);
	void GetOptionAngle(int32 Option, float* Angle);
	void ClearActiveOption();
	void SetActiveOption(int32 Option);
	void SetInputMode();
	void CanConfirm(bool* CanAccept);
	void ResetInput();
	void MoveActiveOption(int32 MoveOptionDirection);
	void SetPointerDirection();
	void SetShowMouseCursor(bool InShowMouseCursor);
	void On_Item_Touched(class URadialPickerItem_C* Touched_Item);

	void IsGamepadInPickerDeadZone(bool* bIsInDeadZone) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadialPicker_C">();
	}
	static class URadialPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialPicker_C>();
	}
};
static_assert(alignof(URadialPicker_C) == 0x000008, "Wrong alignment on URadialPicker_C");
static_assert(sizeof(URadialPicker_C) == 0x000300, "Wrong size on URadialPicker_C");
static_assert(offsetof(URadialPicker_C, UberGraphFrame) == 0x000218, "Member 'URadialPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, CancelVertBox) == 0x000220, "Member 'URadialPicker_C::CancelVertBox' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, CanvasPanel_0) == 0x000228, "Member 'URadialPicker_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, CenterBox) == 0x000230, "Member 'URadialPicker_C::CenterBox' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, Image_0) == 0x000238, "Member 'URadialPicker_C::Image_0' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, ImageRadialPointer) == 0x000240, "Member 'URadialPicker_C::ImageRadialPointer' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, KeybindPickerCancel) == 0x000248, "Member 'URadialPicker_C::KeybindPickerCancel' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, KeybindPickerConfirm) == 0x000250, "Member 'URadialPicker_C::KeybindPickerConfirm' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, OkVertBox) == 0x000258, "Member 'URadialPicker_C::OkVertBox' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption0) == 0x000260, "Member 'URadialPicker_C::PickerOption0' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption1) == 0x000268, "Member 'URadialPicker_C::PickerOption1' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption2) == 0x000270, "Member 'URadialPicker_C::PickerOption2' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption3) == 0x000278, "Member 'URadialPicker_C::PickerOption3' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption4) == 0x000280, "Member 'URadialPicker_C::PickerOption4' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption5) == 0x000288, "Member 'URadialPicker_C::PickerOption5' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption6) == 0x000290, "Member 'URadialPicker_C::PickerOption6' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOption7) == 0x000298, "Member 'URadialPicker_C::PickerOption7' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, Text_OK) == 0x0002A0, "Member 'URadialPicker_C::Text_OK' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, ActiveOption) == 0x0002A8, "Member 'URadialPicker_C::ActiveOption' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, NumOptions) == 0x0002AC, "Member 'URadialPicker_C::NumOptions' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, YAxisMultiplier) == 0x0002B0, "Member 'URadialPicker_C::YAxisMultiplier' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerClosing) == 0x0002B4, "Member 'URadialPicker_C::PickerClosing' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerMode) == 0x0002B5, "Member 'URadialPicker_C::PickerMode' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, Thumbstick) == 0x0002B6, "Member 'URadialPicker_C::Thumbstick' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, SoundOnAccept) == 0x0002B8, "Member 'URadialPicker_C::SoundOnAccept' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, SoundOnCancel) == 0x0002C0, "Member 'URadialPicker_C::SoundOnCancel' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, SoundOnSelect) == 0x0002C8, "Member 'URadialPicker_C::SoundOnSelect' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, PickerOptions) == 0x0002D0, "Member 'URadialPicker_C::PickerOptions' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, bUsingGamepad) == 0x0002E0, "Member 'URadialPicker_C::bUsingGamepad' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, bIgnoringMoveInput) == 0x0002E1, "Member 'URadialPicker_C::bIgnoringMoveInput' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, bIgnoringLookInput) == 0x0002E2, "Member 'URadialPicker_C::bIgnoringLookInput' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, CurrentPointerAngle) == 0x0002E4, "Member 'URadialPicker_C::CurrentPointerAngle' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, bShowingMouseCursor) == 0x0002E8, "Member 'URadialPicker_C::bShowingMouseCursor' has a wrong offset!");
static_assert(offsetof(URadialPicker_C, Picker_Closing) == 0x0002F0, "Member 'URadialPicker_C::Picker_Closing' has a wrong offset!");

}
