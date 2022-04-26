#include "console.h"

std::string Console::requestFile() {
	std::string filename;
	std::cout << "Please enter a file name" << std::endl;
	getline(cin, filename);
	
	return filename;
}
