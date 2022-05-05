#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "wav_header.h"
#include "fileattributes.h"
#ifndef IWAVMODEL_H
#define IWAVMODEL_H

class IWavModel {
public:
	virtual FileAttributes readFile() = 0;
	virtual int getNumChannels() = 0;
	virtual std::vector<float> getSoundData() = 0;
	virtual void setFile(std::string s_filename) = 0;
	virtual void setOutputName(std::string output) = 0;
	virtual void writeOutputFile() = 0;
};


#endif //IWAVMODEL_H
