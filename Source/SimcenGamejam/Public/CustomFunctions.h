// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomFunctions.generated.h"
/**
 * 
 */
UCLASS()
class SIMCENGAMEJAM_API UCustomFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:


	UFUNCTION(BlueprintPure, Category = "Math|Vector")
	static float AngleBetweenVectors(const FVector& VecA, const FVector& VecB);


};


//#include <iostream>
//#include <cmath>
//
//// Define a struct for a 3D vector
//struct Vector3D
//{
//    double x;
//    double y;
//    double z;
//};
//
//// Function to calculate the dot product of two 3D vectors
//double dotProduct(const Vector3D& vecA, const Vector3D& vecB)
//{
//    return (vecA.x * vecB.x) + (vecA.y * vecB.y) + (vecA.z * vecB.z);
//}
//
//// Function to calculate the magnitude of a 3D vector
//double magnitude(const Vector3D& vec)
//{
//    return std::sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
//}
//
//// Function to calculate the angle between two 3D vectors in degrees
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
//
//int main()
//{
//    // Example vectors
//    Vector3D vectorA = {3, 4, 5};
//    Vector3D vectorB = {6, 7, 8};
//
//    try
//    {
//        double angle = angleBetweenVectors(vectorA, vectorB);
//        std::cout << "The angle between the vectors is: " << angle << " degrees." << std::endl;
//    }
//    catch(const std::exception& ex)
//    {
//        std::cerr << "Error: " << ex.what() << std::endl;
//    }
//
//    return 0;
//}
