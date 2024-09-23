/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 14
*/

/*
Escreva uma função para multiplicar duas matrizes usando ponteiros para travessia eficiente.

Dica: Use ponteiros para navegar pelas matrizes e executar a operação de
multiplicação linha por coluna.
*/

#include <stdio.h>

void multiplicacao(int *pmatrizA, int *pmatrizB, int *pmatrizC, int
					linhasMatriz, int colunasMatrizA, int colunasMatrizB);

int main() {

	int i, j;
    int linhasMatriz;
	int colunasMatrizA, colunasMatrizB;

	printf("\nInsira a quantidade de linhas das matrizes: ");
	scanf("%d", &linhasMatriz);

	printf("\nInsira a quantidade de colunas da matriz A: ");
	scanf("%d", &colunasMatrizA);

	printf("\nInsira a quantidade de colunas da matriz B: ");
	scanf("%d", &colunasMatrizB);

	int matrizA[linhasMatriz][colunasMatrizA];

	printf("\n");

		for ( i = 0; i < linhasMatriz; i ++ ) {

			for ( j = 0; j < colunasMatrizA; j++ ) {

				printf("Matriz A [%d][%d]: ", i, j);
				scanf("%d", &matrizA[i][j]);

			}

		}

	int matrizB[linhasMatriz][colunasMatrizB];

	printf("\n");

		for ( i = 0; i < linhasMatriz; i ++ ) {

			for ( j = 0; j < colunasMatrizB; j++ ) {

				printf("Matriz A [%d][%d]: ", i, j);
				scanf("%d", &matrizB[i][j]);

			}

		}

	printf("\nOs valores são os seguintes:\n");

	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatrizA; j++ )
			printf("\nMatriz A [%d][%d] = %d", i, j, matrizA[i][j]);

	}

	printf("\n");


	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatrizB; j++ )
			printf("\nMatriz B [%d][%d] = %d", i, j, matrizB[i][j]);

	}

	printf("\n");

	int matrizC[linhasMatriz][linhasMatriz];

	printf("\nAgora vamos multiplicar as matrizes...\n");

    multiplicacao(matrizA[0], matrizB[0], matrizC[0]
				, linhasMatriz, colunasMatrizA, colunasMatrizB);

	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatrizB; j++ )
			printf("\nMatriz C [%d][%d] = %d", i, j, matrizC[i][j]);

	}

	printf("\n");

    return 0;


}

void multiplicacao(int *pmatrizA, int *pmatrizB, int *pmatrizC, int
					linhasMatriz, int colunasMatrizA, int colunasMatrizB) {

	int i, j, k;

	for ( i = 0; i < linhasMatriz; i++ ) {

		for ( j = 0; j < colunasMatrizB; j++ ) {

			*(pmatrizC + i * colunasMatrizB + j) = 0;

			for ( k = 0; k < colunasMatrizA; k++ ) {

				*(pmatrizC + i * colunasMatrizB + j) += (*(pmatrizA + i * colunasMatrizA + k) * *(pmatrizB + k * colunasMatrizB + j));

			}

		}

	}

}
