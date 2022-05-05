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
	void readData(T* buffer, std::ifstream* file, int max_bit, int offset);
	template<typename T2>
	void convertOutputData(const std::vector<float>& outputData, std::ofstream* file, wav_header outputHeader, int offset, int max_bit); 

public:
	bool success = false;
	FileAttributes readFile();
	int getNumChannels() {
		return attributes.num_channels;
	}
	const std::vector<float>& getSoundData() {
		return soundData;
	}
	
	int getErrorCode() {
		return attributes.error_code;
	}

	void setFile(std::string s_filename) {
		filename = s_filename;
	}
	void setOutputName(std::string output) {
		output_name = output;
	}
	void writeOutputFile(const std::vector<float>& outputData);
};


#endif //WAVMODEL_H
