#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SignInWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SignInWidget.SignInWidget_C
// 0x0030 (0x0490 - 0x0460)
class USignInWidget_C final : public UFortSignInWidget
{
public:
	class UNamedSlot*                             ButtonSlot;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       CommonLazyImage_0;                                 // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ContentBox;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmergencyNoticeWidget_C*               EmergencyNoticeWidget;                             // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    LoginInputAction;                                  // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SignInWidget_C">();
	}
	static class USignInWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USignInWidget_C>();
	}
};
static_assert(alignof(USignInWidget_C) == 0x000008, "Wrong alignment on USignInWidget_C");
static_assert(sizeof(USignInWidget_C) == 0x000490, "Wrong size on USignInWidget_C");
static_assert(offsetof(USignInWidget_C, ButtonSlot) == 0x000460, "Member 'USignInWidget_C::ButtonSlot' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, CommonLazyImage_0) == 0x000468, "Member 'USignInWidget_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, ContentBox) == 0x000470, "Member 'USignInWidget_C::ContentBox' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, EmergencyNoticeWidget) == 0x000478, "Member 'USignInWidget_C::EmergencyNoticeWidget' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, LoginInputAction) == 0x000480, "Member 'USignInWidget_C::LoginInputAction' has a wrong offset!");

}

