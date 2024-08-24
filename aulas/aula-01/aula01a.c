/*
Yuri Thomaz dos Santos Carvalho
Aula 01 - Ponteiros
*/

#include <stdio.h>

int main() {

	int valor = 5; //Variável.
	int *pvalor = &valor; //Ponteiro da variável.

	printf("\nConteúdo da variável = %d\n", valor);
	printf("\nEndereço no ponteiro = %p\n", pvalor);
	printf("\nConteúdo do endereço no ponteiro = %d\n", *pvalor);
	printf("\nEndereço do ponteiro = %p\n", &pvalor);

	printf("\n-----------------------------------------------------------\n");

	*pvalor = 10;


	printf("\nConteúdo da variável (mod) = %d\n", valor);
	printf("\nEndereço no ponteiro (mod) = %p\n", pvalor);
	printf("\nConteúdo do endereço no ponteiro (mod) = %d\n", *pvalor);
	printf("\nEndereço do ponteiro (mod) = %p\n", &pvalor);

	printf("\n-----------------------------------------------------------\n");

	printf("\nTamanho da variável = %llu\n", sizeof(valor));
	printf("\nTamanho do ponteiro = %llu\n", sizeof(pvalor));

	return 0;

}
