#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: News

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass News.News_C
// 0x0048 (0x0408 - 0x03C0)
class UNews_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DescriptionScroll;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxEntries;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                     ButtonGroup;                                       // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_News(int32 EntryPoint);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AddEntry(const class FText& inEntryText);
	void PopulateEntries(bool* isEmpty);
	void Init();
	void UpdateInfoPanel(const class FText& BodyText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"News_C">();
	}
	static class UNews_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNews_C>();
	}
};
static_assert(alignof(UNews_C) == 0x000008, "Wrong alignment on UNews_C");
static_assert(sizeof(UNews_C) == 0x000408, "Wrong size on UNews_C");
static_assert(offsetof(UNews_C, UberGraphFrame) == 0x0003C0, "Member 'UNews_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNews_C, CloseButton) == 0x0003C8, "Member 'UNews_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UNews_C, DescriptionScroll) == 0x0003D0, "Member 'UNews_C::DescriptionScroll' has a wrong offset!");
static_assert(offsetof(UNews_C, Lightbox) == 0x0003D8, "Member 'UNews_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UNews_C, MainIcon) == 0x0003E0, "Member 'UNews_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UNews_C, ScrollBoxEntries) == 0x0003E8, "Member 'UNews_C::ScrollBoxEntries' has a wrong offset!");
static_assert(offsetof(UNews_C, TextDescription) == 0x0003F0, "Member 'UNews_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UNews_C, Title) == 0x0003F8, "Member 'UNews_C::Title' has a wrong offset!");
static_assert(offsetof(UNews_C, ButtonGroup) == 0x000400, "Member 'UNews_C::ButtonGroup' has a wrong offset!");

}
