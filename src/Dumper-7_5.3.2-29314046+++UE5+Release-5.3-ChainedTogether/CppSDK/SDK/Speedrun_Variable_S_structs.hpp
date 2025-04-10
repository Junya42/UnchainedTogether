#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Speedrun_Variable_S

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Speedrun_Variable_S.Speedrun_Variable_S
// 0x0050 (0x0050 - 0x0000)
struct FSpeedrun_Variable_S final
{
public:
	class FString                                 Variable_Name_2_40FC42EC4EE2EEA35ABE239AC7E5046A;  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         Choices_ID_5_38DF45854CF399C5056DEBBC26A4ADC2;     // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         Choices_Value_8_A15C20F04BC1484B07D690904761CD75;  // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FString                                 Category_11_CFAC9FEB4CAC73A0EC6E1CB06D9832FC;      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Default_ID_13_686532F142982364C205A69360861843;    // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FSpeedrun_Variable_S) == 0x000008, "Wrong alignment on FSpeedrun_Variable_S");
static_assert(sizeof(FSpeedrun_Variable_S) == 0x000050, "Wrong size on FSpeedrun_Variable_S");
static_assert(offsetof(FSpeedrun_Variable_S, Variable_Name_2_40FC42EC4EE2EEA35ABE239AC7E5046A) == 0x000000, "Member 'FSpeedrun_Variable_S::Variable_Name_2_40FC42EC4EE2EEA35ABE239AC7E5046A' has a wrong offset!");
static_assert(offsetof(FSpeedrun_Variable_S, Choices_ID_5_38DF45854CF399C5056DEBBC26A4ADC2) == 0x000010, "Member 'FSpeedrun_Variable_S::Choices_ID_5_38DF45854CF399C5056DEBBC26A4ADC2' has a wrong offset!");
static_assert(offsetof(FSpeedrun_Variable_S, Choices_Value_8_A15C20F04BC1484B07D690904761CD75) == 0x000020, "Member 'FSpeedrun_Variable_S::Choices_Value_8_A15C20F04BC1484B07D690904761CD75' has a wrong offset!");
static_assert(offsetof(FSpeedrun_Variable_S, Category_11_CFAC9FEB4CAC73A0EC6E1CB06D9832FC) == 0x000030, "Member 'FSpeedrun_Variable_S::Category_11_CFAC9FEB4CAC73A0EC6E1CB06D9832FC' has a wrong offset!");
static_assert(offsetof(FSpeedrun_Variable_S, Default_ID_13_686532F142982364C205A69360861843) == 0x000040, "Member 'FSpeedrun_Variable_S::Default_ID_13_686532F142982364C205A69360861843' has a wrong offset!");

}

