#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseHistoryEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.ExecuteUbergraph_PurchaseHistoryEntry
// 0x0080 (0x0080 - 0x0000)
struct PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x001C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x002C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_PurchaseText;                         // 0x0040(0x0018)(ConstParm)
	bool                                          K2Node_Event_bHasBeenRefunded;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isDisabled;                     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0068(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry) == 0x000008, "Wrong alignment on PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry");
static_assert(sizeof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry) == 0x000080, "Wrong size on PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, EntryPoint) == 0x000000, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_bool_Variable) == 0x000004, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_object_Variable) == 0x000008, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_object_Variable1) == 0x000010, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_object_Variable1' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_bool_Variable1) == 0x000018, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_struct_Variable) == 0x00001C, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, Temp_struct_Variable1) == 0x00002C, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_Event_PurchaseText) == 0x000040, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_Event_PurchaseText' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_Event_bHasBeenRefunded) == 0x000058, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_Event_bHasBeenRefunded' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_CustomEvent_isDisabled) == 0x000059, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_CustomEvent_isDisabled' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_Select_Default) == 0x000060, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_Select1_Default) == 0x000068, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry, K2Node_Event_IsDesignTime) == 0x000078, "Member 'PurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PurchaseHistoryEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchaseHistoryEntry_C_PreConstruct) == 0x000001, "Wrong alignment on PurchaseHistoryEntry_C_PreConstruct");
static_assert(sizeof(PurchaseHistoryEntry_C_PreConstruct) == 0x000001, "Wrong size on PurchaseHistoryEntry_C_PreConstruct");
static_assert(offsetof(PurchaseHistoryEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PurchaseHistoryEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.DisableAppearance
// 0x0001 (0x0001 - 0x0000)
struct PurchaseHistoryEntry_C_DisableAppearance final
{
public:
	bool                                          IsDisabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchaseHistoryEntry_C_DisableAppearance) == 0x000001, "Wrong alignment on PurchaseHistoryEntry_C_DisableAppearance");
static_assert(sizeof(PurchaseHistoryEntry_C_DisableAppearance) == 0x000001, "Wrong size on PurchaseHistoryEntry_C_DisableAppearance");
static_assert(offsetof(PurchaseHistoryEntry_C_DisableAppearance, IsDisabled) == 0x000000, "Member 'PurchaseHistoryEntry_C_DisableAppearance::IsDisabled' has a wrong offset!");

// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.SetPurchaseText
// 0x0020 (0x0020 - 0x0000)
struct PurchaseHistoryEntry_C_SetPurchaseText final
{
public:
	class FText                                   PurchaseText;                                      // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bHasBeenRefunded;                                  // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchaseHistoryEntry_C_SetPurchaseText) == 0x000008, "Wrong alignment on PurchaseHistoryEntry_C_SetPurchaseText");
static_assert(sizeof(PurchaseHistoryEntry_C_SetPurchaseText) == 0x000020, "Wrong size on PurchaseHistoryEntry_C_SetPurchaseText");
static_assert(offsetof(PurchaseHistoryEntry_C_SetPurchaseText, PurchaseText) == 0x000000, "Member 'PurchaseHistoryEntry_C_SetPurchaseText::PurchaseText' has a wrong offset!");
static_assert(offsetof(PurchaseHistoryEntry_C_SetPurchaseText, bHasBeenRefunded) == 0x000018, "Member 'PurchaseHistoryEntry_C_SetPurchaseText::bHasBeenRefunded' has a wrong offset!");

}

