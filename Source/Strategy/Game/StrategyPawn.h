// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Input/TouchInfo.h"
#include "GameFramework/Pawn.h"
#include "StrategyPawn.generated.h"

class AMapView;
class UCameraZoomHelper;

UCLASS()
class STRATEGY_API AStrategyPawn : public APawn
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	AStrategyPawn();
protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
public:	
	// Called every frame
	void Tick(float DeltaTime) override;

	void OnTouchBegan(const TouchInfo& touch);
	void OnTouchEnded(const TouchInfo& touch);
	void OnTouchMoved(const TouchInfo& touch);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMapView> MapClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraZoomHelper* ZoomController;
private:
	AMapView* Map = nullptr;
};
