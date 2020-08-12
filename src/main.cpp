//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>
#include <cstdint>
#include <memory>
#include "Bitmap.hpp"
#include "Mandlebrot.hpp"

using namespace std;
using namespace fractor;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;

	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	unique_ptr<int[]> histogram(new int[Mandlebrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH * HEIGHT]{0});

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH/2 - 200) * 2.0/HEIGHT;
			double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;

			int iterations = Mandlebrot::getIterations(xFractal, yFractal);

			fractal[y * WIDTH] = iterations;

			if(iterations != Mandlebrot::MAX_ITERATIONS){
				histogram[iterations]++;
			}

			histogram[iterations]++;

			uint8_t colour = (uint8_t)(256 * (double)iterations/Mandlebrot::MAX_ITERATIONS);

			colour = colour * colour * colour;

			bitmap.setPixel(x, y, 0, colour, 0);
			if(colour < min) min = colour;
			if(colour > max) max = colour;
		}
	}

	cout << endl;

	int count = 0;
	for (int i = 0; i < Mandlebrot::MAX_ITERATIONS; i++) {
		cout << histogram[i] << " " << flush;
		count += histogram[i];
	}

	cout << count << "; " << WIDTH * HEIGHT << endl;

	cout << endl;

	cout << min << ", " << max << endl;

	bitmap.write("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
