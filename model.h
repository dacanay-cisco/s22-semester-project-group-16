#include <iostream>
#include <vector>
#include "wav.h"
#include "wavreader.h"
#ifndef MODEL_H
#define MODEL_H

class Model {
private:
	Wav wavfile;
	WavReader wavreader;
	std::string filename;
	
	

public:
	FileAttributes openFile() {
		return wavreader.readFile(filename);
	}
	void setFile(std::string s_filename) {
		filename = s_filename;
	}

};

#endif //MODEL_H
