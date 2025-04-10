#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalLevelSlot_W

#include "Basic.hpp"

#include "LocalLevelSlot_W_classes.hpp"
#include "LocalLevelSlot_W_parameters.hpp"


namespace SDK
{

// Function LocalLevelSlot_W.LocalLevelSlot_W_C.BndEvt__LocalLevelSlot_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULocalLevelSlot_W_C::BndEvt__LocalLevelSlot_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "BndEvt__LocalLevelSlot_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.BndEvt__LocalLevelSlot_W_Delete_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULocalLevelSlot_W_C::BndEvt__LocalLevelSlot_W_Delete_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "BndEvt__LocalLevelSlot_W_Delete_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.BndEvt__LocalLevelSlot_W_Edit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULocalLevelSlot_W_C::BndEvt__LocalLevelSlot_W_Edit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "BndEvt__LocalLevelSlot_W_Edit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULocalLevelSlot_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.Deselect
// (BlueprintCallable, BlueprintEvent)

void ULocalLevelSlot_W_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "Deselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.ExecuteUbergraph_LocalLevelSlot_W
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalLevelSlot_W_C::ExecuteUbergraph_LocalLevelSlot_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "ExecuteUbergraph_LocalLevelSlot_W");

	Params::LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LocalLevelSlot_W.LocalLevelSlot_W_C.GetPath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ULocalLevelSlot_W_C::GetPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalLevelSlot_W_C", "GetPath");

	Params::LocalLevelSlot_W_C_GetPath Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

