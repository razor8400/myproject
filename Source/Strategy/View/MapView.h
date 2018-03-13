// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
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
    
protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
public:	
	// Called every frame
	void Tick(float DeltaTime) override;
	FVector ConvertTileToWorld(const FVector2D& Tile) const;
    FVector2D ConvertWorldToTile(const FVector& World) const;
    FVector2D GetFreeTile(const FVector2D& Tile, const FVector2D& Size) const;
    
    std::vector<FVector2D> GetNeighbours(const FVector2D& Tile) const;
    
    ABuildingView* GetViewAtTile(const FVector2D& Tile) const;
    
    bool TileInMap(const FVector2D& Tile) const;
    
    UFUNCTION(BlueprintCallable, Category = MapSize)
    FVector2D GetMapSize() const;
    
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Scroll Map"))
    void ScrollMap(const FVector2D& Delta);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MapSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABuildingView*> Buildings;
};
