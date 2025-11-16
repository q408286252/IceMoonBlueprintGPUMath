#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h" // For FMath::Pow, FMath::Lerp

namespace IMMathUtils
{
	template< class T > 
	inline T InvLerp(T InMin, T InMax, T Value)
	{
		if ( InMin == InMax ) return 0.0;
		return (Value - InMin) / (InMax - InMin);
	}
	template< class T > 
	inline T InvLerp_Sat(T InMin, T InMax, T Value)
	{
		T a =InvLerp(InMin, InMax, Value);
		return FMath::Clamp(a, 0.f, 1.f);
	}
	inline FVector InvLerpVector(const FVector& InMin, const FVector& InMax, const FVector& Value)
	{
		FVector Result = (Value - InMin) / (InMax - InMin);
		return FVector(
			FMath::IsFinite(Result.X) ? Result.X : 0.0f,
			FMath::IsFinite(Result.Y) ? Result.Y : 0.0f,
			FMath::IsFinite(Result.Z) ? Result.Z : 0.0f
		);
	}
	inline FVector InvLerpVector_Sat(const FVector& InMin, const FVector& InMax, const FVector& Value)
	{
		FVector Result = (Value - InMin) / (InMax - InMin);
		return FVector(
			FMath::Clamp(Result.X, 0.0f, 1.0f),
			FMath::Clamp(Result.Y, 0.0f, 1.0f),
			FMath::Clamp(Result.Z, 0.0f, 1.0f)
		);
	}
	
	template< class T > 
	inline T Remap(T InMin, T InMax, T OutMin, T OutMax, T Value)
	{
		return FMath::Lerp(OutMin, OutMax, InvLerp(InMin, InMax, Value));
	}
	template< class T > 
	inline T Remap_Sat(T InMin, T InMax, T OutMin, T OutMax, T Value)
	{
		return FMath::Lerp(OutMin, OutMax, InvLerp_Sat(InMin, InMax, Value));
	}
	
	template<class T>
	inline T Saturate(T Value)
	{
		return FMath::Clamp(Value, T(0), T(1));
	}
	inline FVector SaturateVector(const FVector& Value)
	{
		return FVector(
			FMath::Clamp(Value.X, 0.0f, 1.0f),
			FMath::Clamp(Value.Y, 0.0f, 1.0f),
			FMath::Clamp(Value.Z, 0.0f, 1.0f)
		);
	}
	
	template<class T>
	inline T Smoothstep(T InMin, T InMax, T Value)
	{
		T T_Val = InvLerp(InMin, InMax, Value);
		return T_Val * T_Val * (T(3) - T(2) * T_Val);
	}
	template<class T>
	inline T Smoothstep_Sat(T InMin, T InMax, T Value)
	{
		T T_Val = InvLerp_Sat(InMin, InMax, Value);
		return T_Val * T_Val * (T(3) - T(2) * T_Val);
	}

	template<class T>
	inline T Mad(T MulA, T MulB, T Add)
	{
		return MulA * MulB + Add;
	}
    
	template<class T>
	inline T SignPow(T A, T B)
	{
		T Sign = FMath::Sign(A);
		return Sign * FMath::Pow(FMath::Abs(A), B);
	}
    
	template<class T>
	inline T Pow2(T A)
	{
		return A * A;
	}
	inline FVector Pow2Vector(const FVector& A)
	{
		return FVector(A.X * A.X, A.Y * A.Y, A.Z * A.Z);
	}

    // ============ 向量工具函数 ============
    
    inline FVector NormalizeSafe(const FVector& Vec, float& OutLength)
    {
        float DotValue = Vec.SizeSquared();
        if (DotValue > 1e-6f)
        {
            OutLength = FMath::Sqrt(DotValue);
            return Vec / OutLength;
        }
        else
        {
            OutLength = 0.0f;
            return FVector::ZeroVector;
        }
    }
    
