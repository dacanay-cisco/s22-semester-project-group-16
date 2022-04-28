#include <iostream>
#include <vector>
#include "wav.h"
#include "wavreader.h"
#include "wavmodel.h"
#ifndef MODEL_H
#define MODEL_H

class Model {
private:
	Wav wavfile;
	WavReader wavreader;
	WavModel wavmodel;
	std::string filename;
	
	

public:
	void openFile() {
		wavreader.readFile(filename);
	}
	void setFile(std::string s_filename) {
		filename = s_filename;
	}

};

#endif //MODEL_H
