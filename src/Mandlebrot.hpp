/*
 * Mandlebrot.hpp
 *
 *  Created on: 10 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef MANDLEBROT_HPP_
#define MANDLEBROT_HPP_

namespace fractor {

class Mandlebrot {
public:
	static const int MAX_ITERATIONS = 1000;

public:
	Mandlebrot();
	virtual ~Mandlebrot();

	static int getIterations(double x, double y);
};

} /* namespace fractor */

#endif /* MANDLEBROT_HPP_ */
