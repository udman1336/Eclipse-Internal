#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorMapPanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C.ExecuteUbergraph_AthenaSpectatorMapPanel
// 0x0010 (0x0010 - 0x0000)
struct AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel) == 0x000008, "Wrong alignment on AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel");
static_assert(sizeof(AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel) == 0x000010, "Wrong size on AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel");
static_assert(offsetof(AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel, EntryPoint) == 0x000000, "Member 'AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x000008, "Member 'AthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");

// Function AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C.OnMouseWheel
// 0x02F8 (0x02F8 - 0x0000)
struct AthenaSpectatorMapPanel_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         MapMouseScrollSpeed;                               // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0228(0x00B8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*        K2Node_DynamicCast_AsFort_Player_Controller_Spectating; // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSpectatorMapPanel_C_OnMouseWheel) == 0x000008, "Wrong alignment on AthenaSpectatorMapPanel_C_OnMouseWheel");
static_assert(sizeof(AthenaSpectatorMapPanel_C_OnMouseWheel) == 0x0002F8, "Wrong size on AthenaSpectatorMapPanel_C_OnMouseWheel");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, MouseEvent) == 0x000038, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, ReturnValue) == 0x0000A8, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, MapMouseScrollSpeed) == 0x000160, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::MapMouseScrollSpeed' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000164, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000220, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_Handled_ReturnValue) == 0x000228, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_GetPlayerController_ReturnValue) == 0x0002E0, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, K2Node_DynamicCast_AsFort_Player_Controller_Spectating) == 0x0002E8, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::K2Node_DynamicCast_AsFort_Player_Controller_Spectating' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, K2Node_DynamicCast_bSuccess) == 0x0002F0, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaSpectatorMapPanel_C_OnMouseWheel, CallFunc_IsHovered_ReturnValue) == 0x0002F1, "Member 'AthenaSpectatorMapPanel_C_OnMouseWheel::CallFunc_IsHovered_ReturnValue' has a wrong offset!");

}
