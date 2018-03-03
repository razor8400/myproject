#include "Shop.h"
#include "ShopButton.h"
#include "Strategy.h"

#include "Game/StrategyGameMode.h"
#include "Engine/World.h"

#include "View/BuildingView.h"

void UShop::LoadContent()
{
    auto mode = Cast<AStrategyGameMode>(GetWorld()->GetAuthGameMode());
    
    if (mode)
    {
        auto& buildings = mode->Buildings;
        
        for (int y = 0; y < rows; ++y)
        {
            for (int x = 0; x < colls; ++x)
            {
                int i = y * colls + x;
                if (i < buildings.Num())
                {
                    auto button = CreateShopButton(x, y);
                    
                    if (button)
                    {
                        auto model = buildings[i]->GetDefaultObject<ABuildingView>();
                        
                        button->UpdateIcon(model->Icon);
                        button->item = model->itemId;
                    }
                }
            }
        }
    }
}

void UShop::OnSelectShopItem(int item)
{
    LOG_FORMAT("%i", item);
}
