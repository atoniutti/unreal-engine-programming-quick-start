// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKSTART_NewPawn_generated_h
#error "NewPawn.generated.h already included, missing '#pragma once' in NewPawn.h"
#endif
#define QUICKSTART_NewPawn_generated_h

#define QuickStart_Source_QuickStart_NewPawn_h_12_RPC_WRAPPERS
#define QuickStart_Source_QuickStart_NewPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define QuickStart_Source_QuickStart_NewPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewPawn(); \
	friend struct Z_Construct_UClass_ANewPawn_Statics; \
public: \
	DECLARE_CLASS(ANewPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(ANewPawn)


#define QuickStart_Source_QuickStart_NewPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANewPawn(); \
	friend struct Z_Construct_UClass_ANewPawn_Statics; \
public: \
	DECLARE_CLASS(ANewPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(ANewPawn)


#define QuickStart_Source_QuickStart_NewPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewPawn(ANewPawn&&); \
	NO_API ANewPawn(const ANewPawn&); \
public:


#define QuickStart_Source_QuickStart_NewPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewPawn(ANewPawn&&); \
	NO_API ANewPawn(const ANewPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewPawn)


#define QuickStart_Source_QuickStart_NewPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define QuickStart_Source_QuickStart_NewPawn_h_9_PROLOG
#define QuickStart_Source_QuickStart_NewPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_NewPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_NewPawn_h_12_RPC_WRAPPERS \
	QuickStart_Source_QuickStart_NewPawn_h_12_INCLASS \
	QuickStart_Source_QuickStart_NewPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickStart_Source_QuickStart_NewPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_NewPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_NewPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_NewPawn_h_12_INCLASS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_NewPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickStart_Source_QuickStart_NewPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
