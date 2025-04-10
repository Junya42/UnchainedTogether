#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CrashMeteor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CrashMeteor.BP_CrashMeteor_C.BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_CrashMeteor_C_BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_CrashMeteor.BP_CrashMeteor_C.ExecuteUbergraph_BP_CrashMeteor
// 0x02C8 (0x02C8 - 0x0000)
struct BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_BackToMainMenu_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_EndScreen;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0078(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Show;                           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_193[0x5];                                      // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor) == 0x000008, "Wrong alignment on BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor");
static_assert(sizeof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor) == 0x0002C8, "Wrong size on BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, EntryPoint) == 0x000000, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_bool_Variable) == 0x000010, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_byte_Variable) == 0x000011, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_byte_Variable_1) == 0x000012, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_bool_Has_Been_Initd_Variable) == 0x000020, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_bool_IsClosed_Variable) == 0x000021, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_bool_Has_Been_Initd_Variable_1) == 0x000022, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_CustomEvent_EndScreen) == 0x000023, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_CustomEvent_EndScreen' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_BreakVector_X) == 0x000040, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_BreakVector_Y) == 0x000048, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000058, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_OtherActor) == 0x000060, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_OtherComp) == 0x000068, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000070, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_bFromSweep) == 0x000074, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_ComponentBoundEvent_SweepResult) == 0x000078, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000160, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000168, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000170, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_MakeVector_ReturnValue) == 0x000178, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_CustomEvent_Show) == 0x000190, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_CustomEvent_Show' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, K2Node_Select_Default) == 0x000191, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000192, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_VLerp_ReturnValue) == 0x000198, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0001B0, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, Temp_bool_IsClosed_Variable_1) == 0x000298, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_GetPlayerController_ReturnValue_1) == 0x0002A0, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_GetPlayerController_ReturnValue_2) == 0x0002A8, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0002B0, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0002B8, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0002C0, "Member 'BP_CrashMeteor_C_ExecuteUbergraph_BP_CrashMeteor::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_CrashMeteor.BP_CrashMeteor_C.LaunchMeteor
// 0x0001 (0x0001 - 0x0000)
struct BP_CrashMeteor_C_LaunchMeteor final
{
public:
	bool                                          EndScreen;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrashMeteor_C_LaunchMeteor) == 0x000001, "Wrong alignment on BP_CrashMeteor_C_LaunchMeteor");
static_assert(sizeof(BP_CrashMeteor_C_LaunchMeteor) == 0x000001, "Wrong size on BP_CrashMeteor_C_LaunchMeteor");
static_assert(offsetof(BP_CrashMeteor_C_LaunchMeteor, EndScreen) == 0x000000, "Member 'BP_CrashMeteor_C_LaunchMeteor::EndScreen' has a wrong offset!");

// Function BP_CrashMeteor.BP_CrashMeteor_C.ShowHide
// 0x0001 (0x0001 - 0x0000)
struct BP_CrashMeteor_C_ShowHide final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrashMeteor_C_ShowHide) == 0x000001, "Wrong alignment on BP_CrashMeteor_C_ShowHide");
static_assert(sizeof(BP_CrashMeteor_C_ShowHide) == 0x000001, "Wrong size on BP_CrashMeteor_C_ShowHide");
static_assert(offsetof(BP_CrashMeteor_C_ShowHide, Show) == 0x000000, "Member 'BP_CrashMeteor_C_ShowHide::Show' has a wrong offset!");

// Function BP_CrashMeteor.BP_CrashMeteor_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct BP_CrashMeteor_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrashMeteor_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_CrashMeteor_C_UserConstructionScript");
static_assert(sizeof(BP_CrashMeteor_C_UserConstructionScript) == 0x000018, "Wrong size on BP_CrashMeteor_C_UserConstructionScript");
static_assert(offsetof(BP_CrashMeteor_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'BP_CrashMeteor_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

