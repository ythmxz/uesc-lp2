/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 12
*/

/*
Implemente uma função que inverta uma string dada usando ponteiros.

Use dois ponteiros — um no início e um no final — para trocar os caracteres até que eles se
encontrem no meio.
*/

#include <stdio.h>

void inverte(char *pinicio, char *pfinal, int tamanhoString);

int main() {

	int tamanhoString = 0;
	char string[51];

	printf("\nDigite um texto (50 caracteres):\n\n");
	scanf("%50[^\n]%*c", string);

	char *pinicio = string;
	char *pfinal = string;

	while ( *pfinal != '\0' ) {

		tamanhoString++;
		pfinal++;

	}

	pfinal--;

	inverte(pinicio, pfinal, tamanhoString);

	printf("%s", string);

	return 0;

}

void inverte(char *pinicio, char *pfinal, int tamanhoString) {

	char temp;
	int i;

	for ( i = 0; i < (tamanhoString / 2); i++ ) {

		temp = *pinicio;
		*pinicio = *pfinal;
		*pfinal = temp;

		pinicio++;
		pfinal--;

	}

}
