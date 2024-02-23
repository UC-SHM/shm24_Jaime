/*
 * Complex.cpp
 *
 *  Created on: 23 feb 2024
 *      Author: Jaime
 */

#include "Complex.h"
#include <iostream>				// libreria de entreada y salida parar c++
#include <cmath>
using namespace std;


//
// CAMBIO PARA LA SEGUNDA SUBIDA

Complex::Complex( float vreal, float vimg){
	real=vreal;
	img=vimg;
}
//Complex::Complex(float real, float img){
//}

Complex::~Complex(){					// destructor

}





Complex Complex::operator+( const Complex &rhs){	// operador +
	Complex result;

	result.real = this->real + rhs.real;
	result.img = this->img + rhs.img;
	return result;
}

Complex Complex::operator*( const Complex &rhs){
	Complex result;									// me creo la variable result de la clase Complex
	result.real= this->real * rhs.real;
	result.img = this->img * rhs.img;
	return result;
}

Complex &Complex::operator=(const Complex &rhs){
	if(this == &rhs){
		return *this;
	}
	real=rhs.real;
	real=rhs.img;

	return *this;
}



float Complex::mod(){
	double mod;
	mod= (double)(real*real) + (double)(img*img);
	return ((float) sqrt(mod));
}


void Complex::set(float vreal, float vimg) {
	real=vreal;
	img=vimg;
}

void Complex::get(float &vreal, float &vimg){
	vreal=real;
	vimg=img;
}



