#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUDMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaHUDMenu.AthenaHUDMenu_C
// 0x0058 (0x0270 - 0x0218)
class UAthenaHUDMenu_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UAthenaInventoryPanel_C*                AthenaInventoryPanel;                              // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHUDBottomBar_C*                  BottomBar;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     DynamicCursorContent;                              // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  NamedContentSwitcher;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                NoContent;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                              TopBar;                                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameOverWidget_C*                DynamicGameOverScreen;                             // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowingGameOverScreen;                             // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowingWinnerScreen;                               // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_262[0x6];                                      // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaPlayerViewModel*                 ViewModel;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaHUDMenu(int32 EntryPoint);
	void PostBind_CheckConditions();
	void On_Player_Died(const struct FFortPlayerDeathReport& DeathReport);
	void Clear_GameOver_Screen();
	void Construct();
	void HandleRevived();
	void On_Player_Or_Team_Won();
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName ActionName);
	void PushMenuContent(class UWidget* Widget);
	class UWidget* PopMenuContent();
	void Dismiss();
	void CreateOrShowGameOverScreen(class UAthenaGameOverWidget_C** GameOverScreen);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel_0);
	void Has_Player_Or_Team_Won(bool* bWon);
	void Has_Player_Died(bool* bDied, struct FFortPlayerDeathReport* DeathReport);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaHUDMenu_C">();
	}
	static class UAthenaHUDMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaHUDMenu_C>();
	}
};
static_assert(alignof(UAthenaHUDMenu_C) == 0x000008, "Wrong alignment on UAthenaHUDMenu_C");
static_assert(sizeof(UAthenaHUDMenu_C) == 0x000270, "Wrong size on UAthenaHUDMenu_C");
static_assert(offsetof(UAthenaHUDMenu_C, UberGraphFrame) == 0x000218, "Member 'UAthenaHUDMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, AthenaInventoryPanel) == 0x000220, "Member 'UAthenaHUDMenu_C::AthenaInventoryPanel' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, BottomBar) == 0x000228, "Member 'UAthenaHUDMenu_C::BottomBar' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, DynamicCursorContent) == 0x000230, "Member 'UAthenaHUDMenu_C::DynamicCursorContent' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, MainContentStack) == 0x000238, "Member 'UAthenaHUDMenu_C::MainContentStack' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, NamedContentSwitcher) == 0x000240, "Member 'UAthenaHUDMenu_C::NamedContentSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, NoContent) == 0x000248, "Member 'UAthenaHUDMenu_C::NoContent' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, TopBar) == 0x000250, "Member 'UAthenaHUDMenu_C::TopBar' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, DynamicGameOverScreen) == 0x000258, "Member 'UAthenaHUDMenu_C::DynamicGameOverScreen' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, ShowingGameOverScreen) == 0x000260, "Member 'UAthenaHUDMenu_C::ShowingGameOverScreen' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, ShowingWinnerScreen) == 0x000261, "Member 'UAthenaHUDMenu_C::ShowingWinnerScreen' has a wrong offset!");
static_assert(offsetof(UAthenaHUDMenu_C, ViewModel) == 0x000268, "Member 'UAthenaHUDMenu_C::ViewModel' has a wrong offset!");

}
