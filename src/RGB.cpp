/*
 * RGB.cpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#include "RGB.hpp"

namespace fractor {

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
}

RGB operator-(const RGB& first, const RGB& second){
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}

} /* namespace fractor */
