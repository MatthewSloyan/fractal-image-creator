/*
 * FractalCreator.hpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef FRACTALCREATOR_HPP_
#define FRACTALCREATOR_HPP_

#include <cstdint>
#include <memory>
#include <math.h>
#include "Mandlebrot.hpp"
#include "Bitmap.hpp"
#include "Zoom.hpp"
#include "ZoomList.hpp"
#include "RGB.hpp"

using namespace std;

namespace fractor {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

private:
	void calculateIteration();
	void calculateTotalIterations();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitmap(string name);

public:
	FractalCreator(int width, int height);
	virtual ~FractalCreator();
	void run(string name);
};

} /* namespace fractor */

#endif /* FRACTALCREATOR_HPP_ */
