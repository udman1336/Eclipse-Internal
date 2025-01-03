#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSquadList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSquadList.AthenaSquadList_C
// 0x0028 (0x0268 - 0x0240)
class UAthenaSquadList_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBoxSquadMembers;                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberInfo_C*>        SquadMembers;                                      // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bAddFriendOptionsDisplayed;                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaSquadList(int32 EntryPoint);
	void RolloutAddFriend();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void AppendSquadMember(class AFortPlayerStateAthena* PlayerState, int32 PlayerIndex);
	void RebuildSquadMembersList();
	void ClearSquadMembers();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSquadList_C">();
	}
	static class UAthenaSquadList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSquadList_C>();
	}
};
static_assert(alignof(UAthenaSquadList_C) == 0x000008, "Wrong alignment on UAthenaSquadList_C");
static_assert(sizeof(UAthenaSquadList_C) == 0x000268, "Wrong size on UAthenaSquadList_C");
static_assert(offsetof(UAthenaSquadList_C, UberGraphFrame) == 0x000240, "Member 'UAthenaSquadList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSquadList_C, VerticalBoxSquadMembers) == 0x000248, "Member 'UAthenaSquadList_C::VerticalBoxSquadMembers' has a wrong offset!");
static_assert(offsetof(UAthenaSquadList_C, SquadMembers) == 0x000250, "Member 'UAthenaSquadList_C::SquadMembers' has a wrong offset!");
static_assert(offsetof(UAthenaSquadList_C, bAddFriendOptionsDisplayed) == 0x000260, "Member 'UAthenaSquadList_C::bAddFriendOptionsDisplayed' has a wrong offset!");

}

