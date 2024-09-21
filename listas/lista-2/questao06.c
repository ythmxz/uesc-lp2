/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 06
*/

/*
Crie uma função que calcule o comprimento de uma string usando aritmética de ponteiros.

Dica: Use aritmética de ponteiros para encontrar a diferença entre o fim e o início da string.
*/

#include <stdio.h>

int contagem(char *pstring);

int main() {

	char string[51];
	int tamanhoString;

	printf("\nEscreva algo (50 caracteres):\n\n");
	scanf("%50[^\n]%*c", string);

	tamanhoString = contagem(string);

	printf("\nA string contém %d caracteres!\n", tamanhoString);

	return 0;

}

int contagem(char *pstring) {

	char *inicio = pstring;

	while ( *pstring != '\0' )
		pstring++;

	return (pstring - inicio);

}
