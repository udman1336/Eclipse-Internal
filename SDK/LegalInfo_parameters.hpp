#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegalInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LegalInfo.LegalInfo_C.ExecuteUbergraph_LegalInfo
// 0x0088 (0x0088 - 0x0000)
struct LegalInfo_C_ExecuteUbergraph_LegalInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                K2Node_ComponentBoundEvent_ActiveWidget;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_TabButton;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEulaTab_C*                             K2Node_DynamicCast_AsEula_Tab;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UThirdPartyTab_C*                       K2Node_DynamicCast_AsThird_Party_Tab;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess12;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegalInfo_C_ExecuteUbergraph_LegalInfo) == 0x000008, "Wrong alignment on LegalInfo_C_ExecuteUbergraph_LegalInfo");
static_assert(sizeof(LegalInfo_C_ExecuteUbergraph_LegalInfo) == 0x000088, "Wrong size on LegalInfo_C_ExecuteUbergraph_LegalInfo");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, EntryPoint) == 0x000000, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, Temp_bool_Variable) == 0x000004, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, Temp_byte_Variable) == 0x000005, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, Temp_byte_Variable1) == 0x000006, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_ComponentBoundEvent_ActiveWidget) == 0x000020, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_ComponentBoundEvent_ActiveWidget' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_ComponentBoundEvent_ActiveWidgetIndex) == 0x000028, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_ComponentBoundEvent_ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_ComponentBoundEvent_TabId) == 0x000030, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_ComponentBoundEvent_TabButton) == 0x000038, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_ComponentBoundEvent_TabButton' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_AsEula_Tab) == 0x000040, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_AsEula_Tab' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000050, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_bSuccess1) == 0x000058, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_AsThird_Party_Tab) == 0x000060, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_AsThird_Party_Tab' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_DynamicCast_bSuccess12) == 0x000068, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_DynamicCast_bSuccess12' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, CallFunc_GetUINavigationManager_ReturnValue) == 0x000070, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000078, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, CallFunc_IsBROnly_ReturnValue) == 0x000080, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_ExecuteUbergraph_LegalInfo, K2Node_Select_Default) == 0x000081, "Member 'LegalInfo_C_ExecuteUbergraph_LegalInfo::K2Node_Select_Default' has a wrong offset!");

// Function LegalInfo.LegalInfo_C.BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature) == 0x000008, "Wrong alignment on LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature");
static_assert(sizeof(LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature) == 0x000010, "Wrong size on LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature");
static_assert(offsetof(LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature, TabId) == 0x000000, "Member 'LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature::TabId' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature, TabButton) == 0x000008, "Member 'LegalInfo_C_BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature::TabButton' has a wrong offset!");

// Function LegalInfo.LegalInfo_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature final
{
public:
	class UWidget*                                ActiveWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveWidgetIndex;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature) == 0x000008, "Wrong alignment on LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature");
static_assert(sizeof(LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature) == 0x000010, "Wrong size on LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature");
static_assert(offsetof(LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature, ActiveWidget) == 0x000000, "Member 'LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature::ActiveWidget' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature, ActiveWidgetIndex) == 0x000008, "Member 'LegalInfo_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature::ActiveWidgetIndex' has a wrong offset!");

// Function LegalInfo.LegalInfo_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'LegalInfo_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function LegalInfo.LegalInfo_C.On Scroll Down
// 0x0001 (0x0001 - 0x0000)
struct LegalInfo_C_On_Scroll_Down final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegalInfo_C_On_Scroll_Down) == 0x000001, "Wrong alignment on LegalInfo_C_On_Scroll_Down");
static_assert(sizeof(LegalInfo_C_On_Scroll_Down) == 0x000001, "Wrong size on LegalInfo_C_On_Scroll_Down");
static_assert(offsetof(LegalInfo_C_On_Scroll_Down, Passthrough) == 0x000000, "Member 'LegalInfo_C_On_Scroll_Down::Passthrough' has a wrong offset!");

// Function LegalInfo.LegalInfo_C.On_BorderTouch_MouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct LegalInfo_C_On_BorderTouch_MouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
static_assert(alignof(LegalInfo_C_On_BorderTouch_MouseButtonDown) == 0x000008, "Wrong alignment on LegalInfo_C_On_BorderTouch_MouseButtonDown");
static_assert(sizeof(LegalInfo_C_On_BorderTouch_MouseButtonDown) == 0x000220, "Wrong size on LegalInfo_C_On_BorderTouch_MouseButtonDown");
static_assert(offsetof(LegalInfo_C_On_BorderTouch_MouseButtonDown, MyGeometry) == 0x000000, "Member 'LegalInfo_C_On_BorderTouch_MouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_On_BorderTouch_MouseButtonDown, MouseEvent) == 0x000038, "Member 'LegalInfo_C_On_BorderTouch_MouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_On_BorderTouch_MouseButtonDown, ReturnValue) == 0x0000A8, "Member 'LegalInfo_C_On_BorderTouch_MouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_On_BorderTouch_MouseButtonDown, CallFunc_IsBROnly_ReturnValue) == 0x000160, "Member 'LegalInfo_C_On_BorderTouch_MouseButtonDown::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegalInfo_C_On_BorderTouch_MouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'LegalInfo_C_On_BorderTouch_MouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

}
