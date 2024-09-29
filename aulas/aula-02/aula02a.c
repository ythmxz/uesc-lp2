/*
Yuri Thomaz dos Santos Carvalho
Aula 02 - Argumentos
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int i;

	if ( argc > 1 ) {

		printf("\nEsse programa foi chamado com %d argumentos.\n", argc);

		printf("\nNa verdade foram %d argumentos."
				" O primeiro é o programa.\n", (argc - 1));

		for ( i = 0; i < argc; i++ )
			printf("\nArgumento %d: %s", i, argv[i]);

	}

	printf("\n");

	return 0;

}
