#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyCharacterPlacementHelper

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
// 0x0160 (0x0478 - 0x0318)
class APartyCharacterPlacementHelper_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_FE_Smoke;                                        // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lobby_Character_TopSpot;                        // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerPadBottom;                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerAddPlayer;                              // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerPadTop;                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       LobbyPlayerPadGadgets;                             // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   UnderlightBluePoint02;                             // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   UnderlightBluePoint01;                             // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    UnderlightBlue02;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    UnderlightBlue01;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimSpotLight;                                      // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    TopSpotLight;                                      // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LightsParent;                                      // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Sparkle;                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Swirl02;                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_NoPlayer_Swirl01;                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad_Light_Ring;                 // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lobby_Character_Pad;                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterPlacement;                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerID;                                          // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewMesh;                                       // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C5[0x3];                                      // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayerSelected;                                 // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayerOnPad;                                       // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Pad;                                           // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugFakePlayer;                                   // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x3];                                      // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugFakePlayerID_;                                // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Debug_OnFriendLFGRequest;                          // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PlayerBeingRemoved;                                // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               OverlayEmptySpot;                                  // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               OverlayInputAction;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadTop_C*                   Top;                                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadGadgets_C*               Gadgets;                                           // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerAddPlayer_C*                PlayerAdd;                                         // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        LastAnimatedPlayerPawn;                            // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadBottom_C*                BattlePassWidget;                                  // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthena_PartySuggestion_C*              UI_PartySuggestion;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowPartySuggestions;                            // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetLobbyAddPlayer;                              // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerPodiumHovered;                              // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Pad_Light_Ring;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Top_Light_Ring;                                // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FxActive;                                          // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthena_PartySuggestion_TempFix_C*      UIPartySuggestionXboxTempFix;                      // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableXboxPartySuggestionFix;                      // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint);
	void OnHotfixApplied();
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnLobbyPlayerHovered(int32 PlayerIndex);
	void OnLobbyPlayerSelected(int32 PlayerIndex);
	void OnLobbyPlayerUnselected(int32 PlayerIndex);
	void InitializeContextEvents();
	void Initialize();
	void InitializePadUI();
	void OnLobbyStarted();
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 TeamMemberRemovedInt);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex);
	void InitializeWidgets();
	void RefreshWidgets();
	void OnLobbyDisconnected();
	void PlayLobbyAnimation(int32 PartyMemberIndex);
	void IsInLobby(bool* IsInLobby_0);
	void CompletedQuestPrerequisites(bool* bCompleted);
	void OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo);
	void Refresh_Lights(const struct FFortTeamMemberInfo& Team_Info);
	void OnPartySuggestionAdded(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion);
	void OnPartySuggestionUpdated(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion);
	void OnPartySuggestionRemoved(int32 SlotIndex);
	void OnPartySuggestionChanged(int32 SlotIndex, struct FFortPartySuggestion& FortPartySuggestion);
	void OnPartySuggestionAccept(int32 PlayerID_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyCharacterPlacementHelper_C">();
	}
	static class APartyCharacterPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APartyCharacterPlacementHelper_C>();
	}
};
static_assert(alignof(APartyCharacterPlacementHelper_C) == 0x000008, "Wrong alignment on APartyCharacterPlacementHelper_C");
static_assert(sizeof(APartyCharacterPlacementHelper_C) == 0x000478, "Wrong size on APartyCharacterPlacementHelper_C");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UberGraphFrame) == 0x000318, "Member 'APartyCharacterPlacementHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, P_FE_Smoke) == 0x000320, "Member 'APartyCharacterPlacementHelper_C::P_FE_Smoke' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, SM_Lobby_Character_TopSpot) == 0x000328, "Member 'APartyCharacterPlacementHelper_C::SM_Lobby_Character_TopSpot' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LobbyPlayerPadBottom) == 0x000330, "Member 'APartyCharacterPlacementHelper_C::LobbyPlayerPadBottom' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LobbyPlayerAddPlayer) == 0x000338, "Member 'APartyCharacterPlacementHelper_C::LobbyPlayerAddPlayer' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LobbyPlayerPadTop) == 0x000340, "Member 'APartyCharacterPlacementHelper_C::LobbyPlayerPadTop' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LobbyPlayerPadGadgets) == 0x000348, "Member 'APartyCharacterPlacementHelper_C::LobbyPlayerPadGadgets' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UnderlightBluePoint02) == 0x000350, "Member 'APartyCharacterPlacementHelper_C::UnderlightBluePoint02' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UnderlightBluePoint01) == 0x000358, "Member 'APartyCharacterPlacementHelper_C::UnderlightBluePoint01' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UnderlightBlue02) == 0x000360, "Member 'APartyCharacterPlacementHelper_C::UnderlightBlue02' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UnderlightBlue01) == 0x000368, "Member 'APartyCharacterPlacementHelper_C::UnderlightBlue01' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, RimSpotLight) == 0x000370, "Member 'APartyCharacterPlacementHelper_C::RimSpotLight' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, TopSpotLight) == 0x000378, "Member 'APartyCharacterPlacementHelper_C::TopSpotLight' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LightsParent) == 0x000380, "Member 'APartyCharacterPlacementHelper_C::LightsParent' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PS_NoPlayer_Sparkle) == 0x000388, "Member 'APartyCharacterPlacementHelper_C::PS_NoPlayer_Sparkle' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PS_NoPlayer_Swirl02) == 0x000390, "Member 'APartyCharacterPlacementHelper_C::PS_NoPlayer_Swirl02' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PS_NoPlayer_Swirl01) == 0x000398, "Member 'APartyCharacterPlacementHelper_C::PS_NoPlayer_Swirl01' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, SM_Lobby_Character_Pad_Light_Ring) == 0x0003A0, "Member 'APartyCharacterPlacementHelper_C::SM_Lobby_Character_Pad_Light_Ring' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, SM_Lobby_Character_Pad) == 0x0003A8, "Member 'APartyCharacterPlacementHelper_C::SM_Lobby_Character_Pad' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, CharacterPlacement) == 0x0003B0, "Member 'APartyCharacterPlacementHelper_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, Root) == 0x0003B8, "Member 'APartyCharacterPlacementHelper_C::Root' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PlayerID) == 0x0003C0, "Member 'APartyCharacterPlacementHelper_C::PlayerID' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PreviewMesh) == 0x0003C4, "Member 'APartyCharacterPlacementHelper_C::PreviewMesh' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, Mesh) == 0x0003C8, "Member 'APartyCharacterPlacementHelper_C::Mesh' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, bIsPlayerSelected) == 0x0003D0, "Member 'APartyCharacterPlacementHelper_C::bIsPlayerSelected' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PlayerOnPad) == 0x0003D1, "Member 'APartyCharacterPlacementHelper_C::PlayerOnPad' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, MID_Pad) == 0x0003D8, "Member 'APartyCharacterPlacementHelper_C::MID_Pad' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, DebugFakePlayer) == 0x0003E0, "Member 'APartyCharacterPlacementHelper_C::DebugFakePlayer' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, DebugFakePlayerID_) == 0x0003E4, "Member 'APartyCharacterPlacementHelper_C::DebugFakePlayerID_' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, Debug_OnFriendLFGRequest) == 0x0003E8, "Member 'APartyCharacterPlacementHelper_C::Debug_OnFriendLFGRequest' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PlayerBeingRemoved) == 0x0003F8, "Member 'APartyCharacterPlacementHelper_C::PlayerBeingRemoved' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, OverlayEmptySpot) == 0x000400, "Member 'APartyCharacterPlacementHelper_C::OverlayEmptySpot' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, OverlayInputAction) == 0x000408, "Member 'APartyCharacterPlacementHelper_C::OverlayInputAction' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, Top) == 0x000410, "Member 'APartyCharacterPlacementHelper_C::Top' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, Gadgets) == 0x000418, "Member 'APartyCharacterPlacementHelper_C::Gadgets' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, PlayerAdd) == 0x000420, "Member 'APartyCharacterPlacementHelper_C::PlayerAdd' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, LastAnimatedPlayerPawn) == 0x000428, "Member 'APartyCharacterPlacementHelper_C::LastAnimatedPlayerPawn' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, BattlePassWidget) == 0x000430, "Member 'APartyCharacterPlacementHelper_C::BattlePassWidget' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UI_PartySuggestion) == 0x000438, "Member 'APartyCharacterPlacementHelper_C::UI_PartySuggestion' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, bAllowPartySuggestions) == 0x000440, "Member 'APartyCharacterPlacementHelper_C::bAllowPartySuggestions' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, OffsetLobbyAddPlayer) == 0x000444, "Member 'APartyCharacterPlacementHelper_C::OffsetLobbyAddPlayer' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, bPlayerPodiumHovered) == 0x000448, "Member 'APartyCharacterPlacementHelper_C::bPlayerPodiumHovered' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, MID_Pad_Light_Ring) == 0x000450, "Member 'APartyCharacterPlacementHelper_C::MID_Pad_Light_Ring' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, MID_Top_Light_Ring) == 0x000458, "Member 'APartyCharacterPlacementHelper_C::MID_Top_Light_Ring' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, FxActive) == 0x000460, "Member 'APartyCharacterPlacementHelper_C::FxActive' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, UIPartySuggestionXboxTempFix) == 0x000468, "Member 'APartyCharacterPlacementHelper_C::UIPartySuggestionXboxTempFix' has a wrong offset!");
static_assert(offsetof(APartyCharacterPlacementHelper_C, EnableXboxPartySuggestionFix) == 0x000470, "Member 'APartyCharacterPlacementHelper_C::EnableXboxPartySuggestionFix' has a wrong offset!");

}
