#include "IProcessor.h"

class Reverse : public IProcessor
{
    public:
        Reverse(){}
        ~Reverse(){}
	void process(const std::vector<float>& input, int numChannels, std::vector<float>& output);
};
