// Fill out your copyright notice in the Description page of Project Settings.

#include "GameObject.h"

AGameObject::AGameObject()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGameObject::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



