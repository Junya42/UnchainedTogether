#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoloPlay_W

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SoloPlay_W.SoloPlay_W_C
// 0x0098 (0x0358 - 0x02C0)
class USoloPlay_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Back_Button;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrowseUGCLevel_W_C*                    BrowseUGCLevel_W;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ChooseSave;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_NotUseSave;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClickSaveText;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Play_Button;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    Quit_1;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SaveBox;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    TextBlock_81;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          W_ComboBox_2;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SaveText_C*                          W_SaveText;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           WorkshopBox;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UGC_Title;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 UGC_ID;                                            // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__SoloPlay_W_Back_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SoloPlay_W_Play_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SoloPlay_W_W_ComboBox_2_K2Node_ComponentBoundEvent_11_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_CreateSession_Button_147_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_CreateSession_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void DeselectAllUGC();
	void ExecuteUbergraph_SoloPlay_W(int32 EntryPoint);
	void GetSelectedUGC(bool* UGCSelected, struct FSteamUGCDetails* Details);
	void IsAModSelected(bool* Selected);
	void OnDownloaded_Event(bool Success);
	void RefreshGamemodeVisibility();
	void RefreshSave(const struct FS_BiomeSave& Save);
	void Update_Game_Mode(const class FString& Selection);
	void Update_UGC_References(bool* UGC_Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoloPlay_W_C">();
	}
	static class USoloPlay_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoloPlay_W_C>();
	}
};
static_assert(alignof(USoloPlay_W_C) == 0x000008, "Wrong alignment on USoloPlay_W_C");
static_assert(sizeof(USoloPlay_W_C) == 0x000358, "Wrong size on USoloPlay_W_C");
static_assert(offsetof(USoloPlay_W_C, UberGraphFrame) == 0x0002C0, "Member 'USoloPlay_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, NewAnimation) == 0x0002C8, "Member 'USoloPlay_W_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, Back_Button) == 0x0002D0, "Member 'USoloPlay_W_C::Back_Button' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, BrowseUGCLevel_W) == 0x0002D8, "Member 'USoloPlay_W_C::BrowseUGCLevel_W' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, Button_ChooseSave) == 0x0002E0, "Member 'USoloPlay_W_C::Button_ChooseSave' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, Button_NotUseSave) == 0x0002E8, "Member 'USoloPlay_W_C::Button_NotUseSave' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, ClickSaveText) == 0x0002F0, "Member 'USoloPlay_W_C::ClickSaveText' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, HorizontalBox_1) == 0x0002F8, "Member 'USoloPlay_W_C::HorizontalBox_1' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, Play_Button) == 0x000300, "Member 'USoloPlay_W_C::Play_Button' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, Quit_1) == 0x000308, "Member 'USoloPlay_W_C::Quit_1' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, SaveBox) == 0x000310, "Member 'USoloPlay_W_C::SaveBox' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, TextBlock_81) == 0x000318, "Member 'USoloPlay_W_C::TextBlock_81' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, W_ComboBox_2) == 0x000320, "Member 'USoloPlay_W_C::W_ComboBox_2' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, W_SaveText) == 0x000328, "Member 'USoloPlay_W_C::W_SaveText' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, WorkshopBox) == 0x000330, "Member 'USoloPlay_W_C::WorkshopBox' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, UGC_Title) == 0x000338, "Member 'USoloPlay_W_C::UGC_Title' has a wrong offset!");
static_assert(offsetof(USoloPlay_W_C, UGC_ID) == 0x000348, "Member 'USoloPlay_W_C::UGC_ID' has a wrong offset!");

}

