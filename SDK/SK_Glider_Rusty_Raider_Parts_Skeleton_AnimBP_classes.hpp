#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP.SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C
// 0x0140 (0x0570 - 0x0430)
class USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_8AFAC2574DC96BCE6B0BE4B50C65A322; // 0x0438(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_F3B9A27141358CD0075E228BBF033BB9; // 0x0480(0x00E8)(ContainsInstancedReference)
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F3B9A27141358CD0075E228BBF033BB9();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C">();
	}
	static class USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C");
static_assert(sizeof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C) == 0x000570, "Wrong size on USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C");
static_assert(offsetof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C, UberGraphFrame) == 0x000430, "Member 'USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C, AnimGraphNode_Root_8AFAC2574DC96BCE6B0BE4B50C65A322) == 0x000438, "Member 'USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C::AnimGraphNode_Root_8AFAC2574DC96BCE6B0BE4B50C65A322' has a wrong offset!");
static_assert(offsetof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_F3B9A27141358CD0075E228BBF033BB9) == 0x000480, "Member 'USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_F3B9A27141358CD0075E228BBF033BB9' has a wrong offset!");
static_assert(offsetof(USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C, MeshToCopy) == 0x000568, "Member 'USK_Glider_Rusty_Raider_Parts_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

