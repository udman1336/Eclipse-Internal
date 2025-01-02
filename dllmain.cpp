#include "framework.h"
#include <vector>
#include <sstream>
#include <fstream>
#include <algorithm>

struct PlayerInfo_C {
	SDK::AFortPlayerPawnAthena* Entity;
	SDK::AFortPlayerStateAthena* PlayerState;
	SDK::USkeletalMeshComponent* Mesh;
	SDK::USceneComponent* RootComponent;
	int TeamIndex;
};

bool IsValidPointer( void* Address ) {
	if ( !Address ) {
		return false;
	}
	// IMPROVVE THIS!!! IsBadWritePtr is a very bad and obsolete win api func
	if ( IsBadReadPtr( Address, 8 ) ) {
		return false;
	}

	return true;
}

namespace VFTIndexs {
	int DrawTransitionVFT = 0x2E0 / 0x8;
}
namespace VFTHooks {
	Hook::NewHook ViewportHook;
}

bool ShouldRetreieveClosestPawn = true;
void PostRender( SDK::UGameViewportClient* Viewport, SDK::UCanvas* Canvas ) {
	if ( !Viewport || !Canvas ) return;
	ue->CachedCanvas = Canvas;
	static bool bHasSetupShit = false;
	if ( !bHasSetupShit ) { Settings::Misc::FontSize = ue->DrawingFont->LegacyFontSize; bHasSetupShit = true; }

	ue->ScreenSize = FVector2D( Canvas->SizeX, Canvas->SizeY );
	ue->ScreenCenter = FVector2D( Canvas->SizeX / 2, Canvas->SizeY / 2 );

	UWorld* GWorld = Viewport->World;
	if ( !GWorld ) return;

	ue->World = GWorld;

	ue->OwningGameInstance = GWorld->OwningGameInstance;
	if ( !ue->OwningGameInstance ) return;

	ue->LocalPlayer = ue->World->OwningGameInstance->LocalPlayers[ 0 ];
	if ( !ue->LocalPlayer ) return;

	auto NewPlayerController = ue->LocalPlayer->PlayerController;
	if ( !NewPlayerController ) return;
	ue->PlayerController = NewPlayerController;

	auto PlayerCameraManager = NewPlayerController->PlayerCameraManager;
	if ( !PlayerCameraManager ) return;

	//if ( !ue->FortKismetLibrary->GetLootLevel( GWorld ) == 0 ) return;
	
	

	auto AcknowledgedPawn = reinterpret_cast< AFortPlayerPawnAthena* >( ue->World->OwningGameInstance->LocalPlayers[ 0 ]->PlayerController->AcknowledgedPawn );
	auto MyCameraLocation = PlayerCameraManager->GetCameraLocation( );
	auto MyCameraRotation = PlayerCameraManager->GetCameraRotation( );

	static AFortPlayerPawn* ClosestPlayer = 0;
	static float ClosestDistance = FLT_MAX;

	SDK::TArray<SDK::AActor*> Players;
	SDK::TArray<SDK::AActor*> Pickups;
	SDK::TArray<SDK::AActor*> Projectiles;
	ue->GameplayStatics->STATIC_GetAllActorsOfClass( ue->World, ( SDK::AActor* )SDK::AFortPlayerPawn::StaticClass( ), &Players );


	static int ActorCount = -1;

	if ( ActorCount != Players.Num( ) )
	{
		printf( "Players.Num() -> %i\n", Players.Num( ) );
		ActorCount = Players.Num( );
	}

	if ( ShouldRetreieveClosestPawn )
	{
		ClosestPlayer = nullptr;
		ClosestDistance = FLT_MAX;
	}

	//if ( ue->DrawingFont->LegacyFontSize != Settings::Misc::FontSize ) {
	//	ue->DrawingFont->LegacyFontSize = Settings::Misc::FontSize;
	//}

	int DynamicFOVVal = ( Settings::Combat::FovSize * 100 / PlayerCameraManager->GetFOVAngle( ) ) / 2.0;

	if ( Settings::Combat::DrawFOV ) {
		Wrapper::Circle( CORE( )->GetCenterScreen( ), FLinearColorPalette::SoftPink, DynamicFOVVal, 64 );
	}

	

	if (Settings::Environment::Loot || Settings::Exploits::StreamerLoot ) {
		ue->GameplayStatics->STATIC_GetAllActorsOfClass( ue->World, ( SDK::AActor* )SDK::AFortPickup::StaticClass( ), &Pickups );
		for ( int i = 0; i < Pickups.Num( ); i++ ) {
			if ( !Pickups.IsValidIndex( i ) ) continue;
			auto Pickup = ( SDK::AFortPickup* )Pickups[ i ];
			if ( !Pickup ) continue;

			if ( Settings::Environment::Loot ) {
				auto PickupLocation = Pickup->K2_GetActorLocation( );
				auto ScreenLocation = CORE( )->Project( PickupLocation );
				if ( CORE()->Vector_Distance( MyCameraLocation, PickupLocation ) / 100 > 250 ) continue;
				if ( !CORE( )->IsOnScreen( ScreenLocation ) ) continue;

				auto ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;
				auto DisplayName = ItemDefinition->DisplayName;

				Wrapper::Text( DisplayName.TextData->TextSource, ScreenLocation, CORE( )->GetColorByTier( ItemDefinition->Tier ), true, false, true );
			}

			if ( Settings::Exploits::StreamerLoot ) {
				auto Tier = Pickup->PrimaryPickupItemEntry.ItemDefinition->Tier;
				if ( Tier == SDK::EFortItemTier::IV || Tier == SDK::EFortItemTier::V || Tier == SDK::EFortItemTier::VI ) {
					AcknowledgedPawn->ServerHandlePickup( Pickup, 0.1f, FVector( ), true );
				}
			}
		}
	}

	
	for ( int i = 0; i < Players.Num(); i++ ) {
		if ( !Players.IsValidIndex( i ) ) continue;
		auto Player = ( SDK::AFortPlayerPawnAthena* )Players[ i ];
		if ( !Player ) continue;
		auto Mesh = Player->Mesh; if ( !Mesh ) continue;
		auto PlayerState = reinterpret_cast< SDK::AFortPlayerStateAthena* >( Player->PlayerState ); if ( !PlayerState ) continue;
		auto RootComponent = Player->RootComponent; if ( !RootComponent ) continue;

		if ( ue->FortKismetLibrary->OnSameTeam( Player, AcknowledgedPawn ) ) continue;

		auto RootBone = Mesh->GetSocketLocation( Mesh->GetBoneName( BoneIDS::Root ) );
		auto HeadBone = Mesh->GetSocketLocation( Mesh->GetBoneName( BoneIDS::head ) );

		auto RootScreen = CORE( )->Project( RootBone );
		auto HeadScreen = CORE( )->Project( HeadBone );

		if ( Settings::Visuals::Snaplines ) {
			if (CORE()->IsOnScreen(HeadScreen ) ) {
				Wrapper::Line( CORE( )->GetCenterScreen( ), HeadScreen, FLinearColorPalette::Blue, 1.f );
			}
		}

		if ( Settings::Visuals::PlayerName ) {
			if ( CORE( )->IsOnScreen( RootScreen ) ) {
				Wrapper::Text( ue->FortKismetLibrary->GetHumanReadableName( Player ), RootScreen, FLinearColorPalette::Yellow, true );
			}
		}

		if ( Settings::Visuals::Skeleton ) {
			std::vector<std::pair<int, int>> SkeletonConnections = {
				{neck_01, head},
				{spine_02, neck_01},
				{spine_01, spine_02},
				{spine_03, spine_01}, // stomach to chest
				{pelvis, spine_03},
				{clavicle_r, spine_02},
				{upperarm_r, clavicle_r},
				{lowerarm_r, upperarm_r}, // right elbow
				{hand_r, lowerarm_r},
				{clavicle_l, spine_02},
				{upperarm_l, clavicle_l},
				{lowerarm_l, upperarm_l}, // left elbow
				{hand_l, lowerarm_l},
				{thigh_r, pelvis},
				{calf_r, thigh_r},
				{foot_r, calf_r},
				{thigh_l, pelvis},
				{calf_l, thigh_l},
				{foot_l, calf_l},
			};

			SDK::FVector2D BoneScreen, PrevBoneScreen;
			for ( std::pair<int, int>& Connection : SkeletonConnections )
			{
				auto Bone1 = Connection.first;
				auto Bone2 = Connection.second;

				auto BoneLoc1 = Mesh->GetSocketLocation( Mesh->GetBoneName( Bone1 ) );
				auto BoneLoc2 = Mesh->GetSocketLocation( Mesh->GetBoneName( Bone2 ) );

				BoneScreen = CORE( )->Project( BoneLoc1 );
				PrevBoneScreen = CORE( )->Project( BoneLoc2 );

				if ( CORE( )->IsOnScreen( BoneScreen ) && CORE( )->IsOnScreen( PrevBoneScreen ) ) {
					Wrapper::Line( BoneScreen, PrevBoneScreen, FLinearColorPalette::White, 1.f );
				}
				
			}
		}

		if ( ShouldRetreieveClosestPawn )
		{
			FVector2D CalculatedDistance = HeadScreen - ue->ScreenCenter;
			auto dist = CalculatedDistance.Length( );

			if ( dist < DynamicFOVVal && dist < ClosestDistance ) {
				ClosestDistance = dist;
				ClosestPlayer = Player;
			}
		}
	}
	

	static bool bResetFirstPerson = false;
	if (Settings::Exploits::FirstPerson )
	{
		ue->PlayerController->ClientSetCameraMode( ue->KismetStringLibrary->Conv_StringToName( L"FirstPerson" ) );
		AcknowledgedPawn->SetPawnVisibility( true, false );
		bResetFirstPerson = true;
	}
	else {
		if ( bResetFirstPerson ) {
			ue->PlayerController->ClientSetCameraMode( ue->KismetStringLibrary->Conv_StringToName( L"Default" ) );
			AcknowledgedPawn->SetPawnVisibility( false, false );
			bResetFirstPerson = false;
		}
	}

	if ( ClosestPlayer && Settings::Exploits::ProjectileTP ) {
		ue->GameplayStatics->STATIC_GetAllActorsOfClass( ue->World, ( SDK::AActor* )SDK::AFortProjectileBase::StaticClass( ), &Projectiles );
		for ( int i = 0; i < Projectiles.Num( ); i++ ) {
			if ( !Projectiles.IsValidIndex( i ) ) continue;
			auto Projectile = ( SDK::AFortProjectileBase* )Projectiles[ i ];
			if ( Projectile->GetGameTimeSinceCreation( ) > 7.5f ) continue;

			Projectile->K2_SetActorLocation( ClosestPlayer->K2_GetActorLocation( ), false, nullptr, true );
		}
	}

	if ( Settings::Combat::TargetLine && ClosestPlayer ) {
		if ( auto CurrentWeapon = AcknowledgedPawn->CurrentWeapon ) {
			if (auto WeaponData = CurrentWeapon->WeaponData ) {
				auto ClosestMesh = ClosestPlayer->Mesh;
				auto ChestBone = ClosestMesh->GetSocketLocation( ClosestMesh->GetBoneName( BoneIDS::spine_03 ) );
				auto ChestScreen = CORE( )->Project( ChestBone );

				auto MuzzleLocation = CurrentWeapon->GetMuzzleLocation( );
				auto MuzzleScreen = CORE( )->Project( MuzzleLocation );
				if ( CORE( )->IsOnScreen( ChestScreen ) ) {
					Wrapper::Line( MuzzleScreen, ChestScreen, FLinearColorPalette::Red, 1.f );
				}
			}
		}
	}

	if ( Settings::Combat::Aimbot && ClosestPlayer) {
		if ( ue->PlayerController->IsInputKeyDown( Framework::GetAimKey() ) ) {
			ShouldRetreieveClosestPawn = false;
			if ( auto CurrentWeapon = AcknowledgedPawn->CurrentWeapon ) {
				auto ClosestMesh = ClosestPlayer->Mesh;
				auto ChestBone = ClosestMesh->GetSocketLocation( ClosestMesh->GetBoneName( BoneIDS::spine_03 ) );

				float Distance = CORE()->Vector_Distance( MyCameraLocation, ChestBone );

				auto WorldSecondsDelta = ue->GameplayStatics->GetWorldDeltaSeconds( GWorld );

				if ( CurrentWeapon->IsProjectileWeapon( ) && Settings::Combat::Prediction ) {
					ChestBone = CORE( )->Predict( MyCameraLocation, ChestBone, ClosestPlayer->GetVelocity( ), CurrentWeapon );
				}

				auto ChestRotation = ue->KismetMathLibrary->FindLookAtRotation( MyCameraLocation, ChestBone );

				if ( Settings::Combat::AimShake > 1 ) {
					auto CurrentTime = ue->GameplayStatics->GetTimeSeconds( GWorld );

					float MaxShakeRange = 5;
					float MinShakeMultiplier = 0.1f;
					float ShakeMultiplier = std::clamp( 1.0f - ( Distance / MaxShakeRange ), MinShakeMultiplier, 1.f );

					float ShakeSpeed = 20.7f;

					float GlobalShakeScale = Settings::Combat::AimShake;

					float MaxPitchShakeBase = 0.5f;
					float MaxYawShakeBase = 0.3f;
					float MaxPitchShake = MaxPitchShakeBase * ShakeMultiplier * GlobalShakeScale;
					float MaxYawShake = MaxYawShakeBase * ShakeMultiplier * GlobalShakeScale;

					float PitchShake = MaxPitchShake * ue->KismetMathLibrary->Sin( CurrentTime * ShakeSpeed );
					float YawShake = MaxYawShake * ue->KismetMathLibrary->Sin( CurrentTime * ( ShakeSpeed + 2.0f ) );

					if ( !ue->PlayerController->IsInputKeyDown( ue->LeftMouseButton ) ) {
						ChestRotation.Pitch += PitchShake;
						ChestRotation.Yaw += YawShake;
					}
				}

				//ChestRotation = ue->KismetMathLibrary->RInterpTo_Constant( MyCameraRotation, ChestRotation, WorldSecondsDelta, CORE( )->ConvertSmoothnessToSpeed( Settings::Combat::Smoothing ) );
				ChestRotation = CORE( )->SmoothMe( MyCameraRotation, ChestRotation, Settings::Combat::Smoothing );

				ue->PlayerController->SetControlRotation( ChestRotation );
			}
		}
		else {
			ShouldRetreieveClosestPawn = true;
		}
	}

	if ( ue->PlayerController->WasInputKeyJustPressed( ue->Insert ) ) ue->DrawMenu = !ue->DrawMenu;
	if ( ue->DrawMenu ) Framework::DrawMenu( );
	Wrapper::Render( );
	Wrapper::ClearTargets( );
}

