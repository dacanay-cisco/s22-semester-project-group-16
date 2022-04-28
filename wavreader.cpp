#include "wavreader.h"

void WavReader::readFile(const std::string &filename)
{
	std::ifstream file(filename, std::ios::binary | std::ios::in);
	if(file.is_open())
	{
		file.read((char*)&waveHeader, sizeof(wav_header));
		buffer = new short[waveHeader.data_bytes];
		file.read((char*)buffer, waveHeader.data_bytes);
		file.close();
		//std::cout << waveHeader.wav_size << std::endl;
	}
    else
    {
        std::cout << "File not found. Mario is sad." << std::endl;
    }
}
