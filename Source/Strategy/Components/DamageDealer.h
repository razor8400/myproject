// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageDealer.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STRATEGY_API UDamageDealer : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UDamageDealer();
protected:
	// Called when the game starts
	void BeginPlay() override;
public:	
	// Called every frame
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Damage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AttackSpeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ApplyDamageDelay = 0;
};
