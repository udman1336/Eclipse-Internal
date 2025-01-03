#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_CameraAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C
// 0x0020 (0x0050 - 0x0030)
class UBP_AnimNotifyState_CameraAnim_C final : public UAnimNotifyState
{
public:
	float                                         PlayRate;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendOutTime;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoop;                                             // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECameraAnimPlaySpace                          Shake_Space;                                       // 0x003D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shake_Scale;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnim*                            CameraAnim;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotifyState_CameraAnim_C">();
	}
	static class UBP_AnimNotifyState_CameraAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotifyState_CameraAnim_C>();
	}
};
static_assert(alignof(UBP_AnimNotifyState_CameraAnim_C) == 0x000008, "Wrong alignment on UBP_AnimNotifyState_CameraAnim_C");
static_assert(sizeof(UBP_AnimNotifyState_CameraAnim_C) == 0x000050, "Wrong size on UBP_AnimNotifyState_CameraAnim_C");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, PlayRate) == 0x000030, "Member 'UBP_AnimNotifyState_CameraAnim_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, BlendInTime) == 0x000034, "Member 'UBP_AnimNotifyState_CameraAnim_C::BlendInTime' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, BlendOutTime) == 0x000038, "Member 'UBP_AnimNotifyState_CameraAnim_C::BlendOutTime' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, bLoop) == 0x00003C, "Member 'UBP_AnimNotifyState_CameraAnim_C::bLoop' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, Shake_Space) == 0x00003D, "Member 'UBP_AnimNotifyState_CameraAnim_C::Shake_Space' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, Shake_Scale) == 0x000040, "Member 'UBP_AnimNotifyState_CameraAnim_C::Shake_Scale' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotifyState_CameraAnim_C, CameraAnim) == 0x000048, "Member 'UBP_AnimNotifyState_CameraAnim_C::CameraAnim' has a wrong offset!");

}

