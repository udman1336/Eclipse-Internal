#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMainStatTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
// 0x0048 (0x0260 - 0x0218)
class UAthenaMainStatTile_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Glow;                                              // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NameTextBlock;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ValueTextBlock;                                    // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   StatName;                                          // 0x0238(0x0018)(Edit, BlueprintVisible)
	class FString                                 BaseTagName;                                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetStatValue(const class FText& StatValueAsText);
	void SetTagAndDisplayName(const class FString& Tag, const class FText& DisplayName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMainStatTile_C">();
	}
	static class UAthenaMainStatTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMainStatTile_C>();
	}
};
static_assert(alignof(UAthenaMainStatTile_C) == 0x000008, "Wrong alignment on UAthenaMainStatTile_C");
static_assert(sizeof(UAthenaMainStatTile_C) == 0x000260, "Wrong size on UAthenaMainStatTile_C");
static_assert(offsetof(UAthenaMainStatTile_C, UberGraphFrame) == 0x000218, "Member 'UAthenaMainStatTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMainStatTile_C, Glow) == 0x000220, "Member 'UAthenaMainStatTile_C::Glow' has a wrong offset!");
static_assert(offsetof(UAthenaMainStatTile_C, NameTextBlock) == 0x000228, "Member 'UAthenaMainStatTile_C::NameTextBlock' has a wrong offset!");
static_assert(offsetof(UAthenaMainStatTile_C, ValueTextBlock) == 0x000230, "Member 'UAthenaMainStatTile_C::ValueTextBlock' has a wrong offset!");
static_assert(offsetof(UAthenaMainStatTile_C, StatName) == 0x000238, "Member 'UAthenaMainStatTile_C::StatName' has a wrong offset!");
static_assert(offsetof(UAthenaMainStatTile_C, BaseTagName) == 0x000250, "Member 'UAthenaMainStatTile_C::BaseTagName' has a wrong offset!");

}
