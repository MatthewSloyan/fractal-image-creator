/*
 * FractalCreator.hpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef FRACTALCREATOR_HPP_
#define FRACTALCREATOR_HPP_

#include <string>
#include "Zoom.hpp"

using namespace std;

namespace fractor {

class FractalCreator {
public:
	FractalCreator(int width, int height);
	virtual ~FractalCreator();

	void calculateIteration();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitmap(string name);
};

} /* namespace fractor */

#endif /* FRACTALCREATOR_HPP_ */
