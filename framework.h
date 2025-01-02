#pragma once

#include "SDK.hpp"

using namespace SDK;

#pragma once
#include "Canvas.h"

namespace Settings {
	namespace Combat {
		bool Aimbot;
		bool Prediction;
		bool DrawFOV = false;
		bool TargetLine = false;
		float Smoothing = 5;
		float AimShake = 1;
		float FovSize = 250;
		int Aimkey = 1;

		namespace SilentAim {
			bool SilentEnable;
		}
	}

	namespace Visuals {
		bool Skeleton;
		bool Snaplines;
		bool PlayerName;
	}

	namespace Environment {
		bool Loot;
	}

	namespace Exploits {
		bool StreamerLoot;
		bool ProjectileTP;
		bool FirstPerson;
		bool PlayerFly;
		bool AimInAir;
	}

	namespace Misc {
		float FontSize;
		bool bIsInGame;
		bool UnHook;
	}
}

namespace Framework
{
	namespace ColorPicker
	{
		float ColorAddWhite( float current, float white )
		{
			current += white;

			if ( current >= 255.f ) return 255.f;

			return current;
		}
	}

	class GUI
	{
		public:
		void Initialize( )
		{
			this->BackgroundColor = FLinearColor( 0.02f, 0.03f, 0.05f, 1.f ); // Dark blue-gray background
			this->MainColor = FLinearColor( 0.1f, 0.3f, 0.8f, 1.f );          // Vibrant blue for the main elements
			this->FrameColor = FLinearColor( 0.02f, 0.03f, 0.05f, 1.f );      // Matching background for consistency
			this->FrameHoveredColor = FLinearColor( 0.1f, 0.4f, 0.9f, 1.f );  // Slightly brighter blue for hover
			this->FramePressedColor = FLinearColor( 0.08f, 0.2f, 0.6f, 1.f ); // Muted blue for pressed state
			this->TextColor = FLinearColor( 0.9f, 0.9f, 1.f, 1.f );           // Soft white-blue text for readability


			this->Position = FVector2D( 200, 200 );
			this->Size = FVector2D( 650, 350 );
		}

		bool CheckHovered( FVector2D pos, FVector2D Size )
		{
			if ( this->Cursor.X > pos.X && this->Cursor.Y > pos.Y )
				if ( this->Cursor.X < pos.X + Size.X && this->Cursor.Y < pos.Y + Size.Y )
					return true;

			return false;
		}

		void Combobox( FString Content, bool* Active, int* Value, FString* Arguments, int NumArguments )
		{
			this->Offset.Y += 5;

			FLinearColor RenderColor;
			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 150, 24 );
			FVector2D ArrowButtonSize = FVector2D( 20, 20 ); // Adjust the arrow button size as needed

			bool Hovered = this->CheckHovered( Current, Size );
			if ( Hovered )
				RenderColor = this->FrameHoveredColor;
			else
				RenderColor = this->FrameColor;

			Wrapper::RectFilled( Current, Size, RenderColor );
			Wrapper::Rect( Current, Size, FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			bool ShowLeftArrow = ( *Value > 0 );
			if ( ShowLeftArrow )
			{
				FVector2D LeftArrowButtonPos = FVector2D( Current.X, Current.Y );
				bool LeftArrowButtonHovered = this->CheckHovered( LeftArrowButtonPos, ArrowButtonSize );
				bool LeftArrowButtonClicked = LeftArrowButtonHovered && this->LeftMouseClicked;

				Wrapper::Text( L"<", FVector2D( LeftArrowButtonPos.X + ArrowButtonSize.X / 4, LeftArrowButtonPos.Y + ArrowButtonSize.Y / 6 ), this->TextColor, true, false );

				if ( LeftArrowButtonClicked )
				{
					*Value -= 1;
				}
			}

			bool ShowRightArrow = ( *Value < NumArguments - 1 );
			if ( ShowRightArrow )
			{
				FVector2D RightArrowButtonPos = FVector2D( Current.X + Size.X - ArrowButtonSize.X, Current.Y );
				bool RightArrowButtonHovered = this->CheckHovered( RightArrowButtonPos, ArrowButtonSize );
				bool RightArrowButtonClicked = RightArrowButtonHovered && this->LeftMouseClicked;

				Wrapper::Text( L">", FVector2D( RightArrowButtonPos.X + ArrowButtonSize.X / 5, RightArrowButtonPos.Y + ArrowButtonSize.Y / 6 ), this->TextColor, true, false );

				if ( RightArrowButtonClicked )
				{
					*Value += 1;
				}
			}

			Wrapper::Text( Arguments[ *Value ], FVector2D( Current.X + ( Size.X / 2 ) - 2, Current.Y + 3 ), this->TextColor, true, false );
			Wrapper::Text( Content, FVector2D( Current.X + Size.X + 5, Current.Y + 3 ), this->TextColor, false, false );

			this->Offset.Y += 26; // 28
		}

