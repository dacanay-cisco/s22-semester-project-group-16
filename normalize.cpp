#include "normalize.h"

void Normalize::process(const std::vector<float>& input, int numChannels, std::vector<float>& output) {
	auto max = *max_element(input.begin(), input.end());
	auto min = *min_element(input.begin(), input.end());
	float normal_max;
	if(max > -min)
		normal_max = max;
	else
		normal_max = min;
		
		
	for(int i = 0; i < input.size(); i++)
	{
		output.push_back(input[i] / normal_max);
    	}
}
