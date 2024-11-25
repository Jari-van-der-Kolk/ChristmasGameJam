// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFunctions.h"

UCustomFunctions::UCustomFunctions(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // Custom initialization logic (if any)
}


float UCustomFunctions::AngleBetweenVectors(const FVector& VecA, const FVector& VecB)
{
    // Magnitudes of the vectors
    float MagA = VecA.Size();
    float MagB = VecB.Size();

    if(FMath::IsNearlyZero(MagA) || FMath::IsNearlyZero(MagB))
    {
        UE_LOG(LogTemp, Warning, TEXT("One of the vectors is a zero vector."));
        return 0.0f; // Return 0 or handle as appropriate
    }

    // Dot product
    float DotProd = FVector::DotProduct(VecA, VecB);

    // Calculate cos(theta)
    float CosTheta = DotProd / (MagA * MagB);

    // Clamp the value to [-1, 1] to avoid precision issues
    CosTheta = FMath::Clamp(CosTheta, -1.0f, 1.0f);

    // Calculate angle in radians and then convert to degrees
    float AngleRad = FMath::Acos(CosTheta);
    float AngleDeg = FMath::RadiansToDegrees(AngleRad);

    return AngleDeg;
}

//double angleBetweenVectors(const Vector3D& vecA, const Vector3D& vecB)
//{
//    double dot_prod = dotProduct(vecA, vecB);
//    double magA = magnitude(vecA);
//    double magB = magnitude(vecB);
//
//    if(magA == 0.0 || magB == 0.0)
//    {
//        throw std::invalid_argument("One of the vectors is a zero vector.");
//    }
//
//    double cos_theta = dot_prod / (magA * magB);
//
//    // Clamp the cos_theta value to the valid range [-1, 1] to handle numerical errors
//    if(cos_theta > 1.0) cos_theta = 1.0;
//    if(cos_theta < -1.0) cos_theta = -1.0;
//
//    double angle_rad = std::acos(cos_theta);
//    double angle_deg = angle_rad * (180.0 / M_PI);
//
//    return angle_deg;
//}

