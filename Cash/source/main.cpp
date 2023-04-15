#include <Windows.h>
#include "Window.h"
#include <iostream>

int main()
{
	Window window;
	window.Init();
	window.Update();
	window.Close();
	return 0;
}