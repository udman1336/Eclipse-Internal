#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBarTopIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBarTopIcon.CollectionBarTopIcon_C
// 0x0098 (0x02B0 - 0x0218)
class UCollectionBarTopIcon_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            IconBrush;                                         // 0x0228(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBarTopIcon_C">();
	}
	static class UCollectionBarTopIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBarTopIcon_C>();
	}
};
static_assert(alignof(UCollectionBarTopIcon_C) == 0x000008, "Wrong alignment on UCollectionBarTopIcon_C");
static_assert(sizeof(UCollectionBarTopIcon_C) == 0x0002B0, "Wrong size on UCollectionBarTopIcon_C");
static_assert(offsetof(UCollectionBarTopIcon_C, UberGraphFrame) == 0x000218, "Member 'UCollectionBarTopIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBarTopIcon_C, Icon) == 0x000220, "Member 'UCollectionBarTopIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UCollectionBarTopIcon_C, IconBrush) == 0x000228, "Member 'UCollectionBarTopIcon_C::IconBrush' has a wrong offset!");

}
