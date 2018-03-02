#include "Shop.h"
#include "ShopButton.h"
#include "Strategy.h"

#include "Runtime/UMG/Public/Components/Image.h"
#include "Game/StrategyGameMode.h"
#include "Engine/World.h"

#include "View/BuildingView.h"

void UShop::LoadContent()
{
    auto mode = Cast<AStrategyGameMode>(GetWorld()->GetAuthGameMode());
    
    if (mode)
    {
		for (auto view : mode->Buildings)
		{
			auto button = CreateShopButton();

			if (button)
			{
				auto model = view->GetDefaultObject<ABuildingView>();

				if (button->IconImage)
					button->IconImage->SetBrushFromTexture(model->Icon);
				button->AddToViewport();
			}
		}
    }
}

void UShop::OnSelectShopItem()
{

}
