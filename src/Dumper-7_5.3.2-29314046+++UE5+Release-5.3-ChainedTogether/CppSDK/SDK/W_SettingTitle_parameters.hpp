#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingTitle

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_SettingTitle.W_SettingTitle_C.ExecuteUbergraph_W_SettingTitle
// 0x0020 (0x0020 - 0x0000)
struct W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
};
static_assert(alignof(W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle) == 0x000008, "Wrong alignment on W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle");
static_assert(sizeof(W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle) == 0x000020, "Wrong size on W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle");
static_assert(offsetof(W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle, EntryPoint) == 0x000000, "Member 'W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle, K2Node_CustomEvent_InText) == 0x000008, "Member 'W_SettingTitle_C_ExecuteUbergraph_W_SettingTitle::K2Node_CustomEvent_InText' has a wrong offset!");

// Function W_SettingTitle.W_SettingTitle_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct W_SettingTitle_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_SettingTitle_C_SetText) == 0x000008, "Wrong alignment on W_SettingTitle_C_SetText");
static_assert(sizeof(W_SettingTitle_C_SetText) == 0x000018, "Wrong size on W_SettingTitle_C_SetText");
static_assert(offsetof(W_SettingTitle_C_SetText, InText) == 0x000000, "Member 'W_SettingTitle_C_SetText::InText' has a wrong offset!");

}

