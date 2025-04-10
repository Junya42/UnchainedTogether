#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SessionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SteamCorePro_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SessionButton.W_SessionButton_C
// 0x0190 (0x0450 - 0x02C0)
class UW_SessionButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockImage;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ModeText;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PingText;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerCount;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamSessionResult                    Session;                                           // 0x02F8(0x0130)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          PasswordProtected;                                 // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Version;                                           // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 UGC_ID;                                            // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	class FText AdaptText(const class FString& In);
	void BndEvt__W_SessionButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CheckUGC(bool* UGC_Used, class FString* UGC_ID_0);
	void CompareVersion(bool* SameVersion, class FString* ClientVersion, class FString* HostVersion);
	void Construct();
	void Downloaded(bool Success);
	void ExecuteUbergraph_W_SessionButton(int32 EntryPoint);
	void Fail();
	void GetUGCIDFromName(const class FString& SourceString, class FString* FullNameWithoutID, class FString* ID);
	void ResetJoinSession();
	void UpdateMode();
	void UpdateName();
	void UpdatePassword();
	void UpdatePing();
	void UpdatePlayers();
	void UpdateUGC();
	void UpdateVersion();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SessionButton_C">();
	}
	static class UW_SessionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SessionButton_C>();
	}
};
static_assert(alignof(UW_SessionButton_C) == 0x000008, "Wrong alignment on UW_SessionButton_C");
static_assert(sizeof(UW_SessionButton_C) == 0x000450, "Wrong size on UW_SessionButton_C");
static_assert(offsetof(UW_SessionButton_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SessionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, Button_0) == 0x0002C8, "Member 'UW_SessionButton_C::Button_0' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, LockImage) == 0x0002D0, "Member 'UW_SessionButton_C::LockImage' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, ModeText) == 0x0002D8, "Member 'UW_SessionButton_C::ModeText' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, NameText) == 0x0002E0, "Member 'UW_SessionButton_C::NameText' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, PingText) == 0x0002E8, "Member 'UW_SessionButton_C::PingText' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, PlayerCount) == 0x0002F0, "Member 'UW_SessionButton_C::PlayerCount' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, Session) == 0x0002F8, "Member 'UW_SessionButton_C::Session' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, PasswordProtected) == 0x000428, "Member 'UW_SessionButton_C::PasswordProtected' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, Version) == 0x000430, "Member 'UW_SessionButton_C::Version' has a wrong offset!");
static_assert(offsetof(UW_SessionButton_C, UGC_ID) == 0x000440, "Member 'UW_SessionButton_C::UGC_ID' has a wrong offset!");

}

