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
	int GetPlayerViewpointVFT = 0x6B0 / 0x8;
	int GetViewpointVFT = 0x240 / 0x8;
}
namespace VFTHooks {
	Hook::NewHook ViewportHook;
	Hook::NewHook LocalPlayerHook;
	Hook::NewHook PlayerControllerHook;
}

namespace SilentVariables {
	FRotator TargetRotationWithSmooth;
	FRotator CameraRotation;
	FVector CameraLocation;
}

AFortPlayerPawn* ClosestPlayer = 0;

namespace Hooks {
	namespace Data {
		APlayerController* PlayerController;
		ULocalPlayer* LocalPlayer;
	}
	namespace GetViewpoint {
		void GetViewpointCallback( SDK::FMinimalViewInfo* OutViewInfo ) {
			if ( !ue->PlayerController ) return;
			if ( Settings::Exploits::FovChanger ) {
				OutViewInfo->FOV = Settings::Exploits::FovChangerSize;
			}
			if ( !Settings::Combat::SilentAim::SilentEnable ) return;
			if ( !ue->PlayerController->IsInputKeyDown( ue->LeftMouseButton ) ) return;

			if ( ClosestPlayer ) {
				OutViewInfo->Rotation = SilentVariables::CameraRotation;
				OutViewInfo->Location = SilentVariables::CameraLocation;
			}
		}

		void( *GetViewPointOriginal )( ULocalPlayer*, FMinimalViewInfo*, BYTE ) = nullptr;
		void GetViewPointHook( ULocalPlayer* this_LocalPlayer, FMinimalViewInfo* OutViewInfo, BYTE StereoPass )
		{
			GetViewPointOriginal( this_LocalPlayer, OutViewInfo, StereoPass );

			GetViewpointCallback( OutViewInfo );
		}

		bool Hooked = false;
	}

	namespace GetPlayerViewpoint {
		void GetPlayerViewpointCallback( FVector* Location, FRotator* Rotation ) {
			if ( !ue->PlayerController ) return;
			if ( !Settings::Combat::SilentAim::SilentEnable ) return;
			if ( !ue->PlayerController->IsInputKeyDown( ue->LeftMouseButton ) ) return;

			if ( ClosestPlayer ) {
				*Rotation = SilentVariables::TargetRotationWithSmooth;
			}
		}

		void( *GetPlayerViewPointOriginal )( APlayerController*, FVector*, FRotator* ) = nullptr;
		void GetPlayerViewPointHook( APlayerController* this_PlayerController, FVector* Location, FRotator* Rotation )
		{
			GetPlayerViewPointOriginal( this_PlayerController, Location, Rotation );

			GetPlayerViewpointCallback( Location, Rotation );
		}

		bool Hooked = false;
	}


