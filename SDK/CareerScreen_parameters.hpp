#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CareerScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen
// 0x00F0 (0x00F0 - 0x0000)
struct CareerScreen_C_ExecuteUbergraph_CareerScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1234;                            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button12;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaStatsTab_C*                      CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue1;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaLeaderboardTab_C*                CallFunc_Create_ReturnValue1;                      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue12;         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue12;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaReplayBrowserTab_C*              CallFunc_Create_ReturnValue12;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue; // 0x00A8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue1;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CF[0x1];                                       // 0x00CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue12;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue12;        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUIFeatureState                           Temp_byte_Variable12345;                           // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;                // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue1;                // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue12;               // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CareerScreen_C_ExecuteUbergraph_CareerScreen) == 0x000008, "Wrong alignment on CareerScreen_C_ExecuteUbergraph_CareerScreen");
static_assert(sizeof(CareerScreen_C_ExecuteUbergraph_CareerScreen) == 0x0000F0, "Wrong size on CareerScreen_C_ExecuteUbergraph_CareerScreen");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, EntryPoint) == 0x000000, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_Variable) == 0x000008, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable) == 0x000010, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable1) == 0x000011, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable12) == 0x000012, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable123) == 0x000013, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable1234) == 0x000014, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable1234' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Array_Index_Variable) == 0x000018, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_Variable1) == 0x00001C, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_ComponentBoundEvent_Button12) == 0x000020, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_ComponentBoundEvent_Button12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_ComponentBoundEvent_Button1) == 0x000028, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000038, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetUIManagerWidget_ReturnValue1) == 0x000048, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetUIManagerWidget_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Create_ReturnValue) == 0x000050, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetOwningPlayer_ReturnValue1) == 0x000058, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetOwningPlayer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Create_ReturnValue1) == 0x000060, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Create_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetUIManagerWidget_ReturnValue12) == 0x000068, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetUIManagerWidget_ReturnValue12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetOwningPlayer_ReturnValue12) == 0x000078, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetOwningPlayer_ReturnValue12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Create_ReturnValue12) == 0x000080, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Create_ReturnValue12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_Variable12) == 0x000088, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_Variable123) == 0x000089, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_Variable123' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetUINavigationManager_ReturnValue) == 0x000090, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000098, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_MakeLiteralName_ReturnValue) == 0x0000A0, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue) == 0x0000A8, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_MakeLiteralName_ReturnValue1) == 0x0000B8, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_MakeLiteralName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000CC, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Less_IntInt_ReturnValue) == 0x0000CD, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_EqualEqual_NameName_ReturnValue1) == 0x0000CE, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_EqualEqual_NameName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_MakeLiteralName_ReturnValue12) == 0x0000D0, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_MakeLiteralName_ReturnValue12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_EqualEqual_NameName_ReturnValue12) == 0x0000D8, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_EqualEqual_NameName_ReturnValue12' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_byte_Variable12345) == 0x0000D9, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_byte_Variable12345' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetContext_ReturnValue1) == 0x0000E0, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetFeatureState_OutFeatureState) == 0x0000E8, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetFeatureState_OutReason) == 0x0000E9, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_Select_Default) == 0x0000EA, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_Select1_Default) == 0x0000EB, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_IsMobileGame_ReturnValue) == 0x0000EC, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_IsMobileGame_ReturnValue1) == 0x0000ED, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_IsMobileGame_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_IsMobileGame_ReturnValue12) == 0x0000EE, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_IsMobileGame_ReturnValue12' has a wrong offset!");

// Function CareerScreen.CareerScreen_C.BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'CareerScreen_C_BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function CareerScreen.CareerScreen_C.BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'CareerScreen_C_BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function CareerScreen.CareerScreen_C.BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'CareerScreen_C_BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}
