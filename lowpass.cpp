#include "lowpass.h"
#include <iostream>
void LowPass::process(const std::vector<float> &input, int numChannels, std::vector<float>& output) {
	float gain = 1;
	int delay = 2 * numChannels;
	for(int i = 0; i < input.size(); i++)
	{
		if(i > delay)
 		{
			output.push_back((input[i] + gain*output[i - delay])/(1+gain));
		}
		else
        	{
			output.push_back(input[i]);
        	}
    	}
}
