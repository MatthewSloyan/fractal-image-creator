/*
 * Bitmap.hpp
 *
 *  Created on: 10 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef BITMAP_HPP_
#define BITMAP_HPP_

#include <string>
#include <cstdint>
#include <memory>
using namespace std;

namespace fractor {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	unique_ptr<uint8_t[]> m_pPixels{nullptr};

public:
	Bitmap(int width, int height);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write(string filename);
	virtual ~Bitmap();
};

} /* namespace fractor */

#endif /* BITMAP_HPP_ */
