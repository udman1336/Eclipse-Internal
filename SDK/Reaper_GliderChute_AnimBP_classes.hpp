#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reaper_GliderChute_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Reaper_GliderChute_AnimBP.Reaper_GliderChute_AnimBP_C
// 0x0998 (0x0D10 - 0x0378)
class UReaper_GliderChute_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_5A54842C408A8050100891AB4058C8A7; // 0x0388(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_20D39D7944CAC167C18F5789F7C0AE7B; // 0x03D0(0x0070)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4; // 0x0440(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576; // 0x04C0(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609; // 0x0540(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4; // 0x05C0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_04CC95284A110C598F3C67BDCD6CC50B; // 0x0640(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_F474D4544C209E11499B409F08B33765; // 0x06C8(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F; // 0x0710(0x0128)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_E7DC43FB4F5DE4E559B3ADBF27269D5C; // 0x0838(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B; // 0x0880(0x0128)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_57252E8F4B03ABB40F4F82BDCFC8E239; // 0x09A8(0x0048)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_8AEB2C074A7DD9593AE7AA884E2EE980; // 0x09F0(0x00E0)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A; // 0x0AD0(0x0128)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_02247F954A8CD3E7D1F22CB0CAE94F23; // 0x0BF8(0x00F0)()
	bool                                          IsParachuteOpen;                                   // 0x0CE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CE9[0x3];                                      // 0x0CE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AimPitch;                                          // 0x0CEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeployAnimRate;                                    // 0x0CF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkydiveYaw;                                        // 0x0CF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UseDynamicsAlpha;                                  // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Forward;                                           // 0x0CFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Right;                                             // 0x0D00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Reaper_GliderChute_AnimBP(int32 EntryPoint);
	void AnimNotify_TurnONEngines();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Reaper_GliderChute_AnimBP_AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Reaper_GliderChute_AnimBP_C">();
	}
	static class UReaper_GliderChute_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReaper_GliderChute_AnimBP_C>();
	}
};
static_assert(alignof(UReaper_GliderChute_AnimBP_C) == 0x000010, "Wrong alignment on UReaper_GliderChute_AnimBP_C");
static_assert(sizeof(UReaper_GliderChute_AnimBP_C) == 0x000D10, "Wrong size on UReaper_GliderChute_AnimBP_C");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, UberGraphFrame) == 0x000380, "Member 'UReaper_GliderChute_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_Root_5A54842C408A8050100891AB4058C8A7) == 0x000388, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_Root_5A54842C408A8050100891AB4058C8A7' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_Slot_20D39D7944CAC167C18F5789F7C0AE7B) == 0x0003D0, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_Slot_20D39D7944CAC167C18F5789F7C0AE7B' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4) == 0x000440, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_A7104FFA48E926160BE03DA88FF45BE4' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576) == 0x0004C0, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_DA64D86640F381D54CDEA8BAF301A576' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609) == 0x000540, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_BA0E544049ED8F65C9C2CEA2EDD69609' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4) == 0x0005C0, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_662E8E6C45285723236371918314AAD4' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_SequencePlayer_04CC95284A110C598F3C67BDCD6CC50B) == 0x000640, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_SequencePlayer_04CC95284A110C598F3C67BDCD6CC50B' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_StateResult_F474D4544C209E11499B409F08B33765) == 0x0006C8, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_StateResult_F474D4544C209E11499B409F08B33765' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F) == 0x000710, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_BlendSpacePlayer_2D4C5ACE49343C8AF6D3DEA4F137822F' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_StateResult_E7DC43FB4F5DE4E559B3ADBF27269D5C) == 0x000838, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_StateResult_E7DC43FB4F5DE4E559B3ADBF27269D5C' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B) == 0x000880, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_BlendSpacePlayer_F917F9D5454B41D2C1384D922EE22F1B' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_StateResult_57252E8F4B03ABB40F4F82BDCFC8E239) == 0x0009A8, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_StateResult_57252E8F4B03ABB40F4F82BDCFC8E239' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_StateMachine_8AEB2C074A7DD9593AE7AA884E2EE980) == 0x0009F0, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_StateMachine_8AEB2C074A7DD9593AE7AA884E2EE980' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A) == 0x000AD0, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_BlendSpacePlayer_D64B97FB4C7A78E8F47D6C8124F85A8A' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AnimGraphNode_ApplyAdditive_02247F954A8CD3E7D1F22CB0CAE94F23) == 0x000BF8, "Member 'UReaper_GliderChute_AnimBP_C::AnimGraphNode_ApplyAdditive_02247F954A8CD3E7D1F22CB0CAE94F23' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, IsParachuteOpen) == 0x000CE8, "Member 'UReaper_GliderChute_AnimBP_C::IsParachuteOpen' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, AimPitch) == 0x000CEC, "Member 'UReaper_GliderChute_AnimBP_C::AimPitch' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, DeployAnimRate) == 0x000CF0, "Member 'UReaper_GliderChute_AnimBP_C::DeployAnimRate' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, SkydiveYaw) == 0x000CF4, "Member 'UReaper_GliderChute_AnimBP_C::SkydiveYaw' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, UseDynamicsAlpha) == 0x000CF8, "Member 'UReaper_GliderChute_AnimBP_C::UseDynamicsAlpha' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, Forward) == 0x000CFC, "Member 'UReaper_GliderChute_AnimBP_C::Forward' has a wrong offset!");
static_assert(offsetof(UReaper_GliderChute_AnimBP_C, Right) == 0x000D00, "Member 'UReaper_GliderChute_AnimBP_C::Right' has a wrong offset!");

}

