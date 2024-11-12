// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboard_init() {}
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature();
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature();
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature();
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature();
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature();
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EpicLeaderboard;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EpicLeaderboard()
	{
		if (!Z_Registration_Info_UPackage__Script_EpicLeaderboard.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EpicLeaderboard",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB378209,
				0x58B678C7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EpicLeaderboard.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EpicLeaderboard.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EpicLeaderboard(Z_Construct_UPackage__Script_EpicLeaderboard, TEXT("/Script/EpicLeaderboard"), Z_Registration_Info_UPackage__Script_EpicLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB378209, 0x58B678C7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
