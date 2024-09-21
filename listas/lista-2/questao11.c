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

void soma(int *parray, int tamanhoArray);

int main() {

	int i;
	int tamanhoArray;

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

	printf("\n\nAgora serão somados os elementos do array...\n");

	soma(array, tamanhoArray);

	printf("\nArray [Total] = %d\n", array[0]);

	return 0;

}

void soma(int *parray, int tamanhoArray) {

	int i;
	int soma = 0;

	for ( i = 0; i < tamanhoArray; i++ )
		soma += *(parray + i);

	*parray = soma;

}
