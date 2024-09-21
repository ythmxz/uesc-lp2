/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 02
*/

/*
Soma de matriz usando ponteiros.

Escreva uma função que recebe uma matriz de inteiros e seu tamanho, então
calcula a soma dos elementos da matriz usando ponteiros.
*/

#include <stdio.h>

void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC, int tamanhoMatriz);

int main() {

	int i;
	int tamanhoMatriz;

	printf("\nInsira o tamanho dos vetores: ");
	scanf("%d", &tamanhoMatriz);

	int matrizA[tamanhoMatriz];

	printf("\n");

	for ( i = 0; i < tamanhoMatriz; i++ ) {

		printf("Matriz A [%d]: ", i);
		scanf("%d", matrizA + i);

	}

	int matrizB[tamanhoMatriz];

	printf("\n");

	for ( i = 0; i < tamanhoMatriz; i++ ) {

		printf("Matriz B [%d]: ", i);
		scanf("%d", matrizB + i);

	}

	printf("\nOs valores são os seguintes:\n");

	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz A [%d] = %d", i, matrizA[i]);

	printf("\n");

	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz B [%d] = %d", i, matrizB[i]);

	printf("\n");

	int matrizC[tamanhoMatriz];

	printf("\nAgora vamos somar as matrizes...\n");

	soma(matrizA, matrizB, matrizC, tamanhoMatriz);

	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz C [%d] = %d", i, matrizC[i]);

	printf("\n");

	return 0;

}

void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC, int tamanhoMatriz) {

	int i;

	for ( i = 0; i < tamanhoMatriz; i++ )
		*(pmatrizC + i) = *(pmatrizA + i) + *(pmatrizB + i);

}
