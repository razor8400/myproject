#pragma once

#include "Input/TouchInfo.h"
#include "Strategy.h"

class InputDelegate
{
public:
	virtual bool OnTouchBegan(const TouchInfo& touch) = 0;
	virtual void OnTouchEnded(const TouchInfo& touch) = 0;
	virtual void OnTouchMoved(const TouchInfo& touch) = 0;
public:
    int Priority = -1;
};

typedef std::list<InputDelegate*> InputHandlers;

class InputController
{
public:
	static InputController& Instance();
	void AddDelegate(InputDelegate* delegate, int priority);
	void RemoveDelegate(InputDelegate* delegate);

	void BeginTouch(const TouchInfo& info);
	void MoveTouch(const TouchInfo& info);
	void EndTouch(const TouchInfo& info);
private:
	InputController();

    std::list<InputDelegate*> Listeners;

	InputDelegate* Listener = nullptr;
};
