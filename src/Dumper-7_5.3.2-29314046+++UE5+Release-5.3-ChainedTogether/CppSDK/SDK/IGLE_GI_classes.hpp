#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_GI

#include "Basic.hpp"

#include "IGLE_ST_GlobalSettings_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_GI.IGLE_GI_C
// 0x0088 (0x0248 - 0x01C0)
class UIGLE_GI_C : public UGameInstance
{
public:
	struct FIGLE_ST_GlobalSettings                GlobalSettings;                                    // 0x01C0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_GI_C">();
	}
	static class UIGLE_GI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_GI_C>();
	}
};
static_assert(alignof(UIGLE_GI_C) == 0x000008, "Wrong alignment on UIGLE_GI_C");
static_assert(sizeof(UIGLE_GI_C) == 0x000248, "Wrong size on UIGLE_GI_C");
static_assert(offsetof(UIGLE_GI_C, GlobalSettings) == 0x0001C0, "Member 'UIGLE_GI_C::GlobalSettings' has a wrong offset!");

}

