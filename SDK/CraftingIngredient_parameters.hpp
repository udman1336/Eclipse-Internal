#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CraftingIngredient

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EFortUITheme_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CraftingIngredient.CraftingIngredient_C.ExecuteUbergraph_CraftingIngredient
// 0x0004 (0x0004 - 0x0000)
struct CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient) == 0x000004, "Wrong alignment on CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient");
static_assert(sizeof(CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient) == 0x000004, "Wrong size on CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient");
static_assert(offsetof(CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient, EntryPoint) == 0x000000, "Member 'CraftingIngredient_C_ExecuteUbergraph_CraftingIngredient::EntryPoint' has a wrong offset!");

// Function CraftingIngredient.CraftingIngredient_C.Refresh
// 0x01A8 (0x01A8 - 0x0000)
struct CraftingIngredient_C_Refresh final
{
public:
	int32                                         TotalCount;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryCount;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUITheme                                  Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUITheme                                  Temp_byte_Variable1;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    K2Node_DynamicCast_AsFort_Item_Definition;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0098(0x0088)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_GetNumInInventory_ReturnValue;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0150(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUITheme                                  K2Node_Select_Default;                             // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16A[0x2];                                      // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_Theme_Color_Theme_Color;              // 0x016C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0180(0x0028)()
};
static_assert(alignof(CraftingIngredient_C_Refresh) == 0x000008, "Wrong alignment on CraftingIngredient_C_Refresh");
static_assert(sizeof(CraftingIngredient_C_Refresh) == 0x0001A8, "Wrong size on CraftingIngredient_C_Refresh");
static_assert(offsetof(CraftingIngredient_C_Refresh, TotalCount) == 0x000000, "Member 'CraftingIngredient_C_Refresh::TotalCount' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, InventoryCount) == 0x000004, "Member 'CraftingIngredient_C_Refresh::InventoryCount' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, Temp_byte_Variable) == 0x000008, "Member 'CraftingIngredient_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'CraftingIngredient_C_Refresh::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, Temp_byte_Variable1) == 0x000018, "Member 'CraftingIngredient_C_Refresh::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000020, "Member 'CraftingIngredient_C_Refresh::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, Temp_bool_Variable) == 0x000028, "Member 'CraftingIngredient_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_DynamicCast_AsFort_Item_Definition) == 0x000030, "Member 'CraftingIngredient_C_Refresh::K2Node_DynamicCast_AsFort_Item_Definition' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'CraftingIngredient_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'CraftingIngredient_C_Refresh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'CraftingIngredient_C_Refresh::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'CraftingIngredient_C_Refresh::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000098, "Member 'CraftingIngredient_C_Refresh::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_MakeArray_Array) == 0x000120, "Member 'CraftingIngredient_C_Refresh::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_GetNumInInventory_ReturnValue) == 0x000130, "Member 'CraftingIngredient_C_Refresh::CallFunc_GetNumInInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_Format_ReturnValue) == 0x000138, "Member 'CraftingIngredient_C_Refresh::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_Conv_IntToText_ReturnValue1) == 0x000150, "Member 'CraftingIngredient_C_Refresh::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000168, "Member 'CraftingIngredient_C_Refresh::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_Select_Default) == 0x000169, "Member 'CraftingIngredient_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, CallFunc_Get_Theme_Color_Theme_Color) == 0x00016C, "Member 'CraftingIngredient_C_Refresh::CallFunc_Get_Theme_Color_Theme_Color' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Refresh, K2Node_MakeStruct_SlateColor) == 0x000180, "Member 'CraftingIngredient_C_Refresh::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CraftingIngredient.CraftingIngredient_C.Get Tooltip
// 0x0060 (0x0060 - 0x0000)
struct CraftingIngredient_C_Get_Tooltip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    K2Node_DynamicCast_AsFort_Item_Definition;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSingleLineDescription_ReturnValue;     // 0x0028(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0018)()
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftingIngredient_C_Get_Tooltip) == 0x000008, "Wrong alignment on CraftingIngredient_C_Get_Tooltip");
static_assert(sizeof(CraftingIngredient_C_Get_Tooltip) == 0x000060, "Wrong size on CraftingIngredient_C_Get_Tooltip");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, ReturnValue) == 0x000000, "Member 'CraftingIngredient_C_Get_Tooltip::ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CraftingIngredient_C_Get_Tooltip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'CraftingIngredient_C_Get_Tooltip::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, K2Node_DynamicCast_AsFort_Item_Definition) == 0x000018, "Member 'CraftingIngredient_C_Get_Tooltip::K2Node_DynamicCast_AsFort_Item_Definition' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CraftingIngredient_C_Get_Tooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, CallFunc_GetSingleLineDescription_ReturnValue) == 0x000028, "Member 'CraftingIngredient_C_Get_Tooltip::CallFunc_GetSingleLineDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'CraftingIngredient_C_Get_Tooltip::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_Get_Tooltip, CallFunc_Create_Basic_Tooltip_Output) == 0x000058, "Member 'CraftingIngredient_C_Get_Tooltip::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function CraftingIngredient.CraftingIngredient_C.ShowDivider
// 0x0005 (0x0005 - 0x0000)
struct CraftingIngredient_C_ShowDivider final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftingIngredient_C_ShowDivider) == 0x000001, "Wrong alignment on CraftingIngredient_C_ShowDivider");
static_assert(sizeof(CraftingIngredient_C_ShowDivider) == 0x000005, "Wrong size on CraftingIngredient_C_ShowDivider");
static_assert(offsetof(CraftingIngredient_C_ShowDivider, Show) == 0x000000, "Member 'CraftingIngredient_C_ShowDivider::Show' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_ShowDivider, Temp_bool_Variable) == 0x000001, "Member 'CraftingIngredient_C_ShowDivider::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_ShowDivider, Temp_byte_Variable) == 0x000002, "Member 'CraftingIngredient_C_ShowDivider::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_ShowDivider, Temp_byte_Variable1) == 0x000003, "Member 'CraftingIngredient_C_ShowDivider::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(CraftingIngredient_C_ShowDivider, K2Node_Select_Default) == 0x000004, "Member 'CraftingIngredient_C_ShowDivider::K2Node_Select_Default' has a wrong offset!");

}
