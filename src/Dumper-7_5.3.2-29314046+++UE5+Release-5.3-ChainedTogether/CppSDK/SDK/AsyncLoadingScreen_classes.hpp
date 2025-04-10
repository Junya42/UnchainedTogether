#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncLoadingScreen

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AsyncLoadingScreen_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
// 0x0000 (0x0028 - 0x0028)
class UAsyncLoadingScreenLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetIsEnableLoadingScreen();
	static void PreloadBackgroundImages();
	static void RemovePreloadedBackgroundImages();
	static void SetDisplayBackgroundIndex(int32 BackgroundIndex);
	static void SetDisplayMovieIndex(int32 MovieIndex);
	static void SetDisplayTipTextIndex(int32 TipTextIndex);
	static void SetEnableLoadingScreen(bool bIsEnableLoadingScreen);
	static void StopLoadingScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncLoadingScreenLibrary">();
	}
	static class UAsyncLoadingScreenLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncLoadingScreenLibrary>();
	}
};
static_assert(alignof(UAsyncLoadingScreenLibrary) == 0x000008, "Wrong alignment on UAsyncLoadingScreenLibrary");
static_assert(sizeof(UAsyncLoadingScreenLibrary) == 0x000028, "Wrong size on UAsyncLoadingScreenLibrary");

// Class AsyncLoadingScreen.LoadingScreenSettings
// 0x1048 (0x1080 - 0x0038)
class ULoadingScreenSettings final : public UDeveloperSettings
{
public:
	bool                                          bPreloadBackgroundImages;                          // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FALoadingScreenSettings                StartupLoadingScreen;                              // 0x0040(0x04E0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FALoadingScreenSettings                DefaultLoadingScreen;                              // 0x0520(0x04E0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FClassicLayoutSettings                 Classic;                                           // 0x0A00(0x00F0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FCenterLayoutSettings                  Center;                                            // 0x0AF0(0x00F0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLetterboxLayoutSettings               Letterbox;                                         // 0x0BE0(0x01D0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSidebarLayoutSettings                 Sidebar;                                           // 0x0DB0(0x0100)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDualSidebarLayoutSettings             DualSidebar;                                       // 0x0EB0(0x01D0)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenSettings">();
	}
	static class ULoadingScreenSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenSettings>();
	}
};
static_assert(alignof(ULoadingScreenSettings) == 0x000010, "Wrong alignment on ULoadingScreenSettings");
static_assert(sizeof(ULoadingScreenSettings) == 0x001080, "Wrong size on ULoadingScreenSettings");
static_assert(offsetof(ULoadingScreenSettings, bPreloadBackgroundImages) == 0x000038, "Member 'ULoadingScreenSettings::bPreloadBackgroundImages' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, StartupLoadingScreen) == 0x000040, "Member 'ULoadingScreenSettings::StartupLoadingScreen' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, DefaultLoadingScreen) == 0x000520, "Member 'ULoadingScreenSettings::DefaultLoadingScreen' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, Classic) == 0x000A00, "Member 'ULoadingScreenSettings::Classic' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, Center) == 0x000AF0, "Member 'ULoadingScreenSettings::Center' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, Letterbox) == 0x000BE0, "Member 'ULoadingScreenSettings::Letterbox' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, Sidebar) == 0x000DB0, "Member 'ULoadingScreenSettings::Sidebar' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, DualSidebar) == 0x000EB0, "Member 'ULoadingScreenSettings::DualSidebar' has a wrong offset!");

}

