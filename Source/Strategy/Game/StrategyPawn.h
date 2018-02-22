// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "GameFramework/Pawn.h"
#include "StrategyPawn.generated.h"

class AMapView;
class UCameraComponent;
class USpringArmComponent;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArmComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCameraFow = 45;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCameraFow = 90;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCameraDistance = 500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCameraDistance = 2000;

	AMapView* Map = nullptr;
};
