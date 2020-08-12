//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>

#include "FractalCreator.hpp"

using namespace std;
using namespace fractor;

int main() {
	int height = 600;

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
	fractalCreator.addZoom(Zoom(312, height - 304, 0.1));

	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();

	fractalCreator.writeBitmap("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
