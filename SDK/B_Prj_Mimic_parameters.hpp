#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Mimic

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Mimic.B_Prj_Mimic_C.ExecuteUbergraph_B_Prj_Mimic
// 0x0170 (0x0170 - 0x0000)
struct B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0008(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x009C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00B4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x00F8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0104(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x0120(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x0130(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_142[0x2];                                      // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0144(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0150(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic) == 0x000008, "Wrong alignment on B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic");
static_assert(sizeof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic) == 0x000170, "Wrong size on B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, EntryPoint) == 0x000000, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_Event_Hit) == 0x000008, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_bBlockingHit) == 0x000090, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_bInitialOverlap) == 0x000091, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_Time) == 0x000094, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_Distance) == 0x000098, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_Location) == 0x00009C, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_ImpactPoint) == 0x0000A8, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_Normal) == 0x0000B4, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_ImpactNormal) == 0x0000C0, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_PhysMat) == 0x0000D0, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_HitActor) == 0x0000D8, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_HitComponent) == 0x0000E0, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_HitBoneName) == 0x0000E8, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_HitItem) == 0x0000F0, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_FaceIndex) == 0x0000F4, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_TraceStart) == 0x0000F8, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_BreakHitResult_TraceEnd) == 0x000104, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_DynamicCast_AsFort_Pawn) == 0x000110, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_Event_HitActors) == 0x000120, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_Event_HitResults) == 0x000130, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_GetTeamAffiliation_ReturnValue) == 0x000140, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, K2Node_SwitchEnum_CmpSuccess) == 0x000141, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000144, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000150, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000160, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic, CallFunc_RandomFloatInRange_ReturnValue) == 0x000168, "Member 'B_Prj_Mimic_C_ExecuteUbergraph_B_Prj_Mimic::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

// Function B_Prj_Mimic.B_Prj_Mimic_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_Mimic_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Mimic_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Mimic_C_OnExploded");
static_assert(sizeof(B_Prj_Mimic_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Mimic_C_OnExploded");
static_assert(offsetof(B_Prj_Mimic_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Mimic_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Mimic_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Mimic_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_Mimic.B_Prj_Mimic_C.OnBounce
// 0x0088 (0x0088 - 0x0000)
struct B_Prj_Mimic_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Mimic_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_Mimic_C_OnBounce");
static_assert(sizeof(B_Prj_Mimic_C_OnBounce) == 0x000088, "Wrong size on B_Prj_Mimic_C_OnBounce");
static_assert(offsetof(B_Prj_Mimic_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Mimic_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_Mimic.B_Prj_Mimic_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct B_Prj_Mimic_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Mimic_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_Prj_Mimic_C_UserConstructionScript");
static_assert(sizeof(B_Prj_Mimic_C_UserConstructionScript) == 0x000008, "Wrong size on B_Prj_Mimic_C_UserConstructionScript");
static_assert(offsetof(B_Prj_Mimic_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'B_Prj_Mimic_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
