/*
Yuri Thomaz dos Santos Carvalho
Aula 02 - Argumentos
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int i;

	if ( argc > 1 ) {

		for ( i = 1; i < argc; i++ )
				printf("\nOlá para %s!", argv[i]);

	printf("\n");

	}

	else
		printf("\nOlá para todos!\n");

	return 0;

}
