#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SpacePistol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_SpacePistol.B_SpacePistol_C.ExecuteUbergraph_B_SpacePistol
// 0x0118 (0x0118 - 0x0000)
struct B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0008(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_Event_SpawnedPSC;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bPersistentFire;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSecondaryFire;                       // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortReloadFXState                            K2Node_Event_ReloadStage;                          // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMagazineAmmoCount_ReturnValue;         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetReloadTime_ReturnValue;                // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue1;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x00D4(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x00E4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue1;             // 0x00F0(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue1;    // 0x0100(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue12;          // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue1;                        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol) == 0x000008, "Wrong alignment on B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol");
static_assert(sizeof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol) == 0x000118, "Wrong size on B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, EntryPoint) == 0x000000, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_HitResult) == 0x000008, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_ImpactPhysicalSurface) == 0x000090, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_SpawnedPSC) == 0x000098, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_SpawnedPSC' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A0, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_bPersistentFire) == 0x0000A1, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_bSecondaryFire) == 0x0000A2, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_Event_ReloadStage) == 0x0000A3, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_Event_ReloadStage' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, K2Node_SwitchEnum_CmpSuccess) == 0x0000A4, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_GetMagazineAmmoCount_ReturnValue) == 0x0000A8, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_GetMagazineAmmoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Lerp_ReturnValue) == 0x0000AC, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000B0, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_GetRemainingAmmo_ReturnValue) == 0x0000B4, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_GetRemainingAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_GetReloadTime_ReturnValue) == 0x0000BC, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_GetReloadTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_GetTimelineLength_ReturnValue) == 0x0000C0, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000C4, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_FClamp_ReturnValue) == 0x0000C8, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000CC, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_IsDedicatedServer_ReturnValue1) == 0x0000D0, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_IsDedicatedServer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_LinearColorLerp_ReturnValue) == 0x0000D4, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x0000E4, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_LinearColorLerp_ReturnValue1) == 0x0000F0, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_LinearColorLerp_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Conv_LinearColorToVector_ReturnValue1) == 0x000100, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Conv_LinearColorToVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_IsDedicatedServer_ReturnValue12) == 0x00010C, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_IsDedicatedServer_ReturnValue12' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol, CallFunc_Lerp_ReturnValue1) == 0x000110, "Member 'B_SpacePistol_C_ExecuteUbergraph_B_SpacePistol::CallFunc_Lerp_ReturnValue1' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.OnPlayImpactFX
// 0x0098 (0x0098 - 0x0000)
struct B_SpacePistol_C_OnPlayImpactFX final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              ImpactPhysicalSurface;                             // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               SpawnedPSC;                                        // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_OnPlayImpactFX) == 0x000008, "Wrong alignment on B_SpacePistol_C_OnPlayImpactFX");
static_assert(sizeof(B_SpacePistol_C_OnPlayImpactFX) == 0x000098, "Wrong size on B_SpacePistol_C_OnPlayImpactFX");
static_assert(offsetof(B_SpacePistol_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_SpacePistol_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x000088, "Member 'B_SpacePistol_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_OnPlayImpactFX, SpawnedPSC) == 0x000090, "Member 'B_SpacePistol_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.OnPlayReloadFX
// 0x0001 (0x0001 - 0x0000)
struct B_SpacePistol_C_OnPlayReloadFX final
{
public:
	EFortReloadFXState                            ReloadStage;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_OnPlayReloadFX) == 0x000001, "Wrong alignment on B_SpacePistol_C_OnPlayReloadFX");
static_assert(sizeof(B_SpacePistol_C_OnPlayReloadFX) == 0x000001, "Wrong size on B_SpacePistol_C_OnPlayReloadFX");
static_assert(offsetof(B_SpacePistol_C_OnPlayReloadFX, ReloadStage) == 0x000000, "Member 'B_SpacePistol_C_OnPlayReloadFX::ReloadStage' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.OnPlayWeaponFireFX
// 0x0002 (0x0002 - 0x0000)
struct B_SpacePistol_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSecondaryFire;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_SpacePistol_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_SpacePistol_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_SpacePistol_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_SpacePistol_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_SpacePistol_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_SpacePistol_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_SpacePistol_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct B_SpacePistol_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_SpacePistol_C_UserConstructionScript");
static_assert(sizeof(B_SpacePistol_C_UserConstructionScript) == 0x000008, "Wrong size on B_SpacePistol_C_UserConstructionScript");
static_assert(offsetof(B_SpacePistol_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'B_SpacePistol_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.SetAmmoBarVariables
// 0x0034 (0x0034 - 0x0000)
struct B_SpacePistol_C_SetAmmoBarVariables final
{
public:
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBulletsPerClip_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBulletsPerClip_ReturnValue1;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue1;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue12;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue123;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue1;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMagazineAmmoCount_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_SetAmmoBarVariables) == 0x000004, "Wrong alignment on B_SpacePistol_C_SetAmmoBarVariables");
static_assert(sizeof(B_SpacePistol_C_SetAmmoBarVariables) == 0x000034, "Wrong size on B_SpacePistol_C_SetAmmoBarVariables");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_GetRemainingAmmo_ReturnValue) == 0x000000, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_GetRemainingAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_GetBulletsPerClip_ReturnValue) == 0x000004, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_GetBulletsPerClip_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_GetBulletsPerClip_ReturnValue1) == 0x000010, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_GetBulletsPerClip_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Conv_IntToFloat_ReturnValue1) == 0x000014, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Conv_IntToFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Conv_IntToFloat_ReturnValue12) == 0x000018, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Conv_IntToFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000020, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Conv_IntToFloat_ReturnValue123) == 0x000024, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Conv_IntToFloat_ReturnValue123' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Divide_FloatFloat_ReturnValue1) == 0x000028, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Divide_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_Subtract_FloatFloat_ReturnValue1) == 0x00002C, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_Subtract_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetAmmoBarVariables, CallFunc_GetMagazineAmmoCount_ReturnValue) == 0x000030, "Member 'B_SpacePistol_C_SetAmmoBarVariables::CallFunc_GetMagazineAmmoCount_ReturnValue' has a wrong offset!");

