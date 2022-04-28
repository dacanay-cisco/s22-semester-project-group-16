#include <iostream>
#include <fstream>
#include <string>
#ifndef WAVREADER_H
#define WAVREADER_H

class WavReader {
private:
	typedef struct wav_header {
		char riff_header[4];
		int wav_size;
		char wave_header[4];
		
		char fmt_header[4];
		int fmt_chunk_size;
		short audio_format;
		short num_channels;
		int sample_rate;
		int byte_rate;
		short sample_alignment;
		short bit_depth;

		char data_header[4];
		int data_bytes;
	} wav_header;
	short* buffer = nullptr;
	wav_header waveHeader;
public:
	void readFile(const std::string &filename);
	
};


#endif //WAVREADER_H
