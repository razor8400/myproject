// Fill out your copyright notice in the Description page of Project Settings.

#include "MainHud.h"
#include "Shop.h"

void AMainHud::BeginPlay()
{
	Super::BeginPlay();

	if (ShopClass)
	{
		Shop = CreateWidget<UShop>(GetWorld(), ShopClass);
		Shop->AddToViewport();
	}
}
