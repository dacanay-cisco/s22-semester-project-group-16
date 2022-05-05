#include "echo.h"
#include <iostream>
void Echo::process(const std::vector<float> &input, int numChannels, std::vector<float>& output) {
	float gain = 0.6;
	int delay = 7000 * numChannels;
	auto decay = log(0.001)/log(gain);
	int new_size = int(input.size() + delay + decay);
	std::vector<float> extendedInput(new_size, 0.0f);
	extendedInput.insert(extendedInput.begin(), input.begin(), input.end());
	output.reserve(extendedInput.size());
	for(int i = 0; i < new_size; i++)
	{
		if(i > delay)
 		{
			// float feedback = gain + output[i - delay]
			output.push_back(extendedInput[i] + gain*output[i - delay]);
		}
		else
        	{
			output.push_back(extendedInput[i]);
        	}
    	}
}
