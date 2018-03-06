#include "Shop.h"
#include "ShopButton.h"

#include "Controller/ShopController.h"

#include "Strategy.h"

void UShop::LoadContent()
{
	auto content = ShopController::Instance().GetContent();
    
	for (int y = 0; y < rows; ++y)
	{
		for (int x = 0; x < colls; ++x)
		{
			int i = y * colls + x;
			if (i < content.size())
			{
				auto button = CreateShopButton(x, y);

				if (button)
				{
					auto& info = content.at(i);

					button->UpdateIcon(info.ShopIcon);
					button->item = info.Id;
				}
			}
		}
	}
}

void UShop::OnSelectShopItem(int item)
{
    Close();
	ShopController::Instance().OnSelectItem(item);
}
