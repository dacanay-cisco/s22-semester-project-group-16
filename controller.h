#include <iostream>
#include <string>
#include "model.h"
#include "console.h"
#ifndef CONTROL_H
#define CONTROL_H

class Controller
{
    private:
        std::string input;
	Console console;
	Model model;

    public:
        ~Controller(){}
	void setUI(Console s_console) {
		console = s_console;
	}
	void run(){
		model.setFile(console.requestFile());
		model.openFile();
		console.printAttributes(model);
		console.printProcessMenu();
	}
};

#endif //CONTROL_H
