#pragma once

// FortniteGame
// 5.0.1-18675304+++Fortnite+Release-19.10

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/CoreUObject_parameters.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/Engine_parameters.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/FortniteGame_classes.hpp"
#include "SDK/FortniteGame_parameters.hpp"
#include "SDK/FortniteGame_structs.hpp"


static inline void memcpy_( void* _Dst, void const* _Src, size_t _Size )
{
	auto csrc = ( char* )_Src;
	auto cdest = ( char* )_Dst;

	for ( int i = 0; i < _Size; i++ )
	{
		cdest[ i ] = csrc[ i ];
	}
}

static inline void SwapVtable( void* obj, uint32_t index, void* hook ) {
	auto currVt = *( void** )( obj );

	auto vtable = *( void*** )( obj );
	int i = 0;

	for ( ; vtable[ i ]; i++ )
		__noop( );

	auto newVt = new uintptr_t[ i ];

	memcpy_( newVt, currVt, i * 0x8 );

	newVt[ index ] = ( uintptr_t )hook;

	*( uintptr_t** )( obj ) = newVt;
}

namespace Hook
{
	class NewHook {
		private:

		uintptr_t Address;
		uintptr_t* OriginalVTable;
		uintptr_t* AllocatedVTable;
		int Size;

		uintptr_t LastHookedFunctionAddress;
		int LastHookedFunctionIndex;

		public:

		NewHook( ) { } //It has to be static!!

		static bool ValidPointer( uintptr_t Pointer )
		{
			return Pointer && ( Pointer >= 0x10000 ) && ( Pointer < 0xF000000000000 );
		}

		bool Initialize( void* Address )
		{
			if ( !Address ) return false;

			this->Address = uintptr_t( Address );
			this->OriginalVTable = *( uintptr_t** )( Address );

			if ( this->LastHookedFunctionAddress && this->LastHookedFunctionIndex ) //Not first time hooking
			{
				if ( this->LastHookedFunctionAddress == this->OriginalVTable[ this->LastHookedFunctionIndex ] ) //Already hooked
				{
					return false;
				}
			}

			this->Size = 0;
			while ( NewHook::ValidPointer( this->OriginalVTable[ this->Size ] ) )
			{
				this->Size += 1;
			}

			// Allocate memory using standard malloc
			this->AllocatedVTable = reinterpret_cast< uintptr_t* >( malloc( this->Size * sizeof( uintptr_t ) ) );

			for ( int i = 0; i < this->Size; i++ )
			{
				this->AllocatedVTable[ i ] = this->OriginalVTable[ i ];
			}

			return true;
		}

		template <typename OriginalType>
		void Insert( void* HookFunction, int Index, OriginalType* OutOriginalFunction )
		{
			if ( Index < this->Size ) //Check if index is even inside the VTable
			{
				void* OriginalFunction = ( void* )this->OriginalVTable[ Index ];
				if ( OriginalFunction != HookFunction ) //Function isn't already contained in fake VTable
				{
					*OutOriginalFunction = OriginalType( OriginalFunction );

					this->AllocatedVTable[ Index ] = uintptr_t( HookFunction );

					this->LastHookedFunctionAddress = uintptr_t( HookFunction );
					this->LastHookedFunctionIndex = Index;
				}
			}
		}

		void SwapContext( )
		{
			*( uintptr_t** )( this->Address ) = this->AllocatedVTable;
		}

		void RevertHook( )
		{
			if ( !this->OriginalVTable ) return;
			*( uintptr_t** )( this->Address ) = this->OriginalVTable;
		}
	};
}

