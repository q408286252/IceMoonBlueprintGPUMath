// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMMathUtils_BP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIMMathUtils_BP() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector4();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMMathUtils_BP();
ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMMathUtils_BP_NoRegister();
UPackage* Z_Construct_UPackage__Script_IceMoonBlueprintGPUMathUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMMathUtils_BP Function AvgVector ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics
{
	struct IMMathUtils_BP_eventAvgVector_Parms
	{
		FVector Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "AvgVector", Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::IMMathUtils_BP_eventAvgVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::IMMathUtils_BP_eventAvgVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_AvgVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_AvgVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execAvgVector)
{
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::AvgVector(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function AvgVector *****************************************

// ********** Begin Class UIMMathUtils_BP Function AvgVector2D *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics
{
	struct IMMathUtils_BP_eventAvgVector2D_Parms
	{
		FVector2D Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "AvgVector2D", Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::IMMathUtils_BP_eventAvgVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::IMMathUtils_BP_eventAvgVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execAvgVector2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::AvgVector2D(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function AvgVector2D ***************************************

// ********** Begin Class UIMMathUtils_BP Function AvgVector4 **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics
{
	struct IMMathUtils_BP_eventAvgVector4_Parms
	{
		FVector4 Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventAvgVector4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "AvgVector4", Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::IMMathUtils_BP_eventAvgVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::IMMathUtils_BP_eventAvgVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execAvgVector4)
{
	P_GET_STRUCT(FVector4,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::AvgVector4(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function AvgVector4 ****************************************

// ********** Begin Class UIMMathUtils_BP Function CapsuleCollisionPosition ************************
struct Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics
{
	struct IMMathUtils_BP_eventCapsuleCollisionPosition_Parms
	{
		FVector SamplePosition;
		FVector CapsulePos;
		FVector CapsuleLengthDirection;
		float CapsuleLength;
		float CapsuleRadius;
		bool OutCollisionValid;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|SDF" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsulePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLengthDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static void NewProp_OutCollisionValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutCollisionValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_SamplePosition = { "SamplePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsulePos = { "CapsulePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, CapsulePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleLengthDirection = { "CapsuleLengthDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, CapsuleLengthDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleLength = { "CapsuleLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, CapsuleLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, CapsuleRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_OutCollisionValid_SetBit(void* Obj)
{
	((IMMathUtils_BP_eventCapsuleCollisionPosition_Parms*)Obj)->OutCollisionValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_OutCollisionValid = { "OutCollisionValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms), &Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_OutCollisionValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleCollisionPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_SamplePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsulePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleLengthDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_OutCollisionValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "CapsuleCollisionPosition", Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::IMMathUtils_BP_eventCapsuleCollisionPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::IMMathUtils_BP_eventCapsuleCollisionPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execCapsuleCollisionPosition)
{
	P_GET_STRUCT(FVector,Z_Param_SamplePosition);
	P_GET_STRUCT(FVector,Z_Param_CapsulePos);
	P_GET_STRUCT(FVector,Z_Param_CapsuleLengthDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
	P_GET_UBOOL_REF(Z_Param_Out_OutCollisionValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::CapsuleCollisionPosition(Z_Param_SamplePosition,Z_Param_CapsulePos,Z_Param_CapsuleLengthDirection,Z_Param_CapsuleLength,Z_Param_CapsuleRadius,Z_Param_Out_OutCollisionValid);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function CapsuleCollisionPosition **************************

// ********** Begin Class UIMMathUtils_BP Function CapsuleDistance *********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics
{
	struct IMMathUtils_BP_eventCapsuleDistance_Parms
	{
		FVector SamplePosition;
		FVector CapsulePos;
		FVector CapsuleLengthDirection;
		float CapsuleLength;
		FVector OutDir;
		FVector OutNearPosition;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|SDF" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsulePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLengthDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutNearPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_SamplePosition = { "SamplePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsulePos = { "CapsulePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, CapsulePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsuleLengthDirection = { "CapsuleLengthDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, CapsuleLengthDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsuleLength = { "CapsuleLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, CapsuleLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_OutDir = { "OutDir", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, OutDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_OutNearPosition = { "OutNearPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, OutNearPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventCapsuleDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_SamplePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsulePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsuleLengthDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_CapsuleLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_OutDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_OutNearPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "CapsuleDistance", Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::IMMathUtils_BP_eventCapsuleDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::IMMathUtils_BP_eventCapsuleDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execCapsuleDistance)
{
	P_GET_STRUCT(FVector,Z_Param_SamplePosition);
	P_GET_STRUCT(FVector,Z_Param_CapsulePos);
	P_GET_STRUCT(FVector,Z_Param_CapsuleLengthDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleLength);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDir);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNearPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::CapsuleDistance(Z_Param_SamplePosition,Z_Param_CapsulePos,Z_Param_CapsuleLengthDirection,Z_Param_CapsuleLength,Z_Param_Out_OutDir,Z_Param_Out_OutNearPosition);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function CapsuleDistance ***********************************

// ********** Begin Class UIMMathUtils_BP Function DegToRad ****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics
{
	struct IMMathUtils_BP_eventDegToRad_Parms
	{
		float Degrees;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Angle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe8\xa7\x92\xe5\xba\xa6\xe8\xbd\xac\xe6\x8d\xa2 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe8\xa7\x92\xe5\xba\xa6\xe8\xbd\xac\xe6\x8d\xa2 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Degrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::NewProp_Degrees = { "Degrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventDegToRad_Parms, Degrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventDegToRad_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::NewProp_Degrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "DegToRad", Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::IMMathUtils_BP_eventDegToRad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::IMMathUtils_BP_eventDegToRad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_DegToRad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_DegToRad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execDegToRad)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Degrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::DegToRad(Z_Param_Degrees);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function DegToRad ******************************************

// ********** Begin Class UIMMathUtils_BP Function Desaturation ************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics
{
	struct IMMathUtils_BP_eventDesaturation_Parms
	{
		FLinearColor Color;
		float Alpha;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe9\xa2\x9c\xe8\x89\xb2\xe5\x87\xbd\xe6\x95\xb0 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe9\xa2\x9c\xe8\x89\xb2\xe5\x87\xbd\xe6\x95\xb0 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventDesaturation_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventDesaturation_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventDesaturation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Desaturation", Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::IMMathUtils_BP_eventDesaturation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::IMMathUtils_BP_eventDesaturation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Desaturation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Desaturation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execDesaturation)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UIMMathUtils_BP::Desaturation(Z_Param_Color,Z_Param_Alpha);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Desaturation **************************************

// ********** Begin Class UIMMathUtils_BP Function FloorVector *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics
{
	struct IMMathUtils_BP_eventFloorVector_Parms
	{
		FVector V;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "FloorVector", Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::IMMathUtils_BP_eventFloorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::IMMathUtils_BP_eventFloorVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_FloorVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_FloorVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execFloorVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UIMMathUtils_BP::FloorVector(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function FloorVector ***************************************

// ********** Begin Class UIMMathUtils_BP Function FloorVector2D ***********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics
{
	struct IMMathUtils_BP_eventFloorVector2D_Parms
	{
		FVector2D V;
		FIntVector2 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector2D_Parms, V), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "FloorVector2D", Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::IMMathUtils_BP_eventFloorVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::IMMathUtils_BP_eventFloorVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execFloorVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector2*)Z_Param__Result=UIMMathUtils_BP::FloorVector2D(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function FloorVector2D *************************************

// ********** Begin Class UIMMathUtils_BP Function FloorVector4 ************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics
{
	struct IMMathUtils_BP_eventFloorVector4_Parms
	{
		FVector4 V;
		FIntVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector4_Parms, V), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventFloorVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "FloorVector4", Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::IMMathUtils_BP_eventFloorVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::IMMathUtils_BP_eventFloorVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execFloorVector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector4*)Z_Param__Result=UIMMathUtils_BP::FloorVector4(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function FloorVector4 **************************************

// ********** Begin Class UIMMathUtils_BP Function GaussianRandom **********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics
{
	struct IMMathUtils_BP_eventGaussianRandom_Parms
	{
		FVector P;
		float Mean;
		float StdDev;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe9\xab\x98\xe6\x96\xaf\xe5\x88\x86\xe5\xb8\x83 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe9\xab\x98\xe6\x96\xaf\xe5\x88\x86\xe5\xb8\x83 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdDev;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGaussianRandom_Parms, P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGaussianRandom_Parms, Mean), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_StdDev = { "StdDev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGaussianRandom_Parms, StdDev), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGaussianRandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_Mean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_StdDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "GaussianRandom", Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::IMMathUtils_BP_eventGaussianRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::IMMathUtils_BP_eventGaussianRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execGaussianRandom)
{
	P_GET_STRUCT(FVector,Z_Param_P);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StdDev);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::GaussianRandom(Z_Param_P,Z_Param_Mean,Z_Param_StdDev);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function GaussianRandom ************************************

// ********** Begin Class UIMMathUtils_BP Function GetFibonacciSphereSamples ***********************
struct Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics
{
	struct IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms
	{
		TArray<FVector> OutDirections;
		int32 NumSamples;
		FVector ConeDirection;
		float ConeAngleDegree;
		bool bStochasticJitter;
		int32 RandomSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RandomSeed \xe6\x98\xaf\xe5\x9b\xba\xe5\xae\x9a\xe5\xa4\xa7\xe6\xa6\x82\xe7\x9a\x84\xe8\xb5\xb7\xe5\xa7\x8b\xe9\x9a\x8f\xe6\x9c\xba\xe5\xb0\x84\xe7\xba\xbf\xe4\xbd\x8d\xe7\xbd\xae  \xe5\xbc\x80\xe4\xba\x86""bStochasticJitter\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe5\xbe\xae\xe5\xb0\x8f\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "CPP_Default_bStochasticJitter", "true" },
		{ "CPP_Default_ConeAngleDegree", "360.000000" },
		{ "CPP_Default_ConeDirection", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_NumSamples", "1" },
		{ "CPP_Default_RandomSeed", "-1" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RandomSeed \xe6\x98\xaf\xe5\x9b\xba\xe5\xae\x9a\xe5\xa4\xa7\xe6\xa6\x82\xe7\x9a\x84\xe8\xb5\xb7\xe5\xa7\x8b\xe9\x9a\x8f\xe6\x9c\xba\xe5\xb0\x84\xe7\xba\xbf\xe4\xbd\x8d\xe7\xbd\xae  \xe5\xbc\x80\xe4\xba\x86""bStochasticJitter\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe5\xbe\xae\xe5\xb0\x8f\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDirections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeAngleDegree;
	static void NewProp_bStochasticJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStochasticJitter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_OutDirections_Inner = { "OutDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_OutDirections = { "OutDirections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms, OutDirections), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms, NumSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms, ConeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_ConeAngleDegree = { "ConeAngleDegree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms, ConeAngleDegree), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_bStochasticJitter_SetBit(void* Obj)
{
	((IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms*)Obj)->bStochasticJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_bStochasticJitter = { "bStochasticJitter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms), &Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_bStochasticJitter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms, RandomSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_OutDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_OutDirections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_NumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_ConeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_ConeAngleDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_bStochasticJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "GetFibonacciSphereSamples", Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::IMMathUtils_BP_eventGetFibonacciSphereSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execGetFibonacciSphereSamples)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutDirections);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
	P_GET_STRUCT(FVector,Z_Param_ConeDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ConeAngleDegree);
	P_GET_UBOOL(Z_Param_bStochasticJitter);
	P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::GetFibonacciSphereSamples(Z_Param_Out_OutDirections,Z_Param_NumSamples,Z_Param_ConeDirection,Z_Param_ConeAngleDegree,Z_Param_bStochasticJitter,Z_Param_RandomSeed);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function GetFibonacciSphereSamples *************************

// ********** Begin Class UIMMathUtils_BP Function Hash21 ******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics
{
	struct IMMathUtils_BP_eventHash21_Parms
	{
		FVector2D P;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Hash" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe5\x93\x88\xe5\xb8\x8c/\xe9\x9a\x8f\xe6\x9c\xba\xe5\x87\xbd\xe6\x95\xb0 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe5\x93\x88\xe5\xb8\x8c/\xe9\x9a\x8f\xe6\x9c\xba\xe5\x87\xbd\xe6\x95\xb0 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash21_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash21_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Hash21", Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::IMMathUtils_BP_eventHash21_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::IMMathUtils_BP_eventHash21_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Hash21()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Hash21_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execHash21)
{
	P_GET_STRUCT(FVector2D,Z_Param_P);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Hash21(Z_Param_P);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Hash21 ********************************************

// ********** Begin Class UIMMathUtils_BP Function Hash22 ******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics
{
	struct IMMathUtils_BP_eventHash22_Parms
	{
		FVector2D P;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Hash" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash22_Parms, P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash22_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Hash22", Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::IMMathUtils_BP_eventHash22_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::IMMathUtils_BP_eventHash22_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Hash22()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Hash22_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execHash22)
{
	P_GET_STRUCT(FVector2D,Z_Param_P);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UIMMathUtils_BP::Hash22(Z_Param_P);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Hash22 ********************************************

// ********** Begin Class UIMMathUtils_BP Function Hash33 ******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics
{
	struct IMMathUtils_BP_eventHash33_Parms
	{
		FIntVector P;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Hash" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash33_Parms, P), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHash33_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Hash33", Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::IMMathUtils_BP_eventHash33_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::IMMathUtils_BP_eventHash33_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Hash33()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Hash33_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execHash33)
{
	P_GET_STRUCT(FIntVector,Z_Param_P);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::Hash33(Z_Param_P);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Hash33 ********************************************

// ********** Begin Class UIMMathUtils_BP Function HSVToLinearRGB **********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics
{
	struct IMMathUtils_BP_eventHSVToLinearRGB_Parms
	{
		FLinearColor HSV;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Color" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HSV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::NewProp_HSV = { "HSV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHSVToLinearRGB_Parms, HSV), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventHSVToLinearRGB_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::NewProp_HSV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "HSVToLinearRGB", Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::IMMathUtils_BP_eventHSVToLinearRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::IMMathUtils_BP_eventHSVToLinearRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execHSVToLinearRGB)
{
	P_GET_STRUCT(FLinearColor,Z_Param_HSV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UIMMathUtils_BP::HSVToLinearRGB(Z_Param_HSV);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function HSVToLinearRGB ************************************

// ********** Begin Class UIMMathUtils_BP Function InvLerp *****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics
{
	struct IMMathUtils_BP_eventInvLerp_Parms
	{
		float InMin;
		float InMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "InvLerp", Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::IMMathUtils_BP_eventInvLerp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::IMMathUtils_BP_eventInvLerp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_InvLerp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execInvLerp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::InvLerp(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function InvLerp *******************************************

// ********** Begin Class UIMMathUtils_BP Function InvLerp_sat *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics
{
	struct IMMathUtils_BP_eventInvLerp_sat_Parms
	{
		float InMin;
		float InMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_sat_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_sat_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_sat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerp_sat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "InvLerp_sat", Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::IMMathUtils_BP_eventInvLerp_sat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::IMMathUtils_BP_eventInvLerp_sat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execInvLerp_sat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::InvLerp_sat(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function InvLerp_sat ***************************************

// ********** Begin Class UIMMathUtils_BP Function InvLerpVector ***********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics
{
	struct IMMathUtils_BP_eventInvLerpVector_Parms
	{
		FVector InMin;
		FVector InMax;
		FVector Value;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Parms, InMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Parms, InMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "InvLerpVector", Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::IMMathUtils_BP_eventInvLerpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::IMMathUtils_BP_eventInvLerpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execInvLerpVector)
{
	P_GET_STRUCT(FVector,Z_Param_InMin);
	P_GET_STRUCT(FVector,Z_Param_InMax);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::InvLerpVector(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function InvLerpVector *************************************

// ********** Begin Class UIMMathUtils_BP Function InvLerpVector_Sat *******************************
struct Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics
{
	struct IMMathUtils_BP_eventInvLerpVector_Sat_Parms
	{
		FVector InMin;
		FVector InMax;
		FVector Value;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Sat_Parms, InMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Sat_Parms, InMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Sat_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventInvLerpVector_Sat_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "InvLerpVector_Sat", Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::IMMathUtils_BP_eventInvLerpVector_Sat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::IMMathUtils_BP_eventInvLerpVector_Sat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execInvLerpVector_Sat)
{
	P_GET_STRUCT(FVector,Z_Param_InMin);
	P_GET_STRUCT(FVector,Z_Param_InMax);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::InvLerpVector_Sat(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function InvLerpVector_Sat *********************************

// ********** Begin Class UIMMathUtils_BP Function LengthSquared ***********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics
{
	struct IMMathUtils_BP_eventLengthSquared_Parms
	{
		FVector V;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Power" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLengthSquared_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLengthSquared_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "LengthSquared", Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::IMMathUtils_BP_eventLengthSquared_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::IMMathUtils_BP_eventLengthSquared_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLengthSquared)
{
	P_GET_STRUCT(FVector,Z_Param_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::LengthSquared(Z_Param_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function LengthSquared *************************************

// ********** Begin Class UIMMathUtils_BP Function LengthSquared2D *********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics
{
	struct IMMathUtils_BP_eventLengthSquared2D_Parms
	{
		FVector2D V;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Power" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLengthSquared2D_Parms, V), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLengthSquared2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "LengthSquared2D", Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::IMMathUtils_BP_eventLengthSquared2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::IMMathUtils_BP_eventLengthSquared2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLengthSquared2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::LengthSquared2D(Z_Param_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function LengthSquared2D ***********************************

// ********** Begin Class UIMMathUtils_BP Function LinearRGBToHSV **********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics
{
	struct IMMathUtils_BP_eventLinearRGBToHSV_Parms
	{
		FLinearColor RGB;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Color" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RGB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::NewProp_RGB = { "RGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLinearRGBToHSV_Parms, RGB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLinearRGBToHSV_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::NewProp_RGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "LinearRGBToHSV", Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::IMMathUtils_BP_eventLinearRGBToHSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::IMMathUtils_BP_eventLinearRGBToHSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLinearRGBToHSV)
{
	P_GET_STRUCT(FLinearColor,Z_Param_RGB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UIMMathUtils_BP::LinearRGBToHSV(Z_Param_RGB);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function LinearRGBToHSV ************************************

// ********** Begin Class UIMMathUtils_BP Function Log10GaussianRandom *****************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics
{
	struct IMMathUtils_BP_eventLog10GaussianRandom_Parms
	{
		FVector P;
		float Mean;
		float StdDev;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Random" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdDev;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog10GaussianRandom_Parms, P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog10GaussianRandom_Parms, Mean), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_StdDev = { "StdDev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog10GaussianRandom_Parms, StdDev), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog10GaussianRandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_Mean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_StdDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Log10GaussianRandom", Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::IMMathUtils_BP_eventLog10GaussianRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::IMMathUtils_BP_eventLog10GaussianRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLog10GaussianRandom)
{
	P_GET_STRUCT(FVector,Z_Param_P);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StdDev);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Log10GaussianRandom(Z_Param_P,Z_Param_Mean,Z_Param_StdDev);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Log10GaussianRandom *******************************

// ********** Begin Class UIMMathUtils_BP Function Log2GaussianRandom ******************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics
{
	struct IMMathUtils_BP_eventLog2GaussianRandom_Parms
	{
		FVector P;
		float Mean;
		float StdDev;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Random" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdDev;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog2GaussianRandom_Parms, P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog2GaussianRandom_Parms, Mean), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_StdDev = { "StdDev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog2GaussianRandom_Parms, StdDev), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLog2GaussianRandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_Mean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_StdDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Log2GaussianRandom", Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::IMMathUtils_BP_eventLog2GaussianRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::IMMathUtils_BP_eventLog2GaussianRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLog2GaussianRandom)
{
	P_GET_STRUCT(FVector,Z_Param_P);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StdDev);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Log2GaussianRandom(Z_Param_P,Z_Param_Mean,Z_Param_StdDev);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Log2GaussianRandom ********************************

// ********** Begin Class UIMMathUtils_BP Function LogeGaussianRandom ******************************
struct Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics
{
	struct IMMathUtils_BP_eventLogeGaussianRandom_Parms
	{
		FVector P;
		float Mean;
		float StdDev;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Random" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_P;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StdDev;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLogeGaussianRandom_Parms, P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLogeGaussianRandom_Parms, Mean), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_StdDev = { "StdDev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLogeGaussianRandom_Parms, StdDev), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventLogeGaussianRandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_Mean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_StdDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "LogeGaussianRandom", Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::IMMathUtils_BP_eventLogeGaussianRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::IMMathUtils_BP_eventLogeGaussianRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execLogeGaussianRandom)
{
	P_GET_STRUCT(FVector,Z_Param_P);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StdDev);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::LogeGaussianRandom(Z_Param_P,Z_Param_Mean,Z_Param_StdDev);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function LogeGaussianRandom ********************************

// ********** Begin Class UIMMathUtils_BP Function Mad *********************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics
{
	struct IMMathUtils_BP_eventMad_Parms
	{
		float MulA;
		float MulB;
		float Add;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MulA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MulB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Add;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_MulA = { "MulA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMad_Parms, MulA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_MulB = { "MulB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMad_Parms, MulB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMad_Parms, Add), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMad_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_MulA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_MulB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Mad", Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::IMMathUtils_BP_eventMad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::IMMathUtils_BP_eventMad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Mad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Mad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execMad)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MulA);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MulB);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Add);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Mad(Z_Param_MulA,Z_Param_MulB,Z_Param_Add);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Mad ***********************************************

// ********** Begin Class UIMMathUtils_BP Function MadVector ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics
{
	struct IMMathUtils_BP_eventMadVector_Parms
	{
		FVector MulA;
		FVector MulB;
		FVector Add;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MulA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MulB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Add;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_MulA = { "MulA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMadVector_Parms, MulA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_MulB = { "MulB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMadVector_Parms, MulB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMadVector_Parms, Add), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventMadVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_MulA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_MulB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "MadVector", Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::IMMathUtils_BP_eventMadVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::IMMathUtils_BP_eventMadVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_MadVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_MadVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execMadVector)
{
	P_GET_STRUCT(FVector,Z_Param_MulA);
	P_GET_STRUCT(FVector,Z_Param_MulB);
	P_GET_STRUCT(FVector,Z_Param_Add);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::MadVector(Z_Param_MulA,Z_Param_MulB,Z_Param_Add);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function MadVector *****************************************

// ********** Begin Class UIMMathUtils_BP Function NormalizeSafe ***********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics
{
	struct IMMathUtils_BP_eventNormalizeSafe_Parms
	{
		FVector Vec;
		float OutLength;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe5\x90\x91\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe5\x90\x91\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventNormalizeSafe_Parms, Vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_OutLength = { "OutLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventNormalizeSafe_Parms, OutLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventNormalizeSafe_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_Vec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_OutLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "NormalizeSafe", Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::IMMathUtils_BP_eventNormalizeSafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::IMMathUtils_BP_eventNormalizeSafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execNormalizeSafe)
{
	P_GET_STRUCT(FVector,Z_Param_Vec);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::NormalizeSafe(Z_Param_Vec,Z_Param_Out_OutLength);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function NormalizeSafe *************************************

// ********** Begin Class UIMMathUtils_BP Function Pow2 ********************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics
{
	struct IMMathUtils_BP_eventPow2_Parms
	{
		float A;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe5\xb9\xb3\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0 ============\n" },
#endif
		{ "CompactNodeTitle", "\xc2\xb2" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe5\xb9\xb3\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventPow2_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventPow2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Pow2", Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::IMMathUtils_BP_eventPow2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::IMMathUtils_BP_eventPow2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Pow2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Pow2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execPow2)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Pow2(Z_Param_A);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Pow2 **********************************************

// ********** Begin Class UIMMathUtils_BP Function Pow2Vector **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics
{
	struct IMMathUtils_BP_eventPow2Vector_Parms
	{
		FVector A;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Power" },
		{ "CompactNodeTitle", "\xc2\xb2" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventPow2Vector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventPow2Vector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Pow2Vector", Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::IMMathUtils_BP_eventPow2Vector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::IMMathUtils_BP_eventPow2Vector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execPow2Vector)
{
	P_GET_STRUCT(FVector,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::Pow2Vector(Z_Param_A);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Pow2Vector ****************************************

// ********** Begin Class UIMMathUtils_BP Function RadToDeg ****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics
{
	struct IMMathUtils_BP_eventRadToDeg_Parms
	{
		float Radians;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Angle" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radians;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::NewProp_Radians = { "Radians", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRadToDeg_Parms, Radians), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRadToDeg_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::NewProp_Radians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "RadToDeg", Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::IMMathUtils_BP_eventRadToDeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::IMMathUtils_BP_eventRadToDeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRadToDeg)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radians);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::RadToDeg(Z_Param_Radians);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function RadToDeg ******************************************

// ********** Begin Class UIMMathUtils_BP Function Remap *******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics
{
	struct IMMathUtils_BP_eventRemap_Parms
	{
		float InMin;
		float InMax;
		float OutMin;
		float OutMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, OutMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, OutMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_OutMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_OutMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Remap", Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::IMMathUtils_BP_eventRemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::IMMathUtils_BP_eventRemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Remap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Remap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRemap)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Remap(Z_Param_InMin,Z_Param_InMax,Z_Param_OutMin,Z_Param_OutMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Remap *********************************************

// ********** Begin Class UIMMathUtils_BP Function Remap_Sat ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics
{
	struct IMMathUtils_BP_eventRemap_Sat_Parms
	{
		float InMin;
		float InMax;
		float OutMin;
		float OutMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, OutMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, OutMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRemap_Sat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_OutMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_OutMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Remap_Sat", Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::IMMathUtils_BP_eventRemap_Sat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::IMMathUtils_BP_eventRemap_Sat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRemap_Sat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Remap_Sat(Z_Param_InMin,Z_Param_InMax,Z_Param_OutMin,Z_Param_OutMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Remap_Sat *****************************************

// ********** Begin Class UIMMathUtils_BP Function RoundVector *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics
{
	struct IMMathUtils_BP_eventRoundVector_Parms
	{
		FVector V;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "RoundVector", Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::IMMathUtils_BP_eventRoundVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::IMMathUtils_BP_eventRoundVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_RoundVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_RoundVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRoundVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UIMMathUtils_BP::RoundVector(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function RoundVector ***************************************

// ********** Begin Class UIMMathUtils_BP Function RoundVector2D ***********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics
{
	struct IMMathUtils_BP_eventRoundVector2D_Parms
	{
		FVector2D V;
		FIntVector2 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector2D_Parms, V), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "RoundVector2D", Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::IMMathUtils_BP_eventRoundVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::IMMathUtils_BP_eventRoundVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRoundVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector2*)Z_Param__Result=UIMMathUtils_BP::RoundVector2D(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function RoundVector2D *************************************

// ********** Begin Class UIMMathUtils_BP Function RoundVector4 ************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics
{
	struct IMMathUtils_BP_eventRoundVector4_Parms
	{
		FVector4 V;
		FIntVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector4_Parms, V), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventRoundVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "RoundVector4", Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::IMMathUtils_BP_eventRoundVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::IMMathUtils_BP_eventRoundVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execRoundVector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector4*)Z_Param__Result=UIMMathUtils_BP::RoundVector4(Z_Param_Out_V);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function RoundVector4 **************************************

// ********** Begin Class UIMMathUtils_BP Function Saturate ****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics
{
	struct IMMathUtils_BP_eventSaturate_Parms
	{
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSaturate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSaturate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Saturate", Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::IMMathUtils_BP_eventSaturate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::IMMathUtils_BP_eventSaturate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Saturate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Saturate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSaturate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Saturate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Saturate ******************************************

// ********** Begin Class UIMMathUtils_BP Function SaturateVector **********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics
{
	struct IMMathUtils_BP_eventSaturateVector_Parms
	{
		FVector Value;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSaturateVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSaturateVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SaturateVector", Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::IMMathUtils_BP_eventSaturateVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::IMMathUtils_BP_eventSaturateVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSaturateVector)
{
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::SaturateVector(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SaturateVector ************************************

// ********** Begin Class UIMMathUtils_BP Function SdfMax ******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics
{
	struct IMMathUtils_BP_eventSdfMax_Parms
	{
		float A;
		float B;
		float K;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|SDF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ SDF \xe5\x87\xbd\xe6\x95\xb0 ============\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ SDF \xe5\x87\xbd\xe6\x95\xb0 ============" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMax_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMax_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMax_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMax_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SdfMax", Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::IMMathUtils_BP_eventSdfMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::IMMathUtils_BP_eventSdfMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SdfMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SdfMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSdfMax)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_K);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SdfMax(Z_Param_A,Z_Param_B,Z_Param_K);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SdfMax ********************************************

// ********** Begin Class UIMMathUtils_BP Function SdfMin ******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics
{
	struct IMMathUtils_BP_eventSdfMin_Parms
	{
		float A;
		float B;
		float K;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|SDF" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMin_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMin_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMin_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSdfMin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SdfMin", Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::IMMathUtils_BP_eventSdfMin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::IMMathUtils_BP_eventSdfMin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SdfMin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SdfMin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSdfMin)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_K);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SdfMin(Z_Param_A,Z_Param_B,Z_Param_K);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SdfMin ********************************************

// ********** Begin Class UIMMathUtils_BP Function SignPow *****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics
{
	struct IMMathUtils_BP_eventSignPow_Parms
	{
		float A;
		float B;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSignPow_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSignPow_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSignPow_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SignPow", Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::IMMathUtils_BP_eventSignPow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::IMMathUtils_BP_eventSignPow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SignPow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SignPow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSignPow)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SignPow(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SignPow *******************************************

// ********** Begin Class UIMMathUtils_BP Function Slerp *******************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics
{
	struct IMMathUtils_BP_eventSlerp_Parms
	{
		FVector VecA;
		FVector VecB;
		float Alpha;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VecA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VecB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_VecA = { "VecA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSlerp_Parms, VecA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_VecB = { "VecB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSlerp_Parms, VecB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSlerp_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSlerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_VecA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_VecB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Slerp", Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::IMMathUtils_BP_eventSlerp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::IMMathUtils_BP_eventSlerp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Slerp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Slerp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSlerp)
{
	P_GET_STRUCT(FVector,Z_Param_VecA);
	P_GET_STRUCT(FVector,Z_Param_VecB);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMMathUtils_BP::Slerp(Z_Param_VecA,Z_Param_VecB,Z_Param_Alpha);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Slerp *********************************************

// ********** Begin Class UIMMathUtils_BP Function Smoothstep **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics
{
	struct IMMathUtils_BP_eventSmoothstep_Parms
	{
		float InMin;
		float InMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Smoothstep", Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::IMMathUtils_BP_eventSmoothstep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::IMMathUtils_BP_eventSmoothstep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSmoothstep)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Smoothstep(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Smoothstep ****************************************

// ********** Begin Class UIMMathUtils_BP Function Smoothstep_Sat **********************************
struct Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics
{
	struct IMMathUtils_BP_eventSmoothstep_Sat_Parms
	{
		float InMin;
		float InMax;
		float Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_InMin = { "InMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Sat_Parms, InMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Sat_Parms, InMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Sat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSmoothstep_Sat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_InMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_InMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "Smoothstep_Sat", Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::IMMathUtils_BP_eventSmoothstep_Sat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::IMMathUtils_BP_eventSmoothstep_Sat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSmoothstep_Sat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::Smoothstep_Sat(Z_Param_InMin,Z_Param_InMax,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function Smoothstep_Sat ************************************

// ********** Begin Class UIMMathUtils_BP Function SortFloat ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics
{
	struct IMMathUtils_BP_eventSortFloat_Parms
	{
		float A;
		float B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============ \xe6\x8e\x92\xe5\xba\x8f/\xe4\xba\xa4\xe6\x8d\xa2 ============\n//if (a > b) Swap return true\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "============ \xe6\x8e\x92\xe5\xba\x8f/\xe4\xba\xa4\xe6\x8d\xa2 ============\nif (a > b) Swap return true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSortFloat_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSortFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IMMathUtils_BP_eventSortFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMMathUtils_BP_eventSortFloat_Parms), &Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SortFloat", Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::IMMathUtils_BP_eventSortFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::IMMathUtils_BP_eventSortFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SortFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SortFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSortFloat)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UIMMathUtils_BP::SortFloat(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SortFloat *****************************************

// ********** Begin Class UIMMathUtils_BP Function SortInt *****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics
{
	struct IMMathUtils_BP_eventSortInt_Parms
	{
		int32 A;
		int32 B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//if (a > b) Swap return true\n" },
#endif
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if (a > b) Swap return true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSortInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSortInt_Parms, B), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IMMathUtils_BP_eventSortInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMMathUtils_BP_eventSortInt_Parms), &Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SortInt", Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::IMMathUtils_BP_eventSortInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::IMMathUtils_BP_eventSortInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SortInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SortInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSortInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UIMMathUtils_BP::SortInt(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SortInt *******************************************

// ********** Begin Class UIMMathUtils_BP Function SumVector ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics
{
	struct IMMathUtils_BP_eventSumVector_Parms
	{
		FVector Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SumVector", Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::IMMathUtils_BP_eventSumVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::IMMathUtils_BP_eventSumVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SumVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SumVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSumVector)
{
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SumVector(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SumVector *****************************************

// ********** Begin Class UIMMathUtils_BP Function SumVector2D *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics
{
	struct IMMathUtils_BP_eventSumVector2D_Parms
	{
		FVector2D Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SumVector2D", Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::IMMathUtils_BP_eventSumVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::IMMathUtils_BP_eventSumVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSumVector2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SumVector2D(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SumVector2D ***************************************

// ********** Begin Class UIMMathUtils_BP Function SumVector4 **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics
{
	struct IMMathUtils_BP_eventSumVector4_Parms
	{
		FVector4 Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Vector" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSumVector4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SumVector4", Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::IMMathUtils_BP_eventSumVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::IMMathUtils_BP_eventSumVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SumVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SumVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSumVector4)
{
	P_GET_STRUCT(FVector4,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIMMathUtils_BP::SumVector4(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SumVector4 ****************************************

// ********** Begin Class UIMMathUtils_BP Function SwapFloat ***************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics
{
	struct IMMathUtils_BP_eventSwapFloat_Parms
	{
		float A;
		float B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapFloat_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapFloat", Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::IMMathUtils_BP_eventSwapFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::IMMathUtils_BP_eventSwapFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapFloat)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapFloat(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapFloat *****************************************

// ********** Begin Class UIMMathUtils_BP Function SwapInt *****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics
{
	struct IMMathUtils_BP_eventSwapInt_Parms
	{
		int32 A;
		int32 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapInt_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapInt_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapInt", Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::IMMathUtils_BP_eventSwapInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::IMMathUtils_BP_eventSwapInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapInt(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapInt *******************************************

// ********** Begin Class UIMMathUtils_BP Function SwapName ****************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics
{
	struct IMMathUtils_BP_eventSwapName_Parms
	{
		FName A;
		FName B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_A;
	static const UECodeGen_Private::FNamePropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapName_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapName_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapName", Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::IMMathUtils_BP_eventSwapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::IMMathUtils_BP_eventSwapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapName(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapName ******************************************

// ********** Begin Class UIMMathUtils_BP Function SwapString **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics
{
	struct IMMathUtils_BP_eventSwapString_Parms
	{
		FString A;
		FString B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_A;
	static const UECodeGen_Private::FStrPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapString_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapString_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapString", Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::IMMathUtils_BP_eventSwapString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::IMMathUtils_BP_eventSwapString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapString)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapString(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapString ****************************************

// ********** Begin Class UIMMathUtils_BP Function SwapVector **************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics
{
	struct IMMathUtils_BP_eventSwapVector_Parms
	{
		FVector A;
		FVector B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapVector", Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::IMMathUtils_BP_eventSwapVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::IMMathUtils_BP_eventSwapVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapVector(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapVector ****************************************

// ********** Begin Class UIMMathUtils_BP Function SwapVector2D ************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics
{
	struct IMMathUtils_BP_eventSwapVector2D_Parms
	{
		FVector2D A;
		FVector2D B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector2D_Parms, B), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapVector2D", Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::IMMathUtils_BP_eventSwapVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::IMMathUtils_BP_eventSwapVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapVector2D)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapVector2D(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapVector2D **************************************

// ********** Begin Class UIMMathUtils_BP Function SwapVector4 *************************************
struct Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics
{
	struct IMMathUtils_BP_eventSwapVector4_Parms
	{
		FVector4 A;
		FVector4 B;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Utility" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector4_Parms, A), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMMathUtils_BP_eventSwapVector4_Parms, B), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMMathUtils_BP, nullptr, "SwapVector4", Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::IMMathUtils_BP_eventSwapVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::IMMathUtils_BP_eventSwapVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMMathUtils_BP::execSwapVector4)
{
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIMMathUtils_BP::SwapVector4(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UIMMathUtils_BP Function SwapVector4 ***************************************

// ********** Begin Class UIMMathUtils_BP **********************************************************
void UIMMathUtils_BP::StaticRegisterNativesUIMMathUtils_BP()
{
	UClass* Class = UIMMathUtils_BP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AvgVector", &UIMMathUtils_BP::execAvgVector },
		{ "AvgVector2D", &UIMMathUtils_BP::execAvgVector2D },
		{ "AvgVector4", &UIMMathUtils_BP::execAvgVector4 },
		{ "CapsuleCollisionPosition", &UIMMathUtils_BP::execCapsuleCollisionPosition },
		{ "CapsuleDistance", &UIMMathUtils_BP::execCapsuleDistance },
		{ "DegToRad", &UIMMathUtils_BP::execDegToRad },
		{ "Desaturation", &UIMMathUtils_BP::execDesaturation },
		{ "FloorVector", &UIMMathUtils_BP::execFloorVector },
		{ "FloorVector2D", &UIMMathUtils_BP::execFloorVector2D },
		{ "FloorVector4", &UIMMathUtils_BP::execFloorVector4 },
		{ "GaussianRandom", &UIMMathUtils_BP::execGaussianRandom },
		{ "GetFibonacciSphereSamples", &UIMMathUtils_BP::execGetFibonacciSphereSamples },
		{ "Hash21", &UIMMathUtils_BP::execHash21 },
		{ "Hash22", &UIMMathUtils_BP::execHash22 },
		{ "Hash33", &UIMMathUtils_BP::execHash33 },
		{ "HSVToLinearRGB", &UIMMathUtils_BP::execHSVToLinearRGB },
		{ "InvLerp", &UIMMathUtils_BP::execInvLerp },
		{ "InvLerp_sat", &UIMMathUtils_BP::execInvLerp_sat },
		{ "InvLerpVector", &UIMMathUtils_BP::execInvLerpVector },
		{ "InvLerpVector_Sat", &UIMMathUtils_BP::execInvLerpVector_Sat },
		{ "LengthSquared", &UIMMathUtils_BP::execLengthSquared },
		{ "LengthSquared2D", &UIMMathUtils_BP::execLengthSquared2D },
		{ "LinearRGBToHSV", &UIMMathUtils_BP::execLinearRGBToHSV },
		{ "Log10GaussianRandom", &UIMMathUtils_BP::execLog10GaussianRandom },
		{ "Log2GaussianRandom", &UIMMathUtils_BP::execLog2GaussianRandom },
		{ "LogeGaussianRandom", &UIMMathUtils_BP::execLogeGaussianRandom },
		{ "Mad", &UIMMathUtils_BP::execMad },
		{ "MadVector", &UIMMathUtils_BP::execMadVector },
		{ "NormalizeSafe", &UIMMathUtils_BP::execNormalizeSafe },
		{ "Pow2", &UIMMathUtils_BP::execPow2 },
		{ "Pow2Vector", &UIMMathUtils_BP::execPow2Vector },
		{ "RadToDeg", &UIMMathUtils_BP::execRadToDeg },
		{ "Remap", &UIMMathUtils_BP::execRemap },
		{ "Remap_Sat", &UIMMathUtils_BP::execRemap_Sat },
		{ "RoundVector", &UIMMathUtils_BP::execRoundVector },
		{ "RoundVector2D", &UIMMathUtils_BP::execRoundVector2D },
		{ "RoundVector4", &UIMMathUtils_BP::execRoundVector4 },
		{ "Saturate", &UIMMathUtils_BP::execSaturate },
		{ "SaturateVector", &UIMMathUtils_BP::execSaturateVector },
		{ "SdfMax", &UIMMathUtils_BP::execSdfMax },
		{ "SdfMin", &UIMMathUtils_BP::execSdfMin },
		{ "SignPow", &UIMMathUtils_BP::execSignPow },
		{ "Slerp", &UIMMathUtils_BP::execSlerp },
		{ "Smoothstep", &UIMMathUtils_BP::execSmoothstep },
		{ "Smoothstep_Sat", &UIMMathUtils_BP::execSmoothstep_Sat },
		{ "SortFloat", &UIMMathUtils_BP::execSortFloat },
		{ "SortInt", &UIMMathUtils_BP::execSortInt },
		{ "SumVector", &UIMMathUtils_BP::execSumVector },
		{ "SumVector2D", &UIMMathUtils_BP::execSumVector2D },
		{ "SumVector4", &UIMMathUtils_BP::execSumVector4 },
		{ "SwapFloat", &UIMMathUtils_BP::execSwapFloat },
		{ "SwapInt", &UIMMathUtils_BP::execSwapInt },
		{ "SwapName", &UIMMathUtils_BP::execSwapName },
		{ "SwapString", &UIMMathUtils_BP::execSwapString },
		{ "SwapVector", &UIMMathUtils_BP::execSwapVector },
		{ "SwapVector2D", &UIMMathUtils_BP::execSwapVector2D },
		{ "SwapVector4", &UIMMathUtils_BP::execSwapVector4 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIMMathUtils_BP;
UClass* UIMMathUtils_BP::GetPrivateStaticClass()
{
	using TClass = UIMMathUtils_BP;
	if (!Z_Registration_Info_UClass_UIMMathUtils_BP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IMMathUtils_BP"),
			Z_Registration_Info_UClass_UIMMathUtils_BP.InnerSingleton,
			StaticRegisterNativesUIMMathUtils_BP,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIMMathUtils_BP.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMMathUtils_BP_NoRegister()
{
	return UIMMathUtils_BP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMMathUtils_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IMMathUtils_BP.h" },
		{ "ModuleRelativePath", "Public/IMMathUtils_BP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMMathUtils_BP_AvgVector, "AvgVector" }, // 1169888352
		{ &Z_Construct_UFunction_UIMMathUtils_BP_AvgVector2D, "AvgVector2D" }, // 3935797219
		{ &Z_Construct_UFunction_UIMMathUtils_BP_AvgVector4, "AvgVector4" }, // 1173840270
		{ &Z_Construct_UFunction_UIMMathUtils_BP_CapsuleCollisionPosition, "CapsuleCollisionPosition" }, // 3079008245
		{ &Z_Construct_UFunction_UIMMathUtils_BP_CapsuleDistance, "CapsuleDistance" }, // 3997585203
		{ &Z_Construct_UFunction_UIMMathUtils_BP_DegToRad, "DegToRad" }, // 3943016847
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Desaturation, "Desaturation" }, // 4196207709
		{ &Z_Construct_UFunction_UIMMathUtils_BP_FloorVector, "FloorVector" }, // 2396091882
		{ &Z_Construct_UFunction_UIMMathUtils_BP_FloorVector2D, "FloorVector2D" }, // 2212747382
		{ &Z_Construct_UFunction_UIMMathUtils_BP_FloorVector4, "FloorVector4" }, // 2255568010
		{ &Z_Construct_UFunction_UIMMathUtils_BP_GaussianRandom, "GaussianRandom" }, // 3859616005
		{ &Z_Construct_UFunction_UIMMathUtils_BP_GetFibonacciSphereSamples, "GetFibonacciSphereSamples" }, // 1544400524
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Hash21, "Hash21" }, // 3783634380
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Hash22, "Hash22" }, // 702409333
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Hash33, "Hash33" }, // 4028463754
		{ &Z_Construct_UFunction_UIMMathUtils_BP_HSVToLinearRGB, "HSVToLinearRGB" }, // 3363225733
		{ &Z_Construct_UFunction_UIMMathUtils_BP_InvLerp, "InvLerp" }, // 4016833855
		{ &Z_Construct_UFunction_UIMMathUtils_BP_InvLerp_sat, "InvLerp_sat" }, // 3785050597
		{ &Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector, "InvLerpVector" }, // 53587225
		{ &Z_Construct_UFunction_UIMMathUtils_BP_InvLerpVector_Sat, "InvLerpVector_Sat" }, // 487574600
		{ &Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared, "LengthSquared" }, // 2560366489
		{ &Z_Construct_UFunction_UIMMathUtils_BP_LengthSquared2D, "LengthSquared2D" }, // 3940599268
		{ &Z_Construct_UFunction_UIMMathUtils_BP_LinearRGBToHSV, "LinearRGBToHSV" }, // 367815560
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Log10GaussianRandom, "Log10GaussianRandom" }, // 2576660023
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Log2GaussianRandom, "Log2GaussianRandom" }, // 1007616846
		{ &Z_Construct_UFunction_UIMMathUtils_BP_LogeGaussianRandom, "LogeGaussianRandom" }, // 1239234970
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Mad, "Mad" }, // 2134985273
		{ &Z_Construct_UFunction_UIMMathUtils_BP_MadVector, "MadVector" }, // 1171763486
		{ &Z_Construct_UFunction_UIMMathUtils_BP_NormalizeSafe, "NormalizeSafe" }, // 3826654102
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Pow2, "Pow2" }, // 655804567
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Pow2Vector, "Pow2Vector" }, // 4033844505
		{ &Z_Construct_UFunction_UIMMathUtils_BP_RadToDeg, "RadToDeg" }, // 3615752911
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Remap, "Remap" }, // 1207581375
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Remap_Sat, "Remap_Sat" }, // 3151814683
		{ &Z_Construct_UFunction_UIMMathUtils_BP_RoundVector, "RoundVector" }, // 391869435
		{ &Z_Construct_UFunction_UIMMathUtils_BP_RoundVector2D, "RoundVector2D" }, // 2752212178
		{ &Z_Construct_UFunction_UIMMathUtils_BP_RoundVector4, "RoundVector4" }, // 2916926119
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Saturate, "Saturate" }, // 1742486890
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SaturateVector, "SaturateVector" }, // 291542988
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SdfMax, "SdfMax" }, // 2733321752
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SdfMin, "SdfMin" }, // 230044748
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SignPow, "SignPow" }, // 1250652587
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Slerp, "Slerp" }, // 3309211538
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep, "Smoothstep" }, // 3489041948
		{ &Z_Construct_UFunction_UIMMathUtils_BP_Smoothstep_Sat, "Smoothstep_Sat" }, // 240983926
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SortFloat, "SortFloat" }, // 79027346
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SortInt, "SortInt" }, // 4015655754
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SumVector, "SumVector" }, // 226584049
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SumVector2D, "SumVector2D" }, // 3527126964
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SumVector4, "SumVector4" }, // 4114649602
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapFloat, "SwapFloat" }, // 3512925625
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapInt, "SwapInt" }, // 1293320559
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapName, "SwapName" }, // 2467557426
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapString, "SwapString" }, // 4254894973
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapVector, "SwapVector" }, // 1750570076
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapVector2D, "SwapVector2D" }, // 3512556572
		{ &Z_Construct_UFunction_UIMMathUtils_BP_SwapVector4, "SwapVector4" }, // 501685401
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMMathUtils_BP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMMathUtils_BP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonBlueprintGPUMathUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMMathUtils_BP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMMathUtils_BP_Statics::ClassParams = {
	&UIMMathUtils_BP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMMathUtils_BP_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMMathUtils_BP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMMathUtils_BP()
{
	if (!Z_Registration_Info_UClass_UIMMathUtils_BP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMMathUtils_BP.OuterSingleton, Z_Construct_UClass_UIMMathUtils_BP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMMathUtils_BP.OuterSingleton;
}
UIMMathUtils_BP::UIMMathUtils_BP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMMathUtils_BP);
UIMMathUtils_BP::~UIMMathUtils_BP() {}
// ********** End Class UIMMathUtils_BP ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMMathUtils_BP, UIMMathUtils_BP::StaticClass, TEXT("UIMMathUtils_BP"), &Z_Registration_Info_UClass_UIMMathUtils_BP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMMathUtils_BP), 3507142294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_2870250238(TEXT("/Script/IceMoonBlueprintGPUMathUtilities"),
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMMathUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
