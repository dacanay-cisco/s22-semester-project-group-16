#include <iostream>
#include <vector>
#include "wav.h"
#include "wavmodel.h"
#ifndef MODEL_H
#define MODEL_H

class Model {
private:
	Wav wavfile;
	WavModel wavmodel;
	std::string filename;
	

public:
	FileAttributes openFile() {
		return wavmodel.readFile(filename);
	}
	void setFile(std::string s_filename) {
		filename = s_filename;
	}
	int getNumChannels() {
		return wavmodel.getNumChannels();
	}
	std::vector<float> getSoundData() {
		return wavmodel.getSoundData();
	}
		
};

#endif //MODEL_H
