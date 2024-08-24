/*
Yuri Thomaz dos Santos Carvalho
Aula 01 - Swap com Ponteiros
*/

#include <stdio.h>

void swapper(int *pvalorA, int *pvalorB);

int main() {

	int valorA = 0, valorB = 0;
	int *pvalorA = &valorA;
	int *pvalorB = &valorB;

	printf("\nTROCA DE VALORES\n");

	printf("\nDigite o Valor A: ");
	scanf("%d", &valorA);

	printf("\nDigite o Valor B: ");
	scanf("%d", &valorB);

	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

	printf("\nTrocando os valores...\n");
	swapper(pvalorA, pvalorB);

	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

	return 0;

}

void swapper(int *pvalorA, int *pvalorB) {

	int temp;

	temp = *pvalorA;
	*pvalorA = *pvalorB;
	*pvalorB = temp;

}
