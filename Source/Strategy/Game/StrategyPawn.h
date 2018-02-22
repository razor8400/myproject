// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "GameFramework/Pawn.h"
#include "StrategyPawn.generated.h"

class AMapView;
class UCameraComponent;

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
	void OnTouchBegan(const TouchPtr& touch);
	void OnTouchEnded(const TouchPtr& touch);
	void OnTouchMoved(const TouchPtr& touch);
	// Called to bind functionality to input
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMapView> MapClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* CameraComponent = nullptr;

	std::list<TouchPtr> Touches;

	AMapView* Map = nullptr;
};
