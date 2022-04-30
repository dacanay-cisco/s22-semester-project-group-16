#include <iostream>
#include <string>
#include "model.h"
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
private:
	

public:
	std::string requestFile();
	void printAttributes(FileAttributes attributes);
	void printProcessMenu();

};


#endif //CONSOLE_H
