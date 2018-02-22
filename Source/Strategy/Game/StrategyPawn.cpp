// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyPawn.h"
#include "View/MapView.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "Strategy.h"

// Sets default values
AStrategyPawn::AStrategyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AStrategyPawn::BeginPlay()
{
	Super::BeginPlay();

	if (MapClass)
		Map = GetWorld()->SpawnActor<AMapView>(MapClass, FActorSpawnParameters());

	CameraComponent = Cast<UCameraComponent>(GetComponentByClass(UCameraComponent::StaticClass()));
}

// Called every frame
void AStrategyPawn::Tick(float DeltaTime)
{

}

void AStrategyPawn::OnTouchBegan(const TouchPtr& touch)
{
	Touches.push_back(touch);
}

void AStrategyPawn::OnTouchEnded(const TouchPtr& touch)
{
	Touches.remove(touch);
}

void AStrategyPawn::OnTouchMoved(const TouchPtr& touch)
{
	if (Touches.size() == 1)
	{
		Map->ScrollMap(touch->Delta());
	}
	else if (Touches.size() == 2)
	{
		auto touch1 = Touches.front();
		auto touch2 = Touches.back();
	}
}
