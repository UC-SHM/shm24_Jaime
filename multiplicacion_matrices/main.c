/*
 * main.c
 *
 *  Created on: 15 feb 2024
 *      Author: Jaime
 */

// Programa de multiplicación de matrices.


// meter librerias.
#include <stdio.h>

int main(){
	const int m=2;
	const int v=4;
	const int n=7;
	int A[m][n];
	int B[m][v];
	int C[v][n];
	int i, j, t;		// contadores.

# pragma omp parallel for
	for(j = 0; j < n; j++){
		//# pragma omp parallel for			// El siguiente comentario no tiene sentido en la ordenación actual de for's :// i = 0 --> creamos 7 hilos --> join // i = 1 --> creamos 7 hilos --> join
		for(i = 0; i < m; i++){
			int temp = 0;
//# pragma omp parallel for		// para cada j habrá un thread diferente que accede a A (variable publica (shared memory))
			for(t = 0; t < v; t++){
				temp += B[i][t] * C[t][j];	// no hacer acumulación sobre memoria. Hacerlo sobre una va temporal para reducir el nº de accesos a memoria.
			}
			A[i][j] = temp;
		}
	}

	//Solución: intercambiar los 2 primeros fors y meter el pragma en el for que depende de n.
// lo ideal seria paralelizar por las filas de A.

	return 0;
}
