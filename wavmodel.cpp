#include "wavmodel.h"
#define MAX_16BIT 32768
#define BIT16_OFFSET 0
#define MAX_8BIT 128
#define BIT8_OFFSET 1

FileAttributes WavModel::readFile()
{
	std::ifstream file(filename, std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		if(waveHeader.bits_per_sample == 8) {
			unsigned char* buffer = nullptr;
			WavModel::readData(buffer, &file, MAX_8BIT, BIT8_OFFSET);
			attributes.error_code = 0;
		}
		else if(waveHeader.bits_per_sample == 16) {
			short* buffer = nullptr;
			WavModel::readData(buffer, &file, MAX_16BIT, BIT16_OFFSET);
			attributes.error_code = 0;
		}
		else
			attributes.error_code = 2; //bit depth not supported

		file.close();
		attributes.filename = filename;
		attributes.sample_rate = waveHeader.sample_rate;
		attributes.bits_per_sample = waveHeader.bits_per_sample;
		attributes.num_channels = waveHeader.num_channels;
		attributes.length_seconds = waveHeader.data_bytes / waveHeader.byte_rate;
	}
	else {
		attributes.error_code = 1; //file not found
	}
	
	return attributes;
}

template<typename T>
void WavModel::readData(T* buffer, std::ifstream* file, int max_bit, float offset) {
	buffer = new T[waveHeader.data_bytes];
	file->read((char*)buffer, waveHeader.data_bytes);

	for (int i=0; i < waveHeader.data_bytes / waveHeader.sample_alignment; i++) {
		soundData.push_back((float)buffer[i] / max_bit - offset);
		//std::cout << soundData[i] << " ";
	}
	//std::cout << soundData.size() << std::endl;
	std::cout << waveHeader.sample_alignment << std::endl;
	delete[] buffer;
}

template<typename T2>
void WavModel::convertOutputData(const std::vector<float>& outputData, std::ofstream* file, wav_header outputHeader, int offset, int max_bit) {
	T2 convertedData[outputHeader.data_bytes];
	for (int i=0; i < outputHeader.data_bytes / outputHeader.sample_alignment; i++) {
		convertedData[i] = (T2)((outputData[i] + offset) * max_bit);
	}
	for(int d=0; d < outputHeader.data_bytes; d++) {
		file->write((char*)&convertedData[d], sizeof(convertedData[d]));
		//std::cout << sizeof(convertedData[d]) << " ";
	}
	//std::cout << outputHeader.data_bytes << std::endl;
}

void WavModel::writeOutputFile(const std::vector<float>& outputData) {
	wav_header outputHeader = waveHeader;
	outputHeader.data_bytes = outputData.size();

	std::ofstream file(output_name, std::ios::binary | std::ios::out);

	file.write((char*)&outputHeader, sizeof(wav_header));

	if(outputHeader.bits_per_sample == 8) {
		convertOutputData<unsigned char>(outputData, &file, outputHeader, BIT8_OFFSET, MAX_8BIT);
	}
	else if(outputHeader.bits_per_sample == 16) {
		convertOutputData<short>(outputData, &file, outputHeader, BIT16_OFFSET, MAX_16BIT);
	}
	
	
	file.close();

}
