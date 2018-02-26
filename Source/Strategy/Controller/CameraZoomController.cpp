// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraZoomController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Strategy.h"

static float ZOOM_ACCELERATION = 0.98f;
static float ZOOM_FACTOR = 0.9f;
static float ZOOM_SPEED = 10.0f;

// Sets default values for this component's properties
UCameraZoomController::UCameraZoomController()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UCameraZoomController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UCameraZoomController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (abs(CameraZoomValue) > 0)
	{
		if (CameraComponent)
			CameraComponent->FieldOfView = std::max(MinCameraFow, std::min(MaxCameraFow, CameraComponent->FieldOfView + CameraZoomValue * ZOOM_ACCELERATION * DeltaTime));

		if (SpringArmComponent)
			SpringArmComponent->TargetArmLength = std::max(MinCameraDistance, std::min(MaxCameraDistance, SpringArmComponent->TargetArmLength + CameraZoomValue * ZOOM_SPEED * DeltaTime));

		CameraZoomValue *= ZOOM_FACTOR;
	}
}

void UCameraZoomController::Setup(UCameraComponent* Camera, USpringArmComponent* SpringArm)
{
	CameraComponent = Camera;
	SpringArmComponent = SpringArm;
}

void UCameraZoomController::ZoomCamera(float value)
{
	CameraZoomValue += value;
}