void MainRender( SDK::UGameViewportClient* Viewport, SDK::UCanvas* Canvas ) {
	PostRender( Viewport, Canvas );

	//if ( Settings::Misc::UnHook ) {
	//	VFTHooks::ViewportHook.RevertHook( );
	//	Settings::Misc::UnHook = false;
	//}

	return DrawTransitionOriginal( Viewport, Canvas );
}

void SetupClasses( ) {
	ue->Font = ue->Engine->MediumFont;
	//ue->Font = SDK::UObject::FindObject<SDK::UFont>( "Font Roboto.Roboto" );
	//ue->DrawingFont = SDK::UObject::FindObject<SDK::UFont>( "Font BurbankSmall.BurbankSmall" );
	ue->DrawingFont = ue->Engine->MediumFont;
	
	ue->DrawingFont->LegacyFontSize = 8;

	ue->KismetMathLibrary = ( SDK::UKismetMathLibrary* )SDK::UKismetMathLibrary::StaticClass( );
	ue->KismetSystemLibrary = ( SDK::UKismetSystemLibrary* )SDK::UKismetSystemLibrary::StaticClass( );
	ue->KismetStringLibrary = ( SDK::UKismetStringLibrary* )SDK::UKismetStringLibrary::StaticClass( );
	ue->FortKismetLibrary = ( SDK::UFortKismetLibrary* )SDK::UFortKismetLibrary::StaticClass( );

	ue->GameplayStatics = ( SDK::UGameplayStatics* )SDK::UGameplayStatics::StaticClass( );

	if ( ue->World->OwningGameInstance && ue->World->OwningGameInstance->LocalPlayers.IsValidIndex( 0 ) ) ue->LocalPlayer = ue->World->OwningGameInstance->LocalPlayers[ 0 ];
	ue->PlayerController = ue->LocalPlayer->PlayerController;

	ue->LeftMouseButton = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"LeftMouseButton" ) } };
	ue->RightMouseButton = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"RightMouseButton" ) } };
	ue->Insert = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"Insert" ) } };
}

