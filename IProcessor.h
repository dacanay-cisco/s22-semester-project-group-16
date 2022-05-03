#include <vector>
#include <math.h>
#ifndef IPROCESSOR_H
#define IPROCESSOR_H

class IProcessor {
protected:
	std::vector<float> output;
public:
	virtual std::vector<float> process(const std::vector<float>& input) = 0;


};

#endif //IPROCESSOR_H
