#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaIndicatorLayer

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.ExecuteUbergraph_AthenaIndicatorLayer
// 0x00C0 (0x00C0 - 0x0000)
struct AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBuildingInfoIndicator_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortActorCanvasSlot*                   CallFunc_AddActorIndicator_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue1;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionIndicator_C*                CallFunc_Create_ReturnValue1;                      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortActorCanvasSlot*                   CallFunc_AddActorIndicator_ReturnValue1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaTeamMemberIndicator_C*           CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AActor* PointOfInterest)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerStateAthena*>         K2Node_Event_PlayerStates;                         // 0x00A0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AFortPlayerStateAthena*                 CallFunc_Array_Get_Item1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer");
static_assert(sizeof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer) == 0x0000C0, "Wrong size on AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, EntryPoint) == 0x000000, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Create_ReturnValue) == 0x000020, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_AddActorIndicator_ReturnValue) == 0x000028, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_AddActorIndicator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_GetOwningPlayer_ReturnValue1) == 0x000038, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_GetOwningPlayer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Create_ReturnValue1) == 0x000040, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Create_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, Temp_int_Array_Index_Variable1) == 0x000048, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_AddActorIndicator_ReturnValue1) == 0x000050, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_AddActorIndicator_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Array_Get_Item) == 0x000058, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_RemoveChild_ReturnValue) == 0x000060, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, K2Node_CreateDelegate_OutputDelegate1) == 0x000078, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, Temp_int_Loop_Counter_Variable1) == 0x000088, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Add_IntInt_ReturnValue1) == 0x000090, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_GetContext_ReturnValue) == 0x000098, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, K2Node_Event_PlayerStates) == 0x0000A0, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::K2Node_Event_PlayerStates' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Array_Get_Item1) == 0x0000B0, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Array_Length_ReturnValue1) == 0x0000B8, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer, CallFunc_Less_IntInt_ReturnValue1) == 0x0000BC, "Member 'AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.SquadIndicatorsChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaIndicatorLayer_C_SquadIndicatorsChanged final
{
public:
	TArray<class AFortPlayerStateAthena*>         PlayerStates;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(AthenaIndicatorLayer_C_SquadIndicatorsChanged) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_SquadIndicatorsChanged");
static_assert(sizeof(AthenaIndicatorLayer_C_SquadIndicatorsChanged) == 0x000010, "Wrong size on AthenaIndicatorLayer_C_SquadIndicatorsChanged");
static_assert(offsetof(AthenaIndicatorLayer_C_SquadIndicatorsChanged, PlayerStates) == 0x000000, "Member 'AthenaIndicatorLayer_C_SquadIndicatorsChanged::PlayerStates' has a wrong offset!");

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.AddSquadMemberIndicator
// 0x0030 (0x0030 - 0x0000)
struct AthenaIndicatorLayer_C_AddSquadMemberIndicator final
{
public:
	class AFortPlayerStateAthena*                 Player_State;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Team_Member_Index;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaTeamMemberIndicator_C*           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortActorCanvasSlot*                   CallFunc_AddActorIndicator_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaIndicatorLayer_C_AddSquadMemberIndicator) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_AddSquadMemberIndicator");
static_assert(sizeof(AthenaIndicatorLayer_C_AddSquadMemberIndicator) == 0x000030, "Wrong size on AthenaIndicatorLayer_C_AddSquadMemberIndicator");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, Player_State) == 0x000000, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::Player_State' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, Team_Member_Index) == 0x000008, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::Team_Member_Index' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, CallFunc_Create_ReturnValue) == 0x000018, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, CallFunc_AddActorIndicator_ReturnValue) == 0x000020, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::CallFunc_AddActorIndicator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_AddSquadMemberIndicator, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'AthenaIndicatorLayer_C_AddSquadMemberIndicator::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.CreateInterestIndicatorWidget
// 0x0020 (0x0020 - 0x0000)
struct AthenaIndicatorLayer_C_CreateInterestIndicatorWidget final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInterestIndicatorWidget_C*             CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortActorCanvasSlot*                   CallFunc_AddActorIndicator_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_CreateInterestIndicatorWidget");
static_assert(sizeof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget) == 0x000020, "Wrong size on AthenaIndicatorLayer_C_CreateInterestIndicatorWidget");
static_assert(offsetof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'AthenaIndicatorLayer_C_CreateInterestIndicatorWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'AthenaIndicatorLayer_C_CreateInterestIndicatorWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget, CallFunc_Array_AddUnique_ReturnValue) == 0x000010, "Member 'AthenaIndicatorLayer_C_CreateInterestIndicatorWidget::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_CreateInterestIndicatorWidget, CallFunc_AddActorIndicator_ReturnValue) == 0x000018, "Member 'AthenaIndicatorLayer_C_CreateInterestIndicatorWidget::CallFunc_AddActorIndicator_ReturnValue' has a wrong offset!");

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestAdded
// 0x0040 (0x0040 - 0x0000)
struct AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded final
{
public:
	class AActor*                                 PointOfInterest;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayText;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             DisplayImage;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterestIndicatorWidget_C*             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded");
static_assert(sizeof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded) == 0x000040, "Wrong size on AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, PointOfInterest) == 0x000000, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::PointOfInterest' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, DisplayText) == 0x000008, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::DisplayText' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, DisplayImage) == 0x000020, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::DisplayImage' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, CallFunc_Array_Get_Item) == 0x000030, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded, CallFunc_Array_AddUnique_ReturnValue) == 0x000038, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestRemoved
// 0x0048 (0x0048 - 0x0000)
struct AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved final
{
public:
	class AActor*                                 PointOfInterest;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Removed;                                           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterestIndicatorWidget_C*             CurrentPointOfInterestWidget;                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemovePointOfInterest_Removed;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterestIndicatorWidget_C*             CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved) == 0x000008, "Wrong alignment on AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved");
static_assert(sizeof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved) == 0x000048, "Wrong size on AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, PointOfInterest) == 0x000000, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::PointOfInterest' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, Removed) == 0x000008, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::Removed' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CurrentPointOfInterestWidget) == 0x000010, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CurrentPointOfInterestWidget' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Array_AddUnique_ReturnValue) == 0x00002C, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Array_RemoveItem_ReturnValue) == 0x000030, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_RemovePointOfInterest_Removed) == 0x000031, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_RemovePointOfInterest_Removed' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Array_Get_Item) == 0x000038, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved, CallFunc_BooleanAND_ReturnValue) == 0x000045, "Member 'AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
