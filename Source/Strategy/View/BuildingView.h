// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "GameFramework/Actor.h"
#include "BuildingView.generated.h"

class AMapView;
class UTexture2D;

UCLASS()
class STRATEGY_API ABuildingView : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABuildingView();
protected:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	void OnSetTile();
	void OnSetMap();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Size = FVector2D(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMapView* Map = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BuildingType BuildingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;
}; 