    inline float SumVector(const FVector2D& Value)
    {
        return Value.X + Value.Y;
    }
    inline float SumVector(const FVector& Value)
    {
        return Value.X + Value.Y + Value.Z;
    }
    inline float SumVector(const FVector4& Value)
    {
        return Value.X + Value.Y + Value.Z + Value.W;
    }
    
    inline float AvgVector(const FVector2D& Value)
    {
        return SumVector(Value) * 0.5f;
    }
    inline float AvgVector(const FVector& Value)
    {
        return SumVector(Value) * 0.33333333f;
    }
    inline float AvgVector(const FVector4& Value)
    {
        return SumVector(Value) * 0.25f;
    }

    inline float LengthSquared(const FVector2D& V)
    {
        return V.X * V.X + V.Y * V.Y;
    }
    inline float LengthSquared(const FVector& V)
    {
        return V.SizeSquared();
    }

	inline FIntVector2 FloorVector2D(const FVector2D& V)
	{
		return FIntVector2(FMath::FloorToInt(V.X), FMath::FloorToInt(V.Y));
	}
	inline FIntVector FloorVector(const FVector& V)
	{
		return FIntVector(
			FMath::FloorToInt(V.X),
			FMath::FloorToInt(V.Y),
			FMath::FloorToInt(V.Z)
		);
	}
	inline FIntVector4 FloorVector4(const FVector4& V)
	{
		return FIntVector4(
			FMath::FloorToInt(V.X),
			FMath::FloorToInt(V.Y),
			FMath::FloorToInt(V.Z),
			FMath::FloorToInt(V.W)
		);
	}

	inline FIntVector2 RoundVector2D(const FVector2D& V)
	{
		return FIntVector2(FMath::RoundToInt(V.X), FMath::RoundToInt(V.Y));
	}
	inline FIntVector RoundVector(const FVector& V)
	{
		return FIntVector(
			FMath::RoundToInt(V.X),
			FMath::RoundToInt(V.Y),
			FMath::RoundToInt(V.Z)
		);
	}
	inline FIntVector4 RoundVector4(const FVector4& V)
	{
		return FIntVector4(
			FMath::RoundToInt(V.X),
			FMath::RoundToInt(V.Y),
			FMath::RoundToInt(V.Z),
			FMath::RoundToInt(V.W)
		);
	}
    // ============ Slerp 球面插值 ============
    
    inline FVector Slerp(const FVector& VecA, const FVector& VecB, float Alpha)
    {
        float Dot = FVector::DotProduct(VecA, VecB);
        if (FMath::Abs(Dot) < 1.0f)
        {
            float Angle = FMath::Acos(Dot);
            float InterpolatedAngle = Angle * Alpha;
            float SinAngle, CosAngle;
            FMath::SinCos(&SinAngle, &CosAngle, InterpolatedAngle);
            
            FVector V1 = CosAngle * VecA;
            FVector SubtractResult = VecB - VecA * Dot;
            FVector V2 = SubtractResult.GetSafeNormal() * SinAngle;
            return V1 + V2;
        }
        else
        {
            return Alpha > 0.5f ? VecB : VecA;
        }
    }

    // ============ 角度转换 ============
    
    inline float DegToRad(float Degrees)
    {
        return PI * 2.0f * Degrees / 360.0f;
    }
    
    inline float RadToDeg(float Radians)
    {
        return 360.0f * Radians / (PI * 2.0f);
    }

    // ============ 排序/交换 ============
    
    template<class T>
    inline bool Sort(T& A, T& B)
    {
        if (A > B)
        {
            T Temp = A;
            A = B;
            B = Temp;
        	return true;
        }
		return false;
    }
    
    template<class T>
    inline void Swap(T& A, T& B)
    {
        T Temp = A;
        A = B;
        B = Temp;
    }

    // ============ 颜色函数 ============
    
    inline FLinearColor Desaturation(const FLinearColor& Color, float Alpha)
    {
        float Luminance = FVector::DotProduct(
            FVector(Color.R, Color.G, Color.B),
            FVector(0.212639f, 0.715169f, 0.072192f)
        );
        return FMath::Lerp(Color, FLinearColor(Luminance, Luminance, Luminance, Color.A), Alpha);
    }
    
