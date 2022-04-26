#include <iostream>
#include <string>
#ifndef CONTROL_H
#define CONTROL_H

class Controller
{
    private:
        std::string input;
	Console console;
	Model model;

    public:
        Controller(std::string n_input)
        {
            input = n_input;
        }
        void readFile(std::string input);
        ~Controller(){}
	setUI(Console s_console) {
		console = s_console;
	}
	run(){
		model.filename = console.requestFile();
		model.openFile();
		console.printAttributes(model);
		console.printProcessMenu(model.getProcesses);
	}
};

#endif //CONTROL_H
