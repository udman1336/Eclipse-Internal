#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_Event_Components

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_Event_Components.BP_Athena_Event_Components_C
// 0x0148 (0x0460 - 0x0318)
class ABP_Athena_Event_Components_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        Ambient_SkyboxLoop_Cue;                            // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rainbow;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Event_Comet;                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CometMovementTest_NewTrack_0_7D4A6AB748589EBEEA4C0FA6F3912457; // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CometMovementTest__Direction_7D4A6AB748589EBEEA4C0FA6F3912457; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345[0x3];                                      // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CometMovementTest;                                 // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CometStartTransform;                               // 0x0350(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             CometMidTransform;                                 // 0x0380(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             CometEndTransform;                                 // 0x03B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         CometPosition;                                     // 0x03E0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRainbow;                                       // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5[0xB];                                      // 0x03E5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RainbowWorldTransform;                             // 0x03F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          EnableRiverTint;                                   // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421[0x3];                                      // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           RiverTintStPatrick_s;                              // 0x0424(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CometScaleCurve;                                   // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        ShootingStarSpawns;                                // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          PreviewShootingStars;                              // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpawnLocation;                                     // 0x0454(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Athena_Event_Components(int32 EntryPoint);
	void SpawnMeteor();
	void SpawnShootingStars();
	void UpdateComet();
	void ReceiveBeginPlay();
	void CometMovementTest__UpdateFunc();
	void CometMovementTest__FinishedFunc();
	void UserConstructionScript();
	void SetupComet();
	void SetupRiverTint(bool EnableTint, const struct FLinearColor& TintColor);
	void OnRep_CometPosition();
	void RandomizeSpawnLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_Event_Components_C">();
	}
	static class ABP_Athena_Event_Components_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_Event_Components_C>();
	}
};
static_assert(alignof(ABP_Athena_Event_Components_C) == 0x000010, "Wrong alignment on ABP_Athena_Event_Components_C");
static_assert(sizeof(ABP_Athena_Event_Components_C) == 0x000460, "Wrong size on ABP_Athena_Event_Components_C");
static_assert(offsetof(ABP_Athena_Event_Components_C, UberGraphFrame) == 0x000318, "Member 'ABP_Athena_Event_Components_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, Ambient_SkyboxLoop_Cue) == 0x000320, "Member 'ABP_Athena_Event_Components_C::Ambient_SkyboxLoop_Cue' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, Rainbow) == 0x000328, "Member 'ABP_Athena_Event_Components_C::Rainbow' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, P_Athena_Event_Comet) == 0x000330, "Member 'ABP_Athena_Event_Components_C::P_Athena_Event_Comet' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, DefaultSceneRoot) == 0x000338, "Member 'ABP_Athena_Event_Components_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometMovementTest_NewTrack_0_7D4A6AB748589EBEEA4C0FA6F3912457) == 0x000340, "Member 'ABP_Athena_Event_Components_C::CometMovementTest_NewTrack_0_7D4A6AB748589EBEEA4C0FA6F3912457' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometMovementTest__Direction_7D4A6AB748589EBEEA4C0FA6F3912457) == 0x000344, "Member 'ABP_Athena_Event_Components_C::CometMovementTest__Direction_7D4A6AB748589EBEEA4C0FA6F3912457' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometMovementTest) == 0x000348, "Member 'ABP_Athena_Event_Components_C::CometMovementTest' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometStartTransform) == 0x000350, "Member 'ABP_Athena_Event_Components_C::CometStartTransform' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometMidTransform) == 0x000380, "Member 'ABP_Athena_Event_Components_C::CometMidTransform' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometEndTransform) == 0x0003B0, "Member 'ABP_Athena_Event_Components_C::CometEndTransform' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometPosition) == 0x0003E0, "Member 'ABP_Athena_Event_Components_C::CometPosition' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, ShowRainbow) == 0x0003E4, "Member 'ABP_Athena_Event_Components_C::ShowRainbow' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, RainbowWorldTransform) == 0x0003F0, "Member 'ABP_Athena_Event_Components_C::RainbowWorldTransform' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, EnableRiverTint) == 0x000420, "Member 'ABP_Athena_Event_Components_C::EnableRiverTint' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, RiverTintStPatrick_s) == 0x000424, "Member 'ABP_Athena_Event_Components_C::RiverTintStPatrick_s' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, CometScaleCurve) == 0x000438, "Member 'ABP_Athena_Event_Components_C::CometScaleCurve' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, ShootingStarSpawns) == 0x000440, "Member 'ABP_Athena_Event_Components_C::ShootingStarSpawns' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, PreviewShootingStars) == 0x000450, "Member 'ABP_Athena_Event_Components_C::PreviewShootingStars' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Event_Components_C, SpawnLocation) == 0x000454, "Member 'ABP_Athena_Event_Components_C::SpawnLocation' has a wrong offset!");

}

