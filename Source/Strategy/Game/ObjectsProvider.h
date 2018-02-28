// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectsProvider.generated.h"

class ABuildingView;

UCLASS()
class STRATEGY_API AObjectsProvider : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AObjectsProvider();
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSubclassOf<ABuildingView>> Buildings;
};
