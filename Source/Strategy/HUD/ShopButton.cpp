#include "ShopButton.h"
#include "Runtime/UMG/Public/Components/Image.h"

void UShopButton::UpdateIcon(UTexture2D* texture)
{
    auto icon = GetIcon();
    
    if (icon)
        icon->SetBrushFromTexture(texture);
}
