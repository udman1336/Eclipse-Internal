#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_C4_Passive

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_C4_Passive.GA_Athena_C4_Passive_C
// 0x0020 (0x0B08 - 0x0AE8)
class UGA_Athena_C4_Passive_C final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_AE8[0x8];                                      // 0x0AE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           TrackGroupTag;                                     // 0x0AF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               C4ItemDef;                                         // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_C4_Passive(int32 EntryPoint);
	void EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_C4_Passive_C">();
	}
	static class UGA_Athena_C4_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_C4_Passive_C>();
	}
};
static_assert(alignof(UGA_Athena_C4_Passive_C) == 0x000008, "Wrong alignment on UGA_Athena_C4_Passive_C");
static_assert(sizeof(UGA_Athena_C4_Passive_C) == 0x000B08, "Wrong size on UGA_Athena_C4_Passive_C");
static_assert(offsetof(UGA_Athena_C4_Passive_C, UberGraphFrame) == 0x000AF0, "Member 'UGA_Athena_C4_Passive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_C4_Passive_C, TrackGroupTag) == 0x000AF8, "Member 'UGA_Athena_C4_Passive_C::TrackGroupTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_C4_Passive_C, C4ItemDef) == 0x000B00, "Member 'UGA_Athena_C4_Passive_C::C4ItemDef' has a wrong offset!");

}
