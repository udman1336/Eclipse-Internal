#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DatasmithContent

#include "Basic.hpp"

#include "DatasmithContent_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0020 (0x0338 - 0x0318)
class ADatasmithAreaLightActor final : public AActor
{
public:
	EDatasmithAreaLightActorShape                 LightShape;                                        // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Dimensions;                                        // 0x031C(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color;                                             // 0x0324(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DatasmithAreaLightActor">();
	}
	static class ADatasmithAreaLightActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADatasmithAreaLightActor>();
	}
};
static_assert(alignof(ADatasmithAreaLightActor) == 0x000008, "Wrong alignment on ADatasmithAreaLightActor");
static_assert(sizeof(ADatasmithAreaLightActor) == 0x000338, "Wrong size on ADatasmithAreaLightActor");
static_assert(offsetof(ADatasmithAreaLightActor, LightShape) == 0x000318, "Member 'ADatasmithAreaLightActor::LightShape' has a wrong offset!");
static_assert(offsetof(ADatasmithAreaLightActor, Dimensions) == 0x00031C, "Member 'ADatasmithAreaLightActor::Dimensions' has a wrong offset!");
static_assert(offsetof(ADatasmithAreaLightActor, Color) == 0x000324, "Member 'ADatasmithAreaLightActor::Color' has a wrong offset!");
static_assert(offsetof(ADatasmithAreaLightActor, Intensity) == 0x000334, "Member 'ADatasmithAreaLightActor::Intensity' has a wrong offset!");

}
