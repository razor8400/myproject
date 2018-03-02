#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "ShopButton.generated.h"

class UImage;

UCLASS()
class STRATEGY_API UShopButton : public UUserWidget
{
	GENERATED_BODY()
public:
    void UpdateIcon(UTexture2D* texture);
public:
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Get Icon"))
    UImage* GetIcon() const;
};
