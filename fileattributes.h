#include <string>

#ifndef FILEATTRIBUTES_H
#define FILEATTRIBUTES_H

struct FileAttributes {
	std::string filename;
	int sample_rate;
	int bits_per_sample;
	int num_channels;
	int length_seconds;

};

#endif //FILEATTRIBUTES_H
