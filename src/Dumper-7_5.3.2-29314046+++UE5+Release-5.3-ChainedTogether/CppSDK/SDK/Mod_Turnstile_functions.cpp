#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Turnstile

#include "Basic.hpp"

#include "Mod_Turnstile_classes.hpp"
#include "Mod_Turnstile_parameters.hpp"


namespace SDK
{

// Function Mod_Turnstile.Mod_Turnstile_C.AddActorToTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::AddActorToTrigger(int64 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "AddActorToTrigger");

	Params::Mod_Turnstile_C_AddActorToTrigger Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.BndEvt__Mod_Turnstile_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           PropertyName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AMod_Turnstile_C::BndEvt__Mod_Turnstile_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature(const class FString& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "BndEvt__Mod_Turnstile_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");

	Params::Mod_Turnstile_C_BndEvt__Mod_Turnstile_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature Parms{};

	Parms.PropertyName = std::move(PropertyName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.ExecuteUbergraph_Mod_Turnstile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::ExecuteUbergraph_Mod_Turnstile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "ExecuteUbergraph_Mod_Turnstile");

	Params::Mod_Turnstile_C_ExecuteUbergraph_Mod_Turnstile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.FindActorsToTrigger
// (BlueprintCallable, BlueprintEvent)

void AMod_Turnstile_C::FindActorsToTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "FindActorsToTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Turnstile.Mod_Turnstile_C.GetMaxPivotAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::GetMaxPivotAlpha(double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "GetMaxPivotAlpha");

	Params::Mod_Turnstile_C_GetMaxPivotAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function Mod_Turnstile.Mod_Turnstile_C.GetMinPivotAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::GetMinPivotAlpha(double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "GetMinPivotAlpha");

	Params::Mod_Turnstile_C_GetMinPivotAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function Mod_Turnstile.Mod_Turnstile_C.IsSomeoneInside
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBoxComponent*>            Boxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AMod_Turnstile_C::IsSomeoneInside(TArray<class UBoxComponent*>& Boxes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "IsSomeoneInside");

	Params::Mod_Turnstile_C_IsSomeoneInside Parms{};

	Parms.Boxes = std::move(Boxes);

	UObject::ProcessEvent(Func, &Parms);

	Boxes = std::move(Parms.Boxes);

	return Parms.ReturnValue;
}


// Function Mod_Turnstile.Mod_Turnstile_C.MakeNewAxis
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_Turnstile_C::MakeNewAxis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "MakeNewAxis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Turnstile.Mod_Turnstile_C.OnRep_ActorsToTrigger
// (BlueprintCallable, BlueprintEvent)

void AMod_Turnstile_C::OnRep_ActorsToTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "OnRep_ActorsToTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Turnstile.Mod_Turnstile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMod_Turnstile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Turnstile.Mod_Turnstile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "ReceiveTick");

	Params::Mod_Turnstile_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.RemoveActorToTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::RemoveActorToTrigger(int64 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "RemoveActorToTrigger");

	Params::Mod_Turnstile_C_RemoveActorToTrigger Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.ReplicateInteractionAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Axis                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::ReplicateInteractionAll(const double Axis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "ReplicateInteractionAll");

	Params::Mod_Turnstile_C_ReplicateInteractionAll Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.TryReferenceActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::TryReferenceActors(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "TryReferenceActors");

	Params::Mod_Turnstile_C_TryReferenceActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function Mod_Turnstile.Mod_Turnstile_C.UpdateActorToInteractWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::UpdateActorToInteractWith(double Axis, class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "UpdateActorToInteractWith");

	Params::Mod_Turnstile_C_UpdateActorToInteractWith Parms{};

	Parms.Axis = Axis;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Turnstile.Mod_Turnstile_C.UpdateTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TurnRate_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Turnstile_C::UpdateTurn(double* TurnRate_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "UpdateTurn");

	Params::Mod_Turnstile_C_UpdateTurn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TurnRate_0 != nullptr)
		*TurnRate_0 = Parms.TurnRate_0;
}


// Function Mod_Turnstile.Mod_Turnstile_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_Turnstile_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Turnstile_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