// Function B_SpacePistol.B_SpacePistol_C.SetReloadVariables
// 0x0034 (0x0034 - 0x0000)
struct B_SpacePistol_C_SetReloadVariables final
{
public:
	int32                                         CallFunc_GetBulletsPerClip_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBulletsPerClip_ReturnValue1;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue1;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue12;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMagazineAmmoCount_ReturnValue;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue123;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue1;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SpacePistol_C_SetReloadVariables) == 0x000004, "Wrong alignment on B_SpacePistol_C_SetReloadVariables");
static_assert(sizeof(B_SpacePistol_C_SetReloadVariables) == 0x000034, "Wrong size on B_SpacePistol_C_SetReloadVariables");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_GetBulletsPerClip_ReturnValue) == 0x000000, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_GetBulletsPerClip_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_GetRemainingAmmo_ReturnValue) == 0x000004, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_GetRemainingAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_GetBulletsPerClip_ReturnValue1) == 0x000010, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_GetBulletsPerClip_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Conv_IntToFloat_ReturnValue1) == 0x000014, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Conv_IntToFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Conv_IntToFloat_ReturnValue12) == 0x000018, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Conv_IntToFloat_ReturnValue12' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_GetMagazineAmmoCount_ReturnValue) == 0x000020, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_GetMagazineAmmoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Conv_IntToFloat_ReturnValue123) == 0x000028, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Conv_IntToFloat_ReturnValue123' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Divide_FloatFloat_ReturnValue1) == 0x00002C, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Divide_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_SpacePistol_C_SetReloadVariables, CallFunc_Subtract_FloatFloat_ReturnValue1) == 0x000030, "Member 'B_SpacePistol_C_SetReloadVariables::CallFunc_Subtract_FloatFloat_ReturnValue1' has a wrong offset!");

}
