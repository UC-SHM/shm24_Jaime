/*
 * Complex_test.cpp
 *
 *  Created on: 23 feb 2024
 *      Author: Jaime
 */

#include "Complex.h"
#include <gtest/gtest.h>
#include <iostream>				// libreria de entreada y salida parar c++
#include <cmath>
#include <chrono>

#ifdef TEST

using namespace std;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::milliseconds;


TEST(Complex, testComplex1){

	auto t1 = high_resolution_clock::now();

	Complex a(3,7);

	float res=a.mod();
	ASSERT_EQ(a.mod(), res);				// el parámetro mod debería de estar puesto como mod.algo()
	auto t2 = high_resolution_clock::now();

	// Getting number of milliseconds as an integer
	auto ms_int = duration_cast<milliseconds>(t2 - t1);
	//std::cout << "Duracion = " << ms_int.count() << std::endl;
}


#endif



