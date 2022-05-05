#include "controller.h"

void Controller::run() {
	wavmodel.setFile(console->requestFile());
	console->printAttributes(wavmodel.readFile());
	if(wavmodel.getErrorCode() == 0) {
		process_selection = console->printProcessMenu(processor.getProcessList());
		wavmodel.setOutputName(console->requestOutputName());
		processor.run(process_selection, wavmodel.getNumChannels(), wavmodel.getSoundData());
		wavmodel.writeOutputFile(processor.getOutput());
		console->returnSuccess(wavmodel.success);
	}
}
