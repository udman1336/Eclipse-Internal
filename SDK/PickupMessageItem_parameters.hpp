#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupMessageItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
// 0x0008 (0x0008 - 0x0000)
struct PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_OldStackSize;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem) == 0x000004, "Wrong alignment on PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem");
static_assert(sizeof(PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem) == 0x000008, "Wrong size on PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem");
static_assert(offsetof(PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem, EntryPoint) == 0x000000, "Member 'PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem, K2Node_Event_OldStackSize) == 0x000004, "Member 'PickupMessageItem_C_ExecuteUbergraph_PickupMessageItem::K2Node_Event_OldStackSize' has a wrong offset!");

// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
// 0x0004 (0x0004 - 0x0000)
struct PickupMessageItem_C_OnStackSizeChanged final
{
public:
	int32                                         OldStackSize;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupMessageItem_C_OnStackSizeChanged) == 0x000004, "Wrong alignment on PickupMessageItem_C_OnStackSizeChanged");
static_assert(sizeof(PickupMessageItem_C_OnStackSizeChanged) == 0x000004, "Wrong size on PickupMessageItem_C_OnStackSizeChanged");
static_assert(offsetof(PickupMessageItem_C_OnStackSizeChanged, OldStackSize) == 0x000000, "Member 'PickupMessageItem_C_OnStackSizeChanged::OldStackSize' has a wrong offset!");

// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
// 0x0005 (0x0005 - 0x0000)
struct PickupMessageItem_C_Refresh_Count final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupMessageItem_C_Refresh_Count) == 0x000001, "Wrong alignment on PickupMessageItem_C_Refresh_Count");
static_assert(sizeof(PickupMessageItem_C_Refresh_Count) == 0x000005, "Wrong size on PickupMessageItem_C_Refresh_Count");
static_assert(offsetof(PickupMessageItem_C_Refresh_Count, Temp_bool_Variable) == 0x000000, "Member 'PickupMessageItem_C_Refresh_Count::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Refresh_Count, Temp_byte_Variable) == 0x000001, "Member 'PickupMessageItem_C_Refresh_Count::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Refresh_Count, Temp_byte_Variable1) == 0x000002, "Member 'PickupMessageItem_C_Refresh_Count::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Refresh_Count, CallFunc_Greater_IntInt_ReturnValue) == 0x000003, "Member 'PickupMessageItem_C_Refresh_Count::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Refresh_Count, K2Node_Select_Default) == 0x000004, "Member 'PickupMessageItem_C_Refresh_Count::K2Node_Select_Default' has a wrong offset!");

// Function PickupMessageItem.PickupMessageItem_C.Setup
// 0x00A8 (0x00A8 - 0x0000)
struct PickupMessageItem_C_Setup final
{
public:
	class UFortItem*                              Picked_Up_Item_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0018)()
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0020(0x0088)()
};
static_assert(alignof(PickupMessageItem_C_Setup) == 0x000008, "Wrong alignment on PickupMessageItem_C_Setup");
static_assert(sizeof(PickupMessageItem_C_Setup) == 0x0000A8, "Wrong size on PickupMessageItem_C_Setup");
static_assert(offsetof(PickupMessageItem_C_Setup, Picked_Up_Item_0) == 0x000000, "Member 'PickupMessageItem_C_Setup::Picked_Up_Item_0' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Setup, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'PickupMessageItem_C_Setup::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupMessageItem_C_Setup, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000020, "Member 'PickupMessageItem_C_Setup::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");

}
