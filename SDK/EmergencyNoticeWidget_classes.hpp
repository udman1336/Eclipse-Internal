#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmergencyNoticeWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmergencyNoticeWidget.EmergencyNoticeWidget_C
// 0x0040 (0x0258 - 0x0218)
class UEmergencyNoticeWidget_C final : public UEmergencyNoticeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Entrance;                                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BodyText;                                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderAll;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BackingPanel;                                // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MainOverlay;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EmergencyNoticeWidget(int32 EntryPoint);
	void HideNotice();
	void ShowNotice(const class FText& Title, const class FText& Body);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmergencyNoticeWidget_C">();
	}
	static class UEmergencyNoticeWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmergencyNoticeWidget_C>();
	}
};
static_assert(alignof(UEmergencyNoticeWidget_C) == 0x000008, "Wrong alignment on UEmergencyNoticeWidget_C");
static_assert(sizeof(UEmergencyNoticeWidget_C) == 0x000258, "Wrong size on UEmergencyNoticeWidget_C");
static_assert(offsetof(UEmergencyNoticeWidget_C, UberGraphFrame) == 0x000218, "Member 'UEmergencyNoticeWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, Entrance) == 0x000220, "Member 'UEmergencyNoticeWidget_C::Entrance' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, BodyText) == 0x000228, "Member 'UEmergencyNoticeWidget_C::BodyText' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, BorderAll) == 0x000230, "Member 'UEmergencyNoticeWidget_C::BorderAll' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, Image_1) == 0x000238, "Member 'UEmergencyNoticeWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, Image_BackingPanel) == 0x000240, "Member 'UEmergencyNoticeWidget_C::Image_BackingPanel' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, MainOverlay) == 0x000248, "Member 'UEmergencyNoticeWidget_C::MainOverlay' has a wrong offset!");
static_assert(offsetof(UEmergencyNoticeWidget_C, TitleText) == 0x000250, "Member 'UEmergencyNoticeWidget_C::TitleText' has a wrong offset!");

}
