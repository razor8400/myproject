#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "ShopButton.generated.h"

UCLASS()
class STRATEGY_API UShopButton : public UUserWidget
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Update Icon"))
    void UpdateIcon(UTexture2D* texture);
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int item;
};
