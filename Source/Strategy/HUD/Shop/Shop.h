#pragma once

#include "CoreMinimal.h"
#include "HUD/Window/Window.h"
#include "Shop.generated.h"

class UShopButton;

UCLASS()
class STRATEGY_API UShop : public UWindow
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Buttons")
	void OnSelectShopItem(int item);
    
    UFUNCTION(BlueprintCallable, meta=(DisplayName="Load Content"))
    void LoadContent();
    
    UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="Create Shop Button"))
	UShopButton* CreateShopButton(int row, int coll) const;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int rows;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int colls;
};

