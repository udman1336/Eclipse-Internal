#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LiveStreamerDescription

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Set Quest
// 0x0140 (0x0140 - 0x0000)
struct BP_LiveStreamerDescription_C_Set_Quest final
{
public:
	class UFortQuestItem*                         Quest_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestType                                CallFunc_GetQuestType_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItemDefinition*               K2Node_DynamicCast_AsFort_Quest_Item_Definition;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetBroadcasterName_BroadcasterName;       // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0108(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0120(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LiveStreamerDescription_C_Set_Quest) == 0x000008, "Wrong alignment on BP_LiveStreamerDescription_C_Set_Quest");
static_assert(sizeof(BP_LiveStreamerDescription_C_Set_Quest) == 0x000140, "Wrong size on BP_LiveStreamerDescription_C_Set_Quest");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, Quest_0) == 0x000000, "Member 'BP_LiveStreamerDescription_C_Set_Quest::Quest_0' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, Temp_bool_Variable) == 0x000008, "Member 'BP_LiveStreamerDescription_C_Set_Quest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_GetQuestType_ReturnValue) == 0x000018, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_GetQuestType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_DynamicCast_AsFort_Quest_Item_Definition) == 0x000020, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_DynamicCast_AsFort_Quest_Item_Definition' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_GetBroadcasterName_BroadcasterName) == 0x000030, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_GetBroadcasterName_BroadcasterName' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_MakeArray_Array) == 0x000090, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_MakeStruct_FormatArgumentData1) == 0x0000B8, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_MakeArray_Array1) == 0x0000F8, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_Format_ReturnValue1) == 0x000108, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_Format_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, K2Node_Select_Default) == 0x000120, "Member 'BP_LiveStreamerDescription_C_Set_Quest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000138, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Set_Quest, CallFunc_IsVisible_ReturnValue) == 0x000139, "Member 'BP_LiveStreamerDescription_C_Set_Quest::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Visibility
// 0x0018 (0x0018 - 0x0000)
struct BP_LiveStreamerDescription_C_Update_Visibility final
{
public:
	class UFortQuestItemDefinition*               Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestType                                CallFunc_GetQuestType_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LiveStreamerDescription_C_Update_Visibility) == 0x000008, "Wrong alignment on BP_LiveStreamerDescription_C_Update_Visibility");
static_assert(sizeof(BP_LiveStreamerDescription_C_Update_Visibility) == 0x000018, "Wrong size on BP_LiveStreamerDescription_C_Update_Visibility");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, Item) == 0x000000, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::Item' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, Temp_byte_Variable) == 0x000008, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_GetQuestType_ReturnValue) == 0x000009, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_GetQuestType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x00000B, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue12) == 0x00000C, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue12' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, Temp_byte_Variable1) == 0x00000D, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_BooleanOR_ReturnValue) == 0x00000E, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, CallFunc_BooleanOR_ReturnValue1) == 0x00000F, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::CallFunc_BooleanOR_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, Temp_bool_Variable) == 0x000010, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Visibility, K2Node_Select_Default) == 0x000011, "Member 'BP_LiveStreamerDescription_C_Update_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Is Viewer Quest
// 0x0006 (0x0006 - 0x0000)
struct BP_LiveStreamerDescription_C_Is_Viewer_Quest final
{
public:
	bool                                          ViewerQuest;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortQuestType                                CallFunc_GetQuestType_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LiveStreamerDescription_C_Is_Viewer_Quest) == 0x000001, "Wrong alignment on BP_LiveStreamerDescription_C_Is_Viewer_Quest");
