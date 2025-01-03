#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Athena_Generic_Parent

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00C0 (0x20F0 - 0x2030)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	uint8                                         Pad_2028[0x8];                                     // 0x2028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2030(0x0008)(Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x2038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x2048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x2058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x2068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x2078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x2088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x2098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x20A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x20B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x20C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x20D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x20E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_Parent_C">();
	}
	static class APlayerPawn_Athena_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Athena_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Athena_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Athena_Generic_Parent_C) == 0x0020F0, "Wrong size on APlayerPawn_Athena_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, UberGraphFrame) == 0x002030, "Member 'APlayerPawn_Athena_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, Default_Weapon_Materials) == 0x002038, "Member 'APlayerPawn_Athena_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBackpackMaterials) == 0x002048, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHatMaterials) == 0x002058, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHeadMaterials) == 0x002068, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBodyMaterials) == 0x002078, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnCharmMaterials) == 0x002088, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnFaceMaterials) == 0x002098, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnLegsMaterials) == 0x0020A8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnLegsMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnTorsoMaterials) == 0x0020B8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnTorsoMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PlayerPostProcessFX) == 0x0020C8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, SkeletalMeshes) == 0x0020D0, "Member 'APlayerPawn_Athena_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnMaterials_ALL) == 0x0020E0, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");

}

