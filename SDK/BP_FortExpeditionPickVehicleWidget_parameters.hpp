#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionPickVehicleWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
// 0x00C8 (0x00C8 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_SquadId;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName SquadId)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HandleBack_PassThrough;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortExpeditionItem*                    K2Node_Event_InItem;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*          CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetRequiredTags_ReturnValue;              // 0x0050(0x0020)()
	class UCommonButton*                          K2Node_CustomEvent_Button1;                        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget1; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate1;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B0(0x0008)(NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate123;           // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget) == 0x0000C8, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, EntryPoint) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_ComponentBoundEvent_Widget) == 0x000008, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget) == 0x000010, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CustomEvent_SquadId) == 0x000020, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CustomEvent_SquadId' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_HandleBack_PassThrough) == 0x00003C, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x00003D, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_Event_InItem) == 0x000040, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_Event_InItem' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition) == 0x000048, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_GetRequiredTags_ReturnValue) == 0x000050, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_GetRequiredTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CustomEvent_Button1) == 0x000070, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CustomEvent_Button1' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget1) == 0x000078, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget1' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_DynamicCast_bSuccess1) == 0x000080, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CreateDelegate_OutputDelegate1) == 0x000088, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CreateDelegate_OutputDelegate12) == 0x000098, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CustomEvent_Button) == 0x0000A8, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B0, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget, K2Node_CreateDelegate_OutputDelegate123) == 0x0000B8, "Member 'BP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
// 0x0008 (0x0008 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered) == 0x000008, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered, Button) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered::Button' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
// 0x0008 (0x0008 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered) == 0x000008, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered, Button) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered::Button' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected final
{
public:
	class FName                                   SquadId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected) == 0x000008, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected, SquadId) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected::SquadId' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature, Widget) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature::Widget' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_SetData final
{
public:
	class UFortExpeditionItem*                    InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_SetData) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_SetData");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_SetData) == 0x000008, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_SetData");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_SetData, InItem) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_SetData::InItem' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_HandleBack) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_HandleBack");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_HandleBack) == 0x000010, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_HandleBack");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_HandleBack, Passthrough) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_HandleBack::Passthrough' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionPickVehicleWidget_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers) == 0x000010, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
// 0x0028 (0x0028 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition final
{
public:
	class UFortItem*                              ItemDef;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*          AsFort_Expedition_Item_Definition;                 // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*          K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition) == 0x000028, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition, ItemDef) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition::ItemDef' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition, AsFort_Expedition_Item_Definition) == 0x000008, "Member 'BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition::AsFort_Expedition_Item_Definition' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition, K2Node_DynamicCast_AsFort_Expedition_Item_Definition) == 0x000018, "Member 'BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition::K2Node_DynamicCast_AsFort_Expedition_Item_Definition' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
// 0x0080 (0x0080 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads final
{
public:
	struct FGameplayTagContainer                  RequirementTags;                                   // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVehicleObject_C*                       CallFunc_SpawnObject_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds; // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSquadOnExpedition_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads) == 0x000080, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, RequirementTags) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::RequirementTags' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000038, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_SpawnObject_ReturnValue) == 0x000048, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds) == 0x000050, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue) == 0x000060, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_IsSquadOnExpedition_ReturnValue) == 0x000074, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_IsSquadOnExpedition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'BP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
// 0x0020 (0x0020 - 0x0000)
struct BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console final
{
public:
	class UCommonInputContext*                    CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSelectedItem_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console) == 0x000008, "Wrong alignment on BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console");
static_assert(sizeof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console) == 0x000020, "Wrong size on BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_GetItemAt_ReturnValue) == 0x000010, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_SetSelectedItem_ReturnValue) == 0x000018, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_SetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
