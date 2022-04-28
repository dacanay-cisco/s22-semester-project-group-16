#ifndef WAVE_HEADER_H
#define WAVE_HEADER_H

struct wav_header {
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
	short bits_per_sample;

	char data_header[4];
	int data_bytes;
};


#endif //WAVE_HEADER_H
