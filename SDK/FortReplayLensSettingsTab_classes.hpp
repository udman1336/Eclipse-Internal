#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayLensSettingsTab

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortReplayLensSettingsTab.FortReplayLensSettingsTab_C
// 0x0098 (0x0498 - 0x0400)
class UFortReplayLensSettingsTab_C final : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*       ApertureSelector;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ApertureSlider;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       AutoExposureSelector;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       AutoFocusSelector;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             ExposureSlider;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*       FocalLengthSelector;                               // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             FocalLengthSlider;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*             FocusDistanceSlider;                               // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MaxFocusDistance;                                  // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultNormalizedFocusDistance;                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 AvailableApertures;                                // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           ApertureTexts;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 AvailableFocalLengths;                             // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           FocalLengthTexts;                                  // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CustomFocalLengthIndex;                            // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortReplayLensSettingsTab(int32 EntryPoint);
	void InitializeWidgets();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void CenterOnTab();
	void ResetToDefault();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, ESpectatorCameraType CameraType);
	void BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void OnActivated();
	void SetWidgetValues();
	void SetExposureVisibility();
	void SetFocusVisibility();
	void SetFocusDistanceWidget();
	void InitFocalLengthOptions(float CurrentFocalLength);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortReplayLensSettingsTab_C">();
	}
	static class UFortReplayLensSettingsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReplayLensSettingsTab_C>();
	}
};
static_assert(alignof(UFortReplayLensSettingsTab_C) == 0x000008, "Wrong alignment on UFortReplayLensSettingsTab_C");
static_assert(sizeof(UFortReplayLensSettingsTab_C) == 0x000498, "Wrong size on UFortReplayLensSettingsTab_C");
static_assert(offsetof(UFortReplayLensSettingsTab_C, UberGraphFrame) == 0x000400, "Member 'UFortReplayLensSettingsTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ApertureSelector) == 0x000408, "Member 'UFortReplayLensSettingsTab_C::ApertureSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ApertureSlider) == 0x000410, "Member 'UFortReplayLensSettingsTab_C::ApertureSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, AutoExposureSelector) == 0x000418, "Member 'UFortReplayLensSettingsTab_C::AutoExposureSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, AutoFocusSelector) == 0x000420, "Member 'UFortReplayLensSettingsTab_C::AutoFocusSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ExposureSlider) == 0x000428, "Member 'UFortReplayLensSettingsTab_C::ExposureSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocalLengthSelector) == 0x000430, "Member 'UFortReplayLensSettingsTab_C::FocalLengthSelector' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocalLengthSlider) == 0x000438, "Member 'UFortReplayLensSettingsTab_C::FocalLengthSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocusDistanceSlider) == 0x000440, "Member 'UFortReplayLensSettingsTab_C::FocusDistanceSlider' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, MaxFocusDistance) == 0x000448, "Member 'UFortReplayLensSettingsTab_C::MaxFocusDistance' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, DefaultNormalizedFocusDistance) == 0x00044C, "Member 'UFortReplayLensSettingsTab_C::DefaultNormalizedFocusDistance' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, AvailableApertures) == 0x000450, "Member 'UFortReplayLensSettingsTab_C::AvailableApertures' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, ApertureTexts) == 0x000460, "Member 'UFortReplayLensSettingsTab_C::ApertureTexts' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, AvailableFocalLengths) == 0x000470, "Member 'UFortReplayLensSettingsTab_C::AvailableFocalLengths' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, FocalLengthTexts) == 0x000480, "Member 'UFortReplayLensSettingsTab_C::FocalLengthTexts' has a wrong offset!");
static_assert(offsetof(UFortReplayLensSettingsTab_C, CustomFocalLengthIndex) == 0x000490, "Member 'UFortReplayLensSettingsTab_C::CustomFocalLengthIndex' has a wrong offset!");

}