static_assert(sizeof(BP_LiveStreamerDescription_C_Is_Viewer_Quest) == 0x000006, "Wrong size on BP_LiveStreamerDescription_C_Is_Viewer_Quest");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, ViewerQuest) == 0x000000, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::ViewerQuest' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, CallFunc_GetQuestType_ReturnValue) == 0x000001, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::CallFunc_GetQuestType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, CallFunc_IsValid_ReturnValue) == 0x000003, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000004, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Is_Viewer_Quest, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'BP_LiveStreamerDescription_C_Is_Viewer_Quest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Setup Broadcaster Name
// 0x0018 (0x0018 - 0x0000)
struct BP_LiveStreamerDescription_C_Setup_Broadcaster_Name final
{
public:
	class FText                                   CallFunc_GetBroadcasterName_BroadcasterName;       // 0x0000(0x0018)()
};
static_assert(alignof(BP_LiveStreamerDescription_C_Setup_Broadcaster_Name) == 0x000008, "Wrong alignment on BP_LiveStreamerDescription_C_Setup_Broadcaster_Name");
static_assert(sizeof(BP_LiveStreamerDescription_C_Setup_Broadcaster_Name) == 0x000018, "Wrong size on BP_LiveStreamerDescription_C_Setup_Broadcaster_Name");
static_assert(offsetof(BP_LiveStreamerDescription_C_Setup_Broadcaster_Name, CallFunc_GetBroadcasterName_BroadcasterName) == 0x000000, "Member 'BP_LiveStreamerDescription_C_Setup_Broadcaster_Name::CallFunc_GetBroadcasterName_BroadcasterName' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Viewer Note Visibility
// 0x0005 (0x0005 - 0x0000)
struct BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Viewer_Quest_ViewerQuest;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility) == 0x000001, "Wrong alignment on BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility");
static_assert(sizeof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility) == 0x000005, "Wrong size on BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility, Temp_bool_Variable) == 0x000000, "Member 'BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility, Temp_byte_Variable) == 0x000001, "Member 'BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility, Temp_byte_Variable1) == 0x000002, "Member 'BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility, CallFunc_Is_Viewer_Quest_ViewerQuest) == 0x000003, "Member 'BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility::CallFunc_Is_Viewer_Quest_ViewerQuest' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility, K2Node_Select_Default) == 0x000004, "Member 'BP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.SetViewerQuestText
// 0x0018 (0x0018 - 0x0000)
struct BP_LiveStreamerDescription_C_SetViewerQuestText final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_LiveStreamerDescription_C_SetViewerQuestText) == 0x000008, "Wrong alignment on BP_LiveStreamerDescription_C_SetViewerQuestText");
static_assert(sizeof(BP_LiveStreamerDescription_C_SetViewerQuestText) == 0x000018, "Wrong size on BP_LiveStreamerDescription_C_SetViewerQuestText");
static_assert(offsetof(BP_LiveStreamerDescription_C_SetViewerQuestText, NewText) == 0x000000, "Member 'BP_LiveStreamerDescription_C_SetViewerQuestText::NewText' has a wrong offset!");

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.GetBroadcasterName
// 0x0060 (0x0060 - 0x0000)
struct BP_LiveStreamerDescription_C_GetBroadcasterName final
{
public:
	class FText                                   BroadcasterName;                                   // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTwitchBroadcasterChannelId_ReturnValue; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(BP_LiveStreamerDescription_C_GetBroadcasterName) == 0x000008, "Wrong alignment on BP_LiveStreamerDescription_C_GetBroadcasterName");
static_assert(sizeof(BP_LiveStreamerDescription_C_GetBroadcasterName) == 0x000060, "Wrong size on BP_LiveStreamerDescription_C_GetBroadcasterName");
static_assert(offsetof(BP_LiveStreamerDescription_C_GetBroadcasterName, BroadcasterName) == 0x000000, "Member 'BP_LiveStreamerDescription_C_GetBroadcasterName::BroadcasterName' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_GetBroadcasterName, CallFunc_GetEmptyText_ReturnValue) == 0x000018, "Member 'BP_LiveStreamerDescription_C_GetBroadcasterName::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_GetBroadcasterName, CallFunc_GetTwitchBroadcasterChannelId_ReturnValue) == 0x000030, "Member 'BP_LiveStreamerDescription_C_GetBroadcasterName::CallFunc_GetTwitchBroadcasterChannelId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_GetBroadcasterName, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_LiveStreamerDescription_C_GetBroadcasterName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LiveStreamerDescription_C_GetBroadcasterName, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_LiveStreamerDescription_C_GetBroadcasterName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
