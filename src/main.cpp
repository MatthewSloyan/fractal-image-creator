//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>

#include "FractalCreator.hpp"
#include "Zoom.hpp"

using namespace std;
using namespace fractor;

int main() {

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, RGB(0, 0, 0));
	fractalCreator.addRange(0.3, RGB(255, 0, 0));
	fractalCreator.addRange(0.5, RGB(255, 255, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
