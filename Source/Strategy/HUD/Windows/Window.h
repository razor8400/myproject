// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Window.generated.h"

class UWindow;

class WindowDelegate
{
public:
	virtual void OnWindowOpened(UWindow* window) = 0;
	virtual void OnWindowClosed(UWindow* window) = 0;
};

UCLASS()
class STRATEGY_API UWindow : public UUserWidget
{
    GENERATED_BODY()
public:
	void SetDelegate(WindowDelegate* delegate);

	UFUNCTION(BlueprintCallable, Category="Window Interface", meta=(DisplayName="Open Window"))
    void Open();
    
    UFUNCTION(BlueprintCallable, Category="Window Interface", meta=(DisplayName="Close Window"))
    void Close();
private:
	WindowDelegate* Delegate = nullptr;
};
