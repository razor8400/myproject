// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapView.generated.h"

class ABuildingView;

UCLASS()
class STRATEGY_API AMapView : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AMapView();

	void ScrollMap(const FVector2D& Delta);
protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
public:	
	// Called every frame
	void Tick(float DeltaTime) override;
	FVector ConvertTileToWorld(const FVector2D& Tile);
    
    UFUNCTION(BlueprintCallable, Category = MapSize)
    FVector2D GetMapSize() const;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MapSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D ScrollVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABuildingView*> Buildings;
};
