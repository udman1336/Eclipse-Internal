#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0058 (0x0370 - 0x0318)
class AFort_Entry_Music_Controller_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        MenuMusic_B;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MenuMusic_A;                                       // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Hexmap_Music;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Homebase_Music;                                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OverView_Music;                                    // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LobbyMusic;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LlamaVO;                                           // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LoginMusic;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTime;                                       // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CurrentMusic;                                      // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint);
	void Change_Music(class USoundBase* New_Music);
	void Music_Lobby_Athena_FadeIn();
	void On_Sub_Game_Changed(ESubGame SubGame);
	void Music_Heroes_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_Login_FadeIn();
	void Music_Store_CardIntro_Fadein();
	void Music_Store_FadeIn();
	void Music_Vault_FadeIn();
	void Music_WorldOverview_FadeIn();
	void ReceiveBeginPlay();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_HitLlamaAndLoop();
	void Store_Intro_Loop();
	void Store_Llama_HangingOut();
	void Store_Transition_To_Purchase();
	void UserConstructionScript();
	void VBucks_Menu_Enter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fort_Entry_Music_Controller_BP_C">();
	}
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFort_Entry_Music_Controller_BP_C>();
	}
};
static_assert(alignof(AFort_Entry_Music_Controller_BP_C) == 0x000008, "Wrong alignment on AFort_Entry_Music_Controller_BP_C");
static_assert(sizeof(AFort_Entry_Music_Controller_BP_C) == 0x000370, "Wrong size on AFort_Entry_Music_Controller_BP_C");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, UberGraphFrame) == 0x000318, "Member 'AFort_Entry_Music_Controller_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_B) == 0x000320, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_B' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_A) == 0x000328, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_A' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Hexmap_Music) == 0x000330, "Member 'AFort_Entry_Music_Controller_BP_C::Hexmap_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Homebase_Music) == 0x000338, "Member 'AFort_Entry_Music_Controller_BP_C::Homebase_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, OverView_Music) == 0x000340, "Member 'AFort_Entry_Music_Controller_BP_C::OverView_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LobbyMusic) == 0x000348, "Member 'AFort_Entry_Music_Controller_BP_C::LobbyMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LlamaVO) == 0x000350, "Member 'AFort_Entry_Music_Controller_BP_C::LlamaVO' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LoginMusic) == 0x000358, "Member 'AFort_Entry_Music_Controller_BP_C::LoginMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, FadeOutTime) == 0x000360, "Member 'AFort_Entry_Music_Controller_BP_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, CurrentMusic) == 0x000368, "Member 'AFort_Entry_Music_Controller_BP_C::CurrentMusic' has a wrong offset!");

}
