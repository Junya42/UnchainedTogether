#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lava

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lava.BP_Lava_C
// 0x0078 (0x0310 - 0x0298)
class ABP_Lava_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Plane;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        S_Lava;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Quantity;                                          // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Spacing;                                           // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Size;                                              // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          GoUp;                                              // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxSpeed;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        betaSpeedModifier;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLocation;                                      // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Lava(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetAll(const struct FVector& NewLocation);
	void ResetSrv();
	void UpdateHeight();
	void UpdateVolume();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lava_C">();
	}
	static class ABP_Lava_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lava_C>();
	}
};
static_assert(alignof(ABP_Lava_C) == 0x000008, "Wrong alignment on ABP_Lava_C");
static_assert(sizeof(ABP_Lava_C) == 0x000310, "Wrong size on ABP_Lava_C");
static_assert(offsetof(ABP_Lava_C, UberGraphFrame) == 0x000298, "Member 'ABP_Lava_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, Plane) == 0x0002A0, "Member 'ABP_Lava_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, S_Lava) == 0x0002A8, "Member 'ABP_Lava_C::S_Lava' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, C_VinceSync) == 0x0002B0, "Member 'ABP_Lava_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, HierarchicalInstancedStaticMesh) == 0x0002B8, "Member 'ABP_Lava_C::HierarchicalInstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_Lava_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, Quantity) == 0x0002C8, "Member 'ABP_Lava_C::Quantity' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, Spacing) == 0x0002CC, "Member 'ABP_Lava_C::Spacing' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, Size) == 0x0002D0, "Member 'ABP_Lava_C::Size' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, Speed) == 0x0002D8, "Member 'ABP_Lava_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, GoUp) == 0x0002E0, "Member 'ABP_Lava_C::GoUp' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, MaxSpeed) == 0x0002E8, "Member 'ABP_Lava_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, betaSpeedModifier) == 0x0002F0, "Member 'ABP_Lava_C::betaSpeedModifier' has a wrong offset!");
static_assert(offsetof(ABP_Lava_C, InitLocation) == 0x0002F8, "Member 'ABP_Lava_C::InitLocation' has a wrong offset!");

}

