#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Zapper2

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Zapper2.B_Prj_Zapper2_C
// 0x0098 (0x08B0 - 0x0818)
class AB_Prj_Zapper2_C final : public AFortProjectileBase
{
public:
	uint8                                         Pad_818[0x8];                                      // 0x0818(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_ZapZap_Trail_02;                                 // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SelectionMesh1;                                    // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_Trail;                                          // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SelectionMesh;                                     // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaced;                                          // 0x0850(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x0851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_852[0x6];                                      // 0x0852(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mine_Material;                                     // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    Projectile;                                        // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Projectile_Cluster;                                // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Rotation_Direction;                                // 0x0870(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateTime;                                        // 0x087C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Target_Lock_FX;                                    // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Projectile_Max_Lifetime;                           // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Explosion_Impact_Offset;                           // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Impact_Location;                                   // 0x0890(0x000C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89C[0x4];                                      // 0x089C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               NewVar_0;                                          // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasExploded_;                                     // 0x08A8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Prj_Zapper2(int32 EntryPoint);
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnRep_Impact_Location();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Zapper2_C">();
	}
	static class AB_Prj_Zapper2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Zapper2_C>();
	}
};
static_assert(alignof(AB_Prj_Zapper2_C) == 0x000008, "Wrong alignment on AB_Prj_Zapper2_C");
static_assert(sizeof(AB_Prj_Zapper2_C) == 0x0008B0, "Wrong size on AB_Prj_Zapper2_C");
static_assert(offsetof(AB_Prj_Zapper2_C, UberGraphFrame) == 0x000820, "Member 'AB_Prj_Zapper2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, P_ZapZap_Trail_02) == 0x000828, "Member 'AB_Prj_Zapper2_C::P_ZapZap_Trail_02' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, SelectionMesh1) == 0x000830, "Member 'AB_Prj_Zapper2_C::SelectionMesh1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Mesh) == 0x000838, "Member 'AB_Prj_Zapper2_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, PS_Trail) == 0x000840, "Member 'AB_Prj_Zapper2_C::PS_Trail' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, SelectionMesh) == 0x000848, "Member 'AB_Prj_Zapper2_C::SelectionMesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, IsPlaced) == 0x000850, "Member 'AB_Prj_Zapper2_C::IsPlaced' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Active) == 0x000851, "Member 'AB_Prj_Zapper2_C::Active' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Mine_Material) == 0x000858, "Member 'AB_Prj_Zapper2_C::Mine_Material' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Projectile) == 0x000860, "Member 'AB_Prj_Zapper2_C::Projectile' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Projectile_Cluster) == 0x000868, "Member 'AB_Prj_Zapper2_C::Projectile_Cluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Rotation_Direction) == 0x000870, "Member 'AB_Prj_Zapper2_C::Rotation_Direction' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, UpdateTime) == 0x00087C, "Member 'AB_Prj_Zapper2_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Target_Lock_FX) == 0x000880, "Member 'AB_Prj_Zapper2_C::Target_Lock_FX' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Projectile_Max_Lifetime) == 0x000888, "Member 'AB_Prj_Zapper2_C::Projectile_Max_Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Explosion_Impact_Offset) == 0x00088C, "Member 'AB_Prj_Zapper2_C::Explosion_Impact_Offset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, Impact_Location) == 0x000890, "Member 'AB_Prj_Zapper2_C::Impact_Location' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, NewVar_0) == 0x0008A0, "Member 'AB_Prj_Zapper2_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AB_Prj_Zapper2_C, bHasExploded_) == 0x0008A8, "Member 'AB_Prj_Zapper2_C::bHasExploded_' has a wrong offset!");

}
