/*
 * Complex.h
 *
 *  Created on: 23 feb 2024
 *      Author: Jaime
 */



#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
//private:
	float real;	// ax
	float img;	// bj

public:					// importante
	float mod();								// area -> public
	void set(float vreal, float vimg);		// set paso valor como parámetro
	void get(float &vreal, float &vimg);		// en el get

	Complex operator+( const Complex &rhs);		// suma
	Complex operator*( const Complex &rhs);		// multiplicacion
	Complex &operator=( const Complex &rhs);		// igualdad
	Complex( float vreal, float vimg);
	Complex();

	virtual ~Complex();
	};



#endif


