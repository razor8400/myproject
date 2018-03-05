#pragma once

#include "Strategy.h"

class ShopDelegate
{
public:
	virtual void OnSelectItem(int id) = 0;
};

class ShopController
{
public:
	static ShopController& Instance();

	void SetDelegate(ShopDelegate* delegate);
	void OnSelectItem(int id);

	void SetContent(const std::vector<ObjectInfo>& content) { Content = content; }
	const std::vector<ObjectInfo>& GetContent() const { return Content;  }
private:
	ShopController();

	std::vector<ObjectInfo> Content;

	ShopDelegate* Delegate = nullptr;
};