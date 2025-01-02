#pragma once
#include "SDK.hpp"
#define PI (3.141592653589793f)
#define M_PI	3.14159265358979323846264338327950288419716939937510
#define M_RADPI    57.295779513082f

namespace Render
{
	void Line( FVector2D a, FVector2D b, FLinearColor color, float thickness )
	{
		CORE()->GetLocalCanvas()->K2_DrawLine( a, b, thickness, color );
	}

	void Text( FString content, FVector2D screen, FLinearColor color, bool center_x, bool center_y, bool outlined, float scale = 1.00f, bool IsVisualDrawing = false )
	{
		CORE()->GetLocalCanvas()->K2_DrawText( IsVisualDrawing ? ue->DrawingFont : ue->Font, content, screen, color, 1.f, FLinearColor(), FVector2D(), center_x, center_y, outlined, FLinearColor( 0.f, 0.f, 0.f, 1.f ) );
	}

	void DrawRectFilled( FVector2D position, FVector2D size, FLinearColor render_color )
	{
		for ( int i = 0; i < size.Y; i++ )
		{
			Render::Line( FVector2D( position.X, position.Y + i ), FVector2D( position.X + size.X, position.Y + i ), render_color, 1.f );
		}
	}

	void RoundedRectFilled( FVector2D PositionA, FVector2D PositionB, FLinearColor RenderColor, float Radius, float Segments )
	{
		float Step = M_PI * 2.0 / Segments;

		for ( float deg = 0; deg < M_PI * 2; deg += Step )
		{
			float x1 = Radius * cos( deg ) + PositionA.X;
			float y1 = Radius * sin( deg ) + PositionA.Y;
			float x2 = Radius * cos( deg + Step ) + PositionA.X;
			float y2 = Radius * sin( deg + Step ) + PositionA.Y;

			Render::Line( FVector2D( x1, y1 ), FVector2D( x2, y2 ), RenderColor, 1.f );
		}
	}

	void DrawRect( FVector2D position, FVector2D size, FLinearColor render_color, float thickness )
	{
		Render::Line( FVector2D( position.X, position.Y ), FVector2D( position.X + size.X, position.Y ), render_color, thickness );
		Render::Line( FVector2D( position.X + size.X, position.Y ), FVector2D( position.X + size.X, position.Y + size.Y ), render_color, thickness );
		Render::Line( FVector2D( position.X + size.X, position.Y + size.Y ), FVector2D( position.X, position.Y + size.Y ), render_color, thickness );
		Render::Line( FVector2D( position.X, position.Y + size.Y ), FVector2D( position.X, position.Y ), render_color, thickness );
	}

	void Circle( FVector2D position, FLinearColor color, float radius, float segments, bool filled )
	{
		float step = M_PI * 2.0 / segments;
		int count = 0;
		FVector2D vectors[ 128 ];

		for ( float deg = 0; deg < M_PI * 2; deg += step )
		{
			float x_1 = radius * cos( deg ) + position.X;
			float y_1 = radius * sin( deg ) + position.Y;
			float x_2 = radius * cos( deg + step ) + position.X;
			float y_2 = radius * sin( deg + step ) + position.Y;

			vectors[ count ].X = x_1;
			vectors[ count ].Y = y_1;
			vectors[ count + 1 ].X = x_2;
			vectors[ count + 1 ].Y = y_2;

			if ( filled )
			{
				for ( float X = x_1; X <= x_2; X += 1.0 )
				{
					float Y = position.Y + radius * sin( acos( ( X - position.X ) / radius ) );
					Render::Line( FVector2D( X, y_1 ), FVector2D( X, Y ), color, 1.0f );
					Render::Line( FVector2D( X, Y ), FVector2D( X, y_2 ), color, 1.0f );
				}
			}
			else
			{
				Render::Line( FVector2D( vectors[ count ].X, vectors[ count ].Y ), FVector2D( x_2, y_2 ), color, 1.0f );
			}
		}
	}
}

namespace Wrapper
{
	struct DrawListMember
	{
		int DrawType;

		FString Content;

		FVector2D PositionA, PositionB;
		FLinearColor Color;

		float Thickness;

		float Radius;
		float Segments;
		bool Filled;

