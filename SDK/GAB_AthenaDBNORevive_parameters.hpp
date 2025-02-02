#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNORevive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
// 0x0518 (0x0518 - 0x0000)
struct GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0020(0x0020)()
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0078(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable12;                            // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable123;                           // 0x00B8(0x0020)()
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x00E8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate123;           // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0120(0x00A8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x01D8(0x0080)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0258(0x0040)(ContainsInstancedReference)
	struct FFortAbilityTargetSelection            CallFunc_Array_Get_Item;                           // 0x0298(0x00F8)()
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_399[0x3];                                      // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x03A4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x03B0(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x03C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                  K2Node_MakeStruct_Vector_NetQuantize10;            // 0x03D4(0x000C)(NoDestructor)
	float                                         CallFunc_BreakVector_X1;                           // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantizeNormal              K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x03EC(0x000C)(NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData123;                  // 0x03F8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag123;              // 0x0418(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0420(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9[0x7];                                      // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1234;          // 0x04E0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1234;                 // 0x04F0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1234;             // 0x0510(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(sizeof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x000518, "Wrong size on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable) == 0x000008, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable1) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData1) == 0x000040, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag1) == 0x000060, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate1) == 0x000068, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData) == 0x000078, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag) == 0x000098, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate12) == 0x0000A0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable12) == 0x0000B0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable12' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable123) == 0x0000B8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable123' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_WaitTargetSelection_ReturnValue) == 0x0000D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_bool_Variable) == 0x0000E1, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData12) == 0x0000E8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag12) == 0x000108, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate123) == 0x000110, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_EventData) == 0x000120, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0001C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue1) == 0x0001D0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue) == 0x0001D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetActorInfo_ReturnValue) == 0x000258, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Array_Get_Item) == 0x000298, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000390, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_bSuccess) == 0x000398, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00039C, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Select_Default) == 0x0003A0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketLocation_ReturnValue) == 0x0003A4, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketRotation_ReturnValue) == 0x0003B0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X) == 0x0003BC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y) == 0x0003C0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z) == 0x0003C4, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0003C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_Vector_NetQuantize10) == 0x0003D4, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_Vector_NetQuantize10' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X1) == 0x0003E0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y1) == 0x0003E4, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z1) == 0x0003E8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_Vector_NetQuantizeNormal) == 0x0003EC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_Vector_NetQuantizeNormal' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData123) == 0x0003F8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData123' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag123) == 0x000418, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag123' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_GameplayCueParameters) == 0x000420, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_bWasCancelled) == 0x0004D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate1234) == 0x0004E0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData1234) == 0x0004F0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData1234' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag1234) == 0x000510, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag1234' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

}