enum BoneIDS : uint8_t {
	Root = 0,	// "Root"
	attach = 1,	// "attach"
	pelvis = 2,	// "pelvis"
	spine_01 = 3,	// "spine_01"
	spine_02 = 4,	// "spine_02"
	spine_03 = 5,	// "spine_03"
	spine_04 = 6,	// "spine_04"
	spine_05 = 7,	// "spine_05"
	clavicle_l = 8,	// "clavicle_l"
	upperarm_l = 9,	// "upperarm_l"
	lowerarm_l = 10,	// "lowerarm_l"
	hand_l = 11,	// "hand_l"
	index_metacarpal_l = 12,	// "index_metacarpal_l"
	index_01_l = 13,	// "index_01_l"
	index_02_l = 14,	// "index_02_l"
	index_03_l = 15,	// "index_03_l"
	middle_metacarpal_l = 16,	// "middle_metacarpal_l"
	middle_01_l = 17,	// "middle_01_l"
	middle_02_l = 18,	// "middle_02_l"
	middle_03_l = 19,	// "middle_03_l"
	pinky_metacarpal_l = 20,	// "pinky_metacarpal_l"
	pinky_01_l = 21,	// "pinky_01_l"
	pinky_02_l = 22,	// "pinky_02_l"
	pinky_03_l = 23,	// "pinky_03_l"
	ring_metacarpal_l = 24,	// "ring_metacarpal_l"
	ring_01_l = 25,	// "ring_01_l"
	ring_02_l = 26,	// "ring_02_l"
	ring_03_l = 27,	// "ring_03_l"
	thumb_01_l = 28,	// "thumb_01_l"
	thumb_02_l = 29,	// "thumb_02_l"
	thumb_03_l = 30,	// "thumb_03_l"
	weapon_l = 31,	// "weapon_l"
	hand_attach_l = 32,	// "hand_attach_l"
	lowerarm_twist_01_l = 33,	// "lowerarm_twist_01_l"
	lowerarm_twist_02_l = 34,	// "lowerarm_twist_02_l"
	upperarm_twist_01_l = 35,	// "upperarm_twist_01_l"
	upperarm_twist_02_l = 36,	// "upperarm_twist_02_l"
	clavicle_r = 37,	// "clavicle_r"
	upperarm_r = 38,	// "upperarm_r"
	lowerarm_r = 39,	// "lowerarm_r"
	hand_r = 40,	// "hand_r"
	index_metacarpal_r = 41,	// "index_metacarpal_r"
	index_01_r = 42,	// "index_01_r"
	index_02_r = 43,	// "index_02_r"
	index_03_r = 44,	// "index_03_r"
	middle_metacarpal_r = 45,	// "middle_metacarpal_r"
	middle_01_r = 46,	// "middle_01_r"
	middle_02_r = 47,	// "middle_02_r"
	middle_03_r = 48,	// "middle_03_r"
	pinky_metacarpal_r = 49,	// "pinky_metacarpal_r"
	pinky_01_r = 50,	// "pinky_01_r"
	pinky_02_r = 51,	// "pinky_02_r"
	pinky_03_r = 52,	// "pinky_03_r"
	ring_metacarpal_r = 53,	// "ring_metacarpal_r"
	ring_01_r = 54,	// "ring_01_r"
	ring_02_r = 55,	// "ring_02_r"
	ring_03_r = 56,	// "ring_03_r"
	thumb_01_r = 57,	// "thumb_01_r"
	thumb_02_r = 58,	// "thumb_02_r"
	thumb_03_r = 59,	// "thumb_03_r"
	weapon_r = 60,	// "weapon_r"
	hand_attach_r = 61,	// "hand_attach_r"
	lowerarm_twist_01_r = 62,	// "lowerarm_twist_01_r"
	lowerarm_twist_02_r = 63,	// "lowerarm_twist_02_r"
	upperarm_twist_01_r = 64,	// "upperarm_twist_01_r"
	upperarm_twist_02_r = 65,	// "upperarm_twist_02_r"
	neck_01 = 66,	// "neck_01"
	neck_02 = 67,	// "neck_02"
	head = 68,	// "head"
	thigh_l = 69,	// "thigh_l"
	calf_l = 70,	// "calf_l"
	calf_twist_01_l = 71,	// "calf_twist_01_l"
	calf_twist_02_l = 72,	// "calf_twist_02_l"
	foot_l = 73,	// "foot_l"
	ball_l = 74,	// "ball_l"
	thigh_twist_01_l = 75,	// "thigh_twist_01_l"
	thigh_r = 76,	// "thigh_r"
	calf_r = 77,	// "calf_r"
	calf_twist_01_r = 78,	// "calf_twist_01_r"
	calf_twist_02_r = 79,	// "calf_twist_02_r"
	foot_r = 80,	// "foot_r"
	ball_r = 81,	// "ball_r"
	thigh_twist_01_r = 82,	// "thigh_twist_01_r"
	ik_foot_root = 83,	// "ik_foot_root"
	ik_foot_l = 84,	// "ik_foot_l"
	ik_foot_r = 85,	// "ik_foot_r"
	ik_hand_root = 86,	// "ik_hand_root"
	ik_hand_gun = 87,	// "ik_hand_gun"
	ik_hand_l = 88,	// "ik_hand_l"
	ik_hand_r = 89,	// "ik_hand_r"
	VBspine_05_weapon_r = 90,	// "VB spine_05_weapon_r"
	VBVBspine_05_weapon_r_ik_hand_gun = 91,	// "VB VB spine_05_weapon_r_ik_hand_gun"
	VBVBspine_05_weapon_r_ik_hand_l = 92,	// "VB VB spine_05_weapon_r_ik_hand_l"
	VBspine_05_upperarm_r = 93,	// "VB spine_05_upperarm_r"
	VBVBspine_05_upperarm_r_lowerarm_r = 94,	// "VB VB spine_05_upperarm_r_lowerarm_r"
	VBVBVBspine_05_upperarm_r_lowerarm_r_hand_r = 95,	// "VB VB VB spine_05_upperarm_r_lowerarm_r_hand_r"
	VBik_foot_root_weapon_l = 96,	// "VB ik_foot_root_weapon_l"
	VBroot_prop = 97,	// "VB root_prop"
	VBhead_fx = 98,	// "VB head_fx"
	VBRoot_hand_l = 99,	// "VB Root_hand_l"
	VBRoot_hand_r = 100,	// "VB Root_hand_r"
	VBattach_ik_hand_gun = 101,	// "VB attach_ik_hand_gun"
	VBVBattach_ik_hand_gun_ik_hand_l = 102,	// "VB VB attach_ik_hand_gun_ik_hand_l"
	VBVBattach_ik_hand_gun_ik_hand_r = 103,	// "VB VB attach_ik_hand_gun_ik_hand_r"

