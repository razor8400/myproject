// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StrategyGameMode.generated.h"

/**
 * 
 */

class AGameObject;

UCLASS()
class STRATEGY_API AStrategyGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSubclassOf<AGameObject>> Buildings;
};
