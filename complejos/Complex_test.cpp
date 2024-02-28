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

auto t1 = high_resolution_clock::now();
TEST(Complex, testComplex1){
	//Complex mod(3,7);
	//ASSERT_EQ(Complex.mod(), 15);				// el parámetro mod debería de estar puesto como mod.algo()
}


auto t2 = high_resolution_clock::now();

// Getting number of milliseconds as an integer
auto ms_int = duration_cast<milliseconds>(t2 - t1);






#endif



