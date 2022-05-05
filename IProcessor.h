#include <vector>
#include <math.h>
#ifndef IPROCESSOR_H
#define IPROCESSOR_H

class IProcessor {
protected:
	//std::vector<float> output;
public:
	virtual void process(const std::vector<float>& input, int numChannels, std::vector<float>& output) = 0;


};

#endif //IPROCESSOR_H
