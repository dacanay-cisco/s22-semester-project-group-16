#include "wavreader.h"
#define MAX_16BIT 32768
#define BIT16_OFFSET 0
#define MAX_8BIT 256
#define BIT8_OFFSET 0.5

FileAttributes WavReader::readFile(const std::string &filename)
{
	std::ifstream file(filename, std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		if(waveHeader.bits_per_sample == 8) {
			unsigned char* buffer = nullptr;
			WavReader::readData(buffer, &file, MAX_8BIT, BIT8_OFFSET);
		}
		else if(waveHeader.bits_per_sample == 16) {
			short* buffer = nullptr;
			WavReader::readData(buffer, &file, MAX_16BIT, BIT16_OFFSET);
		}
		else
			attributes.error_code = 2; //bit depth not supported

		std::cout <<"Max: " << *std::max_element(soundData.begin(), soundData.end()) << std::endl;
		std::cout << "Min: " << *std::min_element(soundData.begin(), soundData.end()) << std::endl;

		file.close();

		attributes.filename = filename;
		attributes.sample_rate = waveHeader.sample_rate;
		attributes.bits_per_sample = waveHeader.bits_per_sample;
		attributes.num_channels = waveHeader.num_channels;
		attributes.length_seconds = 2; //placeholder

		return attributes;
	}
    else
        attributes.error_code = 1; //file not found

}

template<typename T>
void WavReader::readData(T* buffer, std::ifstream* file, int max_bit, float offset) {
	buffer = new T[waveHeader.data_bytes];
	file->read((char*)buffer, waveHeader.data_bytes);

	for (int i=0; i < waveHeader.data_bytes / waveHeader.sample_alignment; i++) {
		soundData.push_back(((float)buffer[i] / max_bit - offset) / (1-offset));
		//std::cout << soundData[i] << " ";
	}
	
	delete[] buffer;
}
