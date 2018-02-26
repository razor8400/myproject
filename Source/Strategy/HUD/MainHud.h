// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHud.generated.h"


class UShop;
/**
 * 
 */

class UUserWidget;

UCLASS()
class STRATEGY_API AMainHud : public AHUD
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UShop> ShopClass;
private:
	UShop* Shop;
};