void main( ) {
	std::ios::sync_with_stdio( true );
	/***************-UWORLD-**********************/
	ue->Engine = SDK::UEngine::GetEngine( );
	printf( "Got Engine -> 0x%llX\n", ( uintptr_t )ue->Engine );
	ue->World = SDK::UWorld::GetWorld( );
	printf( "Got World -> 0x%llX\n", ( uintptr_t )ue->World );

	/********************************************/

	/***************-Post render-**********************/
	auto GameInstance = ue->World->OwningGameInstance;
	auto LocalPlayers = GameInstance->LocalPlayers;
	auto ViewportClient = LocalPlayers[ 0 ]->ViewportClient;

	SetupClasses( );

	printf( "Got ViewportClient -> 0x%llX\n", ( uintptr_t )ViewportClient );

	if ( VFTHooks::ViewportHook.Initialize( ViewportClient ) ) {
		VFTHooks::ViewportHook.Insert( &MainRender, VFTIndexs::DrawTransitionVFT, &DrawTransitionOriginal );

		VFTHooks::ViewportHook.SwapContext( );
	}
	/*************************************************/
}

BOOL WINAPI DllMain( HMODULE hModule, DWORD dwReason, LPVOID lpReserved ) {
	if ( dwReason == DLL_PROCESS_ATTACH ) {
		AllocConsole( );
		FILE* fileptr;
		freopen_s( &fileptr, "CONOUT$", "w", stdout );
		freopen_s( &fileptr, "CONOUT$", "w", stderr );
		freopen_s( &fileptr, "CONIN$", "r", stdin );
		main( );
	}
	return true;
}

extern "C" __declspec( dllexport ) int NextHook( int code, WPARAM wParam, LPARAM lParam ) {
	return CallNextHookEx( NULL, code, wParam, lParam );
}