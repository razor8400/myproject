// Fill out your copyright notice in the Description page of Project Settings.

#include "HudController.h"
#include "Strategy.h"

AHudController::~AHudController()
{
	InputController::Instance().RemoveDelegate(this);
}

void AHudController::BeginPlay()
{
	Super::BeginPlay();

	InputController::Instance().AddDelegate(this, 0);
}

void AHudController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	InputController::Instance().RemoveDelegate(this);
}

bool AHudController::OnTouchBegan(const TouchInfo& touch)
{
	return Windows.Num() > 0;
}

void AHudController::OnTouchEnded(const TouchInfo& touch)
{

}

void AHudController::OnTouchMoved(const TouchInfo& touch)
{

}

void AHudController::ShowWindow(UWindow* window)
{
	window->SetDelegate(this);
	window->Open();
}

void AHudController::OnWindowOpened(UWindow* window)
{
	Windows.Push(window);
}

void AHudController::OnWindowClosed(UWindow* window)
{
	Windows.Remove(window);
}