    inline FLinearColor LinearRGBToHSV(const FLinearColor& RGB)
    {
        FLinearColor HSV;
        float Cmax = FMath::Max3(RGB.R, RGB.G, RGB.B);
        float Cmin = FMath::Min3(RGB.R, RGB.G, RGB.B);
        float Delta = Cmax - Cmin;

        HSV.B = Cmax; // V
        HSV.G = (Cmax <= 0.0f) ? 0.0f : Delta / Cmax; // S

        float H = 0.0f;
        if (Delta > 0.0f)
        {
            if (Cmax == RGB.R)
                H = (RGB.G - RGB.B) / Delta + (RGB.G < RGB.B ? 6.0f : 0.0f);
            else if (Cmax == RGB.G)
                H = (RGB.B - RGB.R) / Delta + 2.0f;
            else
                H = (RGB.R - RGB.G) / Delta + 4.0f;
            H = H / 6.0f;
        }
        HSV.R = FMath::Frac(H); // H
        HSV.A = RGB.A;
        return HSV;
    }
    
    inline FLinearColor HSVToLinearRGB(const FLinearColor& HSV)
    {
        float S = HSV.G;
        float V = HSV.B;
        FVector K(1.0f, 2.0f/3.0f, 1.0f/3.0f);
        FVector P(
            FMath::Abs(FMath::Frac(HSV.R + K.X) * 6.0f - 3.0f),
            FMath::Abs(FMath::Frac(HSV.R + K.Y) * 6.0f - 3.0f),
            FMath::Abs(FMath::Frac(HSV.R + K.Z) * 6.0f - 3.0f)
        );
        FVector Result = V * FMath::Lerp(FVector(1.0f), FVector(
            FMath::Clamp(P.X - 1.0f, 0.0f, 1.0f),
            FMath::Clamp(P.Y - 1.0f, 0.0f, 1.0f),
            FMath::Clamp(P.Z - 1.0f, 0.0f, 1.0f)
        ), S);
        return FLinearColor(Result.X, Result.Y, Result.Z, HSV.A);
    }

    // ============ SDF 函数 ============
    
    inline float SdfMax(float A, float B, float K)
    {
        float H = FMath::Max(K - FMath::Abs(A - B), 0.0f);
        return FMath::Max(A, B) + H * H * 0.25f / K;
    }
    
    inline float SdfMin(float A, float B, float K)
    {
        float H = FMath::Max(K - FMath::Abs(A - B), 0.0f);
        return FMath::Min(A, B) - H * H * 0.25f / K;
    }
    
    inline float CapsuleDistance(
        const FVector& SamplePosition,
        const FVector& CapsulePos,
        const FVector& CapsuleLengthDirection,
        float CapsuleLength,
        FVector& OutDir,
        FVector& OutNearPosition)
    {
        float VecDotLength = FVector::DotProduct(SamplePosition - CapsulePos, CapsuleLengthDirection);
        VecDotLength = FMath::Clamp(VecDotLength, 0.0f, CapsuleLength);
        OutNearPosition = VecDotLength * CapsuleLengthDirection + CapsulePos;
        
        float OutLength;
        OutDir = NormalizeSafe(SamplePosition - OutNearPosition, OutLength);
        return OutLength;
    }
    
    inline FVector CapsuleCollisionPosition(
        const FVector& SamplePosition,
        const FVector& CapsulePos,
        const FVector& CapsuleLengthDirection,
        float CapsuleLength,
        float CapsuleRadius,
        bool& OutCollisionValid)
    {
        OutCollisionValid = false;
        float VecDotLength = FVector::DotProduct(SamplePosition - CapsulePos, CapsuleLengthDirection);
        VecDotLength = FMath::Clamp(VecDotLength, 0.0f, CapsuleLength);
        FVector NearPosition = VecDotLength * CapsuleLengthDirection + CapsulePos;
        
        float NearL = FVector::Distance(SamplePosition, NearPosition);
        if (NearL < CapsuleRadius)
        {
            OutCollisionValid = true;
            float BackLength = FMath::Sqrt(CapsuleRadius * CapsuleRadius - NearL * NearL);
            VecDotLength -= BackLength;
            VecDotLength = FMath::Max(VecDotLength, 0.0f);
            NearPosition = VecDotLength * CapsuleLengthDirection + CapsulePos;
        }
        return NearPosition;
    }