		//void Combobox(FString Content, bool* Active, int* Value, FString* Arguments, int NumArguments)
		//{
		//	this->Offset.Y += 5;

		//	FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
		//	FVector2D Size = FVector2D(130, 22);

		//	bool Hovered = this->CheckHovered(Current, Size);
		//	bool Clicked = this->LeftMouseClicked && Hovered;
		//	bool AnyHovered = Hovered;

		//	if (Clicked)
		//	{
		//		if (*Active)
		//			*Active = false;
		//		else if (!this->TotalOpenPopups)
		//			*Active = true;
		//	}

		//	Wrapper::RectFilled(Current, Size, this->FrameColor);
		//	Wrapper::Rect(Current, Size, FLinearColor(0.f, 0.f, 0.f, 1.f), 1.f);

		//	Wrapper::Text(Arguments[*Value], FVector2D(Current.X + (Size.X / 2) - 2, Current.Y + 3), this->TextColor, true, false);
		//	Wrapper::Text(Content, FVector2D(Current.X + Size.X + 5, Current.Y + 3), this->TextColor, false, false);

		//	if (*Active)
		//	{
		//		this->TotalOpenPopups += 1;

		//		Current.X += 6;
		//		Size.X -= 6 * 2;

		//		FVector2D SelectionStart = FVector2D(Current.X, Current.Y + Size.Y);

		//		for (int i = 0; i < NumArguments; i++)
		//		{
		//			Current.Y += Size.Y;

		//			bool ItemHovered = this->CheckHovered(Current, Size);
		//			bool ItemClicked = ItemHovered && this->LeftMouseClicked;
		//			FLinearColor ItemColor = this->FrameColor;

		//			if (ItemHovered && !AnyHovered)
		//				AnyHovered = true;

		//			if (ItemClicked)
		//				*Value = i;

		//			if (ItemHovered)
		//				ItemColor = this->FrameHoveredColor;
		//			else if (*Value == i)
		//				ItemColor = this->FramePressedColor;

		//			Wrapper::RectFilled(Current, Size, ItemColor, true);

		//			Wrapper::Text(Arguments[i], FVector2D(Current.X + (Size.X / 2), Current.Y + 2), this->TextColor, true, false, true);
		//		}

		//		Wrapper::Rect(SelectionStart, Size, FLinearColor(0.f, 0.f, 0.f, 1.f), 1.f, true);
		//	}

		//	bool ClickedSomewhereElse = !AnyHovered && this->LeftMouseClicked;

		//	if (ClickedSomewhereElse && *Active)
		//		*Active = false;

		//	this->Offset.Y += 24; // 28
		//}

		void ColorPicker( FString Content, FLinearColor* Color, bool* Active )
		{
			this->Offset.Y += 6;

			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 8, 8 );

			bool Hovered = this->CheckHovered( FVector2D( Current.X - 1, Current.Y - 1 ), FVector2D( Size.X + 80, Size.Y ) );
			bool BigHovered = Hovered || ( *Active && this->CheckHovered( Current, FVector2D( 160, 115 ) ) );
			bool Clicked = Hovered && this->LeftMouseClicked;
			bool ClickedSomewhereElse = !BigHovered && this->LeftMouseClicked;

