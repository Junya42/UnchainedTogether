#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_Josh

#include "Basic.hpp"

#include "BP_Character_classes.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_Josh.BPC_Josh_C
// 0x0000 (0x0ED0 - 0x0ED0)
class ABPC_Josh_C final : public ABP_Character_C
{
public:
	void AddClothes();
	void GetCharacter(E_ChoosenChar* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_Josh_C">();
	}
	static class ABPC_Josh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPC_Josh_C>();
	}
};
static_assert(alignof(ABPC_Josh_C) == 0x000010, "Wrong alignment on ABPC_Josh_C");
static_assert(sizeof(ABPC_Josh_C) == 0x000ED0, "Wrong size on ABPC_Josh_C");

}

