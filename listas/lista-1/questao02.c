/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 02
*/

/*
Use ponteiros para ler e mostrar os elementos de um array (vetor).

-> Crie a função in_arr(), que tem como parâmetros um ponteiro para inteiros e o tamanho do
array;

	- Crie um loop (laço) para preencher os valores no array usando ponteiros;

-> Crie a função out_arr() com os mesmos parâmetros da in_arr(), para mostrar o array usando
ponteiros;

-> Na main():

	- declare um array de inteiros;

	- chame as funções in_arr e out_arr.
*/

#include <stdio.h>

void in_arr(int *pvetor, int tamanhoVetor);
void out_arr(int *pvetor, int tamanhoVetor);

int main() {

	int tamanhoVetor;

	printf("\nInforme o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);

	int vetor[tamanhoVetor];

	in_arr(vetor, tamanhoVetor);
	out_arr(vetor, tamanhoVetor);

	return 0;

}

void in_arr(int *pvetor, int tamanhoVetor) {

	int indice;

	for ( indice = 0; indice < tamanhoVetor; indice += 1 ) {

		printf("\nInforme o elemento %d do vetor: ", indice);
		scanf("%d", pvetor + indice);

	}

}

void out_arr(int *pvetor, int tamanhoVetor) {

	int indice;

	printf("\nEste é o vetor criado:\n");

	for ( indice = 0; indice < tamanhoVetor; indice += 1 )
		printf("\nVetor[%d] = %d", indice, *(pvetor + indice));

	printf("\n");

}
