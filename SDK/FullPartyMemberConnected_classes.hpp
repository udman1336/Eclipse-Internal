#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyMemberConnected

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FullPartyMemberConnected.FullPartyMemberConnected_C
// 0x0240 (0x0458 - 0x0218)
class UFullPartyMemberConnected_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               CONNECTED;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_112;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeaderImageOverlay;                                // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner_118;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                PlayerHBRating;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerNameNonParty;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0258(0x01F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                              Dimensions;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FullPartyMemberConnected(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo);
	void UpdateDimensions(const struct FVector2D& NewDimensions);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FullPartyMemberConnected_C">();
	}
	static class UFullPartyMemberConnected_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFullPartyMemberConnected_C>();
	}
};
static_assert(alignof(UFullPartyMemberConnected_C) == 0x000008, "Wrong alignment on UFullPartyMemberConnected_C");
static_assert(sizeof(UFullPartyMemberConnected_C) == 0x000458, "Wrong size on UFullPartyMemberConnected_C");
static_assert(offsetof(UFullPartyMemberConnected_C, UberGraphFrame) == 0x000218, "Member 'UFullPartyMemberConnected_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, CONNECTED) == 0x000220, "Member 'UFullPartyMemberConnected_C::CONNECTED' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, Image_112) == 0x000228, "Member 'UFullPartyMemberConnected_C::Image_112' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, LeaderImageOverlay) == 0x000230, "Member 'UFullPartyMemberConnected_C::LeaderImageOverlay' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, PlayerBanner_118) == 0x000238, "Member 'UFullPartyMemberConnected_C::PlayerBanner_118' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, PlayerHBRating) == 0x000240, "Member 'UFullPartyMemberConnected_C::PlayerHBRating' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, PlayerName) == 0x000248, "Member 'UFullPartyMemberConnected_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, PlayerNameNonParty) == 0x000250, "Member 'UFullPartyMemberConnected_C::PlayerNameNonParty' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, MemberInfo) == 0x000258, "Member 'UFullPartyMemberConnected_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UFullPartyMemberConnected_C, Dimensions) == 0x000450, "Member 'UFullPartyMemberConnected_C::Dimensions' has a wrong offset!");

}
