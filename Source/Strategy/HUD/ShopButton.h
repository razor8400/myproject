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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* IconImage;
};
