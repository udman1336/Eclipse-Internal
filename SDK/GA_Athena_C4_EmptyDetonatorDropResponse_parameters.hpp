#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_C4_EmptyDetonatorDropResponse

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_C4_EmptyDetonatorDropResponse.GA_Athena_C4_EmptyDetonatorDropResponse_C.ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse
// 0x00F0 (0x00F0 - 0x0000)
struct GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00A8)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetTrackedGroupedActors_ReturnValue;      // 0x00C0(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_BGA_Athena_C4_C*                     K2Node_DynamicCast_AsB_BGA_Athena_C4;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse) == 0x000008, "Wrong alignment on GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse");
static_assert(sizeof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse) == 0x0000F0, "Wrong size on GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, EntryPoint) == 0x000000, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, K2Node_Event_EventData) == 0x000010, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000B8, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_GetTrackedGroupedActors_ReturnValue) == 0x0000C0, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_GetTrackedGroupedActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, K2Node_DynamicCast_AsB_BGA_Athena_C4) == 0x0000E0, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::K2Node_DynamicCast_AsB_BGA_Athena_C4' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_Less_IntInt_ReturnValue) == 0x0000E9, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000EC, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_Athena_C4_EmptyDetonatorDropResponse.GA_Athena_C4_EmptyDetonatorDropResponse_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Athena_C4_EmptyDetonatorDropResponse.GA_Athena_C4_EmptyDetonatorDropResponse_C.K2_ShouldAbilityRespondToEvent
// 0x0168 (0x0168 - 0x0000)
struct GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x00F0(0x0040)(ContainsInstancedReference)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x2];                                      // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult1;         // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateCurveTableRow_OutXY1;             // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue1;                      // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue1;              // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x015F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue12;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue123;                // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1234;               // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent) == 0x000168, "Wrong size on GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetActorInfo_ReturnValue) == 0x0000F0, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000130, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000138, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000141, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000144, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue) == 0x000148, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_FTrunc_ReturnValue) == 0x00014C, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000150, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_Conv_IntToBool_ReturnValue) == 0x000151, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, K2Node_SwitchEnum_CmpSuccess) == 0x000152, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutResult1) == 0x000153, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutResult1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EvaluateCurveTableRow_OutXY1) == 0x000154, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EvaluateCurveTableRow_OutXY1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_FTrunc_ReturnValue1) == 0x000158, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_FTrunc_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00015C, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_Conv_IntToBool_ReturnValue1) == 0x00015D, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_Conv_IntToBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x00015E, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue1) == 0x00015F, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue12) == 0x000160, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue12' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue123) == 0x000161, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue123' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, K2Node_SwitchEnum1_CmpSuccess) == 0x000162, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::K2Node_SwitchEnum1_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue1234) == 0x000163, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanOR_ReturnValue) == 0x000164, "Member 'GA_Athena_C4_EmptyDetonatorDropResponse_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
