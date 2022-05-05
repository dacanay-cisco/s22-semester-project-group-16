#include <iostream>
#include <vector>
#include "IProcessor.h"
#include "echo.h"
#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
private:
        std::vector<float> input;
        std::vector<float> output;
        float gain;
        int delay;
	//std::vector<IProcessor*> processes;
	Echo echo;
	std::vector<std::string> processList{ "Echo","Normalize","Reverse","Low Pass" };

public:
	std::vector<std::string> getProcessList() {
		return processList;
	}
	void run(int selection, int numChannels, const std::vector<float>& input);
	std::vector<float> getOutput() {
		return output;
	}
	
        Processor(){}
        ~Processor(){}

};

#endif //PROCESSOR_H
