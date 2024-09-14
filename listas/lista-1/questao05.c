/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 05
*/

/*
Reverter um array usando ponteiros.

-> crie a função inverte – parâmetros: ponteiro para int e tamanho do array;

-> use ponteiros para realizar as trocas dos elementos do array;

-> na main(), cria um array via scanf, chame a função inverte, mostre o array invertido.
*/

#include <stdio.h>

void invert(int *pvetor, int tamanhoVetor);

int main() {

// Inicialização das variáveis.
	int indice;
	int tamanhoVetor;

// Recebe o tamanho do usuário.
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);

// Inicializa o vetor com o tamanho definido.
	int vetor[tamanhoVetor];

	printf("\n");

	for ( indice = 0; indice < tamanhoVetor; indice += 1 ) {

// Os índices do vetor serão preenchidos pelo usuário até o tamanho do vetor.
		printf("Informe o elemento %d do vetor: ", indice);
		scanf("%d", &vetor[indice]);

	}

	printf("\nEste é o vetor criado:\n");

	for ( indice = 0; indice < tamanhoVetor; indice += 1 )
		printf("\nVetor[%d] = %d", indice, vetor[indice]);

	invert(vetor, tamanhoVetor);

	printf("\n");

	printf("\nEste é o vetor invertido:\n");

	for ( indice = 0; indice < tamanhoVetor; indice += 1 )
		printf("\nVetor[%d] = %d", indice, vetor[indice]);

	printf("\n");

	return 0;

}

void invert(int *pvetor, int tamanhoVetor) {

	int indice = 0;
	int temp;

	while ( indice <= (tamanhoVetor - indice) ) {

		temp = *(pvetor + indice);
		*(pvetor + indice) = *(pvetor + (tamanhoVetor - indice - 1));
		*(pvetor + (tamanhoVetor - indice - 1)) = temp;

		indice += 1;

	}

}
