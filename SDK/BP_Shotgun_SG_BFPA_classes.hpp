#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_SG_BFPA

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
// 0x0100 (0x0478 - 0x0378)
class UBP_Shotgun_SG_BFPA_C final : public UAnimInstance
{
public:
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F; // 0x0388(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB; // 0x03D0(0x0070)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB; // 0x0440(0x0038)()

public:
	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_SG_BFPA_C">();
	}
	static class UBP_Shotgun_SG_BFPA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Shotgun_SG_BFPA_C>();
	}
};
static_assert(alignof(UBP_Shotgun_SG_BFPA_C) == 0x000008, "Wrong alignment on UBP_Shotgun_SG_BFPA_C");
static_assert(sizeof(UBP_Shotgun_SG_BFPA_C) == 0x000478, "Wrong size on UBP_Shotgun_SG_BFPA_C");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, UberGraphFrame) == 0x000380, "Member 'UBP_Shotgun_SG_BFPA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F) == 0x000388, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB) == 0x0003D0, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB) == 0x000440, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB' has a wrong offset!");

}

