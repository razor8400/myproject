// Fill out your copyright notice in the Description page of Project Settings.

#include "Window.h"

void UWindow::SetDelegate(WindowDelegate* delegate)
{
	Delegate = delegate;
}

void UWindow::Open()
{
	AddToViewport();

	if (Delegate)
		Delegate->OnWindowOpened(this);
}

void UWindow::Close()
{
	RemoveFromParent();

	if (Delegate)
		Delegate->OnWindowClosed(this);
}
