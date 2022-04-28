#include <iostream>
#include <fstream>
#include <string>
#include "wav_header.h"
#include "fileattributes.h"
#ifndef WAVREADER_H
#define WAVREADER_H

class WavReader {
private:
	short* buffer = nullptr;
	wav_header waveHeader;
	FileAttributes attributes;
public:
	FileAttributes readFile(const std::string &filename);
	
};


#endif //WAVREADER_H
