#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic_TeamMics

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
// 0x0004 (0x0004 - 0x0000)
struct Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong alignment on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(sizeof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong size on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(offsetof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics, EntryPoint) == 0x000000, "Member 'Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics::EntryPoint' has a wrong offset!");

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
// 0x0268 (0x0268 - 0x0000)
struct Cinematic_TeamMics_C_Update final
{
public:
	struct FFortTeamMemberInfo                    UpdatedMemberInfo;                                 // 0x0000(0x01F8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x01F8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_225[0x3];                                      // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_232[0x2];                                      // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select1_Default;                            // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidNetID_ReturnValue;                 // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_Select12_Default;                           // 0x0240(0x0028)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_TeamMics_C_Update) == 0x000008, "Wrong alignment on Cinematic_TeamMics_C_Update");
static_assert(sizeof(Cinematic_TeamMics_C_Update) == 0x000268, "Wrong size on Cinematic_TeamMics_C_Update");
static_assert(offsetof(Cinematic_TeamMics_C_Update, UpdatedMemberInfo) == 0x000000, "Member 'Cinematic_TeamMics_C_Update::UpdatedMemberInfo' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, PlayerNetId) == 0x0001F8, "Member 'Cinematic_TeamMics_C_Update::PlayerNetId' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable) == 0x000220, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable1) == 0x000221, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable) == 0x000222, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable1) == 0x000223, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable12) == 0x000224, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable) == 0x000228, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable1) == 0x00022C, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsValid_ReturnValue) == 0x000230, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select_Default) == 0x000231, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select1_Default) == 0x000234, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsValidNetID_ReturnValue) == 0x000238, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsValidNetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select12_Default) == 0x000240, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select12_Default' has a wrong offset!");

}
