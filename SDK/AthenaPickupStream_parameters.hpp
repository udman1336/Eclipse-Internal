#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupStream

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaPickupStream.AthenaPickupStream_C.ExecuteUbergraph_AthenaPickupStream
// 0x0048 (0x0048 - 0x0000)
struct AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMessageManager_bCreatedNew;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIMessageManager*                  CallFunc_GetMessageManager_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFortWorldItem* NewItem, int32 Count)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream) == 0x000008, "Wrong alignment on AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream");
static_assert(sizeof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream) == 0x000048, "Wrong size on AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, EntryPoint) == 0x000000, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, CallFunc_GetContext_ReturnValue1) == 0x000020, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, CallFunc_GetMessageManager_bCreatedNew) == 0x000028, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::CallFunc_GetMessageManager_bCreatedNew' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, CallFunc_GetMessageManager_ReturnValue) == 0x000030, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::CallFunc_GetMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream, K2Node_CreateDelegate_OutputDelegate1) == 0x000038, "Member 'AthenaPickupStream_C_ExecuteUbergraph_AthenaPickupStream::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");

// Function AthenaPickupStream.AthenaPickupStream_C.HandleItemPickUp
// 0x0080 (0x0080 - 0x0000)
struct AthenaPickupStream_C_HandleItemPickUp final
{
public:
	class UFortWorldItem*                         NewItem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0018)()
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIMessageItemWidget*               CallFunc_AddMessageItem_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaPickupMessageItem_C*             K2Node_DynamicCast_AsAthena_Pickup_Message_Item;   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaPickupStream_C_HandleItemPickUp) == 0x000008, "Wrong alignment on AthenaPickupStream_C_HandleItemPickUp");
static_assert(sizeof(AthenaPickupStream_C_HandleItemPickUp) == 0x000080, "Wrong size on AthenaPickupStream_C_HandleItemPickUp");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, NewItem) == 0x000000, "Member 'AthenaPickupStream_C_HandleItemPickUp::NewItem' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, Count) == 0x000008, "Member 'AthenaPickupStream_C_HandleItemPickUp::Count' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_GetType_ReturnValue) == 0x000028, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000050, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_BooleanOR_ReturnValue) == 0x000060, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, CallFunc_AddMessageItem_ReturnValue) == 0x000068, "Member 'AthenaPickupStream_C_HandleItemPickUp::CallFunc_AddMessageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, K2Node_DynamicCast_AsAthena_Pickup_Message_Item) == 0x000070, "Member 'AthenaPickupStream_C_HandleItemPickUp::K2Node_DynamicCast_AsAthena_Pickup_Message_Item' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_HandleItemPickUp, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'AthenaPickupStream_C_HandleItemPickUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AthenaPickupStream.AthenaPickupStream_C.TryGetNextItem
// 0x0038 (0x0038 - 0x0000)
struct AthenaPickupStream_C_TryGetNextItem final
{
public:
	TDelegate<void(class UFortUIMessageItemWidget* MessageItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetNumDisplayedItems_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIMessageItemWidget*               CallFunc_GetNextMessageInQueue_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaPickupStream_C_TryGetNextItem) == 0x000008, "Wrong alignment on AthenaPickupStream_C_TryGetNextItem");
static_assert(sizeof(AthenaPickupStream_C_TryGetNextItem) == 0x000038, "Wrong size on AthenaPickupStream_C_TryGetNextItem");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'AthenaPickupStream_C_TryGetNextItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, CallFunc_GetNumDisplayedItems_ReturnValue) == 0x000010, "Member 'AthenaPickupStream_C_TryGetNextItem::CallFunc_GetNumDisplayedItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, CallFunc_GetNextMessageInQueue_ReturnValue) == 0x000018, "Member 'AthenaPickupStream_C_TryGetNextItem::CallFunc_GetNextMessageInQueue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'AthenaPickupStream_C_TryGetNextItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000028, "Member 'AthenaPickupStream_C_TryGetNextItem::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPickupStream_C_TryGetNextItem, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AthenaPickupStream_C_TryGetNextItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AthenaPickupStream.AthenaPickupStream_C.HandleMessageExpired
// 0x0008 (0x0008 - 0x0000)
struct AthenaPickupStream_C_HandleMessageExpired final
{
public:
	class UFortUIMessageItemWidget*               Message_Item;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaPickupStream_C_HandleMessageExpired) == 0x000008, "Wrong alignment on AthenaPickupStream_C_HandleMessageExpired");
static_assert(sizeof(AthenaPickupStream_C_HandleMessageExpired) == 0x000008, "Wrong size on AthenaPickupStream_C_HandleMessageExpired");
static_assert(offsetof(AthenaPickupStream_C_HandleMessageExpired, Message_Item) == 0x000000, "Member 'AthenaPickupStream_C_HandleMessageExpired::Message_Item' has a wrong offset!");

}
