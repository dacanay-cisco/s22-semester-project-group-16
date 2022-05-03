#include <iostream>
#include <vector>
#include "echo.h"
#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
private:
        std::vector<float> input;
        float gain;
        int delay;
	//std::vector<IProcessor*> processes;
	Echo echo;
	std::vector<std::string> processList{ "Echo","Normalize","Reverse","Low Pass" };

public:
	std::vector<std::string> getProcessList() {
		return processList;
	}
        Processor(){}
        ~Processor(){}

};

#endif //PROCESSOR_H
