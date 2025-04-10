#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_ActionLogEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function IGLE_W_ActionLogEntry.IGLE_W_ActionLogEntry_C.ExecuteUbergraph_IGLE_W_ActionLogEntry
// 0x0028 (0x0028 - 0x0000)
struct IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry) == 0x000008, "Wrong alignment on IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry");
static_assert(sizeof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry) == 0x000028, "Wrong size on IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry");
static_assert(offsetof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry, EntryPoint) == 0x000000, "Member 'IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry, CallFunc_Delay_Duration_ImplicitCast) == 0x000020, "Member 'IGLE_W_ActionLogEntry_C_ExecuteUbergraph_IGLE_W_ActionLogEntry::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

