#include "IProcessor.h"

class Echo : public IProcessor
{
   public:
	Echo(){}
	~Echo(){}
	std::vector<float> process(const std::vector<float> &input);
};
