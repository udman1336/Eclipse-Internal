#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
// 0x0004 (0x0004 - 0x0000)
struct ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo) == 0x000004, "Wrong alignment on ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo");
static_assert(sizeof(ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo) == 0x000004, "Wrong size on ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo");
static_assert(offsetof(ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo, EntryPoint) == 0x000000, "Member 'ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo::EntryPoint' has a wrong offset!");

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
// 0x01A0 (0x01A0 - 0x0000)
struct ItemTransformKeyInfo_C_SetKeyToRepresent final
{
public:
	class UFortItem*                              Key;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0008(0x0018)()
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0048(0x0080)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0110(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0150(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0160(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0188(0x0018)()
};
static_assert(alignof(ItemTransformKeyInfo_C_SetKeyToRepresent) == 0x000008, "Wrong alignment on ItemTransformKeyInfo_C_SetKeyToRepresent");
static_assert(sizeof(ItemTransformKeyInfo_C_SetKeyToRepresent) == 0x0001A0, "Wrong size on ItemTransformKeyInfo_C_SetKeyToRepresent");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, Key) == 0x000000, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::Key' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_GetDescription_ReturnValue) == 0x000008, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_GetRarity_ReturnValue) == 0x000020, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_BPGetRarityData_ReturnValue) == 0x000048, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, K2Node_MakeStruct_FormatArgumentData) == 0x0000D0, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, K2Node_MakeStruct_FormatArgumentData1) == 0x000110, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, K2Node_MakeArray_Array) == 0x000150, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, K2Node_MakeArray_Array1) == 0x000160, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_Format_ReturnValue) == 0x000170, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyInfo_C_SetKeyToRepresent, CallFunc_Format_ReturnValue1) == 0x000188, "Member 'ItemTransformKeyInfo_C_SetKeyToRepresent::CallFunc_Format_ReturnValue1' has a wrong offset!");

}
