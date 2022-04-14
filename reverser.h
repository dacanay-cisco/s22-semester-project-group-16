#include "IProcessor.h"

class Reverser : public IProcessor
{
    private:
	std::vector<float> process(const std::vector<float> &input);

    public:
        Reverser(){}
        ~Reverser(){}
}
