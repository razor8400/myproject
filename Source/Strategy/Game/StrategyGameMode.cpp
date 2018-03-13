// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyGameMode.h"
#include "Strategy.h"

#include "Controller/ShopController.h"
#include "Objects/GameObject.h"
#include "Objects/ObjectsProvider.h"

void AStrategyGameMode::BeginPlay()
{
	Super::BeginPlay();

	std::vector<ObjectInfo> content;
    
	for (auto view : Buildings)
	{
		auto model = view->GetDefaultObject<AGameObject>();

		if (!model)
			continue;

		ObjectInfo info;
		info.Id = model->itemId;
		info.ShopIcon = model->Icon;

		content.push_back(info);
	}

    ObjectsProvider::Instance().Load(Buildings);
	ShopController::Instance().LoadContent(content);
}
