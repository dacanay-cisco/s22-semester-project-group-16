#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "wav_header.h"
#include "fileattributes.h"
#ifndef IWAVMODEL_H
#define IWAVMODEL_H

class IWavModel {
public:
	virtual FileAttributes readFile(const std::string &filename) = 0;
};


#endif //IWAVMODEL_H
