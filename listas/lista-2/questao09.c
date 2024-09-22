/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 09
*/

/*
Crie uma função que execute adição de matrizes usando ponteiros para
matrizes 2D.

Dica: Use aritmética de ponteiro duplo para acessar elementos de matriz 2D.
*/

#include <stdio.h>

void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC
		, int linhasMatriz, int colunasMatriz);

int main() {

	int i, j;
	int linhasMatriz;
	int colunasMatriz;

	printf("\nInsira a quantidade de linhas da matriz: ");
	scanf("%d", &linhasMatriz);

	printf("\nInsira a quantidade de colunas da matriz: ");
	scanf("%d", &colunasMatriz);

	int matrizA[linhasMatriz][colunasMatriz];

	printf("\n");

	for ( i = 0; i < linhasMatriz; i ++ ) {

		for ( j = 0; j < colunasMatriz; j++ ) {

			printf("Matriz A [%d][%d]: ", i, j);
			scanf("%d", &matrizA[i][j]);

		}

	}

	int matrizB[linhasMatriz][colunasMatriz];

	printf("\n");

	for ( i = 0; i < linhasMatriz; i ++ ) {

		for ( j = 0; j < colunasMatriz; j++ ) {

			printf("Matriz B [%d][%d]: ", i, j);
			scanf("%d", &matrizB[i][j]);

		}

	}

	printf("\nOs valores são os seguintes:\n");

	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatriz; j++ )
			printf("\nMatriz A [%d][%d] = %d", i, j, matrizA[i][j]);

	}

	printf("\n");


	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatriz; j++ )
			printf("\nMatriz B [%d][%d] = %d", i, j, matrizB[i][j]);

	}

	printf("\n");

	int matrizC[linhasMatriz][colunasMatriz];

	printf("\nAgora vamos somar as matrizes...\n");

	soma(matrizA[0], matrizB[0], matrizC[0], linhasMatriz, colunasMatriz);

	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatriz; j++ )
			printf("\nMatriz C [%d][%d] = %d", i, j, matrizC[i][j]);

	}

	printf("\n");

	return 0;

}

void soma(int *pmatrizA, int *pmatrizB, int *pmatrizC
		, int linhasMatriz, int colunasMatriz) {

			int i, j;

			for ( i = 0; i < linhasMatriz; i++ ) {

				for ( j = 0; j < colunasMatriz; j++ )
					*(pmatrizC + i * colunasMatriz + j) = (*(pmatrizA + i * colunasMatriz + j) + *(pmatrizB + i * colunasMatriz + j));

			}

		}
