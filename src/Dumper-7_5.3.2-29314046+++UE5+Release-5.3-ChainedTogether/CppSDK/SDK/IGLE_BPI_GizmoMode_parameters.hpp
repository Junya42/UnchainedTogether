#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_BPI_GizmoMode

#include "Basic.hpp"

#include "IGLE_E_GizmoSpace_structs.hpp"


namespace SDK::Params
{

// Function IGLE_BPI_GizmoMode.IGLE_BPI_GizmoMode_C.GenerateGizmo
// 0x0008 (0x0008 - 0x0000)
struct IGLE_BPI_GizmoMode_C_GenerateGizmo final
{
public:
	class AIGLE_A_Gizmo_C*                        GizmoOuter;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_BPI_GizmoMode_C_GenerateGizmo) == 0x000008, "Wrong alignment on IGLE_BPI_GizmoMode_C_GenerateGizmo");
static_assert(sizeof(IGLE_BPI_GizmoMode_C_GenerateGizmo) == 0x000008, "Wrong size on IGLE_BPI_GizmoMode_C_GenerateGizmo");
static_assert(offsetof(IGLE_BPI_GizmoMode_C_GenerateGizmo, GizmoOuter) == 0x000000, "Member 'IGLE_BPI_GizmoMode_C_GenerateGizmo::GizmoOuter' has a wrong offset!");

// Function IGLE_BPI_GizmoMode.IGLE_BPI_GizmoMode_C.UpdateGizmoSpace
// 0x0001 (0x0001 - 0x0000)
struct IGLE_BPI_GizmoMode_C_UpdateGizmoSpace final
{
public:
	EIGLE_E_GizmoSpace                            New_Gizmo_Space;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_BPI_GizmoMode_C_UpdateGizmoSpace) == 0x000001, "Wrong alignment on IGLE_BPI_GizmoMode_C_UpdateGizmoSpace");
static_assert(sizeof(IGLE_BPI_GizmoMode_C_UpdateGizmoSpace) == 0x000001, "Wrong size on IGLE_BPI_GizmoMode_C_UpdateGizmoSpace");
static_assert(offsetof(IGLE_BPI_GizmoMode_C_UpdateGizmoSpace, New_Gizmo_Space) == 0x000000, "Member 'IGLE_BPI_GizmoMode_C_UpdateGizmoSpace::New_Gizmo_Space' has a wrong offset!");

}

