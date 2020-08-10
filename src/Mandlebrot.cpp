/*
 * Mandlebrot.cpp
 *
 *  Created on: 10 Aug 2020
 *      Author: matthewsloyan
 */

#include <complex>
#include "Mandlebrot.hpp"

using namespace std;

namespace fractor {

Mandlebrot::Mandlebrot() {
	// TODO Auto-generated constructor stub

}

Mandlebrot::~Mandlebrot() {
	// TODO Auto-generated destructor stub
}

int Mandlebrot::getIterations(double x, double y){

	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations = 0;

	while(iterations < MAX_ITERATIONS){
		z = z*z + c;

		if(abs(z) > 2){
			break;
		}

		iterations++;
	}

	return iterations;
}

} /* namespace fractor */
