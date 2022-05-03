#include <iostream>
#include <string>
#include "model.h"
#include "console.h"
#include "processor.h"
#ifndef CONTROL_H
#define CONTROL_H

class Controller
{
    private:
        std::string input;
	Console* console;
	Model model;
	Processor processor;
	int process_selection;

    public:
        ~Controller(){}
	void setUI(Console* s_console) {
		console = s_console;
	}
	void run(){
		model.setFile(console->requestFile());
		console->printAttributes(model.openFile());
		process_selection = console->printProcessMenu(processor.getProcessList());
		
	}
};

#endif //CONTROL_H
