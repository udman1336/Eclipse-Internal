#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// 0x00A8 (0x00A8 - 0x0000)
struct DailyQuestWidget_C_SetQuestItem final
{
public:
	class UFortQuestItem*                         Quest_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x0020(0x0030)()
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0068(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0088(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestWidget_C_SetQuestItem) == 0x000008, "Wrong alignment on DailyQuestWidget_C_SetQuestItem");
static_assert(sizeof(DailyQuestWidget_C_SetQuestItem) == 0x0000A8, "Wrong size on DailyQuestWidget_C_SetQuestItem");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, Quest_0) == 0x000000, "Member 'DailyQuestWidget_C_SetQuestItem::Quest_0' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, Temp_byte_Variable) == 0x000008, "Member 'DailyQuestWidget_C_SetQuestItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x000010, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, Temp_byte_Variable1) == 0x000018, "Member 'DailyQuestWidget_C_SetQuestItem::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetRewardInfo_BP_ReturnValue) == 0x000020, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetRewardInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetContext_ReturnValue) == 0x000050, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, Temp_bool_Variable) == 0x000058, "Member 'DailyQuestWidget_C_SetQuestItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000060, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetCombinedDescription_OutDescription) == 0x000068, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetCombinedDescription_ReturnValue) == 0x000080, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetText_ReturnValue) == 0x000088, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_TextIsEmpty_ReturnValue) == 0x0000A0, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, K2Node_Select_Default) == 0x0000A1, "Member 'DailyQuestWidget_C_SetQuestItem::K2Node_Select_Default' has a wrong offset!");

// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
// 0x0008 (0x0008 - 0x0000)
struct DailyQuestWidget_C_UpdateProgress final
{
public:
	int32                                         CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestWidget_C_UpdateProgress) == 0x000004, "Wrong alignment on DailyQuestWidget_C_UpdateProgress");
static_assert(sizeof(DailyQuestWidget_C_UpdateProgress) == 0x000008, "Wrong size on DailyQuestWidget_C_UpdateProgress");
static_assert(offsetof(DailyQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalAchievedCount) == 0x000000, "Member 'DailyQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalRequiredCount) == 0x000004, "Member 'DailyQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalRequiredCount' has a wrong offset!");

}
