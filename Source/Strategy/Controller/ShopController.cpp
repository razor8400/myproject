#include "ShopController.h"


ShopController::ShopController()
{

}

ShopController& ShopController::Instance()
{
	static ShopController instance;
	return instance;
}

void ShopController::SetDelegate(ShopDelegate* delegate)
{
	Delegate = delegate;
}

void ShopController::OnSelectItem(int id)
{
	if (Delegate)
		Delegate->OnSelectItem(id);
}
