#include "IWavModel.h"
#ifndef WAVMODEL_H
#define WAVMODEL_H

class WavModel : public IWavModel {
private:
	wav_header waveHeader;
	std::string filename;
	std::string output_name;
	std::vector<float> soundData;
	FileAttributes attributes;
	template<typename T>
	void readData(T* buffer, std::ifstream* file, int max_bit, float offset);

public:
	FileAttributes readFile();
	int getNumChannels() {
		return attributes.num_channels;
	}
	std::vector<float> getSoundData() {
		return soundData;
	}
	
	void setFile(std::string s_filename) {
		filename = s_filename;
	}
	void setOutputName(std::string output) {
		output_name = output;
	}
	void writeOutputFile() {}
};


#endif //WAVMODEL_H
