//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>

#include "FractalCreator.hpp"
#include "RGB.hpp"

using namespace std;
using namespace fractor;

int main() {
//	RGB rgb1(4, 5, 6);
//	RGB rgb2(1, 2, 3);
//
//	RGB rgb3 = rgb1 - rgb2;
//
//	cout << rgb3.r << ", " << rgb3.g << ", " << rgb3.b << endl;

	FractalCreator fractalCreator(800, 600);
	fractalCreator.run("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
