#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickBarSlot

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
// 0x02E0 (0x02E0 - 0x0000)
struct AthenaQuickBarSlot_C_OnTouchStarted final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InTouchEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0228(0x00B8)()
};
static_assert(alignof(AthenaQuickBarSlot_C_OnTouchStarted) == 0x000008, "Wrong alignment on AthenaQuickBarSlot_C_OnTouchStarted");
static_assert(sizeof(AthenaQuickBarSlot_C_OnTouchStarted) == 0x0002E0, "Wrong size on AthenaQuickBarSlot_C_OnTouchStarted");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, MyGeometry) == 0x000000, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, InTouchEvent) == 0x000038, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::InTouchEvent' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, ReturnValue) == 0x0000A8, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, CallFunc_IsBROnly_ReturnValue) == 0x000218, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, CallFunc_GetContext_ReturnValue) == 0x000220, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_OnTouchStarted, CallFunc_Handled_ReturnValue) == 0x000228, "Member 'AthenaQuickBarSlot_C_OnTouchStarted::CallFunc_Handled_ReturnValue' has a wrong offset!");

}
