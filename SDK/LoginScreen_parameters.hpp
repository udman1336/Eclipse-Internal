#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// 0x00E0 (0x00E0 - 0x0000)
struct LoginScreen_C_ExecuteUbergraph_LoginScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	EFortUIState                                  K2Node_Event_PreviousUIState;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_StatusText;                     // 0x0038(0x0018)()
	class FText                                   K2Node_CustomEvent_FailReason;                     // 0x0050(0x0018)()
	bool                                          CallFunc_StartAutoLogin_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_Widget;                               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      K2Node_Event_State;                                // 0x0078(0x0003)(NoDestructor)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bLinkedAccountNeedsPurchase;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_SafePopFlowStack_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_SafePopFlowStack_ReturnValue1;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameVersion_ReturnValue;               // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
};
static_assert(alignof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x000008, "Wrong alignment on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(sizeof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x0000E0, "Wrong size on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, EntryPoint) == 0x000000, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_int_Array_Index_Variable) == 0x000004, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_PreviousUIState) == 0x000018, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_PreviousUIState' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Array_Get_Item) == 0x000020, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_CustomEvent_StatusText) == 0x000038, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_CustomEvent_StatusText' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_CustomEvent_FailReason) == 0x000050, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_CustomEvent_FailReason' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_StartAutoLogin_ReturnValue) == 0x000068, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_StartAutoLogin_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_Widget) == 0x000070, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_State) == 0x000078, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue1) == 0x000080, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_ComponentBoundEvent_Button) == 0x000088, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_bLinkedAccountNeedsPurchase) == 0x000090, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_bLinkedAccountNeedsPurchase' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_int_Loop_Counter_Variable) == 0x000094, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_SafePopFlowStack_ReturnValue) == 0x000098, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_SafePopFlowStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_SafePopFlowStack_ReturnValue1) == 0x0000A8, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_SafePopFlowStack_ReturnValue1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0000B0, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetGameVersion_ReturnValue) == 0x0000B8, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// 0x0001 (0x0001 - 0x0000)
struct LoginScreen_C_OnNeedsPurchaseOrAccountLinking final
{
public:
	bool                                          bLinkedAccountNeedsPurchase;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoginScreen_C_OnNeedsPurchaseOrAccountLinking) == 0x000001, "Wrong alignment on LoginScreen_C_OnNeedsPurchaseOrAccountLinking");
