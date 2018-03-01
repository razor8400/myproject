// Fill out your copyright notice in the Description page of Project Settings.

#include "MapView.h"
#include "Strategy.h"

 // Sets default values
AMapView::AMapView()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMapView::ScrollMap(const FVector2D& delta)
{
	ScrollVelocity += delta;
}

// Called when the game starts or when spawned
void AMapView::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMapView::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector2D AMapView::GetMapSize() const
{
	return MapSize * TileSize;
}

FVector AMapView::ConvertTileToWorld(const FVector2D& Tile)
{
	auto x = Tile.Y * TileSize.Y;
	auto y = Tile.X * TileSize.X;
	
	auto size = GetMapSize() / 2;

	return FVector(x - size.Y, y - size.X, 0);
}