			Wrapper::RectFilled( Current, Size, *Color );
			Wrapper::Rect( Current, Size, FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			Wrapper::Text( Content, FVector2D( Current.X + Size.X + 3, Current.Y - 5 ), this->TextColor, false, false );

			if ( Clicked )
			{
				if ( *Active )
					*Active = false;
				else if ( !this->TotalOpenPopups )
					*Active = true;
			}

			if ( ClickedSomewhereElse && *Active )
				*Active = false;

			if ( *Active )
			{
				this->TotalOpenPopups += 1;

				Current = FVector2D( Current.X + Size.X, Current.Y + Size.Y );
				float CurrentXBackup = Current.X;

				//Top -> Bottom (White)
				for ( float c = 0; c < 10.f; c++ )
				{
					float c_percentage = c / 10.f;

					float c_hx = 200.f * c_percentage;

					//Red -> Green
					for ( float i = 0; i < 5.f; i++ )
					{
						float percentage = i / 5.f;

						float hx = 255.f * percentage;

						float red = 255.f - hx;
						float green = 255.f - red;
						float blue = 0.f;

						red = ColorPicker::ColorAddWhite( red, c_hx );
						green = ColorPicker::ColorAddWhite( green, c_hx );
						blue = ColorPicker::ColorAddWhite( blue, c_hx );

						FLinearColor converted_color = FLinearColor( red / 255.f, green / 255.f, blue / 255.f, 1.f );

						bool this_color_hovered = this->CheckHovered( Current, FVector2D( 11, 11 ) );
						bool this_color_clicked = this->LeftMouseClicked && this_color_hovered;

						if ( this_color_clicked )
						{
							*Color = converted_color;
							*Active = false;
						}

						Wrapper::RectFilled( Current, FVector2D( 10, 10 ), converted_color, true );
						Current.X += 10;
					}

					//Green -> Blue
					for ( float i = 0; i < 5.f; i++ )
					{
						float percentage = i / 5.f;

						float hx = 255.f * percentage;

						float red = 0.f;
						float green = 255.f - hx;
						float blue = 255.f - green;

						red = ColorPicker::ColorAddWhite( red, c_hx );
						green = ColorPicker::ColorAddWhite( green, c_hx );
						blue = ColorPicker::ColorAddWhite( blue, c_hx );

						FLinearColor converted_color = FLinearColor( red / 255.f, green / 255.f, blue / 255.f, 1.f );

						bool this_color_hovered = this->CheckHovered( Current, FVector2D( 11, 11 ) );
						bool this_color_clicked = this->LeftMouseClicked && this_color_hovered;

						if ( this_color_clicked )
						{
							*Color = converted_color;
							*Active = false;
						}

						Wrapper::RectFilled( Current, FVector2D( 10, 10 ), converted_color, true );
						Current.X += 10;
					}

					//Blue -> Red
					for ( float i = 0; i < 5.f; i++ )
					{
						float percentage = i / 5.f;

						float hx = 255.f * percentage;

						float green = 0.f;
						float blue = 255.f - hx;
						float red = 255.f - blue;

						red = ColorPicker::ColorAddWhite( red, c_hx );
						green = ColorPicker::ColorAddWhite( green, c_hx );
						blue = ColorPicker::ColorAddWhite( blue, c_hx );

						FLinearColor converted_color = FLinearColor( red / 255.f, green / 255.f, blue / 255.f, 1.f );

						bool this_color_hovered = this->CheckHovered( Current, FVector2D( 11, 11 ) );
						bool this_color_clicked = this_color_hovered && this->LeftMouseClicked;

						if ( this_color_clicked )
						{
							*Color = converted_color;
							*Active = false;
						}

						Wrapper::RectFilled( Current, FVector2D( 10, 10 ), converted_color, true );
						Current.X += 10;
					}

					Current.X = CurrentXBackup;
					Current.Y += 10;
				}

				Current.X = CurrentXBackup;

				//White -> Black
				for ( float i = 0; i < 15.f; i++ )
				{
					float percentage = i / 15.f;

					float hx = 255.f * percentage;

					float green = 255.f - hx;
					float blue = 255.f - hx;
					float red = 255.f - hx;

					FLinearColor converted_color = FLinearColor( red / 255.f, green / 255.f, blue / 255.f, 1.f );

					bool this_color_hovered = this->CheckHovered( Current, FVector2D( 11, 11 ) );
					bool this_color_clicked = this->LeftMouseClicked && this_color_hovered;

					if ( this_color_clicked )
					{
						*Color = converted_color;
						*Active = false;
					}

					Wrapper::RectFilled( Current, FVector2D( 10, 10 ), converted_color, true );
					Current.X += 10;
				}
			}

			this->Offset.Y += 13;
		}

