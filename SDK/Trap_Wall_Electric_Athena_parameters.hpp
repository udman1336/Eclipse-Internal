#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Wall_Electric_Athena

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.ExecuteUbergraph_Trap_Wall_Electric_Athena
// 0x0640 (0x0640 - 0x0000)
struct Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0010(0x0080)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x009C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x00BC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue1;       // 0x00C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue12;      // 0x00D4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam1;               // 0x00E0(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam12;              // 0x0160(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam123;             // 0x01E0(0x0080)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue123;     // 0x0260(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam1234;            // 0x0270(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam12345;           // 0x02F0(0x0080)(IsPlainOldData, NoDestructor)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_379[0x3];                                      // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0xF];                                      // 0x0381(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam123456;          // 0x0390(0x0080)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0418(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         Temp_float_Variable;                               // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x042D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x042E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42F[0x1];                                      // 0x042F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0430(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x043C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue12;        // 0x0448(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0460(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;                 // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;                // 0x0480(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue12;                    // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552[0x6];                                      // 0x0552(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue12;       // 0x0558(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue1;     // 0x0560(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0580(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x058C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58D[0x3];                                      // 0x058D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0590(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue123;                   // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621[0x3];                                      // 0x0621(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue12;    // 0x0624(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0630(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena) == 0x000010, "Wrong alignment on Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena");
static_assert(sizeof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena) == 0x000640, "Wrong size on Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, EntryPoint) == 0x000000, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam) == 0x000010, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_BreakVector_X) == 0x000090, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_BreakVector_Y) == 0x000094, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_BreakVector_Z) == 0x000098, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_VectorVector_ReturnValue) == 0x00009C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000A8, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x0000AC, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_MakeVector_ReturnValue) == 0x0000B0, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_MakeVector_ReturnValue1) == 0x0000BC, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_VectorVector_ReturnValue1) == 0x0000C8, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_VectorVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_VectorVector_ReturnValue12) == 0x0000D4, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_VectorVector_ReturnValue12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam1) == 0x0000E0, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam12) == 0x000160, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam123) == 0x0001E0, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam123' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Multiply_VectorVector_ReturnValue123) == 0x000260, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Multiply_VectorVector_ReturnValue123' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam1234) == 0x000270, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam1234' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam12345) == 0x0002F0, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam12345' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_GetGameUserSettings_ReturnValue) == 0x000370, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x000378, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x00037C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_SwitchInteger_CmpSuccess) == 0x000380, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeStruct_ParticleSysParam123456) == 0x000390, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeStruct_ParticleSysParam123456' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_IsValid_ReturnValue) == 0x000410, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_MakeArray_Array) == 0x000418, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, Temp_float_Variable) == 0x000428, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00042C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, Temp_bool_Has_Been_Initd_Variable) == 0x00042D, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, Temp_bool_IsClosed_Variable) == 0x00042E, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000430, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x00043C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetActorLocation_ReturnValue12) == 0x000448, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetActorLocation_ReturnValue12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_GetBuildingMeshComponent_ReturnValue) == 0x000458, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_GetBuildingMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000460, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000470, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_GameplayCueEvent_EventType) == 0x000478, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_GameplayCueEvent_Parameters) == 0x000480, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_SwitchEnum_CmpSuccess) == 0x000538, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000540, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x000548, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_IsValid_ReturnValue1) == 0x000550, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_IsValid_ReturnValue12) == 0x000551, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_IsValid_ReturnValue12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_SpawnEmitterAttached_ReturnValue12) == 0x000558, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_SpawnEmitterAttached_ReturnValue12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetComponentLocation_ReturnValue1) == 0x000560, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetComponentLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000570, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_OtherActor) == 0x000578, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_OtherComp) == 0x000580, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000588, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_bFromSweep) == 0x00058C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, K2Node_ComponentBoundEvent_SweepResult) == 0x000590, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000618, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_IsValid_ReturnValue123) == 0x000620, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_IsValid_ReturnValue123' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_K2_GetComponentLocation_ReturnValue12) == 0x000624, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_K2_GetComponentLocation_ReturnValue12' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000630, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena, CallFunc_VSize_ReturnValue) == 0x00063C, "Member 'Trap_Wall_Electric_Athena_C_ExecuteUbergraph_Trap_Wall_Electric_Athena::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Trap_Wall_Electric_Athena_C_BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// 0x00C0 (0x00C0 - 0x0000)
struct Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap final
{
public:
	EGameplayCueEvent                             EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap) == 0x000008, "Wrong alignment on Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap");
static_assert(sizeof(Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap) == 0x0000C0, "Wrong size on Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap, EventType) == 0x000000, "Member 'Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap::EventType' has a wrong offset!");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap, Parameters) == 0x000008, "Member 'Trap_Wall_Electric_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap::Parameters' has a wrong offset!");

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct Trap_Wall_Electric_Athena_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trap_Wall_Electric_Athena_C_UserConstructionScript) == 0x000001, "Wrong alignment on Trap_Wall_Electric_Athena_C_UserConstructionScript");
static_assert(sizeof(Trap_Wall_Electric_Athena_C_UserConstructionScript) == 0x000001, "Wrong size on Trap_Wall_Electric_Athena_C_UserConstructionScript");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'Trap_Wall_Electric_Athena_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.PlayActivationSoundAndFX
// 0x000C (0x000C - 0x0000)
struct Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX) == 0x000004, "Wrong alignment on Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX");
static_assert(sizeof(Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX) == 0x00000C, "Wrong size on Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX");
static_assert(offsetof(Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'Trap_Wall_Electric_Athena_C_PlayActivationSoundAndFX::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}
