#pragma once

#include "CoreMinimal.h"

class AGameObject;
class ABuildingView;

class ObjectsProvider
{
public:
	static ObjectsProvider& Instance();

	void LoadBuildings(const TArray<ABuildingView*>& buildings);
private:
	ObjectsProvider();

private:
	TArray<ABuildingView*> buildings;
};