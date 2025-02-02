#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorScoreboard

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C
// 0x0028 (0x02A8 - 0x0280)
class UAthenaSpectatorScoreboard_C final : public UAthenaSpectatorScoreboardScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(Transient, DuplicateTransient)
	class UAthenaSpectatorScoreboardHeaderRowWidget_C* AthenaSpectatorScoreboardHeaderRowWidget;          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorScoreboardListView_C*   AthenaSpectatorScoreboardListView;                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageFollowPlayer;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePlayerProfile;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSpectatorScoreboard(int32 EntryPoint);
	void Construct();
	void ResetFocus();
	void UpdateListUI();
	void SetConsoleInputImages();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpectatorScoreboard_C">();
	}
	static class UAthenaSpectatorScoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpectatorScoreboard_C>();
	}
};
static_assert(alignof(UAthenaSpectatorScoreboard_C) == 0x000008, "Wrong alignment on UAthenaSpectatorScoreboard_C");
static_assert(sizeof(UAthenaSpectatorScoreboard_C) == 0x0002A8, "Wrong size on UAthenaSpectatorScoreboard_C");
static_assert(offsetof(UAthenaSpectatorScoreboard_C, UberGraphFrame) == 0x000280, "Member 'UAthenaSpectatorScoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboard_C, AthenaSpectatorScoreboardHeaderRowWidget) == 0x000288, "Member 'UAthenaSpectatorScoreboard_C::AthenaSpectatorScoreboardHeaderRowWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboard_C, AthenaSpectatorScoreboardListView) == 0x000290, "Member 'UAthenaSpectatorScoreboard_C::AthenaSpectatorScoreboardListView' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboard_C, ImageFollowPlayer) == 0x000298, "Member 'UAthenaSpectatorScoreboard_C::ImageFollowPlayer' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboard_C, ImagePlayerProfile) == 0x0002A0, "Member 'UAthenaSpectatorScoreboard_C::ImagePlayerProfile' has a wrong offset!");

}

