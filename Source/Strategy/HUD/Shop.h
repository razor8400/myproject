#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Shop.generated.h"

UCLASS()
class STRATEGY_API UShop : public UUserWidget
{
	GENERATED_BODY()
public:
    void LoadContent();
public:
	UFUNCTION(BlueprintCallable, Category = "Buttons")
	void OnSelectShopItem();
};

