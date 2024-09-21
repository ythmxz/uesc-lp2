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

// Declara a função.
void mover(int *parray, int tamanhoArray, int posicoes);

int main() {

// Inicializa as variáveis.
	int i;
	int tamanhoArray;
	int posicoes;

// Recebe o tamanho do array.
	printf("\nInsira o tamanho do array: ");
	scanf("%d", &tamanhoArray);

// Inicializa o array com o tamanho definido.
	int array[tamanhoArray];

	printf("\n");

// Preenche o array com valores recebidos.
	for ( i = 0; i < tamanhoArray; i++ ) {

		printf("Array [%d]: ", i);
		scanf("%d", (array + i));

	}

	printf("\nEste foi o array criado:\n");

// Apresenta o array com seus valores.
	for ( i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]);

// Recebe a quantidade de posições que o array se moverá.
	printf("\n\nQuantas posições deseja mover? ");
	scanf("%d", &posicoes);

// Chama a função.
	mover(array, tamanhoArray, posicoes);

	printf("\nAqui está o resultado:\n");

// Apresenta o array após ser movido.
	for ( i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]);

	printf("\n");

	return 0;

}

// Define a função.

/*
A função recebe o ponteiro do array, seu tamanho e aquantidade de posições
para mover.

Um array temporário é criado, para auxiliar na movimentação.

Então as posições são ajustadas para um tamanho equivalente que esteja dentro
do tamanho do array.

Ex: mover um array de 5 elementos em 6 posições é equivalete a mover 1 posição.

Depois o array é copiado para o array temporário com os valores movidos e
depois são copiados para o array principal.
*/
void mover(int *parray, int tamanhoArray, int posicoes) {

    int i;
    int arrayTemp[tamanhoArray];

    posicoes = posicoes % tamanhoArray;

    for ( i = 0; i < tamanhoArray; i++ )
        arrayTemp[i] = parray[(i + posicoes) % tamanhoArray];

    for ( i = 0; i < tamanhoArray; i++ )
        parray[i] = arrayTemp[i];

}
