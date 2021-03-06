// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyPlayerController.h"
#include "Controller/InputController.h"
#include "Game/StrategyPawn.h"

void AStrategyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AStrategyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("OnMouseLeft", IE_Pressed, this, &AStrategyPlayerController::OnMouseDown);
	InputComponent->BindAction("OnMouseLeft", IE_Released, this, &AStrategyPlayerController::OnMouseUp);
}

void AStrategyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (auto& touch : Touches)
	{
		auto location = GetMouseLocation();
		if (location != touch.Location)
		{
			touch.PrevLocation = touch.Location;
			touch.Location = location;

			InputController::Instance().MoveTouch(touch);
		}
	}
}

void AStrategyPlayerController::OnMouseDown()
{
	auto location = GetMouseLocation();
	auto touch = TouchInfo(location, location);
	
	Touches.push_back(touch);

	InputController::Instance().BeginTouch(touch);
}

void AStrategyPlayerController::OnMouseUp()
{
	auto location = GetMouseLocation();
	auto touch = Touches.back();
	
	touch.Location = location;
	Touches.pop_back();

	InputController::Instance().EndTouch(touch);
}

FVector2D AStrategyPlayerController::GetMouseLocation() const
{
	float x = 0, y = 0;
	GetMousePosition(x, y);

	return FVector2D(x, y);
}

