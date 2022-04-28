#include <iostream>
#include <string>
#include "model.h"
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
private:
	Model model;

public:
	std::string requestFile();
	void printAttributes(Model model);
	void printProcessMenu();

};


#endif //CONSOLE_H
