// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyPawn.h"
#include "View/MapView.h"

#include "Engine/World.h"
#include "GameFramework/SpringArmComponent.h"
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
}

// Called every frame
void AStrategyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStrategyPawn::OnTouchBegan(const TouchInfo& touch)
{

}

void AStrategyPawn::OnTouchEnded(const TouchInfo& touch)
{

}

void AStrategyPawn::OnTouchMoved(const TouchInfo& touch)
{
	auto player = GetWorld()->GetFirstPlayerController();

	if (player->IsInputKeyDown(EKeys::LeftAlt))
	{
		auto last = VectorLenght(touch.PrevLocation);
		auto current = VectorLenght(touch.Location);
		auto delta = last - current;

		CameraZoomValue += delta;
	}
	else
	{
		if (Map)
			Map->ScrollMap(touch.Delta());
	}
}

void AStrategyPawn::SetCameraFOV(float fov)
{
    if (CameraComponent)
        CameraComponent->FieldOfView = fov;
}

float AStrategyPawn::GetCameraFOV() const
{
    if (CameraComponent)
        return CameraComponent->FieldOfView;
    
    return 0;
}

void AStrategyPawn::SetTargetArmLenght(float lenght)
{
    if (SpringArmComponent)
        SpringArmComponent->TargetArmLength = lenght;
}

float AStrategyPawn::GetTargetArmLenght() const
{
    if (SpringArmComponent)
        return SpringArmComponent->TargetArmLength;
    
    return 0;
}
