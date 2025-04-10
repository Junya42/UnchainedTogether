#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_PropertiesPannel

#include "Basic.hpp"

#include "IGLE_W_PropertiesPannel_classes.hpp"
#include "IGLE_W_PropertiesPannel_parameters.hpp"


namespace SDK
{

// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.BndEvt__EditablePlacableName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIGLE_W_PropertiesPannel_C::BndEvt__EditablePlacableName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "BndEvt__EditablePlacableName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::IGLE_W_PropertiesPannel_C_BndEvt__EditablePlacableName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.ClearPannel
// (BlueprintCallable, BlueprintEvent)

void UIGLE_W_PropertiesPannel_C::ClearPannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "ClearPannel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIGLE_W_PropertiesPannel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.ExecuteUbergraph_IGLE_W_PropertiesPannel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_PropertiesPannel_C::ExecuteUbergraph_IGLE_W_PropertiesPannel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "ExecuteUbergraph_IGLE_W_PropertiesPannel");

	Params::IGLE_W_PropertiesPannel_C_ExecuteUbergraph_IGLE_W_PropertiesPannel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.OnTransformChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       NewTransform                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_PropertiesPannel_C::OnTransformChanged(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "OnTransformChanged");

	Params::IGLE_W_PropertiesPannel_C_OnTransformChanged Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.SetPlacableActorTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlacableActor_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_PropertiesPannel_C::SetPlacableActorTarget(class AActor* PlacableActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "SetPlacableActorTarget");

	Params::IGLE_W_PropertiesPannel_C_SetPlacableActorTarget Parms{};

	Parms.PlacableActor_0 = PlacableActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_PropertiesPannel.IGLE_W_PropertiesPannel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_PropertiesPannel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_PropertiesPannel_C", "Tick");

	Params::IGLE_W_PropertiesPannel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

