#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Shop.generated.h"

class UShopButton;

UCLASS()
class STRATEGY_API UShop : public UUserWidget
{
	GENERATED_BODY()
public:
    void LoadContent();
public:
	UFUNCTION(BlueprintCallable, Category="Buttons")
	void OnSelectShopItem();
    
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Create Shop Button"))
	UShopButton* CreateShopButton() const;
};

