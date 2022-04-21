#include <iostream>
#include <vector>
#ifndef MODEL_H
#define MODEL_H

class Model
{
    private:
        std::vector<float> input;
        float gain;
        int delay;

    public:
        Model(){}
        void process(const input, float gain, int delay);
        ~Model(){}
};

#endif //MODEL_H
