// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "entt.hpp"
#include "RoomManager.generated.h"

enum TurnDirection
{
	
};

USTRUCT()
struct FRoomComponent
{
	GENERATED_BODY()
	
	AActor* Actor;
	bool playerIsFarAway;
	
};

UCLASS()
class SIMCENGAMEJAM_API ARoomManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoomManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
