#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerZoneTeamScoreContributionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget
// 0x0004 (0x0004 - 0x0000)
struct PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget) == 0x000004, "Wrong alignment on PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget");
static_assert(sizeof(PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget) == 0x000004, "Wrong size on PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget, EntryPoint) == 0x000000, "Member 'PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget::EntryPoint' has a wrong offset!");

// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Initialize
// 0x0100 (0x0100 - 0x0000)
struct PlayerZoneTeamScoreContributionWidget_C_Initialize final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerState*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	class AFortPlayerState*                       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetUniqueID_ReturnValue;                  // 0x0040(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	bool                                          CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerZoneTeamScoreContributionWidget_C_Initialize) == 0x000008, "Wrong alignment on PlayerZoneTeamScoreContributionWidget_C_Initialize");
static_assert(sizeof(PlayerZoneTeamScoreContributionWidget_C_Initialize) == 0x000100, "Wrong size on PlayerZoneTeamScoreContributionWidget_C_Initialize");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, Temp_int_Array_Index_Variable) == 0x000004, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Array_Get_Item) == 0x000028, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_GetPlayerName_ReturnValue) == 0x000030, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_GetUniqueID_ReturnValue) == 0x000040, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_GetUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_AreUniqueIDsIdentical_ReturnValue) == 0x000080, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_AreUniqueIDsIdentical_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, K2Node_MakeStruct_FormatArgumentData) == 0x000088, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, K2Node_MakeArray_Array) == 0x0000C8, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x0000F9, "Member 'PlayerZoneTeamScoreContributionWidget_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Update Contribution LERP
// 0x0090 (0x0090 - 0x0000)
struct PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP final
{
public:
	float                                         LERP_Factor;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP) == 0x000008, "Wrong alignment on PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP");
static_assert(sizeof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP) == 0x000090, "Wrong size on PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, LERP_Factor) == 0x000000, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::LERP_Factor' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, K2Node_MakeArray_Array) == 0x000068, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP, CallFunc_Format_ReturnValue) == 0x000078, "Member 'PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP::CallFunc_Format_ReturnValue' has a wrong offset!");

}