    // ============ 云散射/光照函数 ============
    inline float HenyeyGreenstein(float G, float CosTheta)
    {
        return (1.0f / (4.0f * PI)) * ((1.0f - G * G) / FMath::Pow(1.0f + G * G - 2.0f * G * CosTheta, 1.5f));
    }
    
    inline float MultipleOctavesScattering(float Extinction, float Mu, const FVector& Phase)
    {
        float StepScatterMultBeerLaw = 0.0f;
        float A = 1.0f;
        float B = 1.0f;
        float C = 0.85f;
        
        const int32 Octaves = 4;
        for (int32 i = 0; i < Octaves; i++)
        {
            float PhaseFunc = FMath::Lerp(
                HenyeyGreenstein(C * Phase.X, Mu),
                HenyeyGreenstein(C * Phase.Y, Mu),
                Phase.Z
            );
            StepScatterMultBeerLaw += B * PhaseFunc * FMath::Exp(-Extinction * A);
            A *= 0.25f;
            B *= 0.5f;
            C *= 0.5f;
        }
        return StepScatterMultBeerLaw;
    }

    // ============ 哈希/随机函数 ============
    inline float Hash21(const FVector2D& P)
    {
        uint32 X = *reinterpret_cast<const uint32*>(&P.X);
        uint32 Y = *reinterpret_cast<const uint32*>(&P.Y);
        
        X *= 73333;
        Y *= 7777;
        X ^= (3333777777U >> (X >> 28));
        Y ^= (3333777777U >> (Y >> 28));
        uint32 N = X * Y;
        N ^= (N >> 15);
        
        return float(N) * (1.0f / float(0xffffffffU));
    }
    
    inline FVector2D Hash22(const FVector2D& P)
    {
        FVector P3(
            FMath::Frac(P.X * 0.1031f),
            FMath::Frac(P.Y * 0.1030f),
            FMath::Frac(P.X * 0.0973f)
        );
        P3 = P3 + FVector::DotProduct(P3, FVector(P3.Y, P3.Z, P3.X) + FVector(33.33f) );
        return FVector2D(
            FMath::Frac((P3.X + P3.Y) * P3.Z),
            FMath::Frac((P3.X + P3.Z) * P3.Y)
        );
    }
    
    inline FVector Hash33(const FIntVector& P)
    {
        const uint32 K = 1103515245U;
        FIntVector X = P + FIntVector(0x80000000);
        
        X = FIntVector(
            ((X.X >> 8) ^ X.Y) * K,
            ((X.Y >> 8) ^ X.Z) * K,
            ((X.Z >> 8) ^ X.X) * K
        );
        X = FIntVector(
            ((X.X >> 8) ^ X.Y) * K,
            ((X.Y >> 8) ^ X.Z) * K,
            ((X.Z >> 8) ^ X.X) * K
        );
        X = FIntVector(
            ((X.X >> 8) ^ X.Y) * K,
            ((X.Y >> 8) ^ X.Z) * K,
            ((X.Z >> 8) ^ X.X) * K
        );
        
        return FVector(X) * (1.0f / float(0xffffffffU));
    }

    // ============ 高斯分布 ============
    inline float GenerateNormal_N6(const FIntVector& P)
    {
        FVector SumOfUniformsV3 = Hash33(P) + Hash33(P + FIntVector(0, 0, 1));
        float SumOfUniforms = SumOfUniformsV3.X + SumOfUniformsV3.Y + SumOfUniformsV3.Z;
        return (SumOfUniforms - 3.0f) * 1.4142135647f;
    }
    inline float GaussianRandom(const FVector& P, float Mean, float StdDev)
    {
        FIntVector IntP(FMath::RoundToInt(P.X), FMath::RoundToInt(P.Y), FMath::RoundToInt(P.Z));
        return GenerateNormal_N6(IntP) * StdDev + Mean;
    }
    
