#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// 0x000C (0x000C - 0x0000)
struct ClothingSimulationInteractorNv_EnableGravityOverride final
{
public:
	struct FVector                                InVector;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ClothingSimulationInteractorNv_EnableGravityOverride) == 0x000004, "Wrong alignment on ClothingSimulationInteractorNv_EnableGravityOverride");
static_assert(sizeof(ClothingSimulationInteractorNv_EnableGravityOverride) == 0x00000C, "Wrong size on ClothingSimulationInteractorNv_EnableGravityOverride");
static_assert(offsetof(ClothingSimulationInteractorNv_EnableGravityOverride, InVector) == 0x000000, "Member 'ClothingSimulationInteractorNv_EnableGravityOverride::InVector' has a wrong offset!");

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness final
{
public:
	float                                         InStiffness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness) == 0x000004, "Wrong alignment on ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness");
static_assert(sizeof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness) == 0x000004, "Wrong size on ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness");
static_assert(offsetof(ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, InStiffness) == 0x000000, "Member 'ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness::InStiffness' has a wrong offset!");

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness final
{
public:
	float                                         InStiffness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness) == 0x000004, "Wrong alignment on ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness");
static_assert(sizeof(ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness) == 0x000004, "Wrong size on ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness");
static_assert(offsetof(ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness, InStiffness) == 0x000000, "Member 'ClothingSimulationInteractorNv_SetAnimDriveSpringStiffness::InStiffness' has a wrong offset!");

}
