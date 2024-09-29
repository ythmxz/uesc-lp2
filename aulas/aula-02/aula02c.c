/*
Yuri Thomaz dos Santos Carvalho
Aula 02 - Argumentos
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	double valorA = atof(argv[1]);
	double valorB = atof(argv[2]);
	double resultado = (valorA + valorB);

	if ( argc == 3 ) {

		printf("\n%g + %g = %g\n", valorA, valorB, resultado);

	}

	else
		printf("\nSão necessários 2 argumentos!\n");

	return 0;

}
