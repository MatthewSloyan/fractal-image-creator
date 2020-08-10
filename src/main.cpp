//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Description : Fractal image creator.
//               Code adapted from Caveofprogramming Udemy course.
//============================================================================

#include <iostream>

#include "Bitmap.hpp"

using namespace std;
using namespace fractor;

int main() {
	Bitmap bitmap(800, 600);

	bitmap.write("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
