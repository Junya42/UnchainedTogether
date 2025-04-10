#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Teleport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Teleport.W_Teleport_C
// 0x0010 (0x02D0 - 0x02C0)
class UW_Teleport_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_Teleport(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Teleport_C">();
	}
	static class UW_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Teleport_C>();
	}
};
static_assert(alignof(UW_Teleport_C) == 0x000008, "Wrong alignment on UW_Teleport_C");
static_assert(sizeof(UW_Teleport_C) == 0x0002D0, "Wrong size on UW_Teleport_C");
static_assert(offsetof(UW_Teleport_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Teleport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Teleport_C, NewAnimation) == 0x0002C8, "Member 'UW_Teleport_C::NewAnimation' has a wrong offset!");

}

