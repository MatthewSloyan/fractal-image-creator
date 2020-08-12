/*
 * ZoomList.hpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#ifndef ZOOMLIST_HPP_
#define ZOOMLIST_HPP_

#include <vector>
#include <utility>
#include "Zoom.hpp"

using namespace std;

namespace fractor {

class ZoomList {
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	int m_width{0};
	int m_height{0};
	vector<Zoom> zooms;

public:
	ZoomList(int width, int height);
	void add(const Zoom& zoom);
	pair<double, double> doZoom(int x, int y);
};

} /* namespace fractor */

#endif /* ZOOMLIST_HPP_ */
