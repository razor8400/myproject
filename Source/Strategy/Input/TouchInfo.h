#pragma once

#include "CoreMinimal.h"

struct TouchInfo
{
    FVector2D Location;
    FVector2D PrevLocation;
    
    TouchInfo(const FVector2D& location, const FVector2D& prevLocation) : Location(location), PrevLocation(prevLocation)
    {
        
    }
    
    FVector2D Delta() const { return Location - PrevLocation; }
};

