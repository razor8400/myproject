// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyPawn.h"
#include "View/MapView.h"

#include "Engine/World.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Controller/CameraZoomController.h"

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
		Map = GetWorld()->SpawnActor<AMapView>(MapClass);

	ZoomController = FindComponentByClass<UCameraZoomController>();

	if (ZoomController)
		ZoomController->Setup(FindComponentByClass<UCameraComponent>(), FindComponentByClass<USpringArmComponent>());
}

// Called every frame
void AStrategyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

template<class T>
inline T* AStrategyPawn::FindComponentByClass() const
{
	return Cast<T>(GetComponentByClass(T::StaticClass()));
}

void AStrategyPawn::OnTouchBegan(const TouchPtr& touch)
{

}

void AStrategyPawn::OnTouchEnded(const TouchPtr& touch)
{

}

void AStrategyPawn::OnTouchMoved(const TouchPtr& touch)
{
	auto player = GetWorld()->GetFirstPlayerController();

	if (player->IsInputKeyDown(EKeys::LeftAlt))
	{
		if (ZoomController)
		{
			auto last = VectorLenght(touch->PrevLocation);
			auto current = VectorLenght(touch->Location);
			auto delta = last - current;

			ZoomController->ZoomCamera(delta);
		}
	}
	else
	{
		if (Map)
			Map->ScrollMap(touch->Delta());
	}
}
