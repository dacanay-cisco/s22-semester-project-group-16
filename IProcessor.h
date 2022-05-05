#include <vector>
#include <math.h>
#include <algorithm>
#ifndef IPROCESSOR_H
#define IPROCESSOR_H

class IProcessor {
public:
	virtual void process(const std::vector<float>& input, int numChannels, std::vector<float>& output) = 0;


};

#endif //IPROCESSOR_H
