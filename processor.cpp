#include "processor.h"

void Processor::run(int selection, int numChannels, const std::vector<float>& input) {
	switch(selection) {
		case 1:
			echo.process(input, numChannels, output);
			break;
		case 2:
			//normalize.process(input, numChannels);
			break;
		case 3:
			//reverse.process(input, numChannels);
			break;
		case 4:
			low_pass.process(input, numChannels, output);
			break;
	}
	
}
