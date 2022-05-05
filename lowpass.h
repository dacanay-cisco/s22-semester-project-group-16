#include "IProcessor.h"

class LowPass : public IProcessor
{
   public:
	LowPass(){}
	~LowPass(){}
	void process(const std::vector<float>& input, int numChannels, std::vector<float>& output);
};
