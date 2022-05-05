#include <iostream>
#include <string>
#include <vector>
#include "wavmodel.h"
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
private:

public:
	std::string requestFile();
	void printAttributes(FileAttributes attributes);
	int printProcessMenu(std::vector<std::string> processList);
	std::string requestOutputName();
};


#endif //CONSOLE_H
