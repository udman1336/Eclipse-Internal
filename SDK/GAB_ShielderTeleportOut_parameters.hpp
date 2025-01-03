#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_ShielderTeleportOut

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut
// 0x01B0 (0x01B0 - 0x0000)
struct GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShielderPawn_C*                        K2Node_DynamicCast_AsShielder_Pawn;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x0030(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0058(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0090(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x00D0(0x0020)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00F8(0x00A8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut) == 0x000008, "Wrong alignment on GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut");
static_assert(sizeof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut) == 0x0001B0, "Wrong size on GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, EntryPoint) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_DynamicCast_AsShielder_Pawn) == 0x000010, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_DynamicCast_AsShielder_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_TargetData12) == 0x000030, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_ApplicationTag12) == 0x000050, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_TargetData1) == 0x000058, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_ApplicationTag1) == 0x000078, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CreateDelegate_OutputDelegate1) == 0x000080, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_TargetData) == 0x000090, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CustomEvent_ApplicationTag) == 0x0000B0, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_CreateDelegate_OutputDelegate12) == 0x0000B8, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, Temp_struct_Variable) == 0x0000C8, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, Temp_struct_Variable1) == 0x0000D0, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000F0, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_Event_EventData) == 0x0000F8, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0001A0, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, K2Node_Event_bWasCancelled) == 0x0001A8, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut, CallFunc_IsValid_ReturnValue) == 0x0001A9, "Member 'GAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_ShielderTeleportOut_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_ShielderTeleportOut_C_K2_OnEndAbility");
static_assert(sizeof(GAB_ShielderTeleportOut_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_ShielderTeleportOut_C_K2_OnEndAbility");
static_assert(offsetof(GAB_ShielderTeleportOut_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995
// 0x0028 (0x0028 - 0x0000)
struct GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995) == 0x000008, "Wrong alignment on GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995");
static_assert(sizeof(GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995) == 0x000028, "Wrong size on GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995, TargetData) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995, ApplicationTag) == 0x000020, "Member 'GAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995::ApplicationTag' has a wrong offset!");

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995
// 0x0028 (0x0028 - 0x0000)
struct GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995) == 0x000008, "Wrong alignment on GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995");
static_assert(sizeof(GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995) == 0x000028, "Wrong size on GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995, TargetData) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995, ApplicationTag) == 0x000020, "Member 'GAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995::ApplicationTag' has a wrong offset!");

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995
// 0x0028 (0x0028 - 0x0000)
struct GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995) == 0x000008, "Wrong alignment on GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995");
static_assert(sizeof(GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995) == 0x000028, "Wrong size on GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995, TargetData) == 0x000000, "Member 'GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995, ApplicationTag) == 0x000020, "Member 'GAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995::ApplicationTag' has a wrong offset!");

}

