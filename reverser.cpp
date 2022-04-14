#include "reverser.h"

std::vector<float> Reverser::process(const std::vector<float> &input) {
	//reverse (input[45], input.end());
	std::vector<float> output;
	for(auto i=input.end(); i>44; i--) {
		output.push_back(input[i]);
	}

	return output;
}
