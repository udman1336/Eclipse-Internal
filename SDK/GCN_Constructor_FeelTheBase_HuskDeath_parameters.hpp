#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Constructor_FeelTheBase_HuskDeath

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Constructor_FeelTheBase_HuskDeath.GCN_Constructor_FeelTheBase_HuskDeath_C.OnExecute
// 0x0128 (0x0128 - 0x0000)
struct GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00EC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00F8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0104(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute) == 0x000008, "Wrong alignment on GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute");
static_assert(sizeof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute) == 0x000128, "Wrong size on GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_MakeVector_ReturnValue) == 0x0000C4, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000DC, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, K2Node_DynamicCast_AsFort_AIPawn) == 0x0000E0, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_GetSocketLocation_ReturnValue) == 0x0000EC, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000F8, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_MakeRotFromX_ReturnValue) == 0x000104, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_VSize_ReturnValue) == 0x000110, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000118, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000120, "Member 'GCN_Constructor_FeelTheBase_HuskDeath_C_OnExecute::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}
