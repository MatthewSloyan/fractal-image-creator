/*
 * BitmapInfoHeader.hpp
 *
 *  Created on: 10 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef BITMAPINFOHEADER_HPP_
#define BITMAPINFOHEADER_HPP_

#include <cstdint>

using namespace std;

// Makes sure there's no padding (2 bytes)
#pragma pack(2)

namespace fractor {

struct BitmapInfoHeader {
	int32_t headerSize{40};
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};
	int32_t colors{0};
	int32_t importantColors{0};
};

}

#endif /* BITMAPINFOHEADER_HPP_ */
