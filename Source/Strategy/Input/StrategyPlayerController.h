// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TouchInfo.h"
#include "Strategy.h"
#include "GameFramework/PlayerController.h"
#include "StrategyPlayerController.generated.h"

/**
 * 
 */

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
	std::list<TouchInfo> Touches;
	class AStrategyPawn* StrategyPawn = nullptr;
};
