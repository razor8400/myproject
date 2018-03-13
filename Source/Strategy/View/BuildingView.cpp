// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingView.h"
#include "MapView.h"

ABuildingView::ABuildingView()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABuildingView::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABuildingView::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABuildingView::UpdateLocation()
{
    if (Map)
    {
        auto location = Map->ConvertTileToWorld(Tile + Size / 2);
        SetActorRelativeLocation(location);
    }
}