	None = 0,
	BONEID_MAX = 104	// Max Value For Looping
};


class unrealengine {
	public:
	static inline PBYTE GObjects = NULL;
	static inline SDK::UWorld* World = NULL;
	static inline SDK::UEngine* Engine = NULL;
	static inline SDK::FMinimalViewInfo* Camera;
	static inline SDK::APlayerController* PlayerController = NULL;
	static inline SDK::UGameInstance* OwningGameInstance = NULL;
	static inline SDK::ULocalPlayer* LocalPlayer = NULL;
	static inline SDK::UKismetMathLibrary* KismetMathLibrary = NULL;
	static inline SDK::UKismetStringLibrary* KismetStringLibrary = NULL;
	static inline SDK::UKismetSystemLibrary* KismetSystemLibrary = NULL;
	static inline SDK::UFortKismetLibrary* FortKismetLibrary = NULL;
	static inline SDK::UGameplayStatics* GameplayStatics = NULL;
	static inline SDK::UFont* Font = NULL;
	static inline SDK::UFont* DrawingFont = NULL;
	static inline SDK::UCanvas* CachedCanvas = NULL;
	static inline SDK::FVector2D ScreenCenter = SDK::FVector2D();
	static inline SDK::FVector2D ScreenSize = SDK::FVector2D();
	static inline SDK::FKey LeftMouseButton = SDK::FKey();
	static inline SDK::FKey RightMouseButton = SDK::FKey();
	static inline SDK::FKey Insert = SDK::FKey();
	static inline bool DrawMenu = bool( true );
};