		void Checkbox( FString Content, bool* Option )
		{
			this->Offset.Y += 6;

			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 8, 8 );
			FLinearColor RenderColor;

			bool Hovered = this->CheckHovered( FVector2D( Current.X - 1, Current.Y - 1 ), FVector2D( Size.X + 100, Size.Y + 1 ) );
			bool Clicked = this->LeftMouseClicked && Hovered;

			if ( *Option )
				RenderColor = this->MainColor;
			else if ( Hovered )
				RenderColor = this->FrameHoveredColor;
			else
				RenderColor = this->FrameColor;

			if ( Clicked && !this->TotalOpenPopups ) *Option = !*Option;

			Wrapper::RectFilled( Current, Size, RenderColor );
			Wrapper::Rect( Current, Size, FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			Wrapper::Text( Content, FVector2D( Current.X + Size.X + 3, Current.Y - 5 ), this->TextColor, false, false );

			this->Offset.Y += 13;
		}

		void Slider( FString Content, float* Value, float Min, float Max )
		{
			this->Offset.Y += 6;

			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 90, 9 );
			FLinearColor RenderColor;

			bool Hovered = this->CheckHovered( Current, Size );
			bool Down = this->LeftMouseDown && Hovered;

			if ( Hovered && Down && !this->TotalOpenPopups )
			{
				*Value = ( ( this->Cursor.X - Current.X ) * ( ( Max - Min ) / Size.X ) ) + Min;
				if ( *Value < Min ) *Value = Min;
				if ( *Value > Max ) *Value = Max;
			}

			if ( Down )
				RenderColor = this->FramePressedColor;
			else if ( Hovered )
				RenderColor = this->FrameHoveredColor;
			else
				RenderColor = this->FrameColor;

			Wrapper::RectFilled( FVector2D( Current.X, Current.Y + 1 ), FVector2D( Size.X, Size.Y - 2 ), RenderColor );
			Wrapper::Rect( FVector2D( Current.X, Current.Y + 1 ), FVector2D( Size.X, Size.Y - 2 ), FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			float Percent = Size.X / ( Max - Min );
			FVector2D Point = FVector2D( Percent * ( *Value - Min ), Size.Y );
			Wrapper::RectFilled( FVector2D( Current.X + Point.X - 2, Current.Y - 3 ), FVector2D( 4, Size.Y + 4 ), this->MainColor ); // Current.X + Point.X + 2

			FString ConvertedContent = UKismetStringLibrary::BuildString_Int( Content, FString( L": " ), int( *Value ), FString( L"" ) );
			Wrapper::Text( ConvertedContent, FVector2D( Current.X + Size.X + 3, Current.Y - 5 ), this->TextColor, false, false, false );

			this->Offset.Y += 14;
		}

		bool MenuButton( FString Content, bool Active )
		{
			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 100, 35 );
			FLinearColor RenderColor;

			bool Hovered = this->CheckHovered( Current, Size );
			bool Clicked = this->LeftMouseClicked && Hovered;

			if ( Active )
				RenderColor = this->MainColor;
			else if ( Hovered )
				RenderColor = this->FrameHoveredColor;
			else
				RenderColor = this->FrameColor;

			Wrapper::RectFilled( Current, FVector2D( 4, Size.Y ), RenderColor );
			Wrapper::Rect( Current, FVector2D( 4, Size.Y ), FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			Wrapper::Text( Content, FVector2D( Current.X + 9, Current.Y + 10 ), this->TextColor, false, false );

			this->Offset.Y += 44;

			return Clicked && !this->TotalOpenPopups;
		}

