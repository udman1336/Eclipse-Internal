#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveAlertWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HordeWaveAlertWidget.HordeWaveAlertWidget_C
// 0x0080 (0x02A0 - 0x0220)
class UHordeWaveAlertWidget_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       AppearanceAndDisappearance_Quick;                  // 0x0228(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ModifierDisappearance;                             // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ModifierAppearance;                                // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AppearanceAndDisappearance;                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ContentSwitcher;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HordeLevelText;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ModifierAddedText;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardText;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHordeWaveModifiersWidget_C*            WaveModifiersWidget;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       WaveNumText;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       WaveText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         AllModsPresentedDisplayDelay;                      // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemInstanceQuantityPair>  EmptyArray;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         PostInitializationDelay;                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HordeWaveAlertWidget(int32 EntryPoint);
	void OnAppearanceDisappearanceAnimComplete_Quick();
	void OnModifierDisappearanceAnimComplete();
	void OnAppearanceDisappearanceAnimComplete();
	void OnAllModifiersPresented();
	void OnModifierAppearanceAnimComplete();
	void Construct();
	void OnWaveModifiersAdded(const TArray<class UFortGameplayModifierItemDefinition*>& Modifiers);
	void OnHordeTierInitialized_Event_0(const TArray<struct FFortItemInstanceQuantityPair>& Items);
	void OnWaveCompleted(int32 Wave, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnWaveStarted(const class FText& LevelText, int32 Level, const class FText& WaveText_0, int32 WaveNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HordeWaveAlertWidget_C">();
	}
	static class UHordeWaveAlertWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHordeWaveAlertWidget_C>();
	}
};
static_assert(alignof(UHordeWaveAlertWidget_C) == 0x000008, "Wrong alignment on UHordeWaveAlertWidget_C");
static_assert(sizeof(UHordeWaveAlertWidget_C) == 0x0002A0, "Wrong size on UHordeWaveAlertWidget_C");
static_assert(offsetof(UHordeWaveAlertWidget_C, UberGraphFrame) == 0x000220, "Member 'UHordeWaveAlertWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, AppearanceAndDisappearance_Quick) == 0x000228, "Member 'UHordeWaveAlertWidget_C::AppearanceAndDisappearance_Quick' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, ModifierDisappearance) == 0x000230, "Member 'UHordeWaveAlertWidget_C::ModifierDisappearance' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, ModifierAppearance) == 0x000238, "Member 'UHordeWaveAlertWidget_C::ModifierAppearance' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, AppearanceAndDisappearance) == 0x000240, "Member 'UHordeWaveAlertWidget_C::AppearanceAndDisappearance' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, ContentSwitcher) == 0x000248, "Member 'UHordeWaveAlertWidget_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, HordeLevelText) == 0x000250, "Member 'UHordeWaveAlertWidget_C::HordeLevelText' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, ModifierAddedText) == 0x000258, "Member 'UHordeWaveAlertWidget_C::ModifierAddedText' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, RewardText) == 0x000260, "Member 'UHordeWaveAlertWidget_C::RewardText' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, WaveModifiersWidget) == 0x000268, "Member 'UHordeWaveAlertWidget_C::WaveModifiersWidget' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, WaveNumText) == 0x000270, "Member 'UHordeWaveAlertWidget_C::WaveNumText' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, WaveText) == 0x000278, "Member 'UHordeWaveAlertWidget_C::WaveText' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, AllModsPresentedDisplayDelay) == 0x000280, "Member 'UHordeWaveAlertWidget_C::AllModsPresentedDisplayDelay' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, EmptyArray) == 0x000288, "Member 'UHordeWaveAlertWidget_C::EmptyArray' has a wrong offset!");
static_assert(offsetof(UHordeWaveAlertWidget_C, PostInitializationDelay) == 0x000298, "Member 'UHordeWaveAlertWidget_C::PostInitializationDelay' has a wrong offset!");

}