inline unrealengine* ue = new unrealengine;

inline namespace FLinearColorPalette {
	// Primary Colors
	inline SDK::FLinearColor Red( 1.0f, 0.0f, 0.0f, 1.0f );
	inline SDK::FLinearColor Green( 0.0f, 1.0f, 0.0f, 1.0f );
	inline SDK::FLinearColor Blue( 0.0f, 0.0f, 1.0f, 1.0f );

	// Secondary Colors
	inline SDK::FLinearColor Yellow( 1.0f, 1.0f, 0.0f, 1.0f );
	inline SDK::FLinearColor Cyan( 0.0f, 1.0f, 1.0f, 1.0f );
	inline SDK::FLinearColor Magenta( 1.0f, 0.0f, 1.0f, 1.0f );

	// Neutral Tones
	inline SDK::FLinearColor White( 1.0f, 1.0f, 1.0f, 1.0f );
	inline SDK::FLinearColor Black( 0.0f, 0.0f, 0.0f, 1.0f );
	inline SDK::FLinearColor Gray( 0.5f, 0.5f, 0.5f, 1.0f );

	// Custom Colors
	inline SDK::FLinearColor SoftPink( 0.98f, 0.75f, 0.76f, 1.0f );
	inline SDK::FLinearColor OceanBlue( 0.0f, 0.4f, 0.8f, 1.0f );
	inline SDK::FLinearColor ForestGreen( 0.13f, 0.55f, 0.13f, 1.0f );
	inline SDK::FLinearColor SunsetOrange( 1.0f, 0.55f, 0.0f, 1.0f );
	inline SDK::FLinearColor Purple( 0.5f, 0.0f, 0.5f, 1.0f );
	inline SDK::FLinearColor Gold( 1.0f, 0.84f, 0.0f, 1.0f );
	inline SDK::FLinearColor MidnightBlue( 0.1f, 0.1f, 0.44f, 1.0f );
	inline SDK::FLinearColor SkyBlue( 0.53f, 0.81f, 0.92f, 1.0f );

}

class CORE_C {
	public:
	static CORE_C* Instance( ) {
		static CORE_C instance;
		return &instance;
	}

	SDK::UCanvas* GetLocalCanvas( ) {
		return ue->CachedCanvas;
	}

	SDK::FVector2D GetCenterScreen( ) {
		return ue->ScreenCenter;
	}

	SDK::APlayerController* GetLocalController( ) {
		return ( SDK::APlayerController* )ue->PlayerController;
	}

	SDK::FVector2D GetScreenSize( ) {
		return ue->ScreenSize;
	}

	uintptr_t GetBaseAddress( ) {
		return *( uintptr_t* )( __readgsqword( 0x60 ) + 0x10 );
	}

	bool IsOnScreen( const SDK::FVector2D& Position ) {
		bool OnScreenX = ( Position.X >= 0.f ) && ( Position.X <= this->GetScreenSize( ).X );
		bool OnScreenY = ( Position.Y >= 0.f ) && ( Position.Y <= this->GetScreenSize( ).Y );

		return OnScreenX && OnScreenY;
	}

	SDK::FVector2D Project( SDK::FVector WorldLocation ) {
		SDK::FVector ScreenLocation = GetLocalCanvas( )->K2_Project( WorldLocation );

		if ( ScreenLocation.Z > 0.f ) {
			return SDK::FVector2D( ScreenLocation.X, ScreenLocation.Y );
		}

		return SDK::FVector2D( -1.f, -1.f );
	}

	SDK::FVector Project3D( SDK::FVector WorldLocation ) {
		SDK::FVector ReturnValue = GetLocalCanvas( )->K2_Project( WorldLocation );

		if ( ReturnValue.Z <= 0.f ) {
			ReturnValue.X *= -1.f;
			ReturnValue.Y *= -1.f;

			ReturnValue.X += ue->ScreenSize.X;
			ReturnValue.Y += ue->ScreenSize.Y;
		}

		return ReturnValue;
	}

