#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Impact_Pickaxe_Athena_Keg

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg
// 0x00A0 (0x00A0 - 0x0000)
struct B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0008(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_Event_SpawnedPSC;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg) == 0x000008, "Wrong alignment on B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg");
static_assert(sizeof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg) == 0x0000A0, "Wrong size on B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg, EntryPoint) == 0x000000, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg, K2Node_Event_HitResult) == 0x000008, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg, K2Node_Event_ImpactPhysicalSurface) == 0x000090, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg, K2Node_Event_SpawnedPSC) == 0x000098, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg::K2Node_Event_SpawnedPSC' has a wrong offset!");

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.SpawnDecalCheck
// 0x0054 (0x0054 - 0x0000)
struct B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck final
{
public:
	struct FVector                                Hit_Location;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X12;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y12;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z12;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue1;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue12;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue123;           // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue12;         // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue123;        // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue1234;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1234;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue12345;         // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue12345;      // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck) == 0x000004, "Wrong alignment on B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck");
static_assert(sizeof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck) == 0x000054, "Wrong size on B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, Hit_Location) == 0x000000, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::Hit_Location' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_X) == 0x00000C, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Y) == 0x000010, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Z) == 0x000014, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000024, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_X1) == 0x000030, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Y1) == 0x000034, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Z1) == 0x000038, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_X12) == 0x00003C, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_X12' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Y12) == 0x000040, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Y12' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_BreakVector_Z12) == 0x000044, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_BreakVector_Z12' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue) == 0x000048, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue1) == 0x000049, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00004A, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue12) == 0x00004B, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue1) == 0x00004C, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue123) == 0x00004D, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue123' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue12) == 0x00004E, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue123) == 0x00004F, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue123' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue1234) == 0x000050, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue1234) == 0x000051, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Less_FloatFloat_ReturnValue12345) == 0x000052, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Less_FloatFloat_ReturnValue12345' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck, CallFunc_Greater_FloatFloat_ReturnValue12345) == 0x000053, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck::CallFunc_Greater_FloatFloat_ReturnValue12345' has a wrong offset!");

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.OnPlayImpactFX
// 0x0098 (0x0098 - 0x0000)
struct B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              ImpactPhysicalSurface;                             // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               SpawnedPSC;                                        // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX) == 0x000008, "Wrong alignment on B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX");
static_assert(sizeof(B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX) == 0x000098, "Wrong size on B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x000088, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX, SpawnedPSC) == 0x000090, "Member 'B_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

}
