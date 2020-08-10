/*
 * BiymapFileHeader.hpp
 *
 *  Created on: 10 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef BITMAPFILEHEADER_HPP_
#define BITMAPFILEHEADER_HPP_

#include <cstdint>

using namespace std;

// Makes sure there's no padding (2 bytes)
#pragma pack(2)

namespace fractor {

struct BitmapFileHeader {
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffSet;
};

}

#endif /* BITMAPFILEHEADER_HPP_ */
