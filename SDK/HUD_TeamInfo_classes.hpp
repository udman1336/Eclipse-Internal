#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_TeamInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_TeamInfo.HUD_TeamInfo_C
// 0x0048 (0x0260 - 0x0218)
class UHUD_TeamInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           _Vertical_Box__Team_Members;                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderFrame;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TeamMemberInfo_C*                  TeamMemberInfo_1;                                  // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TeamMemberInfo_C*                  TeamMemberInfo_2;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TeamMemberInfo_C*                  TeamMemberInfo_3;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UHUD_TeamMemberInfo_C*>          TeamMembers;                                       // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          NewVar_0;                                          // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Construct();
	void ExecuteUbergraph_HUD_TeamInfo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_TeamInfo_C">();
	}
	static class UHUD_TeamInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_TeamInfo_C>();
	}
};
static_assert(alignof(UHUD_TeamInfo_C) == 0x000008, "Wrong alignment on UHUD_TeamInfo_C");
static_assert(sizeof(UHUD_TeamInfo_C) == 0x000260, "Wrong size on UHUD_TeamInfo_C");
static_assert(offsetof(UHUD_TeamInfo_C, UberGraphFrame) == 0x000218, "Member 'UHUD_TeamInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, _Vertical_Box__Team_Members) == 0x000220, "Member 'UHUD_TeamInfo_C::_Vertical_Box__Team_Members' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, BorderFrame) == 0x000228, "Member 'UHUD_TeamInfo_C::BorderFrame' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, TeamMemberInfo_1) == 0x000230, "Member 'UHUD_TeamInfo_C::TeamMemberInfo_1' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, TeamMemberInfo_2) == 0x000238, "Member 'UHUD_TeamInfo_C::TeamMemberInfo_2' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, TeamMemberInfo_3) == 0x000240, "Member 'UHUD_TeamInfo_C::TeamMemberInfo_3' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, TeamMembers) == 0x000248, "Member 'UHUD_TeamInfo_C::TeamMembers' has a wrong offset!");
static_assert(offsetof(UHUD_TeamInfo_C, NewVar_0) == 0x000258, "Member 'UHUD_TeamInfo_C::NewVar_0' has a wrong offset!");

}
