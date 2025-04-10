#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EndScreen

#include "Basic.hpp"

#include "E_Gamemodes_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_EndScreen.W_EndScreen_C
// 0x0038 (0x02F8 - 0x02C0)
class UW_EndScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_279;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_283;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Time;                                              // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Players_Numer_at_End;                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Gamemodes                                   Selected_Game_Mode;                                // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_EndScreen(int32 EntryPoint);
	void OnCallback_C40E329846C5390DF3526BB1AC51162A(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	void OnCallback_D4619B5E464DD7DF58786BBF440CCADD(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
	void OnCallback_D5E80CEA418652AD060EBBB524E09932(const struct FRequestCurrentStatsData& Data, bool bWasSuccessful);
	void OnCallback_D5E80CEA418652AD060EBBB55455A8C4(const struct FRequestCurrentStatsData& Data, bool bWasSuccessful);
	void RefreshTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_EndScreen_C">();
	}
	static class UW_EndScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_EndScreen_C>();
	}
};
static_assert(alignof(UW_EndScreen_C) == 0x000008, "Wrong alignment on UW_EndScreen_C");
static_assert(sizeof(UW_EndScreen_C) == 0x0002F8, "Wrong size on UW_EndScreen_C");
static_assert(offsetof(UW_EndScreen_C, UberGraphFrame) == 0x0002C0, "Member 'UW_EndScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, NewAnimation) == 0x0002C8, "Member 'UW_EndScreen_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, Button_279) == 0x0002D0, "Member 'UW_EndScreen_C::Button_279' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, TextBlock) == 0x0002D8, "Member 'UW_EndScreen_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, TextBlock_283) == 0x0002E0, "Member 'UW_EndScreen_C::TextBlock_283' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, Time) == 0x0002E8, "Member 'UW_EndScreen_C::Time' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, Players_Numer_at_End) == 0x0002EC, "Member 'UW_EndScreen_C::Players_Numer_at_End' has a wrong offset!");
static_assert(offsetof(UW_EndScreen_C, Selected_Game_Mode) == 0x0002F0, "Member 'UW_EndScreen_C::Selected_Game_Mode' has a wrong offset!");

}

