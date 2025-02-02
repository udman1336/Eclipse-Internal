#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TODM_A_PARENT

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TODM_A_PARENT.TODM_A_PARENT_C
// 0x01D0 (0x0D80 - 0x0BB0)
class ATODM_A_PARENT_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(Transient, DuplicateTransient)
	class UPostProcessComponent*                  HeavySSAO_Postprocess;                             // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0x0BC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0x0BCC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0x0BD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0x0BD4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0x0BD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD9[0x7];                                      // 0x0BD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     New_Storm_Timeline;                                // 0x0BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0x0BE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0x0BEC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0x0BF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0x0BF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF5[0x3];                                      // 0x0BF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FlashLightning;                                    // 0x0BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSpeed;                                         // 0x0C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomWeatherWaitTime;                             // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmountOfRandomWeatherTimeLeft;              // 0x0C08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWeatherLerpAmount;                              // 0x0C0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x0C10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindStrength;                                // 0x0C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindSpeed;                                   // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPickNewWindConditions;                            // 0x0C1C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1D[0x3];                                      // 0x0C1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightningStrength;                                 // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatCloudStormAmount;                            // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseRainWithStorms;                                 // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet;      // 0x0C29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WindEffects_Should_be_Active;                      // 0x0C2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2B[0x5];                                      // 0x0C2B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor;                       // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain;              // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor;                        // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain;          // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Storm_Wind_Strength;                               // 0x0C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Generate_Foliage_Wind_Gusts;                       // 0x0C54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C55[0x3];                                      // 0x0C55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LightningStrikeTimerHandle;                        // 0x0C58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                           PreviousDirectionalLightColor;                     // 0x0C60(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lightning_Flash_Color;                             // 0x0C70(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Min;                      // 0x0C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Max;                      // 0x0C84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningColor;                             // 0x0C88(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningLitColor;                          // 0x0C98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDistance;                          // 0x0CA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDiffuseAmount;                     // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningEmissiveAmount;                    // 0x0CB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitLength;                         // 0x0CB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitRotation;                       // 0x0CB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitOffset;                         // 0x0CBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayColor;                                 // 0x0CC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayLitColor;                              // 0x0CD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDistance;                              // 0x0CE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDiffuseAmount;                         // 0x0CE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayEmissiveAmount;                        // 0x0CE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitLength;                             // 0x0CEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitRotation;                           // 0x0CF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitOffset;                             // 0x0CF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningColor;                             // 0x0CF8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningLitColor;                          // 0x0D08(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDistance;                          // 0x0D18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDiffuseAmount;                     // 0x0D1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningEmissiveAmount;                    // 0x0D20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitLength;                         // 0x0D24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitRotation;                       // 0x0D28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitOffset;                         // 0x0D2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightColor;                               // 0x0D30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightLitColor;                            // 0x0D40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDistance;                            // 0x0D50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDiffuseAmount;                       // 0x0D54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightEmissiveAmount;                      // 0x0D58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitLength;                           // 0x0D5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitRotation;                         // 0x0D60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitOffset;                           // 0x0D64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         World_Border_Cloud_Base_Color_Brightness;          // 0x0D68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           World_Border_Cloud_Sub_Surface_Color_and_Opacity;  // 0x0D6C(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableCometDynamicPlacement;                       // 0x0D7C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TODM_A_PARENT(int32 EntryPoint);
	void UpdateSSAO();
	void EnableHDRRendering();
	void DisableLightAndFog(bool Enable);
	void ReceiveBeginPlay();
	void LightningStrike();
	void OnStormEnd();
	void OnStormStart();
	void StartStorm();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void FlashLightning__FinishedFunc();
	void UserConstructionScript();
	void SetHeavySSAO();
	void EmptyTransform(struct FTransform* Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TODM_A_PARENT_C">();
	}
	static class ATODM_A_PARENT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATODM_A_PARENT_C>();
	}
};
static_assert(alignof(ATODM_A_PARENT_C) == 0x000010, "Wrong alignment on ATODM_A_PARENT_C");
static_assert(sizeof(ATODM_A_PARENT_C) == 0x000D80, "Wrong size on ATODM_A_PARENT_C");
static_assert(offsetof(ATODM_A_PARENT_C, UberGraphFrame) == 0x000BB0, "Member 'ATODM_A_PARENT_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, HeavySSAO_Postprocess) == 0x000BB8, "Member 'ATODM_A_PARENT_C::HeavySSAO_Postprocess' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_) == 0x000BC0, "Member 'ATODM_A_PARENT_C::EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF) == 0x000BC8, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF) == 0x000BCC, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF) == 0x000BD0, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF) == 0x000BD4, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF) == 0x000BD8, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, New_Storm_Timeline) == 0x000BE0, "Member 'ATODM_A_PARENT_C::New_Storm_Timeline' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285) == 0x000BE8, "Member 'ATODM_A_PARENT_C::FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285) == 0x000BEC, "Member 'ATODM_A_PARENT_C::FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285) == 0x000BF0, "Member 'ATODM_A_PARENT_C::FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285) == 0x000BF4, "Member 'ATODM_A_PARENT_C::FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FlashLightning) == 0x000BF8, "Member 'ATODM_A_PARENT_C::FlashLightning' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, WindSpeed) == 0x000C00, "Member 'ATODM_A_PARENT_C::WindSpeed' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, RandomWeatherWaitTime) == 0x000C04, "Member 'ATODM_A_PARENT_C::RandomWeatherWaitTime' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, CurrentAmountOfRandomWeatherTimeLeft) == 0x000C08, "Member 'ATODM_A_PARENT_C::CurrentAmountOfRandomWeatherTimeLeft' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, NewWeatherLerpAmount) == 0x000C0C, "Member 'ATODM_A_PARENT_C::NewWeatherLerpAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, WindStrength) == 0x000C10, "Member 'ATODM_A_PARENT_C::WindStrength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FutureWindStrength) == 0x000C14, "Member 'ATODM_A_PARENT_C::FutureWindStrength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, FutureWindSpeed) == 0x000C18, "Member 'ATODM_A_PARENT_C::FutureWindSpeed' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, bPickNewWindConditions) == 0x000C1C, "Member 'ATODM_A_PARENT_C::bPickNewWindConditions' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, LightningStrength) == 0x000C20, "Member 'ATODM_A_PARENT_C::LightningStrength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, ThreatCloudStormAmount) == 0x000C24, "Member 'ATODM_A_PARENT_C::ThreatCloudStormAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, UseRainWithStorms) == 0x000C28, "Member 'ATODM_A_PARENT_C::UseRainWithStorms' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Play_a_Particle_Effect_Near_the_players_Feet) == 0x000C29, "Member 'ATODM_A_PARENT_C::Play_a_Particle_Effect_Near_the_players_Feet' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, WindEffects_Should_be_Active) == 0x000C2A, "Member 'ATODM_A_PARENT_C::WindEffects_Should_be_Active' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Storm_Foot_Particle_Outdoor) == 0x000C30, "Member 'ATODM_A_PARENT_C::Storm_Foot_Particle_Outdoor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Storm_Foot_Particle_While_on_Terrain) == 0x000C38, "Member 'ATODM_A_PARENT_C::Storm_Foot_Particle_While_on_Terrain' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Storm_Foot_Particle_Indoor) == 0x000C40, "Member 'ATODM_A_PARENT_C::Storm_Foot_Particle_Indoor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Storm_Foot_Particle_While_NOT_on_Terrain) == 0x000C48, "Member 'ATODM_A_PARENT_C::Storm_Foot_Particle_While_NOT_on_Terrain' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Storm_Wind_Strength) == 0x000C50, "Member 'ATODM_A_PARENT_C::Storm_Wind_Strength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Generate_Foliage_Wind_Gusts) == 0x000C54, "Member 'ATODM_A_PARENT_C::Generate_Foliage_Wind_Gusts' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, LightningStrikeTimerHandle) == 0x000C58, "Member 'ATODM_A_PARENT_C::LightningStrikeTimerHandle' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, PreviousDirectionalLightColor) == 0x000C60, "Member 'ATODM_A_PARENT_C::PreviousDirectionalLightColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Lightning_Flash_Color) == 0x000C70, "Member 'ATODM_A_PARENT_C::Lightning_Flash_Color' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Lightning_Flash_Timeline_Min) == 0x000C80, "Member 'ATODM_A_PARENT_C::Lightning_Flash_Timeline_Min' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, Lightning_Flash_Timeline_Max) == 0x000C84, "Member 'ATODM_A_PARENT_C::Lightning_Flash_Timeline_Max' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningColor) == 0x000C88, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningLitColor) == 0x000C98, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningLitColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningDistance) == 0x000CA8, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningDistance' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningDiffuseAmount) == 0x000CAC, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningEmissiveAmount) == 0x000CB0, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningLitLength) == 0x000CB4, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningLitLength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningLitRotation) == 0x000CB8, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningLitRotation' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogMorningLitOffset) == 0x000CBC, "Member 'ATODM_A_PARENT_C::SkyboxFogMorningLitOffset' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayColor) == 0x000CC0, "Member 'ATODM_A_PARENT_C::SkyboxFogDayColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayLitColor) == 0x000CD0, "Member 'ATODM_A_PARENT_C::SkyboxFogDayLitColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayDistance) == 0x000CE0, "Member 'ATODM_A_PARENT_C::SkyboxFogDayDistance' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayDiffuseAmount) == 0x000CE4, "Member 'ATODM_A_PARENT_C::SkyboxFogDayDiffuseAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayEmissiveAmount) == 0x000CE8, "Member 'ATODM_A_PARENT_C::SkyboxFogDayEmissiveAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayLitLength) == 0x000CEC, "Member 'ATODM_A_PARENT_C::SkyboxFogDayLitLength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayLitRotation) == 0x000CF0, "Member 'ATODM_A_PARENT_C::SkyboxFogDayLitRotation' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogDayLitOffset) == 0x000CF4, "Member 'ATODM_A_PARENT_C::SkyboxFogDayLitOffset' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningColor) == 0x000CF8, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningLitColor) == 0x000D08, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningLitColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningDistance) == 0x000D18, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningDistance' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningDiffuseAmount) == 0x000D1C, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningDiffuseAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningEmissiveAmount) == 0x000D20, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningEmissiveAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningLitLength) == 0x000D24, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningLitLength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningLitRotation) == 0x000D28, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningLitRotation' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogEveningLitOffset) == 0x000D2C, "Member 'ATODM_A_PARENT_C::SkyboxFogEveningLitOffset' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightColor) == 0x000D30, "Member 'ATODM_A_PARENT_C::SkyboxFogNightColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightLitColor) == 0x000D40, "Member 'ATODM_A_PARENT_C::SkyboxFogNightLitColor' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightDistance) == 0x000D50, "Member 'ATODM_A_PARENT_C::SkyboxFogNightDistance' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightDiffuseAmount) == 0x000D54, "Member 'ATODM_A_PARENT_C::SkyboxFogNightDiffuseAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightEmissiveAmount) == 0x000D58, "Member 'ATODM_A_PARENT_C::SkyboxFogNightEmissiveAmount' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightLitLength) == 0x000D5C, "Member 'ATODM_A_PARENT_C::SkyboxFogNightLitLength' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightLitRotation) == 0x000D60, "Member 'ATODM_A_PARENT_C::SkyboxFogNightLitRotation' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, SkyboxFogNightLitOffset) == 0x000D64, "Member 'ATODM_A_PARENT_C::SkyboxFogNightLitOffset' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, World_Border_Cloud_Base_Color_Brightness) == 0x000D68, "Member 'ATODM_A_PARENT_C::World_Border_Cloud_Base_Color_Brightness' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, World_Border_Cloud_Sub_Surface_Color_and_Opacity) == 0x000D6C, "Member 'ATODM_A_PARENT_C::World_Border_Cloud_Sub_Surface_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(ATODM_A_PARENT_C, EnableCometDynamicPlacement) == 0x000D7C, "Member 'ATODM_A_PARENT_C::EnableCometDynamicPlacement' has a wrong offset!");

}

