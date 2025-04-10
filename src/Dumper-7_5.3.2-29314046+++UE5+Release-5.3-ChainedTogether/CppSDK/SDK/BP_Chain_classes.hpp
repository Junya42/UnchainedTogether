#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chain.BP_Chain_C
// 0x0118 (0x03B0 - 0x0298)
class ABP_Chain_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ChainStabilize_TL__Direction_BD4C963742724B2C9CAB6AAF2C07DECA; // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ChainStabilize_TL;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Density;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spacing;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SnapTips;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Attached01;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Attached02;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        ChainMeshScale;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CubeScale;                                         // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Constraint;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChainDistance;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDistance;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeSocket01;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeSocket02;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Mass_in_Kg;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GradientPullForce;                                 // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Capsules;                                          // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          Cosmetics;                                         // 0x0350(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicsConstraintComponent*>    Constraints;                                       // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ACubeToPlayerConstraint_C*              CubeToPlayerConstraint01;                          // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ACubeToPlayerConstraint_C*              CubeToPlayerConstraint02;                          // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MiddleChainRepLoc;                                 // 0x0378(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Chain_C*                            TrueChainReference;                                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Socket01ConstraintToChain;                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Socket02ConstraintToChain;                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ChainsDistance;                                    // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdaptCosmeticChain();
	class UStaticMeshComponent* AddCaspule(int32 Index_0, bool HideInGame);
	void AddChainConstraint(class UPrimitiveComponent* Component1, class UPrimitiveComponent* Component2, const struct FVector& Location);
	class UStaticMeshComponent* AddCubeSocket(const struct FVector& Relative_Transform_Location, bool NewHidden);
	void AddFakeChain(int32 Index_0, bool Start);
	void AddImpulseOnSocket(class UPrimitiveComponent* Target);
	void Adjust_Chains_Location();
	void AttachChainsToCharacters();
	void Bounce(const struct FVector& Velocity);
	void CalculateChainDistance(double* Result);
	bool CanFollow(class UActorComponent* Self2);
	void ChainStabilize_TL__FinishedFunc();
	void ChainStabilize_TL__UpdateFunc();
	void DissolveChain(double PlayRate, bool PlaySound);
	void ExecuteUbergraph_BP_Chain(int32 EntryPoint);
	void Get_Chain(int32 InInt, class UStaticMeshComponent** Output);
	void Get_Cosmetics_Maillons(TArray<class UStaticMeshComponent*>* Maillons);
	void GetAttachedChars(TArray<class AActor*>* AttachedChars);
	void GetBeforeLastSphere(class UStaticMeshComponent** Output);
	void GetCurrentChainDistance(double* CurrentChainDistance);
	void GetFakeChain(int32 InInt, class UStaticMeshComponent** Output);
	void GetFirstSphere(class UStaticMeshComponent** Output);
	void GetLastSphere(class UStaticMeshComponent** Output);
	struct FVector GetMiddleLocation();
	void GetSecondSphere(class UStaticMeshComponent** Output);
	void GetSnapTips(bool* SnapTips_0);
	struct FVector GetSocketLocation(class AActor* Attached);
	void GetTension(double* Float);
	void ImpulseOnMaillons(const struct FVector& Impulse);
	void InitChain();
	void Jump(class AActor* Character);
	void JumpAll(class UObject* Character);
	void LinkCharacters();
	void OnRep_Attached01();
	void OnRep_Attached02();
	void OnRep_Cosmetics();
	void Pull01(class AActor* Puller);
	void Pull02(class AActor* Puller);
	void PullChain(class APawn* Puller);
	void Reattach_Cube_Socket_to_Chain(class UPrimitiveComponent* CubeSocket);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Refresh_Tags(class AActor* Attached, bool Player01);
	void RefreshChain();
	void ReinitAttachment(int32 NewDensity, double NewChainMass, bool Human);
	void ReinitAttachmentAll(int32 Density_0, double Mass_in_Kg_0);
	void RemoveAllComponentsOfClass(TSubclassOf<class UActorComponent> ComponentClass);
	void RemoveCharacterConstraints();
	void ReplicateChainLocation();
	void Resync();
	void SetAttachedChar(const int32 Index_0, class AActor* Char);
	void SetMaillonWeight(double NewWeight);
	void SetSnapTips(bool SnapTips_0);
	void SetTip0Location(const struct FVector& Loc);
	void SetTip1Location(const struct FVector& Loc);
	void StabilizeChains();
	void TrySpawnCubeToPlayerConstraint(class ACubeToPlayerConstraint_C*& CubeToPlayerConstraint, const struct FVector& Spawn_Transform_Location, class ACubeToPlayerConstraint_C** Constraint_0);
	void UpdateSocketsLocation();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chain_C">();
	}
	static class ABP_Chain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chain_C>();
	}
};
static_assert(alignof(ABP_Chain_C) == 0x000008, "Wrong alignment on ABP_Chain_C");
static_assert(sizeof(ABP_Chain_C) == 0x0003B0, "Wrong size on ABP_Chain_C");
static_assert(offsetof(ABP_Chain_C, UberGraphFrame) == 0x000298, "Member 'ABP_Chain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Chain_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, ChainStabilize_TL__Direction_BD4C963742724B2C9CAB6AAF2C07DECA) == 0x0002A8, "Member 'ABP_Chain_C::ChainStabilize_TL__Direction_BD4C963742724B2C9CAB6AAF2C07DECA' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, ChainStabilize_TL) == 0x0002B0, "Member 'ABP_Chain_C::ChainStabilize_TL' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Density) == 0x0002B8, "Member 'ABP_Chain_C::Density' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Spacing) == 0x0002C0, "Member 'ABP_Chain_C::Spacing' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Scale) == 0x0002C8, "Member 'ABP_Chain_C::Scale' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, SnapTips) == 0x0002D0, "Member 'ABP_Chain_C::SnapTips' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Attached01) == 0x0002D8, "Member 'ABP_Chain_C::Attached01' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Attached02) == 0x0002E0, "Member 'ABP_Chain_C::Attached02' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, ChainMeshScale) == 0x0002E8, "Member 'ABP_Chain_C::ChainMeshScale' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, CubeScale) == 0x0002F0, "Member 'ABP_Chain_C::CubeScale' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Constraint) == 0x000308, "Member 'ABP_Chain_C::Constraint' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, ChainDistance) == 0x000310, "Member 'ABP_Chain_C::ChainDistance' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, MaxDistance) == 0x000318, "Member 'ABP_Chain_C::MaxDistance' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, CubeSocket01) == 0x000320, "Member 'ABP_Chain_C::CubeSocket01' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, CubeSocket02) == 0x000328, "Member 'ABP_Chain_C::CubeSocket02' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Mass_in_Kg) == 0x000330, "Member 'ABP_Chain_C::Mass_in_Kg' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, GradientPullForce) == 0x000338, "Member 'ABP_Chain_C::GradientPullForce' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Capsules) == 0x000340, "Member 'ABP_Chain_C::Capsules' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Cosmetics) == 0x000350, "Member 'ABP_Chain_C::Cosmetics' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Constraints) == 0x000358, "Member 'ABP_Chain_C::Constraints' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, CubeToPlayerConstraint01) == 0x000368, "Member 'ABP_Chain_C::CubeToPlayerConstraint01' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, CubeToPlayerConstraint02) == 0x000370, "Member 'ABP_Chain_C::CubeToPlayerConstraint02' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, MiddleChainRepLoc) == 0x000378, "Member 'ABP_Chain_C::MiddleChainRepLoc' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, TrueChainReference) == 0x000390, "Member 'ABP_Chain_C::TrueChainReference' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Socket01ConstraintToChain) == 0x000398, "Member 'ABP_Chain_C::Socket01ConstraintToChain' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, Socket02ConstraintToChain) == 0x0003A0, "Member 'ABP_Chain_C::Socket02ConstraintToChain' has a wrong offset!");
static_assert(offsetof(ABP_Chain_C, ChainsDistance) == 0x0003A8, "Member 'ABP_Chain_C::ChainsDistance' has a wrong offset!");

}

