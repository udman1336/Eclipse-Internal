#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby

#include "Basic.hpp"

#include "Lobby_structs.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Lobby.LobbyBeaconClient
// 0x01A8 (0x0570 - 0x03C8)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                      LobbyState;                                        // 0x03C8(0x0008)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                PlayerState;                                       // 0x03D0(0x0008)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D8[0x1];                                      // 0x03D8(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	ELobbyBeaconJoinState                         LobbyJoinServerState;                              // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3DA[0x196];                                    // 0x03DA(0x0196)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientAckJoiningServer();
	void ClientJoinGame();
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientWasKicked(const class FText& KickReason);
	void ServerCheat(const class FString& Msg);
	void ServerDisconnectFromLobby();
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
	void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerNotifyJoiningServer();
	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconClient">();
	}
	static class ALobbyBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconClient>();
	}
};
static_assert(alignof(ALobbyBeaconClient) == 0x000008, "Wrong alignment on ALobbyBeaconClient");
static_assert(sizeof(ALobbyBeaconClient) == 0x000570, "Wrong size on ALobbyBeaconClient");
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x0003C8, "Member 'ALobbyBeaconClient::LobbyState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x0003D0, "Member 'ALobbyBeaconClient::PlayerState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x0003D9, "Member 'ALobbyBeaconClient::LobbyJoinServerState' has a wrong offset!");

// Class Lobby.LobbyBeaconHost
// 0x0038 (0x0378 - 0x0340)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_340[0x8];                                      // 0x0340(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   LobbyStateClass;                                   // 0x0348(0x0028)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                      LobbyState;                                        // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconHost">();
	}
	static class ALobbyBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconHost>();
	}
};
static_assert(alignof(ALobbyBeaconHost) == 0x000008, "Wrong alignment on ALobbyBeaconHost");
static_assert(sizeof(ALobbyBeaconHost) == 0x000378, "Wrong size on ALobbyBeaconHost");
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x000348, "Member 'ALobbyBeaconHost::LobbyStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x000370, "Member 'ALobbyBeaconHost::LobbyState' has a wrong offset!");

// Class Lobby.LobbyBeaconPlayerState
// 0x0158 (0x0470 - 0x0318)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                   DisplayName;                                       // 0x0318(0x0018)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0330(0x0028)(Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       PartyOwnerUniqueId;                                // 0x0358(0x0028)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInLobby;                                          // 0x0380(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AOnlineBeaconClient*                    ClientActor;                                       // 0x0388(0x0008)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_390[0xE0];                                     // 0x0390(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_InLobby();
	void OnRep_PartyOwner();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconPlayerState">();
	}
	static class ALobbyBeaconPlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconPlayerState>();
	}
};
static_assert(alignof(ALobbyBeaconPlayerState) == 0x000008, "Wrong alignment on ALobbyBeaconPlayerState");
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x000470, "Wrong size on ALobbyBeaconPlayerState");
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x000318, "Member 'ALobbyBeaconPlayerState::DisplayName' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x000330, "Member 'ALobbyBeaconPlayerState::UniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x000358, "Member 'ALobbyBeaconPlayerState::PartyOwnerUniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, bInLobby) == 0x000380, "Member 'ALobbyBeaconPlayerState::bInLobby' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x000388, "Member 'ALobbyBeaconPlayerState::ClientActor' has a wrong offset!");

// Class Lobby.LobbyBeaconState
// 0x02B0 (0x05C8 - 0x0318)
#pragma pack(push, 0x1)
class alignas(0x08) ALobbyBeaconState : public AInfo
{
public:
	int32                                         MaxPlayers;                                        // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ALobbyBeaconPlayerState>    LobbyBeaconPlayerStateClass;                       // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLobbyStarted;                                     // 0x0330(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_331[0x3];                                      // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaitForPlayersTimeRemaining;                       // 0x0334(0x0004)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray             Players;                                           // 0x0338(0x00C8)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_400[0x1C8];                                    // 0x0400(0x01C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_LobbyStarted();
	void OnRep_WaitForPlayersTimeRemaining();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconState">();
	}
	static class ALobbyBeaconState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconState>();
	}
};
#pragma pack(pop)
static_assert(alignof(ALobbyBeaconState) == 0x000008, "Wrong alignment on ALobbyBeaconState");
static_assert(sizeof(ALobbyBeaconState) == 0x0005C8, "Wrong size on ALobbyBeaconState");
static_assert(offsetof(ALobbyBeaconState, MaxPlayers) == 0x000318, "Member 'ALobbyBeaconState::MaxPlayers' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x000320, "Member 'ALobbyBeaconState::LobbyBeaconPlayerStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, bLobbyStarted) == 0x000330, "Member 'ALobbyBeaconState::bLobbyStarted' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, WaitForPlayersTimeRemaining) == 0x000334, "Member 'ALobbyBeaconState::WaitForPlayersTimeRemaining' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, Players) == 0x000338, "Member 'ALobbyBeaconState::Players' has a wrong offset!");

}
