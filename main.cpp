#include "controller.h"
#include "console.h"
#include "wavmodel.h"

int main()
{
	Controller controller;
	Console console;
	controller.setUI(&console);
	controller.run();
	return 0;
}





