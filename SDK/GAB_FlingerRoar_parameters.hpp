#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_FlingerRoar

#include "Basic.hpp"


namespace SDK::Params
{

// Function GAB_FlingerRoar.GAB_FlingerRoar_C.ExecuteUbergraph_GAB_FlingerRoar
// 0x0058 (0x0058 - 0x0000)
struct GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar) == 0x000008, "Wrong alignment on GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar");
static_assert(sizeof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar) == 0x000058, "Wrong size on GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, EntryPoint) == 0x000000, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, K2Node_CreateDelegate_OutputDelegate1) == 0x000018, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, K2Node_CreateDelegate_OutputDelegate12) == 0x000028, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, K2Node_CreateDelegate_OutputDelegate123) == 0x000038, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000048, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar, CallFunc_K2_CommitAbility_ReturnValue) == 0x000051, "Member 'GAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

}
