#include "IWavModel.h"
#ifndef WAVREADER_H
#define WAVREADER_H

class WavReader : public IWavModel {
private:
	wav_header waveHeader;
	std::vector<float> soundData;
	FileAttributes attributes;
	template<typename T>
	void readData(T* buffer, std::ifstream* file, int max_bit, float offset);
public:
	FileAttributes readFile(const std::string &filename);
	
};


#endif //WAVREADER_H
