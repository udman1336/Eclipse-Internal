#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeTierResultsWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C
// 0x0060 (0x02A8 - 0x0248)
class UHordeTierResultsWidget_C final : public UFortActionHandlerPanel
{
public:
	class UMovieWidget_C*                         Movie;                                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_NameplateWidget_C*             ResultsNameplate;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnTierResultsWidgetComplete;                       // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EFortCompletionResult                         CompletionResult;                                  // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           DefaultDefeatMedia;                                // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           DefaultVictoryMedia;                               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             VictorySound;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DefeatSound;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovieTextDelay;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NameplateIntroFunctionName;                        // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void InitializeMovie();
	void Initialize(EFortCompletionResult Result);
	void ChooseMediaToUse(class UMediaSource** MediaToUse);
	void OnEndOfMovieReached();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HordeTierResultsWidget_C">();
	}
	static class UHordeTierResultsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHordeTierResultsWidget_C>();
	}
};
static_assert(alignof(UHordeTierResultsWidget_C) == 0x000008, "Wrong alignment on UHordeTierResultsWidget_C");
static_assert(sizeof(UHordeTierResultsWidget_C) == 0x0002A8, "Wrong size on UHordeTierResultsWidget_C");
static_assert(offsetof(UHordeTierResultsWidget_C, Movie) == 0x000248, "Member 'UHordeTierResultsWidget_C::Movie' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, ResultsNameplate) == 0x000250, "Member 'UHordeTierResultsWidget_C::ResultsNameplate' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, OnTierResultsWidgetComplete) == 0x000258, "Member 'UHordeTierResultsWidget_C::OnTierResultsWidgetComplete' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, CompletionResult) == 0x000268, "Member 'UHordeTierResultsWidget_C::CompletionResult' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, DefaultDefeatMedia) == 0x000270, "Member 'UHordeTierResultsWidget_C::DefaultDefeatMedia' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, DefaultVictoryMedia) == 0x000278, "Member 'UHordeTierResultsWidget_C::DefaultVictoryMedia' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, VictorySound) == 0x000280, "Member 'UHordeTierResultsWidget_C::VictorySound' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, DefeatSound) == 0x000288, "Member 'UHordeTierResultsWidget_C::DefeatSound' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, MovieTextDelay) == 0x000290, "Member 'UHordeTierResultsWidget_C::MovieTextDelay' has a wrong offset!");
static_assert(offsetof(UHordeTierResultsWidget_C, NameplateIntroFunctionName) == 0x000298, "Member 'UHordeTierResultsWidget_C::NameplateIntroFunctionName' has a wrong offset!");

}
