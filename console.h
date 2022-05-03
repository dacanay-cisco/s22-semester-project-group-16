#include <iostream>
#include <string>
#include <vector>
#include "model.h"
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
private:

public:
	std::string requestFile();
	void printAttributes(FileAttributes attributes);
	int printProcessMenu(std::vector<std::string> processList);

};


#endif //CONSOLE_H
