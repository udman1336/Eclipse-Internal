#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Minigun_Athena

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
// 0x0B40 (0x0B40 - 0x0000)
struct B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bPersistentFire;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSecondaryFire;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortCosmeticModification              K2Node_Event_CosmeticMod;                          // 0x0008(0x0B20)()
	class UMaterialInstanceDynamic*               K2Node_Event_DynamicMaterialInstance;              // 0x0B28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue1;           // 0x0B30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B31[0x3];                                      // 0x0B31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x0B34(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue12;          // 0x0B38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena) == 0x000008, "Wrong alignment on B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena");
static_assert(sizeof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena) == 0x000B40, "Wrong size on B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, EntryPoint) == 0x000000, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, K2Node_Event_bPersistentFire) == 0x000005, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, K2Node_Event_bSecondaryFire) == 0x000006, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, K2Node_Event_CosmeticMod) == 0x000008, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::K2Node_Event_CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, K2Node_Event_DynamicMaterialInstance) == 0x000B28, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::K2Node_Event_DynamicMaterialInstance' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, CallFunc_IsDedicatedServer_ReturnValue1) == 0x000B30, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::CallFunc_IsDedicatedServer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, CallFunc_GetLocalMagazineAmmoCount_ReturnValue) == 0x000B34, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::CallFunc_GetLocalMagazineAmmoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena, CallFunc_IsDedicatedServer_ReturnValue12) == 0x000B38, "Member 'B_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena::CallFunc_IsDedicatedServer_ReturnValue12' has a wrong offset!");

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
// 0x0B28 (0x0B28 - 0x0000)
struct B_Minigun_Athena_C_OnInitCosmeticAlterations final
{
public:
	struct FFortCosmeticModification              CosmeticMod;                                       // 0x0000(0x0B20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*               DynamicMaterialInstance;                           // 0x0B20(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Minigun_Athena_C_OnInitCosmeticAlterations) == 0x000008, "Wrong alignment on B_Minigun_Athena_C_OnInitCosmeticAlterations");
static_assert(sizeof(B_Minigun_Athena_C_OnInitCosmeticAlterations) == 0x000B28, "Wrong size on B_Minigun_Athena_C_OnInitCosmeticAlterations");
static_assert(offsetof(B_Minigun_Athena_C_OnInitCosmeticAlterations, CosmeticMod) == 0x000000, "Member 'B_Minigun_Athena_C_OnInitCosmeticAlterations::CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_OnInitCosmeticAlterations, DynamicMaterialInstance) == 0x000B20, "Member 'B_Minigun_Athena_C_OnInitCosmeticAlterations::DynamicMaterialInstance' has a wrong offset!");

// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
// 0x0002 (0x0002 - 0x0000)
struct B_Minigun_Athena_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSecondaryFire;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Minigun_Athena_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_Minigun_Athena_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_Minigun_Athena_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_Minigun_Athena_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_Minigun_Athena_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_Minigun_Athena_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_Minigun_Athena_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct B_Minigun_Athena_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Minigun_Athena_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_Minigun_Athena_C_UserConstructionScript");
static_assert(sizeof(B_Minigun_Athena_C_UserConstructionScript) == 0x000010, "Wrong size on B_Minigun_Athena_C_UserConstructionScript");
static_assert(offsetof(B_Minigun_Athena_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Minigun_Athena_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Minigun_Athena_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'B_Minigun_Athena_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
