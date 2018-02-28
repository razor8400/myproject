#include "Shop.h"
#include "Strategy.h"

#include "Game/StrategyGameMode.h"
#include "Engine/World.h"

void UShop::LoadContent()
{
    auto mode = Cast<AStrategyGameMode>(GetWorld()->GetAuthGameMode());
}

void UShop::OnSelectShopItem()
{

}
