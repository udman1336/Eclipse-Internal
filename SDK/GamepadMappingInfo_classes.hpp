#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadMappingInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadMappingInfo.GamepadMappingInfo_C
// 0x0220 (0x0438 - 0x0218)
class UGamepadMappingInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_LeftBumperSeparator;                  // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_RightBumperSeparator;                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_LB_RB;                               // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_LB_RT;                               // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RB_LT;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_AllText;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gamepad;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gamepad_Buttons;                             // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Mode;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 L1orLBIconAbility1;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 L1orLBIconAbility2;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 L2orLTIconAbility3;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LB_RBAction;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LB_RTAction;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R1orRBIconAbility1;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R1orRBIconAbility3;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R2orRTIconAbility2;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RB_LTAction;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Separator_LB_RBfromLB_RT;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Bottom;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Left_1;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Left_2;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Left_3;                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Right_1;                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Right_2;                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Right_3;                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Top_1;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Face_Button_Top_2;                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_LB;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_LT;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_RB;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_RS;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_RS_Click_1;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_RS_Click_2;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_RT;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Select_1;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Select_2;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Gamepad_Start;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Mode;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_Dpad_Down;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_Dpad_Left;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_Dpad_Right;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_Dpad_Up;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_LS;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_LS_Click_1;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PS4_LS_Click_2;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_Dpad_Down;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_Dpad_Left;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_Dpad_Right;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_Dpad_Up;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_LS;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_LS_Click_1;                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Xbox_LS_Click_2;                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_PS4_LS_And_Dpad;                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Xbox_LS_And_Dpad;                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     XB1_Images;                                        // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                     PS4_Images;                                        // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                     Appropriate_Platform_Images;                       // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCommonTextBlock*>               GamepadConfigTextWidgets;                          // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           ButtonTextLabels_STW_CombatPro_Build;              // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           ButtonTextLabels_STW_CombatPro_Combat;             // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GamepadMappingInfo(int32 EntryPoint);
	void Construct();
	void Update_Displayed_Mapping(int32 Platform, int32 Mode, int32 Configuration);
	void OnConfigChanged(int32 Mode, int32 Config);
	void HandleConfigChanged_Athena(int32 Mode, int32 Config);
	void HandleConfigChanged(int32 Mode, int32 Config);
	void Handle_Config_Changed_STW_Build_Mode(int32 Config);
	void Handle_Config_Changed_STW_Combat_Mode(int32 Config);
	void Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines();
	void InitializeListOfButtonLabelTextWidgets();
	void InitializeListOfButtonTextForSTWCombatProBuild(TArray<class FText>& ButtonTextLabels);
	void GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, ESlateVisibility* DesiredSlateVisibility);
	void SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget);
	void InitializeListOfButtonTextForSTWCombatProCombat(TArray<class FText>& ButtonTextLabels);
	void ClearAllComboTextLines();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadMappingInfo_C">();
	}
	static class UGamepadMappingInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadMappingInfo_C>();
	}
};
static_assert(alignof(UGamepadMappingInfo_C) == 0x000008, "Wrong alignment on UGamepadMappingInfo_C");
static_assert(sizeof(UGamepadMappingInfo_C) == 0x000438, "Wrong size on UGamepadMappingInfo_C");
static_assert(offsetof(UGamepadMappingInfo_C, UberGraphFrame) == 0x000218, "Member 'UGamepadMappingInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, CommonBorder_LeftBumperSeparator) == 0x000220, "Member 'UGamepadMappingInfo_C::CommonBorder_LeftBumperSeparator' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, CommonBorder_RightBumperSeparator) == 0x000228, "Member 'UGamepadMappingInfo_C::CommonBorder_RightBumperSeparator' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, HorizontalBox_LB_RB) == 0x000230, "Member 'UGamepadMappingInfo_C::HorizontalBox_LB_RB' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, HorizontalBox_LB_RT) == 0x000238, "Member 'UGamepadMappingInfo_C::HorizontalBox_LB_RT' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, HorizontalBox_RB_LT) == 0x000240, "Member 'UGamepadMappingInfo_C::HorizontalBox_RB_LT' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, HorizontalBox_AllText) == 0x000248, "Member 'UGamepadMappingInfo_C::HorizontalBox_AllText' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Image_Gamepad) == 0x000250, "Member 'UGamepadMappingInfo_C::Image_Gamepad' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Image_Gamepad_Buttons) == 0x000258, "Member 'UGamepadMappingInfo_C::Image_Gamepad_Buttons' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Image_Mode) == 0x000260, "Member 'UGamepadMappingInfo_C::Image_Mode' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, L1orLBIconAbility1) == 0x000268, "Member 'UGamepadMappingInfo_C::L1orLBIconAbility1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, L1orLBIconAbility2) == 0x000270, "Member 'UGamepadMappingInfo_C::L1orLBIconAbility2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, L2orLTIconAbility3) == 0x000278, "Member 'UGamepadMappingInfo_C::L2orLTIconAbility3' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, LB_RBAction) == 0x000280, "Member 'UGamepadMappingInfo_C::LB_RBAction' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, LB_RTAction) == 0x000288, "Member 'UGamepadMappingInfo_C::LB_RTAction' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, R1orRBIconAbility1) == 0x000290, "Member 'UGamepadMappingInfo_C::R1orRBIconAbility1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, R1orRBIconAbility3) == 0x000298, "Member 'UGamepadMappingInfo_C::R1orRBIconAbility3' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, R2orRTIconAbility2) == 0x0002A0, "Member 'UGamepadMappingInfo_C::R2orRTIconAbility2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, RB_LTAction) == 0x0002A8, "Member 'UGamepadMappingInfo_C::RB_LTAction' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Separator_LB_RBfromLB_RT) == 0x0002B0, "Member 'UGamepadMappingInfo_C::Separator_LB_RBfromLB_RT' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Bottom) == 0x0002B8, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Bottom' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Left_1) == 0x0002C0, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Left_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Left_2) == 0x0002C8, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Left_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Left_3) == 0x0002D0, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Left_3' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Right_1) == 0x0002D8, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Right_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Right_2) == 0x0002E0, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Right_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Right_3) == 0x0002E8, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Right_3' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Top_1) == 0x0002F0, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Top_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Face_Button_Top_2) == 0x0002F8, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Face_Button_Top_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_LB) == 0x000300, "Member 'UGamepadMappingInfo_C::Text_Gamepad_LB' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_LT) == 0x000308, "Member 'UGamepadMappingInfo_C::Text_Gamepad_LT' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_RB) == 0x000310, "Member 'UGamepadMappingInfo_C::Text_Gamepad_RB' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_RS) == 0x000318, "Member 'UGamepadMappingInfo_C::Text_Gamepad_RS' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_RS_Click_1) == 0x000320, "Member 'UGamepadMappingInfo_C::Text_Gamepad_RS_Click_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_RS_Click_2) == 0x000328, "Member 'UGamepadMappingInfo_C::Text_Gamepad_RS_Click_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_RT) == 0x000330, "Member 'UGamepadMappingInfo_C::Text_Gamepad_RT' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Select_1) == 0x000338, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Select_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Select_2) == 0x000340, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Select_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Gamepad_Start) == 0x000348, "Member 'UGamepadMappingInfo_C::Text_Gamepad_Start' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Mode) == 0x000350, "Member 'UGamepadMappingInfo_C::Text_Mode' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_Dpad_Down) == 0x000358, "Member 'UGamepadMappingInfo_C::Text_PS4_Dpad_Down' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_Dpad_Left) == 0x000360, "Member 'UGamepadMappingInfo_C::Text_PS4_Dpad_Left' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_Dpad_Right) == 0x000368, "Member 'UGamepadMappingInfo_C::Text_PS4_Dpad_Right' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_Dpad_Up) == 0x000370, "Member 'UGamepadMappingInfo_C::Text_PS4_Dpad_Up' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_LS) == 0x000378, "Member 'UGamepadMappingInfo_C::Text_PS4_LS' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_LS_Click_1) == 0x000380, "Member 'UGamepadMappingInfo_C::Text_PS4_LS_Click_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_PS4_LS_Click_2) == 0x000388, "Member 'UGamepadMappingInfo_C::Text_PS4_LS_Click_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_Dpad_Down) == 0x000390, "Member 'UGamepadMappingInfo_C::Text_Xbox_Dpad_Down' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_Dpad_Left) == 0x000398, "Member 'UGamepadMappingInfo_C::Text_Xbox_Dpad_Left' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_Dpad_Right) == 0x0003A0, "Member 'UGamepadMappingInfo_C::Text_Xbox_Dpad_Right' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_Dpad_Up) == 0x0003A8, "Member 'UGamepadMappingInfo_C::Text_Xbox_Dpad_Up' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_LS) == 0x0003B0, "Member 'UGamepadMappingInfo_C::Text_Xbox_LS' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_LS_Click_1) == 0x0003B8, "Member 'UGamepadMappingInfo_C::Text_Xbox_LS_Click_1' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Text_Xbox_LS_Click_2) == 0x0003C0, "Member 'UGamepadMappingInfo_C::Text_Xbox_LS_Click_2' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, VerticalBox_PS4_LS_And_Dpad) == 0x0003C8, "Member 'UGamepadMappingInfo_C::VerticalBox_PS4_LS_And_Dpad' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, VerticalBox_Xbox_LS_And_Dpad) == 0x0003D0, "Member 'UGamepadMappingInfo_C::VerticalBox_Xbox_LS_And_Dpad' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, XB1_Images) == 0x0003D8, "Member 'UGamepadMappingInfo_C::XB1_Images' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, PS4_Images) == 0x0003E8, "Member 'UGamepadMappingInfo_C::PS4_Images' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, Appropriate_Platform_Images) == 0x0003F8, "Member 'UGamepadMappingInfo_C::Appropriate_Platform_Images' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, GamepadConfigTextWidgets) == 0x000408, "Member 'UGamepadMappingInfo_C::GamepadConfigTextWidgets' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, ButtonTextLabels_STW_CombatPro_Build) == 0x000418, "Member 'UGamepadMappingInfo_C::ButtonTextLabels_STW_CombatPro_Build' has a wrong offset!");
static_assert(offsetof(UGamepadMappingInfo_C, ButtonTextLabels_STW_CombatPro_Combat) == 0x000428, "Member 'UGamepadMappingInfo_C::ButtonTextLabels_STW_CombatPro_Combat' has a wrong offset!");

}
