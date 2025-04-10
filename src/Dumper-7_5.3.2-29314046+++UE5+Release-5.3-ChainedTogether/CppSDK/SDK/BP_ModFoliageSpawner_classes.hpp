#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModFoliageSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ModFoliageSpawner.BP_ModFoliageSpawner_C
// 0x0028 (0x02C0 - 0x0298)
class ABP_ModFoliageSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Foliage_Actor;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Remove_Mode;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ModFoliageSpawner(int32 EntryPoint);
	void SetRemoveMode(class AActor* FoliageActor, bool RemoveMode);
	void UpdateRadius(double Radius);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ModFoliageSpawner_C">();
	}
	static class ABP_ModFoliageSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ModFoliageSpawner_C>();
	}
};
static_assert(alignof(ABP_ModFoliageSpawner_C) == 0x000008, "Wrong alignment on ABP_ModFoliageSpawner_C");
static_assert(sizeof(ABP_ModFoliageSpawner_C) == 0x0002C0, "Wrong size on ABP_ModFoliageSpawner_C");
static_assert(offsetof(ABP_ModFoliageSpawner_C, UberGraphFrame) == 0x000298, "Member 'ABP_ModFoliageSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ModFoliageSpawner_C, Sphere) == 0x0002A0, "Member 'ABP_ModFoliageSpawner_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ModFoliageSpawner_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_ModFoliageSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ModFoliageSpawner_C, Foliage_Actor) == 0x0002B0, "Member 'ABP_ModFoliageSpawner_C::Foliage_Actor' has a wrong offset!");
static_assert(offsetof(ABP_ModFoliageSpawner_C, Remove_Mode) == 0x0002B8, "Member 'ABP_ModFoliageSpawner_C::Remove_Mode' has a wrong offset!");

}

