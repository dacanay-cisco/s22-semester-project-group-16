#include "IWavModel.h"
#ifndef WAVMODEL_H
#define WAVMODEL_H

class WavModel : public IWavModel {
private:
	wav_header waveHeader;
	std::vector<float> soundData;
	FileAttributes attributes;
	template<typename T>
	void readData(T* buffer, std::ifstream* file, int max_bit, float offset);
public:
	FileAttributes readFile(const std::string &filename);
	int getNumChannels() {
		return attributes.num_channels;
	}
	std::vector<float> getSoundData() {
		return soundData;
	}
};


#endif //WAVMODEL_H