	//bool IsOnScreen( const FVector2D& Position ) {
	//	bool OnScreenX = ( Position.X >= 0.f ) && ( Position.X <= Game::ScreenWidth );
	//	bool OnScreenY = ( Position.Y >= 0.f ) && ( Position.Y <= Game::ScreenHeight );

	//	return OnScreenX && OnScreenY;
	//}

	float GetDistance2D( float x1, float y1, float x2, float y2 ) {
		return ( float )sqrt( pow( ( x2 - x1 ), 2 ) + pow( ( y2 - y1 ), 2 ) );
	}

	int ConvertSmoothnessToSpeed( int smoothness ) {
		int MaxSmoothness = 15;
		if ( smoothness > MaxSmoothness ) {
			MaxSmoothness = smoothness;
		}

		int maxSpeed = 100;
		int minSpeed = 0;

		int speed = maxSpeed - ( ( smoothness - 1 ) * ( maxSpeed - minSpeed ) / ( MaxSmoothness - 1 ) );
		return speed;
	}


	bool InRect( float x, float y, float radius, float coord_x, float coord_y )
	{
		return coord_x >= x - radius && coord_x <= x + radius &&
			coord_y >= y - radius && coord_y <= y + radius;
	}

	bool InCircle( SDK::FVector2D First, float radius, SDK::FVector2D Coordinate )
	{
		if ( InRect( First.X, Coordinate.Y, radius, First.X, Coordinate.Y ) )
		{
			float dx = First.X - Coordinate.X;
			float dy = First.Y - Coordinate.Y;
			dx *= dx;
			dy *= dy;
			float distance_squared = dx + dy;
			float radius_squared = radius * radius;
			return distance_squared <= radius_squared;
		} return false;
	}

	float Vector_Distance( SDK::FVector V1, SDK::FVector V2 ) {
		return V1.GetDistanceTo( V2 );
	}

	SDK::FLinearColor GetColorByTier( SDK::EFortItemTier Rarity )
	{
		SDK::FLinearColor render_color = SDK::FLinearColor( 1.0, 1.0, 1.0, 1 );

		switch ( Rarity ) {
			case SDK::EFortItemTier::No_Tier:
				render_color = SDK::FLinearColor( 0.8, 0.8, 0.8, 1 );
				break;
			case SDK::EFortItemTier::I:
				render_color = SDK::FLinearColor( 0.8, 0.8, 0.8, 1 );
				break;
			case SDK::EFortItemTier::II:
				render_color = SDK::FLinearColor( 0.30, 1.50, 0.60, 2 );
				break;
			case SDK::EFortItemTier::III:
				render_color = SDK::FLinearColor( 0.0, 0.80, 1.60, 1 );
				break;
			case SDK::EFortItemTier::IV:
				render_color = SDK::FLinearColor( 1.60, 0.0, 1.60, 1 );
				break;
			case SDK::EFortItemTier::V:
				render_color = SDK::FLinearColor( 1.50, 1.50, 00., 1 );
				break;
			case SDK::EFortItemTier::VI:
				render_color = SDK::FLinearColor( 2.00, 2.00, 00., 1 );
				break;
		}

		return render_color;
	}

	float GetBulletDrop( float height, float DepthPlayerTarget, float BulletVelocity, float GravityAcceleration )
	{
		float pitch = ( ue->KismetMathLibrary->Atan2( height, DepthPlayerTarget ) );
		float BulletVelocityXY = BulletVelocity * ue->KismetMathLibrary->Cos( pitch );
		float Time = DepthPlayerTarget / BulletVelocityXY;
		float TotalVerticalDrop = ( 0.5f * GravityAcceleration * Time * Time );
		return TotalVerticalDrop;
	}

