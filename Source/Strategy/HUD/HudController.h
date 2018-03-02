// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HudController.generated.h"

class UShop;
class UMainHud;
/**
 * 
 */

UCLASS()
class STRATEGY_API AHudController : public AHUD
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UShop* Shop;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UMainHud* MainHud;
};
