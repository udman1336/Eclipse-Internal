#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DeathWidget.DeathWidget_C
// 0x00F8 (0x0310 - 0x0218)
class UDeathWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Resurrection_Prompt_2;                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show_Resurrect___Respawn;                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Resurrection_Prompt_1;                             // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Resurrection_Prompt_Out;                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       You_Died__3;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       You_Died__2;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       You_Died__1;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       You_Died_;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Resurrection_Prompt;                               // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_PrimaryDeathText;                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockExtraLives;                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockRespawn;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockResurrect;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockResurrectionTimerText;              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockWait;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerPortraitWidget_C*                KillerPortraitWidget;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LeftMouseBase;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       RespawnBinding;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RespawnBox;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       ResurrectBinding;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                RightMouseBase;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StartDeathBox;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           RespawnTimerHandle;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         ReleaseTimeRemaining;                              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReadyToRespawnText;                                // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           ShowExtraLivesTimerHandle;                         // 0x0300(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         ResurrectTimeRemaining;                            // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DeathWidget(int32 EntryPoint);
	void Construct();
	void OnPawnSpawned();
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport);
	void ConfigureRespawnTimer(float ServerRespawnTime, float ServerResurrectTime);
	void OnRespawnTimerUpdate();
	void SetRespawnTimerText();
	void ShowExtraLivesText();
	void Prompt_Out_Anim();
	void Resurrection_Prompt_Anim();
	void Show_Resurrect___Respawn_Anim();
	void YouDied_Anim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeathWidget_C">();
	}
	static class UDeathWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeathWidget_C>();
	}
};
static_assert(alignof(UDeathWidget_C) == 0x000008, "Wrong alignment on UDeathWidget_C");
static_assert(sizeof(UDeathWidget_C) == 0x000310, "Wrong size on UDeathWidget_C");
static_assert(offsetof(UDeathWidget_C, UberGraphFrame) == 0x000218, "Member 'UDeathWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, Resurrection_Prompt_2) == 0x000220, "Member 'UDeathWidget_C::Resurrection_Prompt_2' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, Show_Resurrect___Respawn) == 0x000228, "Member 'UDeathWidget_C::Show_Resurrect___Respawn' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, Resurrection_Prompt_1) == 0x000230, "Member 'UDeathWidget_C::Resurrection_Prompt_1' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, Resurrection_Prompt_Out) == 0x000238, "Member 'UDeathWidget_C::Resurrection_Prompt_Out' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, You_Died__3) == 0x000240, "Member 'UDeathWidget_C::You_Died__3' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, You_Died__2) == 0x000248, "Member 'UDeathWidget_C::You_Died__2' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, You_Died__1) == 0x000250, "Member 'UDeathWidget_C::You_Died__1' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, You_Died_) == 0x000258, "Member 'UDeathWidget_C::You_Died_' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, Resurrection_Prompt) == 0x000260, "Member 'UDeathWidget_C::Resurrection_Prompt' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlock_PrimaryDeathText) == 0x000268, "Member 'UDeathWidget_C::CommonTextBlock_PrimaryDeathText' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlockExtraLives) == 0x000270, "Member 'UDeathWidget_C::CommonTextBlockExtraLives' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlockRespawn) == 0x000278, "Member 'UDeathWidget_C::CommonTextBlockRespawn' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlockResurrect) == 0x000280, "Member 'UDeathWidget_C::CommonTextBlockResurrect' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlockResurrectionTimerText) == 0x000288, "Member 'UDeathWidget_C::CommonTextBlockResurrectionTimerText' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, CommonTextBlockWait) == 0x000290, "Member 'UDeathWidget_C::CommonTextBlockWait' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, KillerPortraitWidget) == 0x000298, "Member 'UDeathWidget_C::KillerPortraitWidget' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, LeftMouseBase) == 0x0002A0, "Member 'UDeathWidget_C::LeftMouseBase' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, RespawnBinding) == 0x0002A8, "Member 'UDeathWidget_C::RespawnBinding' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, RespawnBox) == 0x0002B0, "Member 'UDeathWidget_C::RespawnBox' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, ResurrectBinding) == 0x0002B8, "Member 'UDeathWidget_C::ResurrectBinding' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, RightMouseBase) == 0x0002C0, "Member 'UDeathWidget_C::RightMouseBase' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, StartDeathBox) == 0x0002C8, "Member 'UDeathWidget_C::StartDeathBox' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, WidgetSwitcher_0) == 0x0002D0, "Member 'UDeathWidget_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, RespawnTimerHandle) == 0x0002D8, "Member 'UDeathWidget_C::RespawnTimerHandle' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, ReleaseTimeRemaining) == 0x0002E0, "Member 'UDeathWidget_C::ReleaseTimeRemaining' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, ReadyToRespawnText) == 0x0002E8, "Member 'UDeathWidget_C::ReadyToRespawnText' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, ShowExtraLivesTimerHandle) == 0x000300, "Member 'UDeathWidget_C::ShowExtraLivesTimerHandle' has a wrong offset!");
static_assert(offsetof(UDeathWidget_C, ResurrectTimeRemaining) == 0x000308, "Member 'UDeathWidget_C::ResurrectTimeRemaining' has a wrong offset!");

}
