/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 07
*/

/*
Implemente uma função que gire uma matriz de inteiros para a direita por um determinado
número de posições usando ponteiros.

Dica: Use uma matriz temporária para armazenar elementos que serão girados.

A ideia é: deslocar todos os elementos do array para a direita em k posições.
Elementos que "caem" do final do array são “girados”s para o início.

Por exemplo, se tivermos o array [1, 2, 3, 4, 5] e o deslocarmos
para a direita em 2 posições, o resultado seria [4, 5, 1, 2, 3].
*/

#include <stdio.h>

void mover(int *parray, int tamanhoArray, int posicoes);

int main() {

	int i;
	int tamanhoArray;
	int posicoes;

	printf("\nInsira o tamanho do array: ");
	scanf("%d", &tamanhoArray);

	int array[tamanhoArray];

	printf("\n");

	for ( i = 0; i < tamanhoArray; i++ ) {

		printf("Array [%d]: ", i);
		scanf("%d", (array + i));

	}

	printf("\nEste foi o array criado:\n");

	for ( i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]);

	printf("\n\nQuantas posições deseja mover? ");
	scanf("%d", &posicoes);

	mover(array, tamanhoArray, posicoes);

	printf("\nAqui está o resultado:\n");

	for ( i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]);

	printf("\n");

	return 0;

}

void mover(int *parray, int tamanhoArray, int posicoes) {

    int i;
    int arrayTemp[tamanhoArray];

    posicoes = posicoes % tamanhoArray;

    for ( i = 0; i < tamanhoArray; i++ )
        arrayTemp[i] = parray[(i + posicoes) % tamanhoArray];

    for ( i = 0; i < tamanhoArray; i++ )
        parray[i] = arrayTemp[i];

}
