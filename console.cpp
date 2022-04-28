#include "console.h"

std::string Console::requestFile() {
	std::string filename;
	std::cout << "Please enter a wave file name: ";
	getline(std::cin, filename);
	
	return filename;
}

void Console::printAttributes(Model model) {}

void Console::printProcessMenu() {}

