#include "reverse.h"

void Reverse::process(const std::vector<float>& input, int numChannels, std::vector<float>& output) {
	output.reserve(input.size());
	for(int i = input.size(); i > 0; --i) {
		output.push_back(input[i]);
	}
}
