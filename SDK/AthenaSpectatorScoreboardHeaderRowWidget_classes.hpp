#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSpectatorScoreboardHeaderRowWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboardHeaderRowWidget.AthenaSpectatorScoreboardHeaderRowWidget_C
// 0x0018 (0x0230 - 0x0218)
class UAthenaSpectatorScoreboardHeaderRowWidget_C final : public UCommonUserWidget
{
public:
	class UIconTextButton_C*                      Kills;                                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Rank;                                              // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      User;                                              // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSpectatorScoreboardHeaderRowWidget_C">();
	}
	static class UAthenaSpectatorScoreboardHeaderRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSpectatorScoreboardHeaderRowWidget_C>();
	}
};
static_assert(alignof(UAthenaSpectatorScoreboardHeaderRowWidget_C) == 0x000008, "Wrong alignment on UAthenaSpectatorScoreboardHeaderRowWidget_C");
static_assert(sizeof(UAthenaSpectatorScoreboardHeaderRowWidget_C) == 0x000230, "Wrong size on UAthenaSpectatorScoreboardHeaderRowWidget_C");
static_assert(offsetof(UAthenaSpectatorScoreboardHeaderRowWidget_C, Kills) == 0x000218, "Member 'UAthenaSpectatorScoreboardHeaderRowWidget_C::Kills' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboardHeaderRowWidget_C, Rank) == 0x000220, "Member 'UAthenaSpectatorScoreboardHeaderRowWidget_C::Rank' has a wrong offset!");
static_assert(offsetof(UAthenaSpectatorScoreboardHeaderRowWidget_C, User) == 0x000228, "Member 'UAthenaSpectatorScoreboardHeaderRowWidget_C::User' has a wrong offset!");

}
