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

// Declara a função.
void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC, int tamanhoMatriz);

int main() {

/*
Inicializa as variáveis de controle dos laços e de tamanho
da matriz, respectivamente.
*/
	int i;
	int tamanhoMatriz;

// Recebe o tamanho da matriz.
	printf("\nInsira o tamanho dos vetores: ");
	scanf("%d", &tamanhoMatriz);

// Inicializa a primeira matriz com o tamanho definido.
	int matrizA[tamanhoMatriz];

	printf("\n");

// Preenche a matriz com valores recebidos.
	for ( i = 0; i < tamanhoMatriz; i++ ) {

		printf("Matriz A [%d]: ", i);
		scanf("%d", (matrizA + i));

	}

// Inicializa a segunda matriz com o tamanho definido.
	int matrizB[tamanhoMatriz];

	printf("\n");

// Preenche a matriz com valores recebidos.
	for ( i = 0; i < tamanhoMatriz; i++ ) {

		printf("Matriz B [%d]: ", i);
		scanf("%d", (matrizB + i));

	}

// Apresenta os valores recebidos em ambas as matrizes.
	printf("\nOs valores são os seguintes:\n");

	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz A [%d] = %d", i, matrizA[i]);

	printf("\n");

	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz B [%d] = %d", i, matrizB[i]);

	printf("\n");

// Inicializa a matriz de resultado.
	int matrizC[tamanhoMatriz];

	printf("\nAgora vamos somar as matrizes...\n");

// Chama a função.
	soma(matrizA, matrizB, matrizC, tamanhoMatriz);

// Apresenta a matriz de resultado com os valores das somas.
	for ( i = 0; i < tamanhoMatriz; i++ )
		printf("\nMatriz C [%d] = %d", i, matrizC[i]);

	printf("\n");

	return 0;

}

// Define a função.

/*
A função recebe o ponteiro das três matrizes e o tamanho delas.
Então ele preenche a matriz resultado com a soma de cada índice
das duas matrizes.
*/
void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC, int tamanhoMatriz) {

	int i;

	for ( i = 0; i < tamanhoMatriz; i++ )
		*(pmatrizC + i) = (*(pmatrizA + i) + *(pmatrizB + i));

}
