// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/GameObject.h"
#include "Strategy.h"
#include "BuildingView.generated.h"

UCLASS()
class STRATEGY_API ABuildingView : public AGameObject
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
	FVector2D Size = FVector2D(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BuildingType BuildingType;
}; 
