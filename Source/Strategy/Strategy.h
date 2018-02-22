// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <list>
#include <memory>
#include <algorithm>

struct TouchInfo
{
	FVector2D Location;
	FVector2D PrevLocation;

	TouchInfo(const FVector2D& location, const FVector2D& prevLocation) : Location(location), PrevLocation(prevLocation)
	{

	}

	FVector2D Delta() const { return Location - PrevLocation; }
};

typedef std::shared_ptr<TouchInfo> TouchPtr;

static float VectorLenght(const FVector2D& v2)
{
	return sqrt(v2.X * v2.X + v2.Y * v2.Y);
}