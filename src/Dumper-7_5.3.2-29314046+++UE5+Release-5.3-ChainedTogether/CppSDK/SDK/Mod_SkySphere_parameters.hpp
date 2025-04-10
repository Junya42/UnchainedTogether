#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_SkySphere

#include "Basic.hpp"

#include "InGameLevelEditor_structs.hpp"


namespace SDK::Params
{

// Function Mod_SkySphere.Mod_SkySphere_C.BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(sizeof(Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000010, "Wrong size on Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(offsetof(Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature, PropertyName) == 0x000000, "Member 'Mod_SkySphere_C_BndEvt__Mod_SkySphere_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature::PropertyName' has a wrong offset!");

// Function Mod_SkySphere.Mod_SkySphere_C.ExecuteUbergraph_Mod_SkySphere
// 0x01E0 (0x01E0 - 0x0000)
struct Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_PropertyName;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLEProperty                          CallFunc_GetPropertyByName_Property;               // 0x0060(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyByName_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_TextureProperty_C*                K2Node_DynamicCast_AsIGLE_Texture_Property;        // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLEProperty                          CallFunc_GetPropertyByName_Property_1;             // 0x0108(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyByName_ReturnValue_1;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess_1;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ReferenceParm)
	class UIGLE_TextureProperty_C*                K2Node_DynamicCast_AsIGLE_Texture_Property_1;      // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Texture;                        // 0x01B8(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere) == 0x000008, "Wrong alignment on Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere");
static_assert(sizeof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere) == 0x0001E0, "Wrong size on Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, EntryPoint) == 0x000000, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, Temp_object_Variable) == 0x000010, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_GetGameMode_ReturnValue) == 0x000028, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_IsServer_ReturnValue) == 0x000030, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_AsGM_Game) == 0x000038, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_AsGM_Game' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_ComponentBoundEvent_PropertyName) == 0x000048, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_ComponentBoundEvent_PropertyName' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_SwitchString_CmpSuccess) == 0x000058, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_GetPropertyByName_Property) == 0x000060, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_GetPropertyByName_Property' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_GetPropertyByName_ReturnValue) == 0x0000E0, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_GetPropertyByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_CreateDelegate_OutputDelegate) == 0x0000E4, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_AsIGLE_Texture_Property) == 0x0000F8, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_AsIGLE_Texture_Property' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_bSuccess_2) == 0x000100, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_GetPropertyByName_Property_1) == 0x000108, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_GetPropertyByName_Property_1' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_GetPropertyByName_ReturnValue_1) == 0x000188, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_GetPropertyByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_SwitchString_CmpSuccess_1) == 0x000189, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_SwitchString_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_MakeArray_Array) == 0x000190, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_AsIGLE_Texture_Property_1) == 0x0001A0, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_AsIGLE_Texture_Property_1' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_DynamicCast_bSuccess_3) == 0x0001A8, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001B0, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere, K2Node_CustomEvent_Texture) == 0x0001B8, "Member 'Mod_SkySphere_C_ExecuteUbergraph_Mod_SkySphere::K2Node_CustomEvent_Texture' has a wrong offset!");

// Function Mod_SkySphere.Mod_SkySphere_C.OnLoaded_81BF4707462F3E1839CBDF848E89C7D6
// 0x0008 (0x0008 - 0x0000)
struct Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6) == 0x000008, "Wrong alignment on Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6");
static_assert(sizeof(Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6) == 0x000008, "Wrong size on Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6");
static_assert(offsetof(Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6, Loaded) == 0x000000, "Member 'Mod_SkySphere_C_OnLoaded_81BF4707462F3E1839CBDF848E89C7D6::Loaded' has a wrong offset!");

// Function Mod_SkySphere.Mod_SkySphere_C.SetTexture
// 0x0028 (0x0028 - 0x0000)
struct Mod_SkySphere_C_SetTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Mod_SkySphere_C_SetTexture) == 0x000008, "Wrong alignment on Mod_SkySphere_C_SetTexture");
static_assert(sizeof(Mod_SkySphere_C_SetTexture) == 0x000028, "Wrong size on Mod_SkySphere_C_SetTexture");
static_assert(offsetof(Mod_SkySphere_C_SetTexture, Texture) == 0x000000, "Member 'Mod_SkySphere_C_SetTexture::Texture' has a wrong offset!");

}

