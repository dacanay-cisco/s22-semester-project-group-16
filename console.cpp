#include "console.h"

std::string Console::requestFile() {
	std::string filename;
	std::cout << "Please enter a wave file name: ";
	getline(std::cin, filename);
	
	return filename;
}

void Console::printAttributes(FileAttributes attributes) {
	std::cout << "File Name: " << attributes.filename << std::endl;
	std::cout << "Sample Rate: " << attributes.sample_rate << std::endl;
	std::cout << "Bits per Sample: " << attributes.bits_per_sample << std::endl;
	if(attributes.num_channels == 1)
		std::cout << "Channel: Mono" << std::endl;
	else if(attributes.num_channels == 2)
		std::cout << "Channel: Stereo" << std::endl;
	else
		std::cout << "Channel: Unknown" << std::endl;
	//std::cout << "Length: " << std::endl;


}

void Console::printProcessMenu() {}