	void Tick( ) {
		if ( (Settings::Combat::SilentAim::SilentEnable || Settings::Exploits::FovChanger ) && GetViewpoint::Hooked == false ) {
			if ( IsValidPointer( Data::LocalPlayer ) && ue->KismetSystemLibrary->IsValid( Data::LocalPlayer ) ) {
				if ( VFTHooks::LocalPlayerHook.Initialize( Data::LocalPlayer ) ) {
					VFTHooks::LocalPlayerHook.Insert( &GetViewpoint::GetViewPointHook, VFTIndexs::GetViewpointVFT, &GetViewpoint::GetViewPointOriginal );
					VFTHooks::LocalPlayerHook.SwapContext( );
					GetViewpoint::Hooked = true;
				}
			}
		}
		else if ( ( !Settings::Combat::SilentAim::SilentEnable && !Settings::Exploits::FovChanger ) && GetViewpoint::Hooked == true ) {
			if ( VFTIndexs::GetViewpointVFT && IsValidPointer( Hooks::Data::LocalPlayer ) && ue->KismetSystemLibrary->IsValid( Hooks::Data::LocalPlayer ) ) {
				VFTHooks::LocalPlayerHook.RevertHook( );
				GetViewpoint::Hooked = false;
			}
		}

		if ( Settings::Combat::SilentAim::SilentEnable && GetPlayerViewpoint::Hooked == false ) {
			if ( IsValidPointer( Data::PlayerController ) && ue->KismetSystemLibrary->IsValid( Data::PlayerController ) ) {
				if ( VFTHooks::PlayerControllerHook.Initialize( Data::PlayerController ) ) {
					VFTHooks::PlayerControllerHook.Insert( &GetPlayerViewpoint::GetPlayerViewPointHook, VFTIndexs::GetPlayerViewpointVFT, &GetPlayerViewpoint::GetPlayerViewPointOriginal );
					VFTHooks::PlayerControllerHook.SwapContext( );
					GetPlayerViewpoint::Hooked = true;
				}
			}
		}
		else if ( ( !Settings::Combat::SilentAim::SilentEnable ) && GetPlayerViewpoint::Hooked == true ) {
			if ( VFTIndexs::GetPlayerViewpointVFT && IsValidPointer( Hooks::Data::PlayerController ) && ue->KismetSystemLibrary->IsValid( Hooks::Data::PlayerController ) ) {
				VFTHooks::PlayerControllerHook.RevertHook( );
				GetPlayerViewpoint::Hooked = false;
			}
		}
	}
}

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

	SilentVariables::CameraLocation = MyCameraLocation;
	SilentVariables::CameraRotation = MyCameraRotation;

	static float ClosestDistanceToCenter = FLT_MAX;

	SDK::TArray<SDK::AActor*> Players;
	SDK::TArray<SDK::AActor*> Pickups;
	SDK::TArray<SDK::AActor*> Containers;
	SDK::TArray<SDK::AActor*> Projectiles;
	ue->GameplayStatics->STATIC_GetAllActorsOfClass( ue->World, ( SDK::AActor* )SDK::AFortPlayerPawn::StaticClass( ), &Players );


	static int ActorCount = -1;

	if ( ActorCount != Players.Num( ) )
	{
		printf( "Players.Num() -> %i\n", Players.Num( ) );
		ActorCount = Players.Num( );
	}

	ClosestPlayer = nullptr;
	ClosestDistanceToCenter = FLT_MAX;

	//if ( ue->DrawingFont->LegacyFontSize != Settings::Misc::FontSize ) {
	//	ue->DrawingFont->LegacyFontSize = Settings::Misc::FontSize;
	//}

	int DynamicFOVVal = ( Settings::Combat::FovSize * 100 / PlayerCameraManager->GetFOVAngle( ) ) / 2.0;

	if ( Settings::Combat::DrawFOV ) {
		Wrapper::Circle( CORE( )->GetCenterScreen( ), FLinearColorPalette::SoftPink, DynamicFOVVal, 64 );
	}

	Hooks::Data::LocalPlayer = ue->LocalPlayer;
	Hooks::Data::PlayerController = ue->PlayerController;
	Hooks::Tick( );

	int AimbotBone = BoneIDS::HEAD;

	if ( Settings::Environment::Chests || Settings::Environment::Ammobox ) {
		ue->GameplayStatics->STATIC_GetAllActorsOfClass( ue->World, ( SDK::AActor* )SDK::ABuildingContainer::StaticClass( ), &Containers );
		for ( int i = 0; i < Containers.Num( ); i++ ) {
			if ( !Containers.IsValidIndex( i ) ) continue;
			auto Container = ( SDK::ABuildingContainer* )Containers[ i ];
			if ( !Container ) continue;

			auto ObjectName = ue->KismetSystemLibrary->GetObjectName( Container );
			bool IsAmmoBox = ue->KismetStringLibrary->Contains( ObjectName, FString( L"Ammo" ), false, false );
			bool IsChest = ue->KismetStringLibrary->Contains( ObjectName, FString( L"Chest" ), false, false );

			if ( !( ( Settings::Environment::Ammobox && IsAmmoBox ) || ( Settings::Environment::Chests && IsChest ) ) ) continue;

			FString DisplayName = IsChest ? FString( L"Chest" ) : FString( L"Ammo Box" );
			FLinearColor RenderColor = IsChest ? FLinearColorPalette::Gold : FLinearColorPalette::Green;

			if ( Container->bAlreadySearched ) continue;

			auto ContainerLocation = Container->K2_GetActorLocation( );
			auto ScreenLocation = CORE( )->Project( ContainerLocation );
			if ( CORE( )->Vector_Distance( MyCameraLocation, ContainerLocation ) / 100 > 250 ) continue;
			if ( !CORE( )->IsOnScreen( ScreenLocation ) ) continue;

			Wrapper::Text( DisplayName, ScreenLocation, RenderColor, true, false, true );
		}
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
		if ( Player->IsDead( ) ) continue;

		static bool bInitBones = false;
		if (!bInitBones )
		{
			std::string LastBoneName;

			std::stringstream EnumStream;

			EnumStream << "enum BoneIDS : uint8_t {\n";

			for ( int bone = 0; bone < Mesh->GetNumBones( ); bone++ ) {
				auto BoneIndex = bone;
				auto BoneName = Mesh->GetBoneName( BoneIndex ).ToString( );

				if ( bone == 0 ) BoneName = "Root";

				if ( bone > 0 && BoneName.find( LastBoneName ) != std::string::npos ) {
					BoneName = BoneName.substr( LastBoneName.length( ) );
				}


				EnumStream << "\t" << BoneName << " = " << bone << ",\t// \"" << BoneName << "\"\n";

				LastBoneName = Mesh->GetBoneName( BoneIndex ).ToString( );
			}

			EnumStream << "\n\tNone = 0,\n";
			EnumStream << "\tBONEID_MAX = " << Mesh->GetNumBones( ) << "\t// Max Value For Looping\n";

			EnumStream << "};\n";

			printf( "enum -> \n%s", EnumStream.str( ).c_str( ) );

			bInitBones = true;
		}

		auto RootBone = Mesh->GetSocketLocation( Mesh->GetBoneName( BoneIDS::Root ) );
		auto HeadBone = Mesh->GetSocketLocation( Mesh->GetBoneName( BoneIDS::HEAD ) );

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
				{neck_01, HEAD},
				{Spine_03, neck_01},
				{spine_01, Spine_02},
				{Spine_03, spine_01}, // stomach to chest
				{pelvis, Spine_03},
				{clavicle_r, Spine_02},
				{upperarm_r, clavicle_r},
				{lowerarm_r, upperarm_r}, // right elbow
				{hand_r, lowerarm_r},
				{clavicle_l, Spine_02},
				{upperarm_l, clavicle_l},
				{lowerarm_l, upperarm_l}, // left elbow
				{hand_l, lowerarm_l},
				{thigh_r, pelvis},
				{calf_r, thigh_r},
				{Foot_R, calf_r},
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

		if ( Settings::Misc::IgnoreDowned && Player->IsDBNO( ) ) continue;

		auto AimbotBoneScreen = CORE( )->Project( Mesh->GetSocketLocation( Mesh->GetBoneName( AimbotBone ) ) );
	   
		if ( CORE( )->InCircle( ue->ScreenCenter, DynamicFOVVal, AimbotBoneScreen ) ) {
			float DistanceToCenter = CORE( )->Vector_Distance2D( ue->ScreenCenter, AimbotBoneScreen );

			if ( DistanceToCenter < ClosestDistanceToCenter ) {
				ClosestDistanceToCenter = DistanceToCenter;
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
				auto ChestBone = ClosestMesh->GetSocketLocation( ClosestMesh->GetBoneName( AimbotBone ) );
				auto ChestScreen = CORE( )->Project( ChestBone );

				auto MuzzleLocation = CurrentWeapon->GetMuzzleLocation( );
				auto MuzzleScreen = CORE( )->Project( MuzzleLocation );
				if ( CORE( )->IsOnScreen( ChestScreen ) ) {
					Wrapper::Line( MuzzleScreen, ChestScreen, FLinearColorPalette::Red, 1.f );
				}
			}
		}
	}

	if ( (Settings::Combat::Aimbot || Settings::Combat::SilentAim::SilentEnable) && ClosestPlayer) {
		if ( auto CurrentWeapon = AcknowledgedPawn->CurrentWeapon ) {
			auto ClosestMesh = ClosestPlayer->Mesh;
			auto ChestBone = ClosestMesh->GetSocketLocation( ClosestMesh->GetBoneName( AimbotBone ) );

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

			SilentVariables::TargetRotationWithSmooth = ChestRotation;

			//ChestRotation = ue->KismetMathLibrary->RInterpTo_Constant( MyCameraRotation, ChestRotation, WorldSecondsDelta, CORE( )->ConvertSmoothnessToSpeed( Settings::Combat::Smoothing ) );
			ChestRotation = CORE( )->SmoothMe( MyCameraRotation, ChestRotation, Settings::Combat::Smoothing );

			if ( !Settings::Combat::SilentAim::SilentEnable && ue->PlayerController->IsInputKeyDown( Framework::GetAimKey( ) ) ) {
				ue->PlayerController->SetControlRotation( ChestRotation );
			}
		}
		else {
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
	ue->LeftControl = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"Left Control" ) } };
	ue->SpaceBar = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"SpaceBar" ) } };
	ue->W = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"W" ) } };
	ue->A = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"A" ) } };
	ue->S = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"S" ) } };
	ue->D = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"D" ) } };
	ue->LeftShift = SDK::FKey { SDK::FName{ue->KismetStringLibrary->Conv_StringToName( L"Left Shift" ) } };
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