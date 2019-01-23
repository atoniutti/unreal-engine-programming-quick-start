// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKSTART_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define QUICKSTART_MyPawn_generated_h

#define QuickStart_Source_QuickStart_MyPawn_h_14_RPC_WRAPPERS
#define QuickStart_Source_QuickStart_MyPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define QuickStart_Source_QuickStart_MyPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define QuickStart_Source_QuickStart_MyPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define QuickStart_Source_QuickStart_MyPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define QuickStart_Source_QuickStart_MyPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define QuickStart_Source_QuickStart_MyPawn_h_14_PRIVATE_PROPERTY_OFFSET
#define QuickStart_Source_QuickStart_MyPawn_h_11_PROLOG
#define QuickStart_Source_QuickStart_MyPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_MyPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_MyPawn_h_14_RPC_WRAPPERS \
	QuickStart_Source_QuickStart_MyPawn_h_14_INCLASS \
	QuickStart_Source_QuickStart_MyPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickStart_Source_QuickStart_MyPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_MyPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_MyPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_MyPawn_h_14_INCLASS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_MyPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickStart_Source_QuickStart_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
