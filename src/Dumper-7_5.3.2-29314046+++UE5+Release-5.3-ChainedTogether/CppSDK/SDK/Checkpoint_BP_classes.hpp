#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Checkpoint_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Checkpoint_BP.Checkpoint_BP_C
// 0x0080 (0x0318 - 0x0298)
class ACheckpoint_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Par_BuffRing_01;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BaseColumn_01;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_6E8418B24CA97D3A14DD0982AAB9040B; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6E8418B24CA97D3A14DD0982AAB9040B; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mat01;                                             // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 CheckpointName;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Saved;                                             // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mat02;                                             // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_RescuePoint_C*                      RescuePoint;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Checkpoint_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckSaveCheckpoint(TArray<struct FS_Checkpoint>& Array, bool* Saved_0);
	void ExecuteUbergraph_Checkpoint_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Unsave();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Checkpoint_BP_C">();
	}
	static class ACheckpoint_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckpoint_BP_C>();
	}
};
static_assert(alignof(ACheckpoint_BP_C) == 0x000008, "Wrong alignment on ACheckpoint_BP_C");
static_assert(sizeof(ACheckpoint_BP_C) == 0x000318, "Wrong size on ACheckpoint_BP_C");
static_assert(offsetof(ACheckpoint_BP_C, UberGraphFrame) == 0x000298, "Member 'ACheckpoint_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, C_TickOptimizer) == 0x0002A0, "Member 'ACheckpoint_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Par_BuffRing_01) == 0x0002A8, "Member 'ACheckpoint_BP_C::Par_BuffRing_01' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, PointLight) == 0x0002B0, "Member 'ACheckpoint_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, StaticMesh) == 0x0002B8, "Member 'ACheckpoint_BP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Box) == 0x0002C0, "Member 'ACheckpoint_BP_C::Box' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, SM_BaseColumn_01) == 0x0002C8, "Member 'ACheckpoint_BP_C::SM_BaseColumn_01' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'ACheckpoint_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Timeline_0_NewTrack_0_6E8418B24CA97D3A14DD0982AAB9040B) == 0x0002D8, "Member 'ACheckpoint_BP_C::Timeline_0_NewTrack_0_6E8418B24CA97D3A14DD0982AAB9040B' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Timeline_0__Direction_6E8418B24CA97D3A14DD0982AAB9040B) == 0x0002DC, "Member 'ACheckpoint_BP_C::Timeline_0__Direction_6E8418B24CA97D3A14DD0982AAB9040B' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Timeline_0) == 0x0002E0, "Member 'ACheckpoint_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Mat01) == 0x0002E8, "Member 'ACheckpoint_BP_C::Mat01' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, CheckpointName) == 0x0002F0, "Member 'ACheckpoint_BP_C::CheckpointName' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Saved) == 0x000300, "Member 'ACheckpoint_BP_C::Saved' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, Mat02) == 0x000308, "Member 'ACheckpoint_BP_C::Mat02' has a wrong offset!");
static_assert(offsetof(ACheckpoint_BP_C, RescuePoint) == 0x000310, "Member 'ACheckpoint_BP_C::RescuePoint' has a wrong offset!");

}