    inline float Log2GaussianRandom(const FVector& P, float Mean, float StdDev)
    {
        FIntVector IntP(FMath::RoundToInt(P.X), FMath::RoundToInt(P.Y), FMath::RoundToInt(P.Z));
        float Y = GenerateNormal_N6(IntP) * StdDev + Mean;
        return FMath::Pow(2.0f, Y);
    }
    inline float LogeGaussianRandom(const FVector& P, float Mean, float StdDev)
    {
        FIntVector IntP(FMath::RoundToInt(P.X), FMath::RoundToInt(P.Y), FMath::RoundToInt(P.Z));
        float Y = GenerateNormal_N6(IntP) * StdDev + Mean;
        return FMath::Exp(Y);
    }
    inline float Log10GaussianRandom(const FVector& P, float Mean, float StdDev)
    {
        FIntVector IntP(FMath::RoundToInt(P.X), FMath::RoundToInt(P.Y), FMath::RoundToInt(P.Z));
        float Y = GenerateNormal_N6(IntP) * StdDev + Mean;
        return FMath::Pow(10.0f, Y);
    }
	
	//基于黄金分割的 斐波那契球 随机方向  均匀随机
	inline static void GetFibonacciSphereSamples(
		TArray<FVector>& OutDirections, 
		int32 NumSamples = 1, 
		FVector ConeDirection = FVector::UpVector, 
		float ConeAngleDegree = 360.0f, 
		bool bStochasticJitter = true, 
		int32 RandomSeed = -1)
	{
		OutDirections.Empty(NumSamples);
		if (NumSamples <= 0) return;
		
		RandomSeed = (RandomSeed < 0) ? static_cast<int32>(FPlatformTime::Cycles()) : RandomSeed;
		ConeDirection.Normalize();

		FRandomStream LocalStream(RandomSeed);
		const float GoldenAngle = PI * (3.0f - FMath::Sqrt(5.0f));
		const float MinCosTheta = FMath::Cos(FMath::DegreesToRadians(ConeAngleDegree * 0.5f));
		const float PhiOffset = LocalStream.GetFraction() * 2.0f * PI;
		
		for (int32 i = 0; i < NumSamples; ++i)
		{
			const float Jitter = bStochasticJitter ? (LocalStream.GetFraction() - 0.5f) : 0.0f;
			
			const float t = (static_cast<float>(i) + 0.5f + Jitter) / static_cast<float>(NumSamples);
			const float ClampedT = FMath::Clamp(t, 0.0f, 1.0f);
			
			const float CosTheta = MinCosTheta + (1.0f - MinCosTheta) * ClampedT;
			const float SinTheta = FMath::Sqrt(FMath::Max(0.0f, 1.0f - CosTheta * CosTheta));
			
			const float Phi = GoldenAngle * static_cast<float>(i) + PhiOffset;
			
			const FVector PointOnZUpSphere(
				FMath::Cos(Phi) * SinTheta,
				FMath::Sin(Phi) * SinTheta,
				CosTheta
			);

			if (!ConeDirection.Equals(FVector::UpVector, KINDA_SMALL_NUMBER))
			{
				const FQuat Rotation = FQuat::FindBetweenNormals(FVector::UpVector, ConeDirection);
				OutDirections.Add(Rotation.RotateVector(PointOnZUpSphere));
			}
			else
			{
				OutDirections.Add(PointOnZUpSphere);
			}
		}
		//UE_LOG(LogUnrealMath, Warning, TEXT("RestDir %.3f,%.3f,%.3f, ConeAngleDegree %.3f OutDirections[0]方向 %.3f,%.3f,%.3f"), ConeDirection.X, ConeDirection.Y, ConeDirection.Z, ConeAngleDegree, OutDirections[0].X, OutDirections[0].Y, OutDirections[0].Z);
	}
}