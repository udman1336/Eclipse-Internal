#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeQuestWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// 0x0090 (0x0090 - 0x0000)
struct ChallengeQuestWidget_C_SetQuestItem final
{
public:
	class UFortQuestItem*                         Quest_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestDefinition_0;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemQuantityPair>          CallFunc_GetRewards_BP_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x0028(0x0030)()
	struct FFortItemQuantityPair                  CallFunc_Array_Get_Item;                           // 0x0058(0x0030)()
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortQuestState                               CallFunc_GetQuestState_ReturnValue;                // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_SetQuestItem) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_SetQuestItem");
static_assert(sizeof(ChallengeQuestWidget_C_SetQuestItem) == 0x000090, "Wrong size on ChallengeQuestWidget_C_SetQuestItem");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Quest_0) == 0x000000, "Member 'ChallengeQuestWidget_C_SetQuestItem::Quest_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, QuestDefinition_0) == 0x000008, "Member 'ChallengeQuestWidget_C_SetQuestItem::QuestDefinition_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_byte_Variable) == 0x000010, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetRewards_BP_ReturnValue) == 0x000018, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetRewards_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetRewardInfo_BP_ReturnValue) == 0x000028, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetRewardInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_Array_Get_Item) == 0x000058, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_byte_Variable1) == 0x000088, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_EqualEqual_SoftObjectReference_ReturnValue) == 0x000089, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_EqualEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetQuestState_ReturnValue) == 0x00008A, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetQuestState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_bool_Variable) == 0x00008B, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, K2Node_SwitchEnum_CmpSuccess) == 0x00008C, "Member 'ChallengeQuestWidget_C_SetQuestItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, K2Node_Select_Default) == 0x00008D, "Member 'ChallengeQuestWidget_C_SetQuestItem::K2Node_Select_Default' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// 0x0118 (0x0118 - 0x0000)
struct ChallengeQuestWidget_C_UpdateProgress final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestState                               CallFunc_GetQuestState_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestVisualStyle                             CallFunc_GetVisualStyle_ReturnValue;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestVisualStyle                             Temp_byte_Variable1234;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00F8(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_UpdateProgress) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_UpdateProgress");
static_assert(sizeof(ChallengeQuestWidget_C_UpdateProgress) == 0x000118, "Wrong size on ChallengeQuestWidget_C_UpdateProgress");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable) == 0x000000, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable1) == 0x000001, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_bool_Variable) == 0x000002, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable12) == 0x000003, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable123) == 0x000004, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetQuestState_ReturnValue) == 0x000005, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetQuestState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetVisualStyle_ReturnValue) == 0x000006, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetVisualStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalAchievedCount) == 0x000008, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalRequiredCount) == 0x00000C, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalRequiredCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable1234) == 0x000010, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable1234' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_Select_Default) == 0x000070, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Conv_IntToText_ReturnValue1) == 0x000078, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeStruct_FormatArgumentData1) == 0x000090, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeArray_Array) == 0x0000D0, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetText_ReturnValue) == 0x0000F8, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_TextIsEmpty_ReturnValue) == 0x000110, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_Select1_Default) == 0x000111, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_Select1_Default' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// 0x0002 (0x0002 - 0x0000)
struct ChallengeQuestWidget_C_GetQuestState final
{
public:
	EFortQuestState                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_GetQuestState) == 0x000001, "Wrong alignment on ChallengeQuestWidget_C_GetQuestState");
static_assert(sizeof(ChallengeQuestWidget_C_GetQuestState) == 0x000002, "Wrong size on ChallengeQuestWidget_C_GetQuestState");
static_assert(offsetof(ChallengeQuestWidget_C_GetQuestState, ReturnValue) == 0x000000, "Member 'ChallengeQuestWidget_C_GetQuestState::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetQuestState, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ChallengeQuestWidget_C_GetQuestState::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// 0x0028 (0x0028 - 0x0000)
struct ChallengeQuestWidget_C_GetAchievedCount final
{
public:
	int32                                         OutTotalAchievedCount;                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTotalRequiredCount;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortMcpQuestObjectiveInfo>     CallFunc_GetObjectives_BP_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_GetAchievedCount) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_GetAchievedCount");
static_assert(sizeof(ChallengeQuestWidget_C_GetAchievedCount) == 0x000028, "Wrong size on ChallengeQuestWidget_C_GetAchievedCount");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, OutTotalAchievedCount) == 0x000000, "Member 'ChallengeQuestWidget_C_GetAchievedCount::OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, OutTotalRequiredCount) == 0x000004, "Member 'ChallengeQuestWidget_C_GetAchievedCount::OutTotalRequiredCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetObjectives_BP_ReturnValue) == 0x000008, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetObjectives_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetAchievedCount_OutTotalAchievedCount) == 0x000020, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetAchievedCount_OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetAchievedCount_OutTotalRequiredCount) == 0x000024, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetAchievedCount_OutTotalRequiredCount' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// 0x0038 (0x0038 - 0x0000)
struct ChallengeQuestWidget_C_UpdateName final
{
public:
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0018(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_UpdateName) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_UpdateName");
static_assert(sizeof(ChallengeQuestWidget_C_UpdateName) == 0x000038, "Wrong size on ChallengeQuestWidget_C_UpdateName");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000010, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetCombinedDescription_OutDescription) == 0x000018, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetCombinedDescription_ReturnValue) == 0x000030, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");

}
