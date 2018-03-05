#include "InputController.h"
#include "Strategy.h"

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
    delegate->Priority = priority;
	Listeners.push_back(delegate);
    Listeners.sort([](InputDelegate* a, InputDelegate* b)
                      {
                          return a->Priority < b->Priority;
                      });
}

void InputController::RemoveDelegate(InputDelegate* delegate)
{
    Listeners.remove(delegate);
}

void InputController::BeginTouch(const TouchInfo& info)
{
    for (auto it : Listeners)
    {
        if (it->OnTouchBegan(info))
        {
            Listener = it;
            break;
        }
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
