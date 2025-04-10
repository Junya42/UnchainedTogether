#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UploadUGC_W

#include "Basic.hpp"

#include "UploadUGC_W_classes.hpp"
#include "UploadUGC_W_parameters.hpp"


namespace SDK
{

// Function UploadUGC_W.UploadUGC_W_C.BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUploadUGC_W_C::BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UploadUGC_W.UploadUGC_W_C.BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUploadUGC_W_C::BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UploadUGC_W.UploadUGC_W_C.BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUploadUGC_W_C::BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UploadUGC_W.UploadUGC_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUploadUGC_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UploadUGC_W.UploadUGC_W_C.ExecuteUbergraph_UploadUGC_W
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUploadUGC_W_C::ExecuteUbergraph_UploadUGC_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "ExecuteUbergraph_UploadUGC_W");

	Params::UploadUGC_W_C_ExecuteUbergraph_UploadUGC_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UploadUGC_W.UploadUGC_W_C.OnCallback_4739FE9A4F2B1D96FC80EE9801D6B6DB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSubmitItemUpdateResult          Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUploadUGC_W_C::OnCallback_4739FE9A4F2B1D96FC80EE9801D6B6DB(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "OnCallback_4739FE9A4F2B1D96FC80EE9801D6B6DB");

	Params::UploadUGC_W_C_OnCallback_4739FE9A4F2B1D96FC80EE9801D6B6DB Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UploadUGC_W.UploadUGC_W_C.OnCallback_6323929A47D867C7CBDC2E8AC4BD04EF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCreateItemResult                Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUploadUGC_W_C::OnCallback_6323929A47D867C7CBDC2E8AC4BD04EF(const struct FCreateItemResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UploadUGC_W_C", "OnCallback_6323929A47D867C7CBDC2E8AC4BD04EF");

	Params::UploadUGC_W_C_OnCallback_6323929A47D867C7CBDC2E8AC4BD04EF Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}

}

