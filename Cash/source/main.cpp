#include <Windows.h>
#include "Window.h"
#include <iostream>

int main()
{
	Window app;
	
	printf("init");
	app.Init();
	printf("update");
	app.Update();
	printf("close");
	app.Close();
	return 0;
}