		bool Outlined;
		bool Centered;
		bool IsVisualDrawing;

		bool Rounded;
	};

	int LastForegroundIndex = 0;
	DrawListMember ForegroundDrawList[ 9999 ];

	int LastDefaultIndex = 0;
	DrawListMember DefaultDrawList[ 9999 ];

	void ClearTargets( )
	{
		LastDefaultIndex = 0;
		LastForegroundIndex = 0;
	}

	void Render( )
	{
		for ( int i = 0; i < LastDefaultIndex; i++ )
		{
			DrawListMember Member = DefaultDrawList[ i ];

			if ( Member.DrawType == 1 )
			{
				Render::Line( Member.PositionA, Member.PositionB, Member.Color, Member.Thickness );
			}
			else if ( Member.DrawType == 2 )
			{
				Render::DrawRect( Member.PositionA, Member.PositionB, Member.Color, Member.Thickness );
			}
			else if ( Member.DrawType == 3 )
			{
				Render::DrawRectFilled( Member.PositionA, Member.PositionB, Member.Color );
			}
			else if ( Member.DrawType == 4 )
			{
				Render::Text( Member.Content, Member.PositionA, Member.Color, Member.Centered, false, Member.Outlined, 1.f, Member.IsVisualDrawing );
			}
			else if ( Member.DrawType == 5 )
			{
				Render::Circle( Member.PositionA, Member.Color, Member.Radius, Member.Segments, Member.Filled );
			}
		}

		for ( int i = 0; i < LastForegroundIndex; i++ )
		{
			DrawListMember Member = ForegroundDrawList[ i ];

			if ( Member.DrawType == 1 )
			{
				Render::Line( Member.PositionA, Member.PositionB, Member.Color, Member.Thickness );
			}
			else if ( Member.DrawType == 2 )
			{
				Render::DrawRect( Member.PositionA, Member.PositionB, Member.Color, Member.Thickness );
			}
			else if ( Member.DrawType == 3 )
			{
				Render::DrawRectFilled( Member.PositionA, Member.PositionB, Member.Color );
			}
			else if ( Member.DrawType == 4 )
			{
				Render::Text( Member.Content, Member.PositionA, Member.Color, Member.Centered, false, Member.Outlined, 1.f, Member.IsVisualDrawing );
			}
			else if ( Member.DrawType == 5 )
			{
				Render::Circle( Member.PositionA, Member.Color, Member.Radius, Member.Segments, Member.Filled );
			}
		}
	}

	void Line( FVector2D PositionA, FVector2D PositionB, FLinearColor RenderColor, float Thickness, bool ForceForeground = false )
	{
		DrawListMember Member;

		Member.DrawType = 1;
		Member.PositionA = PositionA;
		Member.PositionB = PositionB;
		Member.Color = RenderColor;
		Member.Thickness = Thickness;

		if ( ForceForeground )
		{
			ForegroundDrawList[ LastForegroundIndex ] = Member;
			LastForegroundIndex += 1;
		}
		else
		{
			DefaultDrawList[ LastDefaultIndex ] = Member;
			LastDefaultIndex += 1;
		}
	}

	void Rect( FVector2D PositionA, FVector2D PositionB, FLinearColor RenderColor, float Thickness, bool ForceForeground = false )
	{
		DrawListMember Member;

		Member.DrawType = 2;
		Member.PositionA = PositionA;
		Member.PositionB = PositionB;
		Member.Color = RenderColor;
		Member.Thickness = Thickness;

		if ( ForceForeground )
		{
			ForegroundDrawList[ LastForegroundIndex ] = Member;
			LastForegroundIndex += 1;
		}
		else
		{
			DefaultDrawList[ LastDefaultIndex ] = Member;
			LastDefaultIndex += 1;
		}
	}

	void RectFilled( FVector2D PositionA, FVector2D PositionB, FLinearColor RenderColor, bool ForceForeground = false )
	{
		DrawListMember Member;

		Member.DrawType = 3;
		Member.PositionA = PositionA;
		Member.PositionB = PositionB;
		Member.Color = RenderColor;

		if ( ForceForeground )
		{
			ForegroundDrawList[ LastForegroundIndex ] = Member;
			LastForegroundIndex += 1;
		}
		else
		{
			DefaultDrawList[ LastDefaultIndex ] = Member;
			LastDefaultIndex += 1;
		}
	}

