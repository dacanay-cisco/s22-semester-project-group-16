#include "reverse.h"

void Reverse::process(const std::vector<float>& input, int numChannels, std::vector<float>& output) {
	for(int i = input.size(); i > 0; i--) {
		output.push_back(input[i]);
	}
	/*std::vector<int>::reverse_iterator rit;
	for(rit = *input.rbegin(); rit != *input.rend(); ++rit) {
		//output.push_back(input[*rit]);
	;}*/
}
