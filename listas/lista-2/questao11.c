/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 11
*/

/*
Crie uma função que calcule a soma de todos os elementos em um array de inteiros usando
ponteiros para travessia de array.

Dica: use um ponteiro para percorrer a matriz e acompanhar a soma.
*/

#include <stdio.h>

// Declara a função.
void soma(int *parray, int tamanhoArray);

int main() {

// Inicializa a variável de controle dos laços e o tamanho do array.
	int i;
	int tamanhoArray;

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

//Apresenta o array e seus valores.
	for ( i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]);

	printf("\n\nAgora serão somados os elementos do array...\n");

// Chama a função.
	soma(array, tamanhoArray);

// Apresenta o total da soma dos elementos do array.
	printf("\nArray [Total] = %d\n", array[0]);

	return 0;

}

// Define a função.

/*
A função recebe o ponteiro do array e seu tamanho e percorre o array com um
laço, adicionando todos os seus elementos a uma soma.

Então a soma é adicionada ao primeiro elemento do array.
*/
void soma(int *parray, int tamanhoArray) {

	int i;
	int soma = 0;

	for ( i = 0; i < tamanhoArray; i++ )
		soma += *(parray + i);

	*parray = soma;

}
