#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceived_PrePrompt

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
// 0x0038 (0x0038 - 0x0000)
struct ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemReceived_Base_C*                   CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt) == 0x000008, "Wrong alignment on ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt");
static_assert(sizeof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt) == 0x000038, "Wrong size on ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, EntryPoint) == 0x000000, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, CallFunc_Create_ReturnValue) == 0x000010, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt, CallFunc_GetUIManagerWidget_ReturnValue1) == 0x000030, "Member 'ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt::CallFunc_GetUIManagerWidget_ReturnValue1' has a wrong offset!");

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
// 0x0008 (0x0008 - 0x0000)
struct ItemReceived_PrePrompt_C_LargeImageLoaded final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemReceived_PrePrompt_C_LargeImageLoaded) == 0x000008, "Wrong alignment on ItemReceived_PrePrompt_C_LargeImageLoaded");
static_assert(sizeof(ItemReceived_PrePrompt_C_LargeImageLoaded) == 0x000008, "Wrong size on ItemReceived_PrePrompt_C_LargeImageLoaded");
static_assert(offsetof(ItemReceived_PrePrompt_C_LargeImageLoaded, Obj) == 0x000000, "Member 'ItemReceived_PrePrompt_C_LargeImageLoaded::Obj' has a wrong offset!");

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
// 0x0050 (0x0050 - 0x0000)
struct ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
	class UFortGiftBoxItemDefinition*             CallFunc_GetGiftBoxDefinition_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
	class FText                                   CallFunc_FormatTextUsingParams_ReturnValue;        // 0x0038(0x0018)()
};
static_assert(alignof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem) == 0x000008, "Wrong alignment on ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem");
static_assert(sizeof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem) == 0x000050, "Wrong size on ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem");
static_assert(offsetof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem, CallFunc_GetGiftBoxDefinition_ReturnValue) == 0x000018, "Member 'ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem::CallFunc_GetGiftBoxDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem, CallFunc_FormatTextUsingParams_ReturnValue) == 0x000038, "Member 'ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem::CallFunc_FormatTextUsingParams_ReturnValue' has a wrong offset!");

}
