#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_SpaceShuttleA

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.ExecuteUbergraph_B_Glider_SpaceShuttleA
// 0x0030 (0x0030 - 0x0000)
struct B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable1;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_MovementLengthSquared;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ForwardDot;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RightDot;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RotationalMovementAcceleration;       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable1;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA) == 0x000008, "Wrong alignment on B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA");
static_assert(sizeof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA) == 0x000030, "Wrong size on B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, EntryPoint) == 0x000000, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, K2Node_Event_EndPlayReason) == 0x000004, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, Temp_bool_Has_Been_Initd_Variable1) == 0x000007, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::Temp_bool_Has_Been_Initd_Variable1' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, K2Node_Event_MovementLengthSquared) == 0x000008, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::K2Node_Event_MovementLengthSquared' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, K2Node_Event_ForwardDot) == 0x00000C, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::K2Node_Event_ForwardDot' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, K2Node_Event_RightDot) == 0x000010, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::K2Node_Event_RightDot' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, K2Node_Event_RotationalMovementAcceleration) == 0x000014, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::K2Node_Event_RotationalMovementAcceleration' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, Temp_bool_IsClosed_Variable1) == 0x00001A, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::Temp_bool_IsClosed_Variable1' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000028, "Member 'B_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct B_Glider_SpaceShuttleA_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Glider_SpaceShuttleA_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on B_Glider_SpaceShuttleA_C_ReceiveEndPlay");
static_assert(sizeof(B_Glider_SpaceShuttleA_C_ReceiveEndPlay) == 0x000001, "Wrong size on B_Glider_SpaceShuttleA_C_ReceiveEndPlay");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'B_Glider_SpaceShuttleA_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.OnParachuteTrailUpdated
// 0x0010 (0x0010 - 0x0000)
struct B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated final
{
public:
	float                                         MovementLengthSquared;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardDot;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationalMovementAcceleration;                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated) == 0x000004, "Wrong alignment on B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated");
static_assert(sizeof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated) == 0x000010, "Wrong size on B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated, MovementLengthSquared) == 0x000000, "Member 'B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated::MovementLengthSquared' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated, ForwardDot) == 0x000004, "Member 'B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated::ForwardDot' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated, RightDot) == 0x000008, "Member 'B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated::RightDot' has a wrong offset!");
static_assert(offsetof(B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated, RotationalMovementAcceleration) == 0x00000C, "Member 'B_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated::RotationalMovementAcceleration' has a wrong offset!");

}
