#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotItemDetailsHostPanel

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadSlotItemDetailsHostPanel.SquadSlotItemDetailsHostPanel_C
// 0x0030 (0x02D8 - 0x02A8)
class USquadSlotItemDetailsHostPanel_C final : public UFortSquadSlotItemDetailsHostPanel
{
public:
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*     ItemAlterationsListDetailWidget;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCalledOutAttributesDetailWidget_C* ItemCalledOutAttributesDetailWidget;               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPrimaryHeroActiveAbilitiesListDetailWidget_C* PrimaryHeroActiveAbilitiesListDetailWidget;        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportHeroSquadBonusesDetailWidget_C* SupportHeroSquadBonusesDetailWidget;               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorSquadBonusTraitsDetailWidget_C* SurvivorSquadBonusTraitsDetailWidget_C_46;         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSlotItemDetailsHostPanel_C">();
	}
	static class USquadSlotItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSlotItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(USquadSlotItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on USquadSlotItemDetailsHostPanel_C");
static_assert(sizeof(USquadSlotItemDetailsHostPanel_C) == 0x0002D8, "Wrong size on USquadSlotItemDetailsHostPanel_C");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, HeaderWidget) == 0x0002A8, "Member 'USquadSlotItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, ItemAlterationsListDetailWidget) == 0x0002B0, "Member 'USquadSlotItemDetailsHostPanel_C::ItemAlterationsListDetailWidget' has a wrong offset!");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, ItemCalledOutAttributesDetailWidget) == 0x0002B8, "Member 'USquadSlotItemDetailsHostPanel_C::ItemCalledOutAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, PrimaryHeroActiveAbilitiesListDetailWidget) == 0x0002C0, "Member 'USquadSlotItemDetailsHostPanel_C::PrimaryHeroActiveAbilitiesListDetailWidget' has a wrong offset!");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, SupportHeroSquadBonusesDetailWidget) == 0x0002C8, "Member 'USquadSlotItemDetailsHostPanel_C::SupportHeroSquadBonusesDetailWidget' has a wrong offset!");
static_assert(offsetof(USquadSlotItemDetailsHostPanel_C, SurvivorSquadBonusTraitsDetailWidget_C_46) == 0x0002D0, "Member 'USquadSlotItemDetailsHostPanel_C::SurvivorSquadBonusTraitsDetailWidget_C_46' has a wrong offset!");

}
