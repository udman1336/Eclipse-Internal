#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnLowHealth_Berzerker

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C.OnActive
// 0x01A0 (0x01A0 - 0x0000)
struct GCNL_GM_OnLowHealth_Berzerker_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x00F0(0x0080)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array1;                           // 0x0178(0x0010)(ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*               CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference1; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive) == 0x000010, "Wrong alignment on GCNL_GM_OnLowHealth_Berzerker_C_OnActive");
static_assert(sizeof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive) == 0x0001A0, "Wrong size on GCNL_GM_OnLowHealth_Berzerker_C_OnActive");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, K2Node_MakeArray_Array) == 0x0000C8, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x0000D8, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference) == 0x0000E8, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, K2Node_MakeStruct_ParticleSysParam) == 0x0000F0, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, K2Node_MakeArray_Array1) == 0x000178, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference1) == 0x000188, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnActive, CallFunc_IsValid_ReturnValue1) == 0x000190, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnActive::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_GM_OnLowHealth_Berzerker_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_GM_OnLowHealth_Berzerker_C_OnRemove");
static_assert(sizeof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove) == 0x0000C8, "Wrong size on GCNL_GM_OnLowHealth_Berzerker_C_OnRemove");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnLowHealth_Berzerker_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GCNL_GM_OnLowHealth_Berzerker_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
