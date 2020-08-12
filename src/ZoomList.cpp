/*
 * ZoomList.cpp
 *
 *  Created on: 12 Aug 2020
 *      Author: matthewsloyan
 */

#include <iostream>
#include "ZoomList.hpp"

namespace fractor {

ZoomList::ZoomList(int width, int height): m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub

}

void ZoomList::add(const Zoom& zoom){
	zooms.push_back(zoom);

	m_xCenter += (zoom.x - m_width/2) * m_scale;
	m_yCenter += (zoom.y - m_height/2) * m_scale;

	m_scale *= zoom.scale;

	std::cout << m_xCenter << ", " << m_yCenter << ", " << m_scale << endl;
}

pair<double, double> ZoomList::doZoom(int x, int y){
	return pair<double, double>(0, 0);
}

} /* namespace fractor */