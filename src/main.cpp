//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Bitmap.hpp"
#include "Mandlebrot.hpp"
#include "ZoomList.hpp"
#include "FractalCreator.hpp"

using namespace std;
using namespace fractor;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;

	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	ZoomList zoomList(WIDTH, HEIGHT);

	zoomList.add(Zoom(WIDTH/2, HEIGHT/2, 4.0/WIDTH));
	zoomList.add(Zoom(295, HEIGHT - 202, 0.1));
	zoomList.add(Zoom(312, HEIGHT - 304, 0.1));

	unique_ptr<int[]> histogram(new int[Mandlebrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH * HEIGHT]{0});

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			pair<double, double> coords = zoomList.doZoom(x, y);

			int iterations = Mandlebrot::getIterations(coords.first, coords.second);

			fractal[y * WIDTH + x] = iterations;

			if(iterations != Mandlebrot::MAX_ITERATIONS){
				histogram[iterations]++;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < Mandlebrot::MAX_ITERATIONS; i++) {
		total += histogram[i];
	}

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {

			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = fractal[y * WIDTH + x];

			if(iterations != Mandlebrot::MAX_ITERATIONS){

				double hue = 0.0;

				for(int i = 0; i <= iterations; i++){
					hue += ((double)histogram[i])/total;
				}

				//green = pow(255, hue);
				green = hue * 255;
			}

			bitmap.setPixel(x, y, red, green, blue);
		}
	}

	bitmap.write("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
