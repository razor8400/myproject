// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraZoomHelper.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Strategy.h"

static float ZOOM_ACCELERATION = 0.98f;
static float ZOOM_FACTOR = 0.9f;
static float ZOOM_SPEED = 10.0f;

// Sets default values for this component's properties
UCameraZoomHelper::UCameraZoomHelper()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called every frame
void UCameraZoomHelper::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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

void UCameraZoomHelper::ZoomCamera(float value)
{
	CameraZoomValue += value;
}

