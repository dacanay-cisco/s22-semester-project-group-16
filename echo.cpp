#include "echo.h"

std::vector<float> Echo::process(const std::vector<float> &input, float gain, int delay)
{
    std::vector<float> output;
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
    return output;
}