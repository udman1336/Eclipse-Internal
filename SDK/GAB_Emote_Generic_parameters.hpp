#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Emote_Generic

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// 0x0180 (0x0180 - 0x0000)
struct GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0018(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0050(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0090(0x0020)()
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortGameplayAbilityMontageSectionToPlay      Temp_byte_Variable;                                // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortGameplayAbilityMontageSectionToPlay      Temp_byte_Variable1;                               // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate12;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	EFortGameplayAbilityMontageSectionToPlay      K2Node_Select_Default;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x0110(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	EFortCustomBodyType                           CallFunc_GetBodyTypeAndGender_BodyType;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             CallFunc_GetBodyTypeAndGender_Gender;              // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate123;           // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetAnimation_ReturnValue;                 // 0x0150(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetNull_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic");
static_assert(sizeof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic) == 0x000180, "Wrong size on GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, EntryPoint) == 0x000000, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData1) == 0x000018, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag1) == 0x000038, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData) == 0x000050, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag) == 0x000070, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate1) == 0x000078, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_struct_Variable) == 0x000088, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_struct_Variable1) == 0x000090, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_Loaded) == 0x0000B0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_object_Variable) == 0x0000B8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsAnim_Montage) == 0x0000C0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_bool_Variable) == 0x0000C9, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_byte_Variable) == 0x0000CA, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_byte_Variable1) == 0x0000CB, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0000D0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsValid_ReturnValue1) == 0x0000D8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x0000E0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base) == 0x0000E8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess1) == 0x0000F0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate12) == 0x0000F8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_Select_Default) == 0x000108, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData12) == 0x000110, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag12) == 0x000130, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetBodyTypeAndGender_BodyType) == 0x000138, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetBodyTypeAndGender_BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetBodyTypeAndGender_Gender) == 0x000139, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetBodyTypeAndGender_Gender' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate123) == 0x000140, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetAnimation_ReturnValue) == 0x000150, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsAssetNull_ReturnValue) == 0x000178, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// 0x0008 (0x0008 - 0x0000)
struct GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");
static_assert(sizeof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D) == 0x000008, "Wrong size on GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");
static_assert(offsetof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D, Loaded) == 0x000000, "Member 'GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D::Loaded' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// 0x0028 (0x0028 - 0x0000)
struct GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2) == 0x000028, "Wrong size on GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000020, "Member 'GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// 0x0028 (0x0028 - 0x0000)
struct GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2) == 0x000028, "Wrong size on GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000020, "Member 'GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// 0x0028 (0x0028 - 0x0000)
struct GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2) == 0x000028, "Wrong size on GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000020, "Member 'GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// 0x0018 (0x0018 - 0x0000)
struct GAB_Emote_Generic_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_Emote_Generic_C_K2_OnEndAbility) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_K2_OnEndAbility");
static_assert(sizeof(GAB_Emote_Generic_C_K2_OnEndAbility) == 0x000018, "Wrong size on GAB_Emote_Generic_C_K2_OnEndAbility");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
// 0x0020 (0x0020 - 0x0000)
struct GAB_Emote_Generic_C_GetBodyTypeAndGender final
{
public:
	EFortCustomBodyType                           BodyType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             Gender;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Emote_Generic_C_GetBodyTypeAndGender) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_GetBodyTypeAndGender");
static_assert(sizeof(GAB_Emote_Generic_C_GetBodyTypeAndGender) == 0x000020, "Wrong size on GAB_Emote_Generic_C_GetBodyTypeAndGender");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, BodyType) == 0x000000, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, Gender) == 0x000001, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::Gender' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetCharacterBodyType_ReturnValue) == 0x000019, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetCharacterBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetCharacterGender_ReturnValue) == 0x00001A, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");

}
