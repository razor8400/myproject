// Fill out your copyright notice in the Description page of Project Settings.

#include "StrategyGameMode.h"
#include "Strategy.h"

#include "View/BuildingView.h"
#include "Controller/ShopController.h"

void AStrategyGameMode::BeginPlay()
{
	Super::BeginPlay();

	std::vector<ObjectInfo> content;

	for (auto view : Buildings)
	{
		auto model = view->GetDefaultObject<ABuildingView>();

		if (!model)
			continue;

		ObjectInfo info;
		info.Id = model->itemId;
		info.ShopIcon = model->Icon;

		content.push_back(info);
	}

	ShopController::Instance().SetContent(content);
}
