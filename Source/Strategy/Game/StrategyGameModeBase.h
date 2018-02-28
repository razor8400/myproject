// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StrategyGameModeBase.generated.h"

/**
 * 
 */

class AObjectsProvider;

UCLASS()
class STRATEGY_API AStrategyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AObjectsProvider> ProviderClass;
private:
	AObjectsProvider* Provider = nullptr;
};
