#include <iostream>
#include "controller.h"
#include "console.h"
#include "model.h"

int main()
{
	Controller controller;
	Console console;
	controller.setUI(&console);
	controller.run();
	
	return 0;
}





