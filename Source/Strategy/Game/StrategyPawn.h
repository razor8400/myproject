// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Input/TouchInfo.h"
#include "GameFramework/Pawn.h"

#include "Controller/InputController.h"
#include "Controller/ShopController.h"

#include "StrategyPawn.generated.h"

class AMapView;
class ABuildingView;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class STRATEGY_API AStrategyPawn : public APawn, public ShopDelegate, public InputDelegate
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	AStrategyPawn();
	~AStrategyPawn();
protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	// Called every frame
	void Tick(float DeltaTime) override;

	bool OnTouchBegan(const TouchInfo& touch) override;
	void OnTouchEnded(const TouchInfo& touch) override;
	void OnTouchMoved(const TouchInfo& touch) override;

	void OnSelectItem(int id) override;
    
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Zoom Camera"))
    void ZoomCamera(float Zoom);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMapView* Map;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ABuildingView* Selected;
};
