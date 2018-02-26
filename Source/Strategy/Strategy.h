// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <list>
#include <memory>
#include <algorithm>

static float VectorLenght(const FVector2D& v2)
{
	return sqrt(v2.X * v2.X + v2.Y * v2.Y);
}

UENUM(BlueprintType)
enum class BuildingType : uint8
{
	Unknown UMETA(DisplayName = "Unknown"),
	TownHall UMETA(DisplayName = "TownHall"),
	Tower UMETA(DisplayName = "Tower")
};

#define PROPERTY_HANDLER(Event, Type, PropertyName, Function) \
if (Event.Property != nullptr && (Event.Property->GetFName() == GET_MEMBER_NAME_CHECKED(Type, PropertyName))) \
	Function();

#define LOG(MESSAGE) \
UE_LOG(LogTemp, Warning, TEXT(MESSAGE));

#define LOG_FORMAT(MESSAGE, ...) \
UE_LOG(LogTemp, Warning, TEXT(MESSAGE),  __VA_ARGS__);
