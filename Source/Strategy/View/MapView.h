// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapView.generated.h"

UCLASS()
class STRATEGY_API AMapView : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AMapView();

	void ScrollMap(const FVector2D& delta);
protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
public:	
	// Called every frame
	void Tick(float DeltaTime) override;
	FVector2D GetMapSize() const;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MapSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScrollSpeed = 10.0f;

	FVector2D ScrollVelocity;
};
