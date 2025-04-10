#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CubeToPlayerConstraint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CubeToPlayerConstraint.CubeToPlayerConstraint_C
// 0x0008 (0x02C0 - 0x02B8)
class ACubeToPlayerConstraint_C final : public APhysicsConstraintActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_CubeToPlayerConstraint(int32 EntryPoint);
	void OnJump();
	void SetContrainedComps(class UPrimitiveComponent* Comp1, class UPrimitiveComponent* Comp2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CubeToPlayerConstraint_C">();
	}
	static class ACubeToPlayerConstraint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACubeToPlayerConstraint_C>();
	}
};
static_assert(alignof(ACubeToPlayerConstraint_C) == 0x000008, "Wrong alignment on ACubeToPlayerConstraint_C");
static_assert(sizeof(ACubeToPlayerConstraint_C) == 0x0002C0, "Wrong size on ACubeToPlayerConstraint_C");
static_assert(offsetof(ACubeToPlayerConstraint_C, UberGraphFrame) == 0x0002B8, "Member 'ACubeToPlayerConstraint_C::UberGraphFrame' has a wrong offset!");

}

