#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SentryTurret_Fire

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.ExecuteUbergraph_GA_SentryTurret_Fire
// 0x00F8 (0x00F8 - 0x0000)
struct GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0048(0x0020)()
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0078(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTrapLevel_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue1; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap1;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire) == 0x000008, "Wrong alignment on GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire");
static_assert(sizeof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire) == 0x0000F8, "Wrong size on GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, EntryPoint) == 0x000000, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CustomEvent_TargetData) == 0x000008, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CustomEvent_ApplicationTag) == 0x000028, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, Temp_struct_Variable) == 0x000040, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, Temp_struct_Variable1) == 0x000048, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_WaitTargetSelection_ReturnValue) == 0x000068, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CustomEvent_TargetData1) == 0x000078, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CustomEvent_ApplicationTag1) == 0x000098, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0000A0, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_CreateDelegate_OutputDelegate1) == 0x0000A8, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_DynamicCast_AsBuilding_Trap) == 0x0000B8, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_DynamicCast_AsBuilding_Trap' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_GetTrapLevel_ReturnValue) == 0x0000C4, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_GetTrapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C8, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x0000D0, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, CallFunc_GetOwningActorFromActorInfo_ReturnValue1) == 0x0000E0, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::CallFunc_GetOwningActorFromActorInfo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_DynamicCast_AsBuilding_Trap1) == 0x0000E8, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_DynamicCast_AsBuilding_Trap1' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire, K2Node_DynamicCast_bSuccess1) == 0x0000F0, "Member 'GA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire::K2Node_DynamicCast_bSuccess1' has a wrong offset!");

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Cancelled_D1EFDCE0423864512AEAC8A06114562A
// 0x0028 (0x0028 - 0x0000)
struct GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A) == 0x000008, "Wrong alignment on GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A");
static_assert(sizeof(GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A) == 0x000028, "Wrong size on GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A");
static_assert(offsetof(GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A, TargetData) == 0x000000, "Member 'GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A::TargetData' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A, ApplicationTag) == 0x000020, "Member 'GA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A::ApplicationTag' has a wrong offset!");

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Targeted_D1EFDCE0423864512AEAC8A06114562A
// 0x0028 (0x0028 - 0x0000)
struct GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A) == 0x000008, "Wrong alignment on GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A");
static_assert(sizeof(GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A) == 0x000028, "Wrong size on GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A");
static_assert(offsetof(GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A, TargetData) == 0x000000, "Member 'GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A::TargetData' has a wrong offset!");
static_assert(offsetof(GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A, ApplicationTag) == 0x000020, "Member 'GA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A::ApplicationTag' has a wrong offset!");

}
