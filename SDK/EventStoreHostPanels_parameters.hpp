#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventStoreHostPanels

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels
// 0x0060 (0x0060 - 0x0000)
struct EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_TabButton;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_ComponentBoundEvent_ActiveWidget;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDetailsHostPanel*              K2Node_DynamicCast_AsFort_Item_Details_Host_Panel; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDetailsHostPanel*              K2Node_DynamicCast_AsFort_Item_Details_Host_Panel1; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess12;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels) == 0x000008, "Wrong alignment on EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels");
static_assert(sizeof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels) == 0x000060, "Wrong size on EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, EntryPoint) == 0x000000, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_ComponentBoundEvent_TabId) == 0x000008, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_ComponentBoundEvent_TabButton) == 0x000010, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_ComponentBoundEvent_TabButton' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000018, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_ComponentBoundEvent_ActiveWidget) == 0x000028, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_ComponentBoundEvent_ActiveWidget' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_ComponentBoundEvent_ActiveWidgetIndex) == 0x000030, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_ComponentBoundEvent_ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000034, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_AsFort_Item_Details_Host_Panel) == 0x000038, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_AsFort_Item_Details_Host_Panel' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_bSuccess1) == 0x000040, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000048, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_AsFort_Item_Details_Host_Panel1) == 0x000050, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_AsFort_Item_Details_Host_Panel1' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels, K2Node_DynamicCast_bSuccess12) == 0x000058, "Member 'EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels::K2Node_DynamicCast_bSuccess12' has a wrong offset!");

// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature) == 0x000008, "Wrong alignment on EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature");
static_assert(sizeof(EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature) == 0x000010, "Wrong size on EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature");
static_assert(offsetof(EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature, TabId) == 0x000000, "Member 'EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature::TabId' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature, TabButton) == 0x000008, "Member 'EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature::TabButton' has a wrong offset!");

// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature final
{
public:
	class UWidget*                                ActiveWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveWidgetIndex;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature) == 0x000008, "Wrong alignment on EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature");
static_assert(sizeof(EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature) == 0x000010, "Wrong size on EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature");
static_assert(offsetof(EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature, ActiveWidget) == 0x000000, "Member 'EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature::ActiveWidget' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature, ActiveWidgetIndex) == 0x000008, "Member 'EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature::ActiveWidgetIndex' has a wrong offset!");

// Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels
// 0x0005 (0x0005 - 0x0000)
struct EventStoreHostPanels_C_Setup_Details_Panels final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSchematic_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventStoreHostPanels_C_Setup_Details_Panels) == 0x000001, "Wrong alignment on EventStoreHostPanels_C_Setup_Details_Panels");
static_assert(sizeof(EventStoreHostPanels_C_Setup_Details_Panels) == 0x000005, "Wrong size on EventStoreHostPanels_C_Setup_Details_Panels");
static_assert(offsetof(EventStoreHostPanels_C_Setup_Details_Panels, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'EventStoreHostPanels_C_Setup_Details_Panels::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_Setup_Details_Panels, CallFunc_IsSchematic_ReturnValue) == 0x000001, "Member 'EventStoreHostPanels_C_Setup_Details_Panels::CallFunc_IsSchematic_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_Setup_Details_Panels, CallFunc_GetType_ReturnValue) == 0x000002, "Member 'EventStoreHostPanels_C_Setup_Details_Panels::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_Setup_Details_Panels, CallFunc_IsValid_ReturnValue1) == 0x000003, "Member 'EventStoreHostPanels_C_Setup_Details_Panels::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(EventStoreHostPanels_C_Setup_Details_Panels, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'EventStoreHostPanels_C_Setup_Details_Panels::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
