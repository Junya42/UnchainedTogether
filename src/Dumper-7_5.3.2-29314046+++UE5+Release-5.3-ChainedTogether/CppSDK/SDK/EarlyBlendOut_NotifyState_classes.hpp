#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EarlyBlendOut_NotifyState

#include "Basic.hpp"

#include "ALS_MovementState_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ALS_Stance_structs.hpp"
#include "ALS_Gait_structs.hpp"
#include "ALS_MovementAction_structs.hpp"
#include "ALS_RotationMode_structs.hpp"
#include "ALS_ViewMode_structs.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C
// 0x0018 (0x0048 - 0x0030)
class UEarlyBlendOut_NotifyState_C final : public UAnimNotifyState
{
public:
	class UAnimMontage*                           ThisMontage;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        BlendOutTime;                                      // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckMovementState;                                // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            MovementStateEquals;                               // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckStance;                                       // 0x0042(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   StanceEquals;                                      // 0x0043(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckMovementInput;                                // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetNotifyName() const;
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EarlyBlendOut_NotifyState_C">();
	}
	static class UEarlyBlendOut_NotifyState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEarlyBlendOut_NotifyState_C>();
	}
};
static_assert(alignof(UEarlyBlendOut_NotifyState_C) == 0x000008, "Wrong alignment on UEarlyBlendOut_NotifyState_C");
static_assert(sizeof(UEarlyBlendOut_NotifyState_C) == 0x000048, "Wrong size on UEarlyBlendOut_NotifyState_C");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, ThisMontage) == 0x000030, "Member 'UEarlyBlendOut_NotifyState_C::ThisMontage' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, BlendOutTime) == 0x000038, "Member 'UEarlyBlendOut_NotifyState_C::BlendOutTime' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, CheckMovementState) == 0x000040, "Member 'UEarlyBlendOut_NotifyState_C::CheckMovementState' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, MovementStateEquals) == 0x000041, "Member 'UEarlyBlendOut_NotifyState_C::MovementStateEquals' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, CheckStance) == 0x000042, "Member 'UEarlyBlendOut_NotifyState_C::CheckStance' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, StanceEquals) == 0x000043, "Member 'UEarlyBlendOut_NotifyState_C::StanceEquals' has a wrong offset!");
static_assert(offsetof(UEarlyBlendOut_NotifyState_C, CheckMovementInput) == 0x000044, "Member 'UEarlyBlendOut_NotifyState_C::CheckMovementInput' has a wrong offset!");

}