	void Text( FString Content, FVector2D Position, FLinearColor RenderColor, bool Centered = false, bool Outlined = false, bool VisualDrawing = false, bool ForceForeground = false )
	{
		DrawListMember Member;

		Member.DrawType = 4;
		Member.Content = Content;
		Member.PositionA = Position;
		Member.Color = RenderColor;
		Member.Centered = Centered;
		Member.Outlined = Outlined;
		Member.IsVisualDrawing = VisualDrawing;

		if ( ForceForeground )
		{
			ForegroundDrawList[ LastForegroundIndex ] = Member;
			LastForegroundIndex += 1;
		}
		else
		{
			DefaultDrawList[ LastDefaultIndex ] = Member;
			LastDefaultIndex += 1;
		}
	}

	void Circle( FVector2D Position, FLinearColor RenderColor, float Radius, float Segments, bool Filled = false, bool ForceForeground = false )
	{
		DrawListMember Member;

		Member.DrawType = 5;
		Member.PositionA = Position;
		Member.Color = RenderColor;
		Member.Radius = Radius;
		Member.Segments = Segments;
		Member.Filled = Filled;

		if ( ForceForeground )
		{
			ForegroundDrawList[ LastForegroundIndex ] = Member;
			LastForegroundIndex += 1;
		}
		else
		{
			DefaultDrawList[ LastDefaultIndex ] = Member;
			LastDefaultIndex += 1;
		}
	}
}

namespace Radar
{
	void Range( float* X, float* Y, float range )
	{
		if ( abs( ( *X ) ) > range || abs( ( *Y ) ) > range )
		{
			if ( ( *Y ) > ( *X ) )
			{
				if ( ( *Y ) > -( *X ) )
				{
					( *X ) = range * ( *X ) / ( *Y );
					( *Y ) = range;
				}
				else
				{
					( *Y ) = -range * ( *Y ) / ( *X );
					( *X ) = -range;
				}
			}
			else
			{
				if ( ( *Y ) > -( *X ) )
				{
					( *Y ) = range * ( *Y ) / ( *X );
					( *X ) = range;
				}
				else
				{
					( *X ) = -range * ( *X ) / ( *Y );
					( *Y ) = -range;
				}
			}
		}
	}

	FVector2D RotatePoint( FVector2D radar_pos, FVector2D radar_size, FVector LocalLocation, FVector TargetLocation )
	{
		auto dx = TargetLocation.X - LocalLocation.X;
		auto dy = TargetLocation.Y - LocalLocation.Y;

		auto X = dy * -1;
		X *= -1;
		auto Y = dx * -1;

		float calcualted_range = 34 * 1000;

		Radar::Range( &X, &Y, calcualted_range );

		int rad_x = ( int )radar_pos.X;
		int rad_y = ( int )radar_pos.Y;

		float r_siz_x = radar_size.X;
		float r_siz_y = radar_size.Y;

		int x_max = ( int )r_siz_x + rad_x - 5;
		int y_max = ( int )r_siz_y + rad_y - 5;

		auto return_value = FVector2D( );

		return_value.X = rad_x + ( ( int )r_siz_x / 2 + int( X / calcualted_range * r_siz_x ) );
		return_value.Y = rad_y + ( ( int )r_siz_y / 2 + int( Y / calcualted_range * r_siz_y ) );

		if ( return_value.X > x_max )
			return_value.X = x_max;

		if ( return_value.X < rad_x )
			return_value.X = rad_x;

		if ( return_value.Y > y_max )
			return_value.Y = y_max;

		if ( return_value.Y < rad_y )
			return_value.Y = rad_y;

		return return_value;
	}

	void Add( FVector WorldLocation, FVector LocalLocation, FLinearColor Color, FVector2D RadarPos, FVector2D RadarSize, float Size )
	{
		FVector2D Projected = Radar::RotatePoint( RadarPos, RadarSize, LocalLocation, WorldLocation );

		Wrapper::Circle( Projected, Color, Size, 38, false, true );
	}
}

namespace Custom
{

}