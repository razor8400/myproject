#pragma once

#include "CoreMinimal.h"
#include "View/BuildingView.h"

#include "Engine/World.h"

typedef TSubclassOf<AGameObject> ObjectClass;

class ObjectsProvider
{
public:
	static ObjectsProvider& Instance();

    void Load(const TArray<ObjectClass>& objects) { Objects = objects; }
    
    template<class T>
    T* CreateObject(UWorld* world, const FTransform& Transform, int id) const;
private:
	ObjectsProvider();
private:
	TArray<ObjectClass> Objects;
};

template<class T>
T* ObjectsProvider::CreateObject(UWorld* world, const FTransform& Transform, int id) const
{
    auto obj = Objects.FindByPredicate([id](ObjectClass clazz)
    {
       auto obj = clazz->GetDefaultObject<T>();
       
       if (obj)
           return obj->itemId == id;
       return false;
    });
    
    if (obj)
        return world->SpawnActor<T>(*obj, Transform, FActorSpawnParameters());
    
    return nullptr;
}

