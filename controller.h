#include <iostream>
#include <string>
#ifndef CONTROL_H
#define CONTROL_H

class Controller
{
    private:
        std::string input;

    public:
        Controller(std::string n_input)
        {
            input = n_input;
        }
        void readFile(std::string input);
        ~Controller(){}
};

#endif //CONTROL_H