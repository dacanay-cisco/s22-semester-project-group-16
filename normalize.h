#include "IProcessor.h"

class Normalize : public IProcessor
{
   public:
	Normalize(){}
	~Normalize(){}
	void process(const std::vector<float>& input, int numChannels, std::vector<float>& output);
};
