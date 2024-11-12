// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicLeaderboard/Public/EpicLeaderboardInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboardInterface() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_UGetLeaderboardEntries();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_UGetLeaderboardEntries_NoRegister();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_UIsUsernameAvailable();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_UIsUsernameAvailable_NoRegister();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_USubmitLeaderboardEntry();
EPICLEADERBOARD_API UClass* Z_Construct_UClass_USubmitLeaderboardEntry_NoRegister();
EPICLEADERBOARD_API UEnum* Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse();
EPICLEADERBOARD_API UEnum* Z_Construct_UEnum_EpicLeaderboard_Timeframe();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature();
EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature();
EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboard();
EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry();
EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardGame();
EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse();
UPackage* Z_Construct_UPackage__Script_EpicLeaderboard();
// End Cross Module References

// Begin ScriptStruct FEpicLeaderboardGame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EpicLeaderboardGame;
class UScriptStruct* FEpicLeaderboardGame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardGame, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardGame"));
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.OuterSingleton;
}
template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<FEpicLeaderboardGame>()
{
	return FEpicLeaderboardGame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "EpicLeaderboardGame" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameKey_MetaData[] = {
		{ "Category", "EpicLeaderboardGame" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardGame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardGame, GameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::NewProp_GameKey = { "GameKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardGame, GameKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameKey_MetaData), NewProp_GameKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::NewProp_GameKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	&NewStructOps,
	"EpicLeaderboardGame",
	Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::PropPointers),
	sizeof(FEpicLeaderboardGame),
	alignof(FEpicLeaderboardGame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardGame()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.InnerSingleton, Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardGame.InnerSingleton;
}
// End ScriptStruct FEpicLeaderboardGame

// Begin ScriptStruct FEpicLeaderboard
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EpicLeaderboard;
class UScriptStruct* FEpicLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EpicLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboard, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboard.OuterSingleton;
}
template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<FEpicLeaderboard>()
{
	return FEpicLeaderboard::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEpicLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryID_MetaData[] = {
		{ "Category", "EpicLeaderboard" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryID_MetaData[] = {
		{ "Category", "EpicLeaderboard" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrimaryID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecondaryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::NewProp_PrimaryID = { "PrimaryID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboard, PrimaryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryID_MetaData), NewProp_PrimaryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::NewProp_SecondaryID = { "SecondaryID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboard, SecondaryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryID_MetaData), NewProp_SecondaryID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::NewProp_PrimaryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::NewProp_SecondaryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	&NewStructOps,
	"EpicLeaderboard",
	Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::PropPointers),
	sizeof(FEpicLeaderboard),
	alignof(FEpicLeaderboard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboard()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboard.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EpicLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboard.InnerSingleton;
}
// End ScriptStruct FEpicLeaderboard

// Begin ScriptStruct FEpicLeaderboardEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry;
class UScriptStruct* FEpicLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.OuterSingleton;
}
template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<FEpicLeaderboardEntry>()
{
	return FEpicLeaderboardEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Score;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Meta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Rank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Meta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meta_MetaData), NewProp_Meta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Rank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Meta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	&NewStructOps,
	"EpicLeaderboardEntry",
	Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers),
	sizeof(FEpicLeaderboardEntry),
	alignof(FEpicLeaderboardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry.InnerSingleton;
}
// End ScriptStruct FEpicLeaderboardEntry

// Begin ScriptStruct FEpicLeaderboardGetEntriesResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse;
class UScriptStruct* FEpicLeaderboardGetEntriesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardGetEntriesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.OuterSingleton;
}
template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<FEpicLeaderboardGetEntriesResponse>()
{
	return FEpicLeaderboardGetEntriesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "EpicLeaderboardGetEntriesResponse" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerEntry_MetaData[] = {
		{ "Category", "EpicLeaderboardGetEntriesResponse" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardGetEntriesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(0, nullptr) }; // 177415672
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardGetEntriesResponse, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 177415672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_PlayerEntry = { "PlayerEntry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEpicLeaderboardGetEntriesResponse, PlayerEntry), Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerEntry_MetaData), NewProp_PlayerEntry_MetaData) }; // 177415672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewProp_PlayerEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	&NewStructOps,
	"EpicLeaderboardGetEntriesResponse",
	Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::PropPointers),
	sizeof(FEpicLeaderboardGetEntriesResponse),
	alignof(FEpicLeaderboardGetEntriesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.InnerSingleton, Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse.InnerSingleton;
}
// End ScriptStruct FEpicLeaderboardGetEntriesResponse

// Begin Enum Timeframe
static FEnumRegistrationInfo Z_Registration_Info_UEnum_Timeframe;
static UEnum* Timeframe_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_Timeframe.OuterSingleton)
	{
		Z_Registration_Info_UEnum_Timeframe.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EpicLeaderboard_Timeframe, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("Timeframe"));
	}
	return Z_Registration_Info_UEnum_Timeframe.OuterSingleton;
}
template<> EPICLEADERBOARD_API UEnum* StaticEnum<Timeframe>()
{
	return Timeframe_StaticEnum();
}
struct Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllTime.DisplayName", "All Time" },
		{ "AllTime.Name", "AllTime" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nenum Timeframe\n{\n\x09""AllTime = 0,\n\x09Year = 1,\n\x09Month = 2,\n\x09Week = 3,\n\x09""Day = 4\n}\n */" },
#endif
		{ "Day.DisplayName", "Day" },
		{ "Day.Name", "Day" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
		{ "Month.DisplayName", "Month" },
		{ "Month.Name", "Month" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "enum Timeframe\n{\n       AllTime = 0,\n       Year = 1,\n       Month = 2,\n       Week = 3,\n       Day = 4\n}" },
#endif
		{ "Week.DisplayName", "Week" },
		{ "Week.Name", "Week" },
		{ "Year.DisplayName", "Year" },
		{ "Year.Name", "Year" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AllTime", (int64)AllTime },
		{ "Year", (int64)Year },
		{ "Month", (int64)Month },
		{ "Week", (int64)Week },
		{ "Day", (int64)Day },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	"Timeframe",
	"Timeframe",
	Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EpicLeaderboard_Timeframe()
{
	if (!Z_Registration_Info_UEnum_Timeframe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Timeframe.InnerSingleton, Z_Construct_UEnum_EpicLeaderboard_Timeframe_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_Timeframe.InnerSingleton;
}
// End Enum Timeframe

// Begin Enum IsUsernameAvailableResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_IsUsernameAvailableResponse;
static UEnum* IsUsernameAvailableResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_IsUsernameAvailableResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_IsUsernameAvailableResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse, (UObject*)Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("IsUsernameAvailableResponse"));
	}
	return Z_Registration_Info_UEnum_IsUsernameAvailableResponse.OuterSingleton;
}
template<> EPICLEADERBOARD_API UEnum* StaticEnum<IsUsernameAvailableResponse>()
{
	return IsUsernameAvailableResponse_StaticEnum();
}
struct Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Available.DisplayName", "Available" },
		{ "Available.Name", "Available" },
		{ "BlueprintType", "true" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "Invalid" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
		{ "Profanity.DisplayName", "Profanity" },
		{ "Profanity.Name", "Profanity" },
		{ "Taken.DisplayName", "Taken" },
		{ "Taken.Name", "Taken" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Available", (int64)Available },
		{ "Invalid", (int64)Invalid },
		{ "Profanity", (int64)Profanity },
		{ "Taken", (int64)Taken },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	nullptr,
	"IsUsernameAvailableResponse",
	"IsUsernameAvailableResponse",
	Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse()
{
	if (!Z_Registration_Info_UEnum_IsUsernameAvailableResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_IsUsernameAvailableResponse.InnerSingleton, Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_IsUsernameAvailableResponse.InnerSingleton;
}
// End Enum IsUsernameAvailableResponse

// Begin Delegate FEpicLeaderboardGetEntriesEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics
{
	struct _Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms
	{
		FEpicLeaderboardGetEntriesResponse Entries;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms, Entries), Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse, METADATA_PARAMS(0, nullptr) }; // 110092376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardGetEntriesEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::_Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::_Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardGetEntriesEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardGetEntriesEvent, FEpicLeaderboardGetEntriesResponse Entries)
{
	struct _Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms
	{
		FEpicLeaderboardGetEntriesResponse Entries;
	};
	_Script_EpicLeaderboard_eventEpicLeaderboardGetEntriesEvent_Parms Parms;
	Parms.Entries=Entries;
	EpicLeaderboardGetEntriesEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEpicLeaderboardGetEntriesEvent

// Begin Delegate FEpicLeaderboardGetEntriesErrorEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardGetEntriesErrorEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardGetEntriesErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardGetEntriesErrorEvent)
{
	EpicLeaderboardGetEntriesErrorEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEpicLeaderboardGetEntriesErrorEvent

// Begin Class UGetLeaderboardEntries Function GetLeaderboardEntries
struct Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics
{
	struct GetLeaderboardEntries_eventGetLeaderboardEntries_Parms
	{
		FEpicLeaderboardGame Game;
		FEpicLeaderboard Leaderboard;
		FString Username;
		TEnumAsByte<Timeframe> Timeframe;
		bool AroundPlayer;
		bool Local;
		UGetLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EpicLeaderboard" },
		{ "CPP_Default_AroundPlayer", "true" },
		{ "CPP_Default_Local", "false" },
		{ "CPP_Default_Timeframe", "AllTime" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Game;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Timeframe;
	static void NewProp_AroundPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AroundPlayer;
	static void NewProp_Local_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Local;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, Game), Z_Construct_UScriptStruct_FEpicLeaderboardGame, METADATA_PARAMS(0, nullptr) }; // 3939659575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, Leaderboard), Z_Construct_UScriptStruct_FEpicLeaderboard, METADATA_PARAMS(0, nullptr) }; // 412129638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, Username), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Timeframe = { "Timeframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, Timeframe), Z_Construct_UEnum_EpicLeaderboard_Timeframe, METADATA_PARAMS(0, nullptr) }; // 1906400623
void Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit(void* Obj)
{
	((GetLeaderboardEntries_eventGetLeaderboardEntries_Parms*)Obj)->AroundPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AroundPlayer = { "AroundPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms), &Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Local_SetBit(void* Obj)
{
	((GetLeaderboardEntries_eventGetLeaderboardEntries_Parms*)Obj)->Local = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms), &Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Local_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, ReturnValue), Z_Construct_UClass_UGetLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Timeframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AroundPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Local,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetLeaderboardEntries, nullptr, "GetLeaderboardEntries", nullptr, nullptr, Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::GetLeaderboardEntries_eventGetLeaderboardEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::GetLeaderboardEntries_eventGetLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGetLeaderboardEntries::execGetLeaderboardEntries)
{
	P_GET_STRUCT(FEpicLeaderboardGame,Z_Param_Game);
	P_GET_STRUCT(FEpicLeaderboard,Z_Param_Leaderboard);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FByteProperty,Z_Param_Timeframe);
	P_GET_UBOOL(Z_Param_AroundPlayer);
	P_GET_UBOOL(Z_Param_Local);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGetLeaderboardEntries**)Z_Param__Result=UGetLeaderboardEntries::GetLeaderboardEntries(Z_Param_Game,Z_Param_Leaderboard,Z_Param_Username,Timeframe(Z_Param_Timeframe),Z_Param_AroundPlayer,Z_Param_Local);
	P_NATIVE_END;
}
// End Class UGetLeaderboardEntries Function GetLeaderboardEntries

// Begin Class UGetLeaderboardEntries
void UGetLeaderboardEntries::StaticRegisterNativesUGetLeaderboardEntries()
{
	UClass* Class = UGetLeaderboardEntries::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLeaderboardEntries", &UGetLeaderboardEntries::execGetLeaderboardEntries },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetLeaderboardEntries);
UClass* Z_Construct_UClass_UGetLeaderboardEntries_NoRegister()
{
	return UGetLeaderboardEntries::StaticClass();
}
struct Z_Construct_UClass_UGetLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EpicLeaderboardInterface.h" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetLeaderboardEntries_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 801452604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetLeaderboardEntries_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetLeaderboardEntries, Success), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 1718198905
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetLeaderboardEntries_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetLeaderboardEntries, Error), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardGetEntriesErrorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 1453475351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetLeaderboardEntries_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetLeaderboardEntries_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetLeaderboardEntries_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGetLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetLeaderboardEntries_Statics::ClassParams = {
	&UGetLeaderboardEntries::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGetLeaderboardEntries_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGetLeaderboardEntries_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetLeaderboardEntries_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGetLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_UGetLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetLeaderboardEntries.OuterSingleton, Z_Construct_UClass_UGetLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetLeaderboardEntries.OuterSingleton;
}
template<> EPICLEADERBOARD_API UClass* StaticClass<UGetLeaderboardEntries>()
{
	return UGetLeaderboardEntries::StaticClass();
}
UGetLeaderboardEntries::UGetLeaderboardEntries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGetLeaderboardEntries);
UGetLeaderboardEntries::~UGetLeaderboardEntries() {}
// End Class UGetLeaderboardEntries

// Begin Delegate FEpicLeaderboardSubmitEntryEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardSubmitEntryEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardSubmitEntryEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardSubmitEntryEvent)
{
	EpicLeaderboardSubmitEntryEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEpicLeaderboardSubmitEntryEvent

// Begin Delegate FEpicLeaderboardSubmitEntryErrorEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardSubmitEntryErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardSubmitEntryErrorEvent)
{
	EpicLeaderboardSubmitEntryErrorEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEpicLeaderboardSubmitEntryErrorEvent

// Begin Class USubmitLeaderboardEntry Function SubmitLeaderboardEntry
struct Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics
{
	struct SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms
	{
		FEpicLeaderboardGame Game;
		FEpicLeaderboard Leaderboard;
		FString Username;
		double Score;
		USubmitLeaderboardEntry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EpicLeaderboard" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Game;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms, Game), Z_Construct_UScriptStruct_FEpicLeaderboardGame, METADATA_PARAMS(0, nullptr) }; // 3939659575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms, Leaderboard), Z_Construct_UScriptStruct_FEpicLeaderboard, METADATA_PARAMS(0, nullptr) }; // 412129638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms, Username), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms, ReturnValue), Z_Construct_UClass_USubmitLeaderboardEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmitLeaderboardEntry, nullptr, "SubmitLeaderboardEntry", nullptr, nullptr, Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::SubmitLeaderboardEntry_eventSubmitLeaderboardEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmitLeaderboardEntry::execSubmitLeaderboardEntry)
{
	P_GET_STRUCT(FEpicLeaderboardGame,Z_Param_Game);
	P_GET_STRUCT(FEpicLeaderboard,Z_Param_Leaderboard);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubmitLeaderboardEntry**)Z_Param__Result=USubmitLeaderboardEntry::SubmitLeaderboardEntry(Z_Param_Game,Z_Param_Leaderboard,Z_Param_Username,Z_Param_Score);
	P_NATIVE_END;
}
// End Class USubmitLeaderboardEntry Function SubmitLeaderboardEntry

// Begin Class USubmitLeaderboardEntry Function SubmitLeaderboardEntryWithMetadata
struct Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics
{
	struct SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms
	{
		FEpicLeaderboardGame Game;
		FEpicLeaderboard Leaderboard;
		FString Username;
		double Score;
		TMap<FString,FString> Metadata;
		USubmitLeaderboardEntry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EpicLeaderboard" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Game;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Score;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, Game), Z_Construct_UScriptStruct_FEpicLeaderboardGame, METADATA_PARAMS(0, nullptr) }; // 3939659575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, Leaderboard), Z_Construct_UScriptStruct_FEpicLeaderboard, METADATA_PARAMS(0, nullptr) }; // 412129638
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, Username), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms, ReturnValue), Z_Construct_UClass_USubmitLeaderboardEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmitLeaderboardEntry, nullptr, "SubmitLeaderboardEntryWithMetadata", nullptr, nullptr, Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::SubmitLeaderboardEntry_eventSubmitLeaderboardEntryWithMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmitLeaderboardEntry::execSubmitLeaderboardEntryWithMetadata)
{
	P_GET_STRUCT(FEpicLeaderboardGame,Z_Param_Game);
	P_GET_STRUCT(FEpicLeaderboard,Z_Param_Leaderboard);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Score);
	P_GET_TMAP(FString,FString,Z_Param_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubmitLeaderboardEntry**)Z_Param__Result=USubmitLeaderboardEntry::SubmitLeaderboardEntryWithMetadata(Z_Param_Game,Z_Param_Leaderboard,Z_Param_Username,Z_Param_Score,Z_Param_Metadata);
	P_NATIVE_END;
}
// End Class USubmitLeaderboardEntry Function SubmitLeaderboardEntryWithMetadata

// Begin Class USubmitLeaderboardEntry
void USubmitLeaderboardEntry::StaticRegisterNativesUSubmitLeaderboardEntry()
{
	UClass* Class = USubmitLeaderboardEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SubmitLeaderboardEntry", &USubmitLeaderboardEntry::execSubmitLeaderboardEntry },
		{ "SubmitLeaderboardEntryWithMetadata", &USubmitLeaderboardEntry::execSubmitLeaderboardEntryWithMetadata },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmitLeaderboardEntry);
UClass* Z_Construct_UClass_USubmitLeaderboardEntry_NoRegister()
{
	return USubmitLeaderboardEntry::StaticClass();
}
struct Z_Construct_UClass_USubmitLeaderboardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EpicLeaderboardInterface.h" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntry, "SubmitLeaderboardEntry" }, // 1300952017
		{ &Z_Construct_UFunction_USubmitLeaderboardEntry_SubmitLeaderboardEntryWithMetadata, "SubmitLeaderboardEntryWithMetadata" }, // 3006101509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmitLeaderboardEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USubmitLeaderboardEntry_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmitLeaderboardEntry, Success), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2263949696
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USubmitLeaderboardEntry_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmitLeaderboardEntry, Error), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardSubmitEntryErrorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 3884761423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmitLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmitLeaderboardEntry_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmitLeaderboardEntry_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmitLeaderboardEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmitLeaderboardEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmitLeaderboardEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmitLeaderboardEntry_Statics::ClassParams = {
	&USubmitLeaderboardEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmitLeaderboardEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmitLeaderboardEntry_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmitLeaderboardEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmitLeaderboardEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmitLeaderboardEntry()
{
	if (!Z_Registration_Info_UClass_USubmitLeaderboardEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmitLeaderboardEntry.OuterSingleton, Z_Construct_UClass_USubmitLeaderboardEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmitLeaderboardEntry.OuterSingleton;
}
template<> EPICLEADERBOARD_API UClass* StaticClass<USubmitLeaderboardEntry>()
{
	return USubmitLeaderboardEntry::StaticClass();
}
USubmitLeaderboardEntry::USubmitLeaderboardEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmitLeaderboardEntry);
USubmitLeaderboardEntry::~USubmitLeaderboardEntry() {}
// End Class USubmitLeaderboardEntry

// Begin Delegate FEpicLeaderboardIsUsernameAvailableEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics
{
	struct _Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms
	{
		TEnumAsByte<IsUsernameAvailableResponse> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms, Result), Z_Construct_UEnum_EpicLeaderboard_IsUsernameAvailableResponse, METADATA_PARAMS(0, nullptr) }; // 307471312
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::_Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::_Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardIsUsernameAvailableEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardIsUsernameAvailableEvent, IsUsernameAvailableResponse Result)
{
	struct _Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms
	{
		TEnumAsByte<IsUsernameAvailableResponse> Result;
	};
	_Script_EpicLeaderboard_eventEpicLeaderboardIsUsernameAvailableEvent_Parms Parms;
	Parms.Result=Result;
	EpicLeaderboardIsUsernameAvailableEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEpicLeaderboardIsUsernameAvailableEvent

// Begin Delegate FEpicLeaderboardIsUsernameAvailableErrorEvent
struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEpicLeaderboardIsUsernameAvailableErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardIsUsernameAvailableErrorEvent)
{
	EpicLeaderboardIsUsernameAvailableErrorEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEpicLeaderboardIsUsernameAvailableErrorEvent

// Begin Class UIsUsernameAvailable Function IsUsernameAvailable
struct Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics
{
	struct IsUsernameAvailable_eventIsUsernameAvailable_Parms
	{
		FEpicLeaderboardGame Game;
		FString Username;
		UIsUsernameAvailable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EpicLeaderboard" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Game;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsUsernameAvailable_eventIsUsernameAvailable_Parms, Game), Z_Construct_UScriptStruct_FEpicLeaderboardGame, METADATA_PARAMS(0, nullptr) }; // 3939659575
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsUsernameAvailable_eventIsUsernameAvailable_Parms, Username), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsUsernameAvailable_eventIsUsernameAvailable_Parms, ReturnValue), Z_Construct_UClass_UIsUsernameAvailable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsUsernameAvailable, nullptr, "IsUsernameAvailable", nullptr, nullptr, Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::IsUsernameAvailable_eventIsUsernameAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::IsUsernameAvailable_eventIsUsernameAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsUsernameAvailable::execIsUsernameAvailable)
{
	P_GET_STRUCT(FEpicLeaderboardGame,Z_Param_Game);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsUsernameAvailable**)Z_Param__Result=UIsUsernameAvailable::IsUsernameAvailable(Z_Param_Game,Z_Param_Username);
	P_NATIVE_END;
}
// End Class UIsUsernameAvailable Function IsUsernameAvailable

// Begin Class UIsUsernameAvailable
void UIsUsernameAvailable::StaticRegisterNativesUIsUsernameAvailable()
{
	UClass* Class = UIsUsernameAvailable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsUsernameAvailable", &UIsUsernameAvailable::execIsUsernameAvailable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsUsernameAvailable);
UClass* Z_Construct_UClass_UIsUsernameAvailable_NoRegister()
{
	return UIsUsernameAvailable::StaticClass();
}
struct Z_Construct_UClass_UIsUsernameAvailable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EpicLeaderboardInterface.h" },
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicLeaderboardInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsUsernameAvailable_IsUsernameAvailable, "IsUsernameAvailable" }, // 939455790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsUsernameAvailable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsUsernameAvailable_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsUsernameAvailable, Success), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 1077071908
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsUsernameAvailable_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsUsernameAvailable, Error), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardIsUsernameAvailableErrorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 4059577692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsUsernameAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsUsernameAvailable_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsUsernameAvailable_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsUsernameAvailable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsUsernameAvailable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsUsernameAvailable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsUsernameAvailable_Statics::ClassParams = {
	&UIsUsernameAvailable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsUsernameAvailable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsUsernameAvailable_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsUsernameAvailable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsUsernameAvailable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsUsernameAvailable()
{
	if (!Z_Registration_Info_UClass_UIsUsernameAvailable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsUsernameAvailable.OuterSingleton, Z_Construct_UClass_UIsUsernameAvailable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsUsernameAvailable.OuterSingleton;
}
template<> EPICLEADERBOARD_API UClass* StaticClass<UIsUsernameAvailable>()
{
	return UIsUsernameAvailable::StaticClass();
}
UIsUsernameAvailable::UIsUsernameAvailable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsUsernameAvailable);
UIsUsernameAvailable::~UIsUsernameAvailable() {}
// End Class UIsUsernameAvailable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Timeframe_StaticEnum, TEXT("Timeframe"), &Z_Registration_Info_UEnum_Timeframe, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1906400623U) },
		{ IsUsernameAvailableResponse_StaticEnum, TEXT("IsUsernameAvailableResponse"), &Z_Registration_Info_UEnum_IsUsernameAvailableResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 307471312U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEpicLeaderboardGame::StaticStruct, Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics::NewStructOps, TEXT("EpicLeaderboardGame"), &Z_Registration_Info_UScriptStruct_EpicLeaderboardGame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEpicLeaderboardGame), 3939659575U) },
		{ FEpicLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FEpicLeaderboard_Statics::NewStructOps, TEXT("EpicLeaderboard"), &Z_Registration_Info_UScriptStruct_EpicLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEpicLeaderboard), 412129638U) },
		{ FEpicLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewStructOps, TEXT("EpicLeaderboardEntry"), &Z_Registration_Info_UScriptStruct_EpicLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEpicLeaderboardEntry), 177415672U) },
		{ FEpicLeaderboardGetEntriesResponse::StaticStruct, Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics::NewStructOps, TEXT("EpicLeaderboardGetEntriesResponse"), &Z_Registration_Info_UScriptStruct_EpicLeaderboardGetEntriesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEpicLeaderboardGetEntriesResponse), 110092376U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetLeaderboardEntries, UGetLeaderboardEntries::StaticClass, TEXT("UGetLeaderboardEntries"), &Z_Registration_Info_UClass_UGetLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetLeaderboardEntries), 3659218963U) },
		{ Z_Construct_UClass_USubmitLeaderboardEntry, USubmitLeaderboardEntry::StaticClass, TEXT("USubmitLeaderboardEntry"), &Z_Registration_Info_UClass_USubmitLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmitLeaderboardEntry), 2668843758U) },
		{ Z_Construct_UClass_UIsUsernameAvailable, UIsUsernameAvailable::StaticClass, TEXT("UIsUsernameAvailable"), &Z_Registration_Info_UClass_UIsUsernameAvailable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsUsernameAvailable), 3589492878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_2932872628(TEXT("/Script/EpicLeaderboard"),
	Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
