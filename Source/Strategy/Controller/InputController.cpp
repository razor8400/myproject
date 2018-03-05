#include "InputController.h"

InputController::InputController()
{

}

InputController& InputController::Instance()
{
	static InputController instance;
	return instance;
}

void InputController::AddDelegate(InputDelegate* delegate, int priority)
{
	Listeners[priority].push_back(delegate);
}

void InputController::RemoveDelegate(InputDelegate* delegate)
{
	std::function<bool(InputHandlers&)> RemoveListener = [delegate](InputHandlers& list)
	{
		auto it = std::find(list.begin(), list.end(), delegate);

		if (it != list.end())
		{
			list.erase(it);
			return true;
		}

		return false;
	};

	for (auto it : Listeners)
	{
		if (RemoveListener(it.second))
			break;
	}
}

void InputController::BeginTouch(const TouchInfo& info)
{
	std::function<InputDelegate*(const InputHandlers&)> GetListener = [info](const InputHandlers& list)
	{
		for (auto it : list)
		{
			if (it->OnTouchBegan(info))
				return it;
		}

		return (InputDelegate*)nullptr;
	};

	for (auto it : Listeners)
	{
		Listener = GetListener(it.second);

		if (Listener)
			break;
	}
}

void InputController::MoveTouch(const TouchInfo& info)
{
	if (Listener)
		Listener->OnTouchMoved(info);
}

void InputController::EndTouch(const TouchInfo& info)
{
	if (Listener)
		Listener->OnTouchEnded(info);

	Listener = nullptr;
}
