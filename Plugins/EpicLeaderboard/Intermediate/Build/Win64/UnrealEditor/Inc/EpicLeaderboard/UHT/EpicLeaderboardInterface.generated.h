// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EpicLeaderboardInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UGetLeaderboardEntries;
class UIsUsernameAvailable;
class USubmitLeaderboardEntry;
struct FEpicLeaderboard;
struct FEpicLeaderboardGame;
struct FEpicLeaderboardGetEntriesResponse;
#ifdef EPICLEADERBOARD_EpicLeaderboardInterface_generated_h
#error "EpicLeaderboardInterface.generated.h already included, missing '#pragma once' in EpicLeaderboardInterface.h"
#endif
#define EPICLEADERBOARD_EpicLeaderboardInterface_generated_h

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicLeaderboardGame_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<struct FEpicLeaderboardGame>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicLeaderboard_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<struct FEpicLeaderboard>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<struct FEpicLeaderboardEntry>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicLeaderboardGetEntriesResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<struct FEpicLeaderboardGetEntriesResponse>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_161_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardGetEntriesEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardGetEntriesEvent, FEpicLeaderboardGetEntriesResponse Entries);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_163_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardGetEntriesErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardGetEntriesErrorEvent);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLeaderboardEntries);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetLeaderboardEntries(); \
	friend struct Z_Construct_UClass_UGetLeaderboardEntries_Statics; \
public: \
	DECLARE_CLASS(UGetLeaderboardEntries, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UGetLeaderboardEntries)


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetLeaderboardEntries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGetLeaderboardEntries(UGetLeaderboardEntries&&); \
	UGetLeaderboardEntries(const UGetLeaderboardEntries&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetLeaderboardEntries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetLeaderboardEntries); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetLeaderboardEntries) \
	NO_API virtual ~UGetLeaderboardEntries();


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_165_PROLOG
#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_INCLASS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EPICLEADERBOARD_API UClass* StaticClass<class UGetLeaderboardEntries>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_306_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardSubmitEntryEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardSubmitEntryEvent);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_307_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardSubmitEntryErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardSubmitEntryErrorEvent);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSubmitLeaderboardEntry); \
	DECLARE_FUNCTION(execSubmitLeaderboardEntryWithMetadata);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmitLeaderboardEntry(); \
	friend struct Z_Construct_UClass_USubmitLeaderboardEntry_Statics; \
public: \
	DECLARE_CLASS(USubmitLeaderboardEntry, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(USubmitLeaderboardEntry)


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmitLeaderboardEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubmitLeaderboardEntry(USubmitLeaderboardEntry&&); \
	USubmitLeaderboardEntry(const USubmitLeaderboardEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmitLeaderboardEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmitLeaderboardEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmitLeaderboardEntry) \
	NO_API virtual ~USubmitLeaderboardEntry();


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_309_PROLOG
#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_INCLASS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_312_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EPICLEADERBOARD_API UClass* StaticClass<class USubmitLeaderboardEntry>();

#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_429_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardIsUsernameAvailableEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardIsUsernameAvailableEvent, IsUsernameAvailableResponse Result);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_430_DELEGATE \
EPICLEADERBOARD_API void FEpicLeaderboardIsUsernameAvailableErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardIsUsernameAvailableErrorEvent);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUsernameAvailable);


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsUsernameAvailable(); \
	friend struct Z_Construct_UClass_UIsUsernameAvailable_Statics; \
public: \
	DECLARE_CLASS(UIsUsernameAvailable, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UIsUsernameAvailable)


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsUsernameAvailable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIsUsernameAvailable(UIsUsernameAvailable&&); \
	UIsUsernameAvailable(const UIsUsernameAvailable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsUsernameAvailable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsUsernameAvailable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsUsernameAvailable) \
	NO_API virtual ~UIsUsernameAvailable();


#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_432_PROLOG
#define FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_INCLASS_NO_PURE_DECLS \
	FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h_435_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EPICLEADERBOARD_API UClass* StaticClass<class UIsUsernameAvailable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_KaigarGames_GrandmasGrimoire_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Public_EpicLeaderboardInterface_h


#define FOREACH_ENUM_TIMEFRAME(op) \
	op(AllTime) \
	op(Year) \
	op(Month) \
	op(Week) \
	op(Day) 

enum Timeframe : uint8;
template<> EPICLEADERBOARD_API UEnum* StaticEnum<Timeframe>();

#define FOREACH_ENUM_ISUSERNAMEAVAILABLERESPONSE(op) \
	op(Available) \
	op(Invalid) \
	op(Profanity) \
	op(Taken) 

enum IsUsernameAvailableResponse : uint8;
template<> EPICLEADERBOARD_API UEnum* StaticEnum<IsUsernameAvailableResponse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
