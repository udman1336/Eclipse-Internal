#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANimBP_UnicornHorn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn
// 0x0014 (0x0014 - 0x0000)
struct ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn) == 0x000004, "Wrong alignment on ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn");
static_assert(sizeof(ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn) == 0x000014, "Wrong size on ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn");
static_assert(offsetof(ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn, EntryPoint) == 0x000000, "Member 'ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn, CallFunc_VLerp_ReturnValue) == 0x000008, "Member 'ANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn::CallFunc_VLerp_ReturnValue' has a wrong offset!");

// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ANimBP_UnicornHorn_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANimBP_UnicornHorn_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ANimBP_UnicornHorn_C_BlueprintUpdateAnimation");
static_assert(sizeof(ANimBP_UnicornHorn_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ANimBP_UnicornHorn_C_BlueprintUpdateAnimation");
static_assert(offsetof(ANimBP_UnicornHorn_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ANimBP_UnicornHorn_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

}
