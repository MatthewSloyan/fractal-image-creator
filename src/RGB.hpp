/*
 * RGB.hpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef RGB_HPP_
#define RGB_HPP_

namespace fractor {

struct RGB {
	double r;
	double g;
	double b;

	RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace fractor */

#endif /* RGB_HPP_ */
