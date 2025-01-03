#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlingerInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
// 0x0000 (0x0028 - 0x0028)
class IFlingerInterface_C final : public IInterface
{
public:
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCan_tSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlingerInterface_C">();
	}
	static class IFlingerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFlingerInterface_C>();
	}
};
static_assert(alignof(IFlingerInterface_C) == 0x000008, "Wrong alignment on IFlingerInterface_C");
static_assert(sizeof(IFlingerInterface_C) == 0x000028, "Wrong size on IFlingerInterface_C");

}