static_assert(sizeof(LoginScreen_C_OnNeedsPurchaseOrAccountLinking) == 0x000001, "Wrong size on LoginScreen_C_OnNeedsPurchaseOrAccountLinking");
static_assert(offsetof(LoginScreen_C_OnNeedsPurchaseOrAccountLinking, bLinkedAccountNeedsPurchase) == 0x000000, "Member 'LoginScreen_C_OnNeedsPurchaseOrAccountLinking::bLinkedAccountNeedsPurchase' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// 0x0010 (0x0010 - 0x0000)
struct LoginScreen_C_PushContentWidgetInternal final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      State;                                             // 0x0008(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(LoginScreen_C_PushContentWidgetInternal) == 0x000008, "Wrong alignment on LoginScreen_C_PushContentWidgetInternal");
static_assert(sizeof(LoginScreen_C_PushContentWidgetInternal) == 0x000010, "Wrong size on LoginScreen_C_PushContentWidgetInternal");
static_assert(offsetof(LoginScreen_C_PushContentWidgetInternal, Widget) == 0x000000, "Member 'LoginScreen_C_PushContentWidgetInternal::Widget' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PushContentWidgetInternal, State) == 0x000008, "Member 'LoginScreen_C_PushContentWidgetInternal::State' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// 0x0018 (0x0018 - 0x0000)
struct LoginScreen_C_AccountLinking_LinkingFailed final
{
public:
	class FText                                   FailReason;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LoginScreen_C_AccountLinking_LinkingFailed) == 0x000008, "Wrong alignment on LoginScreen_C_AccountLinking_LinkingFailed");
static_assert(sizeof(LoginScreen_C_AccountLinking_LinkingFailed) == 0x000018, "Wrong size on LoginScreen_C_AccountLinking_LinkingFailed");
static_assert(offsetof(LoginScreen_C_AccountLinking_LinkingFailed, FailReason) == 0x000000, "Member 'LoginScreen_C_AccountLinking_LinkingFailed::FailReason' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// 0x0018 (0x0018 - 0x0000)
struct LoginScreen_C_AccountLinking_PushStatus final
{
public:
	class FText                                   StatusText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LoginScreen_C_AccountLinking_PushStatus) == 0x000008, "Wrong alignment on LoginScreen_C_AccountLinking_PushStatus");
static_assert(sizeof(LoginScreen_C_AccountLinking_PushStatus) == 0x000018, "Wrong size on LoginScreen_C_AccountLinking_PushStatus");
static_assert(offsetof(LoginScreen_C_AccountLinking_PushStatus, StatusText) == 0x000000, "Member 'LoginScreen_C_AccountLinking_PushStatus::StatusText' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.OnEnterState
// 0x0001 (0x0001 - 0x0000)
struct LoginScreen_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_OnEnterState) == 0x000001, "Wrong alignment on LoginScreen_C_OnEnterState");
static_assert(sizeof(LoginScreen_C_OnEnterState) == 0x000001, "Wrong size on LoginScreen_C_OnEnterState");
static_assert(offsetof(LoginScreen_C_OnEnterState, PreviousUIState) == 0x000000, "Member 'LoginScreen_C_OnEnterState::PreviousUIState' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// 0x0080 (0x0080 - 0x0000)
struct LoginScreen_C_ShowAccountLinkingWindow final
{
public:
	class FText                                   CallFunc_GetPlatformDisplayName_ReturnValue;       // 0x0000(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FText FailReason)>       K2Node_CreateDelegate_OutputDelegate12;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FText StatusText)>       K2Node_CreateDelegate_OutputDelegate1234;          // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccountLinkingWindow_C*                CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoginScreen_C_ShowAccountLinkingWindow) == 0x000008, "Wrong alignment on LoginScreen_C_ShowAccountLinkingWindow");
static_assert(sizeof(LoginScreen_C_ShowAccountLinkingWindow) == 0x000080, "Wrong size on LoginScreen_C_ShowAccountLinkingWindow");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, CallFunc_GetPlatformDisplayName_ReturnValue) == 0x000000, "Member 'LoginScreen_C_ShowAccountLinkingWindow::CallFunc_GetPlatformDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'LoginScreen_C_ShowAccountLinkingWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, K2Node_CreateDelegate_OutputDelegate1) == 0x000028, "Member 'LoginScreen_C_ShowAccountLinkingWindow::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, K2Node_CreateDelegate_OutputDelegate12) == 0x000038, "Member 'LoginScreen_C_ShowAccountLinkingWindow::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, K2Node_CreateDelegate_OutputDelegate123) == 0x000048, "Member 'LoginScreen_C_ShowAccountLinkingWindow::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, K2Node_CreateDelegate_OutputDelegate1234) == 0x000058, "Member 'LoginScreen_C_ShowAccountLinkingWindow::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, CallFunc_GetOwningPlayer_ReturnValue) == 0x000068, "Member 'LoginScreen_C_ShowAccountLinkingWindow::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, CallFunc_Create_ReturnValue) == 0x000070, "Member 'LoginScreen_C_ShowAccountLinkingWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ShowAccountLinkingWindow, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'LoginScreen_C_ShowAccountLinkingWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// 0x0018 (0x0018 - 0x0000)
struct LoginScreen_C_PopContentWidgetInternal final
{
public:
	struct FContentPushState                      State;                                             // 0x0000(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_SafePopFlowStack_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_PopContentWidgetInternal) == 0x000008, "Wrong alignment on LoginScreen_C_PopContentWidgetInternal");
static_assert(sizeof(LoginScreen_C_PopContentWidgetInternal) == 0x000018, "Wrong size on LoginScreen_C_PopContentWidgetInternal");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, State) == 0x000000, "Member 'LoginScreen_C_PopContentWidgetInternal::State' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, ReturnValue) == 0x000008, "Member 'LoginScreen_C_PopContentWidgetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, CallFunc_SafePopFlowStack_ReturnValue) == 0x000010, "Member 'LoginScreen_C_PopContentWidgetInternal::CallFunc_SafePopFlowStack_ReturnValue' has a wrong offset!");

}
