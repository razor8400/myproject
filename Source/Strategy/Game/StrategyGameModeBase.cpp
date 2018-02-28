// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyGameModeBase.h"
#include "ObjectsProvider.h"

#include "Engine/World.h"

void AStrategyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (ProviderClass)
		Provider = GetWorld()->SpawnActor<AObjectsProvider>(ProviderClass);
}
