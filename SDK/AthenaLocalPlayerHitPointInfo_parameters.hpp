#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocalPlayerHitPointInfo

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
// 0x0008 (0x0008 - 0x0000)
struct AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo) == 0x000004, "Wrong alignment on AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");
static_assert(sizeof(AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo) == 0x000008, "Wrong size on AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo");
static_assert(offsetof(AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo, EntryPoint) == 0x000000, "Member 'AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo, CallFunc_IsBROnly_ReturnValue) == 0x000004, "Member 'AthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");

// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel
// 0x0008 (0x0008 - 0x0000)
struct AthenaLocalPlayerHitPointInfo_C_SetViewModel final
{
public:
	class UAthenaPlayerViewModel*                 ViewModel;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLocalPlayerHitPointInfo_C_SetViewModel) == 0x000008, "Wrong alignment on AthenaLocalPlayerHitPointInfo_C_SetViewModel");
static_assert(sizeof(AthenaLocalPlayerHitPointInfo_C_SetViewModel) == 0x000008, "Wrong size on AthenaLocalPlayerHitPointInfo_C_SetViewModel");
static_assert(offsetof(AthenaLocalPlayerHitPointInfo_C_SetViewModel, ViewModel) == 0x000000, "Member 'AthenaLocalPlayerHitPointInfo_C_SetViewModel::ViewModel' has a wrong offset!");

}
