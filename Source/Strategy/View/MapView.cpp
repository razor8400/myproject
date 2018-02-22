// Fill out your copyright notice in the Description page of Project Settings.

#include "MapView.h"
#include "Strategy.h"

static float INERTIA_ACCELERATION = 0.98f;
static float INERTIA_SCROLL_FACTOR = 0.9f;

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

	if (ScrollVelocity != FVector2D::ZeroVector)
	{
		auto location = GetActorLocation();
		location += FVector(-ScrollVelocity.Y, ScrollVelocity.X, 0) * ScrollSpeed * INERTIA_SCROLL_FACTOR * DeltaTime;
		ScrollVelocity *= INERTIA_ACCELERATION;

		if (VectorLenght(ScrollVelocity) <= 0)
			ScrollVelocity = FVector2D::ZeroVector;

		auto mapSize = GetMapSize() / 2;

		location.X = std::max(-mapSize.X, std::min(location.X, mapSize.X));
		location.Y = std::max(-mapSize.Y, std::min(location.Y, mapSize.Y));

		SetActorLocation(location);
	}
}

FVector2D AMapView::GetMapSize() const
{
	return MapSize * TileSize;
}

