#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingOptions

#include "Basic.hpp"


namespace SDK::Params
{

// Function GiftingOptions.GiftingOptions_C.ExecuteUbergraph_GiftingOptions
// 0x0020 (0x0020 - 0x0000)
struct GiftingOptions_C_ExecuteUbergraph_GiftingOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsAllowed;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions) == 0x000008, "Wrong alignment on GiftingOptions_C_ExecuteUbergraph_GiftingOptions");
static_assert(sizeof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions) == 0x000020, "Wrong size on GiftingOptions_C_ExecuteUbergraph_GiftingOptions");
static_assert(offsetof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions, EntryPoint) == 0x000000, "Member 'GiftingOptions_C_ExecuteUbergraph_GiftingOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions, K2Node_ComponentBoundEvent_Button1) == 0x000008, "Member 'GiftingOptions_C_ExecuteUbergraph_GiftingOptions::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'GiftingOptions_C_ExecuteUbergraph_GiftingOptions::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(GiftingOptions_C_ExecuteUbergraph_GiftingOptions, K2Node_Event_bIsAllowed) == 0x000018, "Member 'GiftingOptions_C_ExecuteUbergraph_GiftingOptions::K2Node_Event_bIsAllowed' has a wrong offset!");

// Function GiftingOptions.GiftingOptions_C.AllowGiftWrapSelection
// 0x0001 (0x0001 - 0x0000)
struct GiftingOptions_C_AllowGiftWrapSelection final
{
public:
	bool                                          bIsAllowed;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingOptions_C_AllowGiftWrapSelection) == 0x000001, "Wrong alignment on GiftingOptions_C_AllowGiftWrapSelection");
static_assert(sizeof(GiftingOptions_C_AllowGiftWrapSelection) == 0x000001, "Wrong size on GiftingOptions_C_AllowGiftWrapSelection");
static_assert(offsetof(GiftingOptions_C_AllowGiftWrapSelection, bIsAllowed) == 0x000000, "Member 'GiftingOptions_C_AllowGiftWrapSelection::bIsAllowed' has a wrong offset!");

// Function GiftingOptions.GiftingOptions_C.BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'GiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function GiftingOptions.GiftingOptions_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'GiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}
