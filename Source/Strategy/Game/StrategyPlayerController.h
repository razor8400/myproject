// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "GameFramework/PlayerController.h"
#include "StrategyPlayerController.generated.h"

/**
 * 
 */

struct TouchInfo
{
	FVector2D Location;
	FVector2D PrevLocation;

	TouchInfo(const FVector2D& location, const FVector2D& prevLocation) : Location(location), PrevLocation(prevLocation)
	{

	}

	FVector2D Delta() const { return Location - PrevLocation; }
};

typedef std::shared_ptr<TouchInfo> TouchPtr;


UCLASS()
class STRATEGY_API AStrategyPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	void BeginPlay() override;
	void SetupInputComponent() override;
	void Tick(float DeltaTime) override;

	void OnMouseDown();
	void OnMouseUp();
	FVector2D GetMouseLocation() const;
private:
	std::list<TouchPtr> Touches;
	class AStrategyPawn* StrategyPawn = nullptr;
};
