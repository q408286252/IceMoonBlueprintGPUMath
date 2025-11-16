// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMMathUtils_BP.h"

#ifdef ICEMOONBLUEPRINTGPUMATHUTILITIES_IMMathUtils_BP_generated_h
#error "IMMathUtils_BP.generated.h already included, missing '#pragma once' in IMMathUtils_BP.h"
#endif
#define ICEMOONBLUEPRINTGPUMATHUTILITIES_IMMathUtils_BP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLinearColor;

// ********** Begin Class UIMMathUtils_BP **********************************************************
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFibonacciSphereSamples); \
	DECLARE_FUNCTION(execLengthSquared); \
	DECLARE_FUNCTION(execLengthSquared2D); \
	DECLARE_FUNCTION(execPow2Vector); \
	DECLARE_FUNCTION(execPow2); \
	DECLARE_FUNCTION(execLog10GaussianRandom); \
	DECLARE_FUNCTION(execLogeGaussianRandom); \
	DECLARE_FUNCTION(execLog2GaussianRandom); \
	DECLARE_FUNCTION(execGaussianRandom); \
	DECLARE_FUNCTION(execHash33); \
	DECLARE_FUNCTION(execHash22); \
	DECLARE_FUNCTION(execHash21); \
	DECLARE_FUNCTION(execCapsuleCollisionPosition); \
	DECLARE_FUNCTION(execCapsuleDistance); \
	DECLARE_FUNCTION(execSdfMin); \
	DECLARE_FUNCTION(execSdfMax); \
	DECLARE_FUNCTION(execHSVToLinearRGB); \
	DECLARE_FUNCTION(execLinearRGBToHSV); \
	DECLARE_FUNCTION(execDesaturation); \
	DECLARE_FUNCTION(execSwapString); \
	DECLARE_FUNCTION(execSwapName); \
	DECLARE_FUNCTION(execSwapVector4); \
	DECLARE_FUNCTION(execSwapVector); \
	DECLARE_FUNCTION(execSwapVector2D); \
	DECLARE_FUNCTION(execSwapInt); \
	DECLARE_FUNCTION(execSwapFloat); \
	DECLARE_FUNCTION(execSortInt); \
	DECLARE_FUNCTION(execSortFloat); \
	DECLARE_FUNCTION(execRadToDeg); \
	DECLARE_FUNCTION(execDegToRad); \
	DECLARE_FUNCTION(execSlerp); \
	DECLARE_FUNCTION(execRoundVector4); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execRoundVector2D); \
	DECLARE_FUNCTION(execFloorVector4); \
	DECLARE_FUNCTION(execFloorVector); \
	DECLARE_FUNCTION(execFloorVector2D); \
	DECLARE_FUNCTION(execAvgVector4); \
	DECLARE_FUNCTION(execAvgVector); \
	DECLARE_FUNCTION(execAvgVector2D); \
	DECLARE_FUNCTION(execSumVector4); \
	DECLARE_FUNCTION(execSumVector); \
	DECLARE_FUNCTION(execSumVector2D); \
	DECLARE_FUNCTION(execNormalizeSafe); \
	DECLARE_FUNCTION(execSignPow); \
	DECLARE_FUNCTION(execMadVector); \
	DECLARE_FUNCTION(execMad); \
	DECLARE_FUNCTION(execSmoothstep_Sat); \
	DECLARE_FUNCTION(execSmoothstep); \
	DECLARE_FUNCTION(execSaturateVector); \
	DECLARE_FUNCTION(execSaturate); \
	DECLARE_FUNCTION(execRemap_Sat); \
	DECLARE_FUNCTION(execRemap); \
	DECLARE_FUNCTION(execInvLerpVector_Sat); \
	DECLARE_FUNCTION(execInvLerpVector); \
	DECLARE_FUNCTION(execInvLerp_sat); \
	DECLARE_FUNCTION(execInvLerp);


ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMMathUtils_BP_NoRegister();

#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMMathUtils_BP(); \
	friend struct Z_Construct_UClass_UIMMathUtils_BP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMMathUtils_BP_NoRegister(); \
public: \
	DECLARE_CLASS2(UIMMathUtils_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IceMoonBlueprintGPUMathUtilities"), Z_Construct_UClass_UIMMathUtils_BP_NoRegister) \
	DECLARE_SERIALIZER(UIMMathUtils_BP)


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMMathUtils_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIMMathUtils_BP(UIMMathUtils_BP&&) = delete; \
	UIMMathUtils_BP(const UIMMathUtils_BP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMMathUtils_BP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMMathUtils_BP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMMathUtils_BP) \
	NO_API virtual ~UIMMathUtils_BP();


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_6_PROLOG
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_INCLASS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIMMathUtils_BP;

// ********** End Class UIMMathUtils_BP ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
