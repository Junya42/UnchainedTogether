#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovingObject

#include "Basic.hpp"

#include "BP_MovingObject_classes.hpp"
#include "BP_MovingObject_parameters.hpp"


namespace SDK
{

// Function BP_MovingObject.BP_MovingObject_C.BeginMove
// (BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::BeginMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "BeginMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.BeginMoveAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::BeginMoveAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "BeginMoveAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.BndEvt__BP_MovingObject_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MovingObject_C::BndEvt__BP_MovingObject_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "BndEvt__BP_MovingObject_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_MovingObject_C_BndEvt__BP_MovingObject_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingObject.BP_MovingObject_C.CheckReset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::CheckReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "CheckReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.ExecuteUbergraph_BP_MovingObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingObject_C::ExecuteUbergraph_BP_MovingObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ExecuteUbergraph_BP_MovingObject");

	Params::BP_MovingObject_C_ExecuteUbergraph_BP_MovingObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingObject.BP_MovingObject_C.Move_TL__FinishedFunc
// (BlueprintEvent)

void ABP_MovingObject_C::Move_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "Move_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.Move_TL__UpdateFunc
// (BlueprintEvent)

void ABP_MovingObject_C::Move_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "Move_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.OnBoxDetection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MovingObject_C::OnBoxDetection(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "OnBoxDetection");

	Params::BP_MovingObject_C_OnBoxDetection Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MovingObject.BP_MovingObject_C.OpenCloseDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Open                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingObject_C::OpenCloseDoor(int32 Index_0, bool Open)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "OpenCloseDoor");

	Params::BP_MovingObject_C_OpenCloseDoor Parms{};

	Parms.Index_0 = Index_0;
	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingObject.BP_MovingObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MovingObject_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingObject_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ReceiveTick");

	Params::BP_MovingObject_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingObject.BP_MovingObject_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.ResetAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.ResetDetectionOnEndMoving
// (BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::ResetDetectionOnEndMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ResetDetectionOnEndMoving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.ResetReset
// (BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::ResetReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "ResetReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingObject.BP_MovingObject_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MovingObject_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingObject_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

