#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinderListItem_New

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyFinderListItem_New.PartyFinderListItem_New_C
// 0x01C8 (0x09E8 - 0x0820)
class UPartyFinderListItem_New_C final : public UFortPartyTreeItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0820(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered_FriendItem_Reverse;                        // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered_PartyInvite_Reverse;                       // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered_FriendItem;                                // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered_PartyInvite;                               // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0848(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_PartyIconsDisplay_C*            Athena_PartyIconsDisplay;                          // 0x0850(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_ButtonZone;                                      // 0x0858(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x0860(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0868(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DisplayFriendsButton;                              // 0x0870(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                FriendItem_Border;                                 // 0x0878(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_ButtonContainer;                                // 0x0880(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Header;                                            // 0x0888(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0890(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x0898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Platform;                                    // 0x08A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Location;                                          // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyFinder_ListItem_ButtonOptions_C*  PartyFinder_ListItem_Invite;                       // 0x08B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PlayerHeaderSwitcher;                              // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlayerStatus;                                      // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextState;                                         // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   InviteJoinChanged;                                 // 0x08E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAbleToBeInvited;                                  // 0x08F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1[0x7];                                      // 0x08F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_FriendListBorder;                              // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MID_Param_TopGradient_R;                           // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      M_FriendItem_Border;                               // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      M_InviteItem_Border;                               // 0x0910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPreviewInvite;                                    // 0x0918(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_919[0x7];                                      // 0x0919(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          ClickedInviteButton;                               // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0928(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_929[0x7];                                      // 0x0929(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            ConfirmSlateBrush;                                 // 0x0930(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   RequestClosePartyFinder;                           // 0x09B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsConsolePlatform;                                // 0x09C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9[0x7];                                      // 0x09C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SoftInviteDisableTimer;                            // 0x09D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstance*                      M_FriendItem_XboxBorder;                           // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      M_FriendItem_XboxButtonZone;                       // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PartyFinderListItem_New(int32 EntryPoint);
	void BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ReEnableSTWInvite();
	void STWInviteClicked(class UCommonButton* Button);
	void OnJoinPartyClicked(class UCommonButton* Button);
	void OnUnhovered();
	void OnHovered();
	void SetSelected(bool bSelected);
	void ReEnableInviteButtonAfterDelay();
	void OnAcceptPartyInviteClicked(class UCommonButton* Button);
	void OnInviteToPartyClicked(class UCommonButton* Button);
	void OnIgnoreInviteClicked(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Construct();
	void ExpansionChanged(bool bExpanded);
	void OnSocialItemSet();
	void DialogResult_58DE7379408F85443A0936A25405A46F(EFortDialogResult Result, class FName ResultName);
	void InitializeItem();
	void BindSocialItemDelegates();
	void HandlePresenceUpdated();
	void SetupExpansion(bool Expanded);
	void UpdateStateText();
	void UnbindSocialItemDelegates();
	void SetupButtonBindingsForFriendItem();
	void SetupButtonBindingsForPartyInvite();
	void SetupButtonChoices(bool bIsInvite);
	void UnbindAllButtons();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyFinderListItem_New_C">();
	}
	static class UPartyFinderListItem_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyFinderListItem_New_C>();
	}
};
static_assert(alignof(UPartyFinderListItem_New_C) == 0x000008, "Wrong alignment on UPartyFinderListItem_New_C");
static_assert(sizeof(UPartyFinderListItem_New_C) == 0x0009E8, "Wrong size on UPartyFinderListItem_New_C");
static_assert(offsetof(UPartyFinderListItem_New_C, UberGraphFrame) == 0x000820, "Member 'UPartyFinderListItem_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Hovered_FriendItem_Reverse) == 0x000828, "Member 'UPartyFinderListItem_New_C::Hovered_FriendItem_Reverse' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Hovered_PartyInvite_Reverse) == 0x000830, "Member 'UPartyFinderListItem_New_C::Hovered_PartyInvite_Reverse' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Hovered_FriendItem) == 0x000838, "Member 'UPartyFinderListItem_New_C::Hovered_FriendItem' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Hovered_PartyInvite) == 0x000840, "Member 'UPartyFinderListItem_New_C::Hovered_PartyInvite' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Arrow) == 0x000848, "Member 'UPartyFinderListItem_New_C::Arrow' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Athena_PartyIconsDisplay) == 0x000850, "Member 'UPartyFinderListItem_New_C::Athena_PartyIconsDisplay' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, B_ButtonZone) == 0x000858, "Member 'UPartyFinderListItem_New_C::B_ButtonZone' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Border_0) == 0x000860, "Member 'UPartyFinderListItem_New_C::Border_0' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, CommonTextBlock_0) == 0x000868, "Member 'UPartyFinderListItem_New_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, DisplayFriendsButton) == 0x000870, "Member 'UPartyFinderListItem_New_C::DisplayFriendsButton' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, FriendItem_Border) == 0x000878, "Member 'UPartyFinderListItem_New_C::FriendItem_Border' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, HB_ButtonContainer) == 0x000880, "Member 'UPartyFinderListItem_New_C::HB_ButtonContainer' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Header) == 0x000888, "Member 'UPartyFinderListItem_New_C::Header' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, HeaderText) == 0x000890, "Member 'UPartyFinderListItem_New_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, HorizontalBox_3) == 0x000898, "Member 'UPartyFinderListItem_New_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Image_Platform) == 0x0008A0, "Member 'UPartyFinderListItem_New_C::Image_Platform' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, Location) == 0x0008A8, "Member 'UPartyFinderListItem_New_C::Location' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, PartyFinder_ListItem_Invite) == 0x0008B0, "Member 'UPartyFinderListItem_New_C::PartyFinder_ListItem_Invite' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, PlayerBanner) == 0x0008B8, "Member 'UPartyFinderListItem_New_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, PlayerHeaderSwitcher) == 0x0008C0, "Member 'UPartyFinderListItem_New_C::PlayerHeaderSwitcher' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, PlayerName) == 0x0008C8, "Member 'UPartyFinderListItem_New_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, PlayerStatus) == 0x0008D0, "Member 'UPartyFinderListItem_New_C::PlayerStatus' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, TextState) == 0x0008D8, "Member 'UPartyFinderListItem_New_C::TextState' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, InviteJoinChanged) == 0x0008E0, "Member 'UPartyFinderListItem_New_C::InviteJoinChanged' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, bAbleToBeInvited) == 0x0008F0, "Member 'UPartyFinderListItem_New_C::bAbleToBeInvited' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, MID_FriendListBorder) == 0x0008F8, "Member 'UPartyFinderListItem_New_C::MID_FriendListBorder' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, MID_Param_TopGradient_R) == 0x000900, "Member 'UPartyFinderListItem_New_C::MID_Param_TopGradient_R' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, M_FriendItem_Border) == 0x000908, "Member 'UPartyFinderListItem_New_C::M_FriendItem_Border' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, M_InviteItem_Border) == 0x000910, "Member 'UPartyFinderListItem_New_C::M_InviteItem_Border' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, bPreviewInvite) == 0x000918, "Member 'UPartyFinderListItem_New_C::bPreviewInvite' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, ClickedInviteButton) == 0x000920, "Member 'UPartyFinderListItem_New_C::ClickedInviteButton' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, bIsHovered) == 0x000928, "Member 'UPartyFinderListItem_New_C::bIsHovered' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, ConfirmSlateBrush) == 0x000930, "Member 'UPartyFinderListItem_New_C::ConfirmSlateBrush' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, RequestClosePartyFinder) == 0x0009B8, "Member 'UPartyFinderListItem_New_C::RequestClosePartyFinder' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, bIsConsolePlatform) == 0x0009C8, "Member 'UPartyFinderListItem_New_C::bIsConsolePlatform' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, SoftInviteDisableTimer) == 0x0009D0, "Member 'UPartyFinderListItem_New_C::SoftInviteDisableTimer' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, M_FriendItem_XboxBorder) == 0x0009D8, "Member 'UPartyFinderListItem_New_C::M_FriendItem_XboxBorder' has a wrong offset!");
static_assert(offsetof(UPartyFinderListItem_New_C, M_FriendItem_XboxButtonZone) == 0x0009E0, "Member 'UPartyFinderListItem_New_C::M_FriendItem_XboxButtonZone' has a wrong offset!");

}
