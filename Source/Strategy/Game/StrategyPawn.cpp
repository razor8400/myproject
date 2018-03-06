// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyPawn.h"
#include "View/MapView.h"
#include "View/BuildingView.h"

#include "Engine/World.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "ObjectsProvider.h"
#include "Strategy.h"

// Sets default values
AStrategyPawn::AStrategyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

AStrategyPawn::~AStrategyPawn()
{
	InputController::Instance().RemoveDelegate(this);
    ShopController::Instance().SetDelegate(nullptr);
}

// Called when the game starts or when spawned
void AStrategyPawn::BeginPlay()
{
	Super::BeginPlay();
	ShopController::Instance().SetDelegate(this);
	InputController::Instance().AddDelegate(this, 1);
}

void AStrategyPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ShopController::Instance().SetDelegate(nullptr);
	InputController::Instance().RemoveDelegate(this);
}

// Called every frame
void AStrategyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AStrategyPawn::OnTouchBegan(const TouchInfo& touch)
{
	return true;
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
        ScrollVelocity += touch.Delta();
	}
}

void AStrategyPawn::OnSelectItem(int id)
{
  //  if (Map)
   // {
        auto view = ObjectsProvider::Instance().CreateObject<ABuildingView>(GetWorld(), GetTransform(), id);
        
       // if (view)
       // {
        //    view->Map = Map;
       // }
   // }
}

