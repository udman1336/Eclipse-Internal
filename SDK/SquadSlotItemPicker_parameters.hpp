#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotItemPicker

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
// 0x0170 (0x0170 - 0x0000)
struct SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotSortType                            K2Node_CustomEvent_CurrentSortType;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotType                                K2Node_CustomEvent_NewParam;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotSortType                            Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable12;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable123;                             // 0x0050(0x0018)()
	ESquadSlotType                                Temp_byte_Variable1;                               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable1234;                            // 0x0070(0x0018)()
	class FText                                   Temp_text_Variable12345;                           // 0x0088(0x0018)()
	class FText                                   Temp_text_Variable123456;                          // 0x00A0(0x0018)()
	class FText                                   Temp_text_Variable1234567;                         // 0x00B8(0x0018)()
	class FText                                   Temp_text_Variable12345678;                        // 0x00D0(0x0018)()
	class FText                                   Temp_text_Variable123456789;                       // 0x00E8(0x0018)()
	class FText                                   Temp_text_Variable12345678910;                     // 0x0100(0x0018)()
	class FText                                   Temp_text_Variable1234567891011;                   // 0x0118(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0130(0x0018)()
	class FText                                   K2Node_Select1_Default;                            // 0x0148(0x0018)()
	TDelegate<void(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker) == 0x000008, "Wrong alignment on SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker");
static_assert(sizeof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker) == 0x000170, "Wrong size on SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, EntryPoint) == 0x000000, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CustomEvent_CurrentSortType) == 0x000004, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CustomEvent_CurrentSortType' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CustomEvent_NewParam) == 0x000005, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_byte_Variable) == 0x000006, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable) == 0x000008, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable1) == 0x000020, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable12) == 0x000038, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable12' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable123) == 0x000050, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable123' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_byte_Variable1) == 0x000068, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable1234) == 0x000070, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable1234' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable12345) == 0x000088, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable12345' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable123456) == 0x0000A0, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable123456' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable1234567) == 0x0000B8, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable1234567' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable12345678) == 0x0000D0, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable12345678' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable123456789) == 0x0000E8, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable123456789' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable12345678910) == 0x000100, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable12345678910' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable1234567891011) == 0x000118, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable1234567891011' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_Select_Default) == 0x000130, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_Select1_Default) == 0x000148, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CreateDelegate_OutputDelegate) == 0x000160, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
// 0x0002 (0x0002 - 0x0000)
struct SquadSlotItemPicker_C_HandleSortChanged final
{
public:
	ESquadSlotSortType                            CurrentSortType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotType                                NewParam;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadSlotItemPicker_C_HandleSortChanged) == 0x000001, "Wrong alignment on SquadSlotItemPicker_C_HandleSortChanged");
static_assert(sizeof(SquadSlotItemPicker_C_HandleSortChanged) == 0x000002, "Wrong size on SquadSlotItemPicker_C_HandleSortChanged");
static_assert(offsetof(SquadSlotItemPicker_C_HandleSortChanged, CurrentSortType) == 0x000000, "Member 'SquadSlotItemPicker_C_HandleSortChanged::CurrentSortType' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_HandleSortChanged, NewParam) == 0x000001, "Member 'SquadSlotItemPicker_C_HandleSortChanged::NewParam' has a wrong offset!");

}
