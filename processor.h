#include <iostream>
#include <vector>
#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
private:
        std::vector<float> input;
        float gain;
        int delay;

public:
        Processor(){}
        //void process(const input, float gain, int delay);
        ~Processor(){}
};

#endif //PROCESSOR_H
