#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorHUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpectatorHUD.AthenaSpectatorHUD_C
// 0x0220 (0x0600 - 0x03E0)
class UAthenaSpectatorHUD_C final : public UAthenaHUDBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Top_Right_Content;                // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Camera_Mode_Content;                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Persistent_HUD_Content;                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        _Switcher__Mode_Content;                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Left_Content;                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Right_Content;                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCompass_C*                       AthenaCompass;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseWidget_C*               AthenaGamePhaseWidget;                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHUDMenu_C*                       AthenaHUDMenu;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaIndicatorLayer_C*                AthenaIndicatorLayer;                              // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorMapPanel_C*             AthenaSpectatorMapPanel;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortLiveStreamGrantWindowExpires_C* BP_FortLiveStreamGrantWindowExpires;               // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ConsoleSwitcherGlobalActions;                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrentReplayTime;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayNotification_C*              FortReplayNotification;                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayTimeline_C*                  FortReplayTimeline;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayTransport_C*                 FortReplayTransport;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayViewSettings_C*              FortReplayViewSettings;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          GamepadPanTiltBox;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseChangeWidget_C*         GamePhaseAlert;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxDrone;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxDroneCams;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxGlobalActions;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxThirdPerson;                                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_32;                                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*                HUDVisibility;                                     // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_9;                                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxBottomLeft;                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCameraMode;                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCenterPopup;                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          KBPanTiltBox;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_14;                                  // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_44;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_124;                                 // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_137;                                 // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_159;                                 // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_227;                                 // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_294;                                 // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_336;                                 // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_407;                                 // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LoadingBox;                                        // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*       LocalPlayerHitPointInfo;                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapKeybindWidget_C*                    MapKeybindWidget;                                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*              MinimapContainer;                                  // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  MSKBSwitcherGlobalActions;                         // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayIndicatorContent;                           // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupCenterMessageWidget_C*            PopupCenterMessageWidget;                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPicker_C*                        RadialPicker;                                      // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ReplayTimelineBox;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticle_C*                             Reticle;                                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*                Screenshot;                                        // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherInputMode;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TotalReplayTime;                                   // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxMissionWidgets;                         // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      Widget_BuildWatermark;                             // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortQuickBars                                FocusedQuickbar;                                   // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B1[0x3];                                      // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UnfocusedQuickbarScale;                            // 0x05B4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorModeEnabled;                                 // 0x05BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ZoneCompleted;                                     // 0x05BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BE[0x2];                                      // 0x05BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PlayerLeft;                                        // 0x05C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   KillsPrefix;                                       // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetSwitcher*                        _Switcher__CursorModeContent_0;                    // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CameraControlTimerHandle;                          // 0x05F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaSpectatorHUD(int32 EntryPoint);
	void HUDVisibilitySound(EHudVisibilityState HUDVisibility_0);
	void BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetFullScreenMapVisibility(bool bIsVisible);
	void ViewModelChanged(class UAthenaPlayerViewModel* ViewModel);
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void On_Team_Won();
	void HandleRevived();
	void OnRevived();
	void On_Player_Won();
	void PrepareToShowEndGameUI();
	void On_Player_Died(const struct FFortPlayerDeathReport& DeathReport);
	void Prepare_Game_Over();
	void OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const class FText& FailureText);
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature();
	void Destruct();
	void QuestsCompleted(const TArray<class UFortQuestItem*>& Quests);
	void OnEnterState(EFortUIState PreviousUIState);
	void Construct();
	void OnConfirmed_96D6B69B40224C661B08D9B34525EE86();
	void OnDeclined_96D6B69B40224C661B08D9B34525EE86();
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void HandleKeybindsChanged();
	void OnPlayerTargetingChanged(bool IsTargeting);
	void HandleIndicatorModeChanged(bool InidicatorsEnabled);
	void SetPersistentHUDContentVisibility(bool Visible);
	void ToggleChat(bool Show);
	void ToggleTopLevelMenu(bool Show);
	void HandleFocusChat();
	void ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement);
	void SetupCameraMode();
	void CurrentTimeChangedFromNative(float NowTime);
	void TimelineRangeChangedFromNative(float StartTime, float EndTime);
	void HudVisibilityChangedFromNative(EHudVisibilityState NewVisibilty);
	void Bind_Replay_UI_Events();
	void Get_Display_Time_in_Minutes_And_Seconds(float TimeInSeconds, class FText* OutText);
	void OnLevelStreamingChanged(bool bStreaming);
	void SetViewSettingsVisibility(bool Visible);
	void HandleCameraChange(class AFortPlayerControllerSpectating* PlayerController, ESpectatorCameraType CameraType);
	void HandleInputModeChanged(bool Passthrough);
	void HideCameraControlsOnTimeout();
	void ShowCameraControls();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpectatorHUD_C">();
	}
	static class UAthenaSpectatorHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpectatorHUD_C>();
	}
};
static_assert(alignof(UAthenaSpectatorHUD_C) == 0x000008, "Wrong alignment on UAthenaSpectatorHUD_C");
static_assert(sizeof(UAthenaSpectatorHUD_C) == 0x000600, "Wrong size on UAthenaSpectatorHUD_C");
static_assert(offsetof(UAthenaSpectatorHUD_C, UberGraphFrame) == 0x0003E0, "Member 'UAthenaSpectatorHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Horizontal_Box__Top_Right_Content) == 0x0003E8, "Member 'UAthenaSpectatorHUD_C::_Horizontal_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Overlay__Camera_Mode_Content) == 0x0003F0, "Member 'UAthenaSpectatorHUD_C::_Overlay__Camera_Mode_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Overlay__Persistent_HUD_Content) == 0x0003F8, "Member 'UAthenaSpectatorHUD_C::_Overlay__Persistent_HUD_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Switcher__Mode_Content) == 0x000400, "Member 'UAthenaSpectatorHUD_C::_Switcher__Mode_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Vertical_Box__Top_Left_Content) == 0x000408, "Member 'UAthenaSpectatorHUD_C::_Vertical_Box__Top_Left_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Vertical_Box__Top_Right_Content) == 0x000410, "Member 'UAthenaSpectatorHUD_C::_Vertical_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaCompass) == 0x000418, "Member 'UAthenaSpectatorHUD_C::AthenaCompass' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaGamePhaseWidget) == 0x000420, "Member 'UAthenaSpectatorHUD_C::AthenaGamePhaseWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaHUDMenu) == 0x000428, "Member 'UAthenaSpectatorHUD_C::AthenaHUDMenu' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaIndicatorLayer) == 0x000430, "Member 'UAthenaSpectatorHUD_C::AthenaIndicatorLayer' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, AthenaSpectatorMapPanel) == 0x000438, "Member 'UAthenaSpectatorHUD_C::AthenaSpectatorMapPanel' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, BP_FortLiveStreamGrantWindowExpires) == 0x000440, "Member 'UAthenaSpectatorHUD_C::BP_FortLiveStreamGrantWindowExpires' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, ConsoleSwitcherGlobalActions) == 0x000448, "Member 'UAthenaSpectatorHUD_C::ConsoleSwitcherGlobalActions' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, CurrentReplayTime) == 0x000450, "Member 'UAthenaSpectatorHUD_C::CurrentReplayTime' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FortReplayNotification) == 0x000458, "Member 'UAthenaSpectatorHUD_C::FortReplayNotification' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FortReplayTimeline) == 0x000460, "Member 'UAthenaSpectatorHUD_C::FortReplayTimeline' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FortReplayTransport) == 0x000468, "Member 'UAthenaSpectatorHUD_C::FortReplayTransport' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FortReplayViewSettings) == 0x000470, "Member 'UAthenaSpectatorHUD_C::FortReplayViewSettings' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, GamepadPanTiltBox) == 0x000478, "Member 'UAthenaSpectatorHUD_C::GamepadPanTiltBox' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, GamePhaseAlert) == 0x000480, "Member 'UAthenaSpectatorHUD_C::GamePhaseAlert' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HBoxDrone) == 0x000488, "Member 'UAthenaSpectatorHUD_C::HBoxDrone' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HBoxDroneCams) == 0x000490, "Member 'UAthenaSpectatorHUD_C::HBoxDroneCams' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HBoxGlobalActions) == 0x000498, "Member 'UAthenaSpectatorHUD_C::HBoxGlobalActions' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HBoxThirdPerson) == 0x0004A0, "Member 'UAthenaSpectatorHUD_C::HBoxThirdPerson' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HorizontalBox_32) == 0x0004A8, "Member 'UAthenaSpectatorHUD_C::HorizontalBox_32' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, HUDVisibility) == 0x0004B0, "Member 'UAthenaSpectatorHUD_C::HUDVisibility' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Image_9) == 0x0004B8, "Member 'UAthenaSpectatorHUD_C::Image_9' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxBottomLeft) == 0x0004C0, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxBottomLeft' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxCameraMode) == 0x0004C8, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxCameraMode' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, InvalidationBoxCenterPopup) == 0x0004D0, "Member 'UAthenaSpectatorHUD_C::InvalidationBoxCenterPopup' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KBPanTiltBox) == 0x0004D8, "Member 'UAthenaSpectatorHUD_C::KBPanTiltBox' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget) == 0x0004E0, "Member 'UAthenaSpectatorHUD_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_14) == 0x0004E8, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_14' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_44) == 0x0004F0, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_44' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_124) == 0x0004F8, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_124' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_137) == 0x000500, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_137' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_159) == 0x000508, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_159' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_227) == 0x000510, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_227' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_294) == 0x000518, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_294' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_336) == 0x000520, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_336' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KeybindWidget_407) == 0x000528, "Member 'UAthenaSpectatorHUD_C::KeybindWidget_407' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, LoadingBox) == 0x000530, "Member 'UAthenaSpectatorHUD_C::LoadingBox' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, LocalPlayerHitPointInfo) == 0x000538, "Member 'UAthenaSpectatorHUD_C::LocalPlayerHitPointInfo' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, MapKeybindWidget) == 0x000540, "Member 'UAthenaSpectatorHUD_C::MapKeybindWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, MinimapContainer) == 0x000548, "Member 'UAthenaSpectatorHUD_C::MinimapContainer' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, MSKBSwitcherGlobalActions) == 0x000550, "Member 'UAthenaSpectatorHUD_C::MSKBSwitcherGlobalActions' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, OverlayIndicatorContent) == 0x000558, "Member 'UAthenaSpectatorHUD_C::OverlayIndicatorContent' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, PopupCenterMessageWidget) == 0x000560, "Member 'UAthenaSpectatorHUD_C::PopupCenterMessageWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, RadialPicker) == 0x000568, "Member 'UAthenaSpectatorHUD_C::RadialPicker' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, ReplayTimelineBox) == 0x000570, "Member 'UAthenaSpectatorHUD_C::ReplayTimelineBox' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Reticle) == 0x000578, "Member 'UAthenaSpectatorHUD_C::Reticle' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, SafeZone_0) == 0x000580, "Member 'UAthenaSpectatorHUD_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Screenshot) == 0x000588, "Member 'UAthenaSpectatorHUD_C::Screenshot' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, SwitcherInputMode) == 0x000590, "Member 'UAthenaSpectatorHUD_C::SwitcherInputMode' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, TotalReplayTime) == 0x000598, "Member 'UAthenaSpectatorHUD_C::TotalReplayTime' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, VerticalBoxMissionWidgets) == 0x0005A0, "Member 'UAthenaSpectatorHUD_C::VerticalBoxMissionWidgets' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, Widget_BuildWatermark) == 0x0005A8, "Member 'UAthenaSpectatorHUD_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, FocusedQuickbar) == 0x0005B0, "Member 'UAthenaSpectatorHUD_C::FocusedQuickbar' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, UnfocusedQuickbarScale) == 0x0005B4, "Member 'UAthenaSpectatorHUD_C::UnfocusedQuickbarScale' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, CursorModeEnabled) == 0x0005BC, "Member 'UAthenaSpectatorHUD_C::CursorModeEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, ZoneCompleted) == 0x0005BD, "Member 'UAthenaSpectatorHUD_C::ZoneCompleted' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, PlayerLeft) == 0x0005C0, "Member 'UAthenaSpectatorHUD_C::PlayerLeft' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, KillsPrefix) == 0x0005D8, "Member 'UAthenaSpectatorHUD_C::KillsPrefix' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, _Switcher__CursorModeContent_0) == 0x0005F0, "Member 'UAthenaSpectatorHUD_C::_Switcher__CursorModeContent_0' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorHUD_C, CameraControlTimerHandle) == 0x0005F8, "Member 'UAthenaSpectatorHUD_C::CameraControlTimerHandle' has a wrong offset!");

}