		bool Button( FString Text )
		{
			this->Offset.Y += 5;

			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
			FVector2D Size = FVector2D( 120, 22 );
			FLinearColor RenderColor;

			bool Hovered = this->CheckHovered( Current, Size );
			bool Clicked = this->LeftMouseClicked && Hovered;
			bool Down = this->LeftMouseDown && Hovered;

			if ( Down )
				RenderColor = this->FramePressedColor;
			else if ( Hovered )
				RenderColor = this->FrameHoveredColor;
			else
				RenderColor = this->FrameColor;

			Wrapper::RectFilled( Current, FVector2D( Current.X, Size.Y ), RenderColor );
			Wrapper::Rect( Current, FVector2D( Current.X, Size.Y ), FLinearColor( 0.f, 0.f, 0.f, 1.f ), 1.f );

			Wrapper::Text( Text, FVector2D( Current.X + ( Size.X / 2 ) - 2, Current.Y + 3 ), this->TextColor, true, false );

			this->Offset.Y += 28;

			return Clicked && !this->TotalOpenPopups;
		}

		void Text( FString Content )
		{
			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );

			Wrapper::Text( Content, Current, this->TextColor, false, false );

			this->Offset.Y += 16;
		}

		void TextColored( FString Content, FLinearColor Color )
		{
			FVector2D Current = FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );

			Wrapper::Text( Content, Current, Color, false, false );

