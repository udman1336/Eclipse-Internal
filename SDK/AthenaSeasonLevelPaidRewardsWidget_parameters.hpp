#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelPaidRewardsWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget
// 0x00F0 (0x00F0 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue1;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      CallFunc_GetRewardItems_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item1;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue12;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidUnlocked_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidClaimed_ReturnValue;                // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_FreeUnlocked;                         // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_PaidUnlocked;                         // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable12;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item12;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue123;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item123;                        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0098(0x0010)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonReward_C*                  CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue12;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue1;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidUnlocked_ReturnValue1;              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidClaimed_ReturnValue1;               // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable12;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue12;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue12;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget) == 0x000008, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget) == 0x0000F0, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, EntryPoint) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Percent_IntInt_ReturnValue) == 0x000010, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Array_Index_Variable1) == 0x000020, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item) == 0x000028, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue) == 0x000030, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue1) == 0x000038, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetRewardItems_ReturnValue) == 0x000040, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetRewardItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue) == 0x000050, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item1) == 0x000058, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue1) == 0x000060, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue12) == 0x000064, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidUnlocked_ReturnValue) == 0x000068, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000069, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Not_PreBool_ReturnValue) == 0x00006A, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidClaimed_ReturnValue) == 0x00006B, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidClaimed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_Event_FreeUnlocked) == 0x00006C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_Event_FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_Event_PaidUnlocked) == 0x00006D, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_Event_PaidUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Array_Index_Variable12) == 0x000070, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Array_Index_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item12) == 0x000078, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue123) == 0x000080, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000088, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item123) == 0x000090, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_MakeStruct_Margin) == 0x000098, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000B0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue12) == 0x0000C0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue1) == 0x0000C8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidUnlocked_ReturnValue1) == 0x0000C9, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidUnlocked_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidClaimed_ReturnValue1) == 0x0000CA, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidClaimed_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Not_PreBool_ReturnValue1) == 0x0000CB, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Add_ReturnValue) == 0x0000CC, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_AddChildToGrid_ReturnValue) == 0x0000D0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Loop_Counter_Variable1) == 0x0000D8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Loop_Counter_Variable12) == 0x0000DC, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Loop_Counter_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Less_IntInt_ReturnValue1) == 0x0000E0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Add_IntInt_ReturnValue1) == 0x0000E4, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Less_IntInt_ReturnValue12) == 0x0000E8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Less_IntInt_ReturnValue12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Add_IntInt_ReturnValue12) == 0x0000EC, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Add_IntInt_ReturnValue12' has a wrong offset!");

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged
// 0x0002 (0x0002 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged final
{
public:
	bool                                          FreeUnlocked;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PaidUnlocked;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged) == 0x000001, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged) == 0x000002, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged, FreeUnlocked) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged::FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged, PaidUnlocked) == 0x000001, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged::PaidUnlocked' has a wrong offset!");

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling
// 0x0050 (0x0050 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling final
{
public:
	float                                         Temp_float_Variable;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x000C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue1;                   // 0x001C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeUnlocked_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x003C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select1_Default;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling) == 0x000008, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling) == 0x000050, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_float_Variable) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_float_Variable1) == 0x000004, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_bool_Variable) == 0x000008, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_bool_Variable1) == 0x000009, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_MakeColor_ReturnValue) == 0x00000C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_MakeColor_ReturnValue1) == 0x00001C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_MakeColor_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_GetLevelInfo_ReturnValue) == 0x000030, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_IsFreeUnlocked_ReturnValue) == 0x000038, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_IsFreeUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, K2Node_Select_Default) == 0x00003C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, K2Node_Select1_Default) == 0x00004C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::K2Node_Select1_Default' has a wrong offset!");

}
