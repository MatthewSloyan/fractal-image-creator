/*
 * Zoom.hpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef ZOOM_HPP_
#define ZOOM_HPP_

namespace fractor {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};

	Zoom(int x, int y, double scale) : x(x), y(y), scale(scale){};
};

} /* namespace fractor */

#endif /* ZOOM_HPP_ */
