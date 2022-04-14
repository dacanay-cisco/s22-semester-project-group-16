#include <fstream>
#include "controller.h"

void Controller::readFile(std::string input)
{
    std::ifstream file ("mario.txt");
    std::string line;
    file.open(input, std::ios::in);
    if(file.is_open())
    {
        while(getline(input, line, std::ifstream))
        {
            input << line << std::endl;
        }
    }
    else
    {
        std::cout << "File not found. Mario is sad." << std::endl;
    }
    file.close();
}