	SDK::FVector Predict( SDK::FVector CameraLocation, SDK::FVector CurrentLocation, SDK::FVector ComponentVelocity, SDK::AFortWeapon* CurrentWeapon ) {
		auto ProjectileSpeed = CurrentWeapon->GetProjectileSpeed( );
		auto ProjectileGravity = -337;

		SDK::FVector StartLocation = CurrentLocation;
		auto PlayerDistance = this->Vector_Distance( CameraLocation, StartLocation );
		
		float Height = StartLocation.Z - CameraLocation.Z;
		float DepthPlayerTarget = ue->KismetMathLibrary->Sqrt( pow( StartLocation.Y - CameraLocation.Y, 2 ) + pow( StartLocation.X - CameraLocation.X, 2 ) );
		float BulletDrop = this->GetBulletDrop( Height, DepthPlayerTarget, ProjectileSpeed, ProjectileGravity );
		float pitch = ( ue->KismetMathLibrary->Atan2( Height, DepthPlayerTarget ) );
		float BulletVelocityXY = ProjectileSpeed * ue->KismetMathLibrary->Cos( pitch );
		float TimeToTarget = DepthPlayerTarget / BulletVelocityXY;
		//float TimeToTarget = PlayerDistance / ProjectileSpeed;
		
		StartLocation.X += ( TimeToTarget * ComponentVelocity.X );
		StartLocation.Y += ( TimeToTarget * ComponentVelocity.Y );
		StartLocation.Z += ( TimeToTarget * ComponentVelocity.Z );
		StartLocation.Z -= BulletDrop;

		return StartLocation;
	}

	SDK::FRotator SmoothMe( SDK::FRotator StartRotation, SDK::FRotator EndRotation, float SmoothScale )
	{
		SDK::FRotator ret = EndRotation;

		ret.Pitch -= StartRotation.Pitch;
		ret.Yaw -= StartRotation.Yaw;

		//clamp
		if ( ret.Yaw < -180.0f )
			ret.Yaw += 360.0f;

		if ( ret.Yaw > 180.0f )
			ret.Yaw -= 360.0f;

		if ( ret.Pitch < -74.0f )
			ret.Pitch = -74.0f;

		if ( ret.Pitch > 74.0f )
			ret.Pitch = 74.0f;

		ret.Pitch = ( ret.Pitch / SmoothScale ) + StartRotation.Pitch;
		ret.Yaw = ( ret.Yaw / SmoothScale ) + StartRotation.Yaw;

		//clamp
		if ( ret.Yaw < -180.0f )
			ret.Yaw += 360.0f;

		if ( ret.Yaw > 180.0f )
			ret.Yaw -= 360.0f;

		if ( ret.Pitch < -74.0f )
			ret.Pitch = -74.0f;

		if ( ret.Pitch > 74.0f )
			ret.Pitch = 74.0f;

		ret.Roll = 0;

		return ret;
	}

	bool IsPositionVisible( SDK::UObject* WorldContextObject, SDK::FVector CameraLocation, SDK::FVector TargetPosition, SDK::AActor* ActorToIgnore, SDK::AActor* ActorToIgnore2 ) {
		SDK::FHitResult Hit {};
		SDK::TArray< SDK::AActor*> IgnoredActors;

		SDK::FVector StartPosition = CameraLocation;

		if ( TargetPosition.IsZero()) return false;

		if ( ActorToIgnore ) IgnoredActors.Add( ActorToIgnore );
		if ( ActorToIgnore2 ) IgnoredActors.Add( ActorToIgnore2 );

		bool bHitSomething = ue->KismetSystemLibrary->LineTraceSingle( WorldContextObject,
			StartPosition,
			TargetPosition,
			SDK::ETraceTypeQuery::TraceTypeQuery6,
			true,
			IgnoredActors,
			SDK::EDrawDebugTrace::None,
			&Hit,
			true,
			SDK::FLinearColor( 0.f, 0.f, 0.f, 0.f ),
			SDK::FLinearColor( 0.f, 0.f, 0.f, 0.f ),
			0.f
			);

		return !bHitSomething;
	}
};

inline CORE_C* CORE( ) {
	return CORE_C::Instance( );
}

typedef void ( *PostRender_t )( SDK::UObject* pObject, SDK::UCanvas* pCanvas );
static inline PostRender_t DrawTransitionOriginal;