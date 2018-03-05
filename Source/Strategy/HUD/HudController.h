// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Controller/InputController.h"
#include "Windows/Window.h"
#include "HudController.generated.h"

class UShop;
class UMainHud;
class UWindow;
/**
 * 
 */

UCLASS()
class STRATEGY_API AHudController : public AHUD, public InputDelegate, public WindowDelegate
{
	GENERATED_BODY()

	~AHudController();
public:
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	bool OnTouchBegan(const TouchInfo& touch) override;
	void OnTouchEnded(const TouchInfo& touch) override;
	void OnTouchMoved(const TouchInfo& touch) override;
public:
	UFUNCTION(BlueprintCallable, Category = "Window Interface", meta = (DisplayName = "ShowWindow"))
	void ShowWindow(UWindow* window);

	void OnWindowOpened(UWindow* window);
	void OnWindowClosed(UWindow* window);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UShop* Shop;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UMainHud* MainHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UWindow*> Windows;
};
