/*
 * main.cpp
 *
 *  Created on: 23 feb 2024
 *      Author: Jaime
 */


#include "Complex.h"
#include <iostream>				// libreria de entreada y salida parar c++
#include <cmath>
//#include <chrono>

using namespace std;
//using std::chrono::high_resolution_clock;


#ifndef TEST
int main(){
	std::cout << "main inicia " << std::endl;

	// calculo de numero complejo.
	Complex num(5,31);
	std::cout << "mod = " << num.mod() << std::endl;


	// ahora se le da valor al complejo. Se hacen sus 2 copias y se llama a la función get. lña función get va a memoria y la saca el valor.
	num.set(3.0,7.0);		// los inputs de la función "set" son float. ¿poner un ".0"?
	float real;
	float img;


	num.get(real,img);
	std::cout << "parte real = " << real << std::endl;					// la va "real" y "img" son privadas. No debería dejar hacer esto, ¿no?
	std::cout << "  parte imaginaria = " << img << std::endl;				// no deja poner "<< std::endl;" para hacer el salto de linea.

	std::cout << "main cierra " << std::endl;
	return 0;
}


#endif


