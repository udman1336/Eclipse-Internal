#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedHeaderSubWidgetBase

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// 0x0038 (0x0248 - 0x0210)
class UItemReceivedHeaderSubWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortGiftBoxItem*                       GiftBoxItem_BP;                                    // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 FromUserName_BP;                                   // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>      ItemDefs;                                          // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          bIsBattlePassUpgrade;                              // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Construct();
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
	void InitFromGiftBoxItem_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedHeaderSubWidgetBase_C">();
	}
	static class UItemReceivedHeaderSubWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedHeaderSubWidgetBase_C>();
	}
};
static_assert(alignof(UItemReceivedHeaderSubWidgetBase_C) == 0x000008, "Wrong alignment on UItemReceivedHeaderSubWidgetBase_C");
static_assert(sizeof(UItemReceivedHeaderSubWidgetBase_C) == 0x000248, "Wrong size on UItemReceivedHeaderSubWidgetBase_C");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, UberGraphFrame) == 0x000210, "Member 'UItemReceivedHeaderSubWidgetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, GiftBoxItem_BP) == 0x000218, "Member 'UItemReceivedHeaderSubWidgetBase_C::GiftBoxItem_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, FromUserName_BP) == 0x000220, "Member 'UItemReceivedHeaderSubWidgetBase_C::FromUserName_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, ItemDefs) == 0x000230, "Member 'UItemReceivedHeaderSubWidgetBase_C::ItemDefs' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, bIsBattlePassUpgrade) == 0x000240, "Member 'UItemReceivedHeaderSubWidgetBase_C::bIsBattlePassUpgrade' has a wrong offset!");

}

