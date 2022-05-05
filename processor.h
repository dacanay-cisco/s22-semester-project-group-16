#include <vector>
#include <string>
#include "echo.h"
#include "lowpass.h"
#include "normalize.h"
#include "reverse.h"

#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
private:
        std::vector<float> input;
        std::vector<float> output;
        float gain;
        int delay;

	Echo echo;
	Normalize normalize;
	Reverse reverse;
	LowPass low_pass;

	std::vector<std::string> processList{ "Echo","Normalize","Reverse","Low Pass" };

public:
	std::vector<std::string> getProcessList() {
		return processList;
	}
	void run(int selection, int numChannels, const std::vector<float>& input);
	const std::vector<float>& getOutput() {
		return output;
	}
	
        Processor(){}
        ~Processor(){}

};

#endif //PROCESSOR_H
