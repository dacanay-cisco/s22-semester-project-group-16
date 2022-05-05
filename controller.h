#include <string>
#include "wavmodel.h"
#include "console.h"
#include "processor.h"
#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller
{
    private:
        std::string input_name;
	std::string output_name;
	Console* console;
	WavModel wavmodel;
	Processor processor;
	int process_selection;

    public:
        ~Controller(){}
	void setUI(Console* s_console) {
		console = s_console;
	}
	void run();
};

#endif //CONTROLLER_H
