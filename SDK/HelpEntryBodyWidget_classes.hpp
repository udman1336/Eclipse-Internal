#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpEntryBodyWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HelpEntryBodyWidget.HelpEntryBodyWidget_C
// 0x0038 (0x0250 - 0x0218)
class UHelpEntryBodyWidget_C final : public UCommonUserWidget
{
public:
	class UCommonBorder*                          BottomContentBorder;                               // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomImage;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         EntryBody;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RootVerticalBox;                                   // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TopContentBorder;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopImage;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHelpItem*                          ActiveHelpItem;                                    // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetActiveEntry(class UFortHelpItem* InHelpItem);
	void UpdateBodyText();
	void UpdateAdditionalWidget();
	void UpdateAdditionalImage();
	void ResetAdditionalContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HelpEntryBodyWidget_C">();
	}
	static class UHelpEntryBodyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHelpEntryBodyWidget_C>();
	}
};
static_assert(alignof(UHelpEntryBodyWidget_C) == 0x000008, "Wrong alignment on UHelpEntryBodyWidget_C");
static_assert(sizeof(UHelpEntryBodyWidget_C) == 0x000250, "Wrong size on UHelpEntryBodyWidget_C");
static_assert(offsetof(UHelpEntryBodyWidget_C, BottomContentBorder) == 0x000218, "Member 'UHelpEntryBodyWidget_C::BottomContentBorder' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, BottomImage) == 0x000220, "Member 'UHelpEntryBodyWidget_C::BottomImage' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, EntryBody) == 0x000228, "Member 'UHelpEntryBodyWidget_C::EntryBody' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, RootVerticalBox) == 0x000230, "Member 'UHelpEntryBodyWidget_C::RootVerticalBox' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, TopContentBorder) == 0x000238, "Member 'UHelpEntryBodyWidget_C::TopContentBorder' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, TopImage) == 0x000240, "Member 'UHelpEntryBodyWidget_C::TopImage' has a wrong offset!");
static_assert(offsetof(UHelpEntryBodyWidget_C, ActiveHelpItem) == 0x000248, "Member 'UHelpEntryBodyWidget_C::ActiveHelpItem' has a wrong offset!");

}
