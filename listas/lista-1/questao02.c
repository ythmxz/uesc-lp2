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

// Declaração das funções.
void in_arr(int *pvetor, int tamanhoVetor);
void out_arr(int *pvetor, int tamanhoVetor);

int main() {

// Inicializa a variável que determina o tamanho do vetor.
	int tamanhoVetor;

// Recebe o tamanho do usuário.
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);

// Inicializa o vetor com o tamanho definido.
	int vetor[tamanhoVetor];

// Chama as funções que preenchem e mostram o vetor, respectivamente.
	in_arr(vetor, tamanhoVetor);
	out_arr(vetor, tamanhoVetor);

	return 0;

}

// Definição da função de preenchimento do vetor.
void in_arr(int *pvetor, int tamanhoVetor) {

// Inicializa a variável que controlará o loop.
	int indice;

	for ( indice = 0; indice < tamanhoVetor; indice += 1 ) {

// Os índices do vetor serão preenchidos pelo usuário até o tamanho do vetor.
		printf("\nInforme o elemento %d do vetor: ", indice);
		scanf("%d", pvetor + indice);

	}

}

// Definição da função de exibição do vetor.
void out_arr(int *pvetor, int tamanhoVetor) {

// Inicializa a variável que controlará o loop.
	int indice;

	printf("\nEste é o vetor criado:\n");

// Os índices do vetor serão apresentados com seus valores, até o tamanho do vetor.
	for ( indice = 0; indice < tamanhoVetor; indice += 1 )
		printf("\nVetor[%d] = %d", indice, *(pvetor + indice));

	printf("\n");

}
