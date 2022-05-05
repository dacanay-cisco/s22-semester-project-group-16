#include "IProcessor.h"

class Echo : public IProcessor
{
   public:
	Echo(){}
	~Echo(){}
	void process(const std::vector<float>& input, int numChannels, std::vector<float>& output);
};
