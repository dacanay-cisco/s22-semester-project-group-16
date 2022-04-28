#include "wavreader.h"

FileAttributes WavReader::readFile(const std::string &filename)
{
	std::ifstream file(filename, std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new short[waveHeader.data_bytes];
		file.read((char*)buffer, waveHeader.data_bytes);
		file.close();
		//std::cout << waveHeader.wav_size << std::endl;

		attributes.filename = filename;
		attributes.sample_rate = waveHeader.sample_rate;
		attributes.bits_per_sample = waveHeader.bits_per_sample;
		attributes.num_channels = waveHeader.num_channels;
		attributes.length_seconds = 2;

		return attributes;
	}
    else
    {
        std::cout << "File not found. Mario is sad." << std::endl;
	return attributes;
    }
}


