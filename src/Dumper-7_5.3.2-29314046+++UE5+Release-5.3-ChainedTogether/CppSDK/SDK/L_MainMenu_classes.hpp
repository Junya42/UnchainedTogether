#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: L_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SteamCorePro_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass L_MainMenu.L_MainMenu_C
// 0x0120 (0x03C0 - 0x02A0)
class AL_MainMenu_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_0_NewTrack_0_343785DF4575A265D14F909D7BBDB64E; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_343785DF4575A265D14F909D7BBDB64E; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Camera01;                                          // 0x02C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Camera02;                                          // 0x0320(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Workshop_Page;                                     // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UGC_Loop_Index;                                    // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Details_Length;                                    // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUGCQueryHandle                        Handle;                                            // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FSteamUGCDetails>               All_UGC_Details;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDownloadHUD_w_C*                       DownloadHud;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CameraActor2_ExecuteUbergraph_L_MainMenu_RefProperty; // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CameraActor_1_ExecuteUbergraph_L_MainMenu_RefProperty; // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void AddDetailToArrayIfNeedDownload(TArray<struct FSteamUGCDetails>& UGC_Details, TArray<struct FSteamUGCDetails>* All_UGC_Details_0);
	void AddWorkshopItem();
	void CameraAnimation();
	void ExecuteUbergraph_L_MainMenu(int32 EntryPoint);
	void Get_All_UGC_In_Array(const struct FUGCQueryHandle& Handle_0, TArray<struct FSteamUGCDetails>* UGC_Details_Array);
	void OnFailure_5A70658949E245B98F911992109D175C();
	void OnSuccess_5A70658949E245B98F911992109D175C();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"L_MainMenu_C">();
	}
	static class AL_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AL_MainMenu_C>();
	}
};
static_assert(alignof(AL_MainMenu_C) == 0x000010, "Wrong alignment on AL_MainMenu_C");
static_assert(sizeof(AL_MainMenu_C) == 0x0003C0, "Wrong size on AL_MainMenu_C");
static_assert(offsetof(AL_MainMenu_C, UberGraphFrame) == 0x0002A0, "Member 'AL_MainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Timeline_0_NewTrack_0_343785DF4575A265D14F909D7BBDB64E) == 0x0002A8, "Member 'AL_MainMenu_C::Timeline_0_NewTrack_0_343785DF4575A265D14F909D7BBDB64E' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Timeline_0__Direction_343785DF4575A265D14F909D7BBDB64E) == 0x0002AC, "Member 'AL_MainMenu_C::Timeline_0__Direction_343785DF4575A265D14F909D7BBDB64E' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Timeline_0) == 0x0002B0, "Member 'AL_MainMenu_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Camera01) == 0x0002C0, "Member 'AL_MainMenu_C::Camera01' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Camera02) == 0x000320, "Member 'AL_MainMenu_C::Camera02' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Workshop_Page) == 0x000380, "Member 'AL_MainMenu_C::Workshop_Page' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, UGC_Loop_Index) == 0x000384, "Member 'AL_MainMenu_C::UGC_Loop_Index' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Details_Length) == 0x000388, "Member 'AL_MainMenu_C::Details_Length' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, Handle) == 0x000390, "Member 'AL_MainMenu_C::Handle' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, All_UGC_Details) == 0x000398, "Member 'AL_MainMenu_C::All_UGC_Details' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, DownloadHud) == 0x0003A8, "Member 'AL_MainMenu_C::DownloadHud' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, CameraActor2_ExecuteUbergraph_L_MainMenu_RefProperty) == 0x0003B0, "Member 'AL_MainMenu_C::CameraActor2_ExecuteUbergraph_L_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AL_MainMenu_C, CameraActor_1_ExecuteUbergraph_L_MainMenu_RefProperty) == 0x0003B8, "Member 'AL_MainMenu_C::CameraActor_1_ExecuteUbergraph_L_MainMenu_RefProperty' has a wrong offset!");

}

