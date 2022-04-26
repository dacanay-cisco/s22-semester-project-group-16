#include <iostream>
#include <string>
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
private:
	Model model;

public:
	std::string requestFile();
	void printAttributes(Model model);

};


#endif //CONSOLE_H