			this->Offset.Y += 16;
		}

		FVector2D GetCurrent( )
		{
			return FVector2D( this->Position.X + this->Offset.X, this->Position.Y + this->Offset.Y );
		}

		void Space( float X, float Y )
		{
			this->Offset = FVector2D( this->Offset.X + X, this->Offset.Y + Y );
		}

		void PushX( float value )
		{
			this->Offset.X = value;
		}

		void PushY( float value )
		{
			this->Offset.Y = value;
		}

		void AddOffset( FVector2D ToAddOffset )
		{
			this->Offset.X += ToAddOffset.X;
			this->Offset.Y += ToAddOffset.Y;
		}

		bool CreateMenu( FString title )
		{
			if ( !this->AlreadyInitialized )
			{
				this->Initialize( );

				this->AlreadyInitialized = true;
			}

			this->TotalOpenPopups = 0;
			this->Offset = FVector2D( 0, 0 );

			ue->PlayerController->GetMousePosition( &this->Cursor.X, &this->Cursor.Y );
			this->LeftMouseClicked = ue->PlayerController->WasInputKeyJustPressed( ue->LeftMouseButton );
			this->LeftMouseDown = ue->PlayerController->IsInputKeyDown( ue->LeftMouseButton );

			static FVector2D StaticCursor;
			static FVector2D StaticCalculated;

			if ( this->CheckHovered( this->Position, FVector2D( this->Size.X, 15 ) ) && LeftMouseDown )
			{
				if ( !StaticCursor )
				{
					StaticCursor = this->Cursor;
				}

				if ( !StaticCalculated )
				{
					StaticCalculated = StaticCursor - this->Position;
				}
			}

			if ( StaticCursor && StaticCalculated )
			{
				this->Position = this->Cursor - StaticCalculated;
			}

			if ( !this->LeftMouseDown )
			{
				StaticCursor = FVector2D( );
				StaticCalculated = FVector2D( );
			}

			Wrapper::RectFilled( this->Position, this->Size, this->BackgroundColor );
			Wrapper::Rect( this->Position, this->Size, this->FrameColor, 1.f );

			return true;
		}

		bool RenderMouse( )
		{
			Wrapper::RectFilled( FVector2D( this->Cursor.X - 4, this->Cursor.Y - 4 ), FVector2D( 4, 4 ), this->TextColor, true );
			return true;
		}
		private:
		bool AlreadyInitialized, LeftMouseClicked, LeftMouseDown;
		FVector2D Position, Size, Offset, Cursor, ScreenCenter;
		FLinearColor BackgroundColor, MainColor, FrameColor, FrameHoveredColor, FramePressedColor, TextColor;
		int TotalOpenPopups;
	};

	enum MenuTabs : uint8 {
		Combat,
		Player,
		Environment,
		Misc,
		Exploits,
	};

	FKey GetAimKey( ) {
		switch ( Settings::Combat::Aimkey ) {
			case 0:
				return ue->LeftMouseButton;
				break;
			case 1:
				return ue->RightMouseButton;
				break;
		}
	}

	void DrawMenu( )
	{
		static GUI Framework;
		static MenuTabs MenuTab = MenuTabs::Combat;

		Framework.CreateMenu( FString( L"Magical Fortnite Adventurers" ) );

		Framework.PushX( 10 );
		Framework.PushY( 30 );

		if ( Framework.MenuButton( FString( L"Combat" ), MenuTab == MenuTabs::Combat ) ) MenuTab = MenuTabs::Combat;
		if ( Framework.MenuButton( FString( L"Player" ), MenuTab == MenuTabs::Player ) ) MenuTab = MenuTabs::Player;
		if ( Framework.MenuButton( FString( L"Environment" ), MenuTab == MenuTabs::Environment ) ) MenuTab = MenuTabs::Environment;
		if ( Framework.MenuButton( FString( L"Exploits" ), MenuTab == MenuTabs::Exploits ) ) MenuTab = MenuTabs::Exploits;
		if ( Framework.MenuButton( FString( L"Miscellaneous" ), MenuTab == MenuTabs::Misc ) ) MenuTab = MenuTabs::Misc;

		Framework.PushX( 160 );
		Framework.PushY( 30 );

		static bool AimKeyActive = false;
		FString AimKeys [ ] = { FString( L"Left Mouse" ), FString( L"Right Mouse" ) };

		switch ( MenuTab ) {
			case MenuTabs::Combat:
				Framework.Text( FString( L"Aimbot Settings" ) );
				Framework.Checkbox( FString( L"Aimbot" ), &Settings::Combat::Aimbot );
				Framework.Checkbox( FString( L"Prediction" ), &Settings::Combat::Prediction );
				Framework.Slider( FString( L"Smoothing" ), &Settings::Combat::Smoothing, 1, 15 );
				Framework.Slider( FString( L"Aim Shake" ), &Settings::Combat::AimShake, 0, 5 );
				Framework.Combobox( FString( L"Aim Key" ), &AimKeyActive, &Settings::Combat::Aimkey, AimKeys, sizeof( AimKeys ) / sizeof( AimKeys[ 0 ] ) );
				Framework.Text( FString( L"Fov Settings" ) );
				Framework.Checkbox( FString( L"Draw FOV" ), &Settings::Combat::DrawFOV );
				Framework.Slider( FString( L"Fov Size" ), &Settings::Combat::FovSize, 25, 750 );
				Framework.Text( FString( L"Extra Settings" ) );
				Framework.Checkbox( FString( L"Target Line" ), &Settings::Combat::TargetLine );
				break;
			case MenuTabs::Player:
				Framework.Checkbox( FString( L"Skeleton" ), &Settings::Visuals::Skeleton );
				Framework.Checkbox( FString( L"Snaplines" ), &Settings::Visuals::Snaplines );
				Framework.Checkbox( FString( L"Player Name" ), &Settings::Visuals::PlayerName );
				break;
			case MenuTabs::Environment:
				Framework.Checkbox( FString( L"Loot" ), &Settings::Environment::Loot );
				break;
			case MenuTabs::Exploits:
				Framework.Checkbox( FString( L"Streamer Loot" ), &Settings::Exploits::StreamerLoot );
				Framework.Checkbox( FString( L"Projectile TP" ), &Settings::Exploits::ProjectileTP );
				Framework.Checkbox( FString( L"First Person" ), &Settings::Exploits::FirstPerson );
				Framework.Checkbox( FString( L"Player Fly" ), &Settings::Exploits::PlayerFly );
				Framework.Checkbox( FString( L"Aim In Air" ), &Settings::Exploits::AimInAir );
				break;
			case MenuTabs::Misc:
				//Framework.Slider( FString( L"Font Size" ), &Settings::Misc::FontSize, 2, 20 );
				if ( Framework.Button( FString( L"Unhook" ) ) ) Settings::Misc::UnHook = true;
				break;
		}

		Framework.RenderMouse( );
	}
}