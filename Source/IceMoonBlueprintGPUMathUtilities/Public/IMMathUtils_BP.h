#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IMMathUtils.h"
#include "IMMathUtils_BP.generated.h"

UCLASS()
class ICEMOONBLUEPRINTGPUMATHUTILITIES_API UIMMathUtils_BP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float InvLerp(float InMin, float InMax, float Value){
		return IMMathUtils::InvLerp(InMin, InMax, Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float InvLerp_sat(float InMin, float InMax, float Value)  {
		return IMMathUtils::InvLerp_Sat(InMin, InMax, Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static FVector InvLerpVector(FVector InMin, FVector InMax, FVector Value) {
		return IMMathUtils::InvLerpVector(InMin, InMax, Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static FVector InvLerpVector_Sat(FVector InMin, FVector InMax, FVector Value){
		return IMMathUtils::InvLerpVector_Sat(InMin, InMax, Value);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Remap(float InMin, float InMax, float OutMin, float OutMax, float Value){
		return IMMathUtils::Remap(InMin, InMax, OutMin, OutMax, Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Remap_Sat(float InMin, float InMax, float OutMin, float OutMax, float Value){
		return IMMathUtils::Remap_Sat(InMin, InMax, OutMin, OutMax, Value);
	}
	
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Saturate(float Value){
		return IMMathUtils::Saturate(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static FVector SaturateVector(FVector Value){
		return IMMathUtils::SaturateVector(Value);
	}
	
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Smoothstep(float InMin, float InMax, float Value){
		return IMMathUtils::Smoothstep(InMin, InMax, Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Smoothstep_Sat(float InMin, float InMax, float Value){
		return IMMathUtils::Smoothstep_Sat(InMin, InMax, Value);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float Mad(float MulA, float MulB, float Add){
		return IMMathUtils::Mad(MulA, MulB, Add);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static FVector MadVector(FVector MulA, FVector MulB, FVector Add){
		return IMMathUtils::Mad(MulA, MulB, Add);
	}
	
	UFUNCTION(BlueprintPure, Category="IM|Math", meta = (BlueprintThreadSafe))
	static float SignPow(float A, float B){
		return IMMathUtils::SignPow(A, B);
	}

	// ============ 向量函数 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FVector NormalizeSafe(FVector Vec, float& OutLength){
		return IMMathUtils::NormalizeSafe(Vec, OutLength);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float SumVector2D(FVector2D Value){
		return IMMathUtils::SumVector(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float SumVector(FVector Value){
		return IMMathUtils::SumVector(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float SumVector4(FVector4 Value){
		return IMMathUtils::SumVector(Value);
	}
	
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float AvgVector2D(FVector2D Value){
		return IMMathUtils::SumVector(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float AvgVector(FVector Value){
		return IMMathUtils::AvgVector(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static float AvgVector4(FVector4 Value){
		return IMMathUtils::AvgVector(Value);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector2 FloorVector2D(const FVector2D& V)
	{
		return IMMathUtils::FloorVector2D(V);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector FloorVector(const FVector& V)
	{
		return IMMathUtils::FloorVector(V);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector4 FloorVector4(const FVector4& V)
	{
		return IMMathUtils::FloorVector4(V);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector2 RoundVector2D(const FVector2D& V)
	{
		return IMMathUtils::RoundVector2D(V);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector RoundVector(const FVector& V)
	{
		return IMMathUtils::RoundVector(V);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FIntVector4 RoundVector4(const FVector4& V)
	{
		return IMMathUtils::RoundVector4(V);
	}
	
	UFUNCTION(BlueprintPure, Category="IM|Math|Vector", meta = (BlueprintThreadSafe))
	static FVector Slerp(FVector VecA, FVector VecB, float Alpha){
		return IMMathUtils::Slerp(VecA, VecB, Alpha);
	}

	// ============ 角度转换 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|Angle", meta = (BlueprintThreadSafe))
	static float DegToRad(float Degrees){
		return IMMathUtils::DegToRad(Degrees);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Angle", meta = (BlueprintThreadSafe))
	static float RadToDeg(float Radians){
		return IMMathUtils::RadToDeg(Radians);
	}

	// ============ 排序/交换 ============
	//if (a > b) Swap return true
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static bool SortFloat(UPARAM(ref) float& A, UPARAM(ref) float& B){
		return IMMathUtils::Sort(A, B);
	}
	//if (a > b) Swap return true
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static bool SortInt(UPARAM(ref) int& A, UPARAM(ref) int& B){
		return IMMathUtils::Sort(A, B);
	}
	
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapFloat(UPARAM(ref) float& A, UPARAM(ref) float& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapInt(UPARAM(ref) int& A, UPARAM(ref) int& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapVector2D(UPARAM(ref) FVector2D& A, UPARAM(ref) FVector2D& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapVector(UPARAM(ref) FVector& A, UPARAM(ref) FVector& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapVector4(UPARAM(ref) FVector4& A, UPARAM(ref) FVector4& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapName(UPARAM(ref) FName& A, UPARAM(ref) FName& B){
		IMMathUtils::Swap(A, B);
	}
	UFUNCTION(BlueprintCallable, Category="IM|Math|Utility", meta = (BlueprintThreadSafe))
	static void SwapString(UPARAM(ref) FString& A, UPARAM(ref) FString& B){
		IMMathUtils::Swap(A, B);
	}
	
	// ============ 颜色函数 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|Color", meta = (BlueprintThreadSafe))
	static FLinearColor Desaturation(FLinearColor Color, float Alpha){
		return IMMathUtils::Desaturation(Color, Alpha);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Color", meta = (BlueprintThreadSafe))
	static FLinearColor LinearRGBToHSV(FLinearColor RGB){
		return IMMathUtils::LinearRGBToHSV(RGB);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Color", meta = (BlueprintThreadSafe))
	static FLinearColor HSVToLinearRGB(FLinearColor HSV){
		return IMMathUtils::HSVToLinearRGB(HSV);
	}

	// ============ SDF 函数 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|SDF", meta = (BlueprintThreadSafe))
	static float SdfMax(float A, float B, float K){
		return IMMathUtils::SdfMax(A, B, K);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|SDF", meta = (BlueprintThreadSafe))
	static float SdfMin(float A, float B, float K){
		return IMMathUtils::SdfMin(A, B, K);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|SDF", meta = (BlueprintThreadSafe))
	static float CapsuleDistance(
		FVector SamplePosition,
		FVector CapsulePos,
		FVector CapsuleLengthDirection,
		float CapsuleLength,
		FVector& OutDir,
		FVector& OutNearPosition){
		return IMMathUtils::CapsuleDistance(SamplePosition, CapsulePos, CapsuleLengthDirection, CapsuleLength, OutDir, OutNearPosition);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|SDF", meta = (BlueprintThreadSafe))
	static FVector CapsuleCollisionPosition(
		FVector SamplePosition,
		FVector CapsulePos,
		FVector CapsuleLengthDirection,
		float CapsuleLength,
		float CapsuleRadius,
		bool& OutCollisionValid){
		return IMMathUtils::CapsuleCollisionPosition(SamplePosition, CapsulePos, CapsuleLengthDirection, CapsuleLength, CapsuleRadius, OutCollisionValid);
	}

	// ============ 哈希/随机函数 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|Hash", meta = (BlueprintThreadSafe))
	static float Hash21(FVector2D P){
		return IMMathUtils::Hash21(P);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Hash", meta = (BlueprintThreadSafe))
	static FVector2D Hash22(FVector2D P){
		return IMMathUtils::Hash22(P);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Hash", meta = (BlueprintThreadSafe))
	static FVector Hash33(FIntVector P){
		return IMMathUtils::Hash33(P);
	}

	// ============ 高斯分布 ============
	UFUNCTION(BlueprintPure, Category="IM|Math|Random", meta = (BlueprintThreadSafe))
	static float GaussianRandom(FVector P, float Mean, float StdDev){
		return IMMathUtils::GaussianRandom(P, Mean, StdDev);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Random", meta = (BlueprintThreadSafe))
	static float Log2GaussianRandom(FVector P, float Mean, float StdDev){
		return IMMathUtils::Log2GaussianRandom(P, Mean, StdDev);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Random", meta = (BlueprintThreadSafe))
	static float LogeGaussianRandom(FVector P, float Mean, float StdDev){
		return IMMathUtils::LogeGaussianRandom(P, Mean, StdDev);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Random", meta = (BlueprintThreadSafe))
	static float Log10GaussianRandom(FVector P, float Mean, float StdDev){
		return IMMathUtils::Log10GaussianRandom(P, Mean, StdDev);
	}

	// ============ 平方函数 ============
	
	UFUNCTION(BlueprintPure, Category="IM|Math|Power", meta = (BlueprintThreadSafe, CompactNodeTitle="²"))
	static float Pow2(float A){
		return IMMathUtils::Pow2(A);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Power", meta = (BlueprintThreadSafe, CompactNodeTitle="²"))
	static FVector Pow2Vector(FVector A){
		return IMMathUtils::Pow2Vector(A);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Power", meta = (BlueprintThreadSafe))
	static float LengthSquared2D(FVector2D V){
		return IMMathUtils::LengthSquared(V);
	}
	UFUNCTION(BlueprintPure, Category="IM|Math|Power", meta = (BlueprintThreadSafe))
	static float LengthSquared(FVector V){
		return IMMathUtils::LengthSquared(V);
	}
	
	// RandomSeed 是固定大概的起始随机射线位置  开了bStochasticJitter会导致微小偏移
	UFUNCTION(BlueprintCallable, Category="IM|Math", meta = (BlueprintThreadSafe))
	static void GetFibonacciSphereSamples(
		TArray<FVector>& OutDirections,
		int32 NumSamples = 1,
		FVector ConeDirection = FVector::UpVector,
		float ConeAngleDegree = 360.0f,
		bool bStochasticJitter = true,
		int32 RandomSeed = -1)
	{
		return IMMathUtils::GetFibonacciSphereSamples(OutDirections, NumSamples, ConeDirection, ConeAngleDegree, bStochasticJitter, RandomSeed);
	}
};