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

void ABuildingView::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    PROPERTY_HANDLER(PropertyChangedEvent, ABuildingView, X, OnSetTile);
    PROPERTY_HANDLER(PropertyChangedEvent, ABuildingView, Y, OnSetTile);
    PROPERTY_HANDLER(PropertyChangedEvent, ABuildingView, Map, OnSetMap);
}

void ABuildingView::OnSetTile()
{
    if (Map)
    {
        auto location = Map->ConvertTileToWorld(FVector2D(X, Y) + Size / 2);
        SetActorLocation(location);
    }
}

void ABuildingView::OnSetMap()
{
    if (Map)
        Map->Buildings.Add(this);
}
