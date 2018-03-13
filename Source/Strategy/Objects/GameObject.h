// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameObject.generated.h"

class AMapView;
class UTexture2D;

UCLASS()
class STRATEGY_API AGameObject : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AGameObject();
protected:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D Tile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMapView* Map = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int itemId;
}; 
