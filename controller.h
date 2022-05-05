#include <iostream>
#include <string>
#include "wavmodel.h"
#include "console.h"
#include "processor.h"
#ifndef CONTROL_H
#define CONTROL_H

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
	void run(){
		wavmodel.setFile(console->requestFile());
		console->printAttributes(wavmodel.readFile());
		process_selection = console->printProcessMenu(processor.getProcessList());
		wavmodel.setOutputName(console->requestOutputName());
		processor.run(process_selection, wavmodel.getNumChannels(), wavmodel.getSoundData());
		wavmodel.writeOutputFile(processor.getOutput());
	}
};

#endif //CONTROL_H
