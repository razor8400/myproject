// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraZoomHelper.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STRATEGY_API UCameraZoomHelper : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UCameraZoomHelper();
protected:
	// Called every frame
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:
	void ZoomCamera(float value);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCameraFow = 45;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCameraFow = 90;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCameraDistance = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCameraDistance = 2000;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCameraComponent* CameraComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USpringArmComponent* SpringArmComponent;
private:
	float CameraZoomValue = 0;
};
