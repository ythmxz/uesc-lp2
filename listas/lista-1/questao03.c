/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 03
*/

/*
Encontre o elemento máximo de um vetor usando ponteiros.

-> Crie a função find_max() - parâmetros: ponteiro para inteiro e tamanho do vetor;

-> use um laço para buscar o maior valor do vetor, usando ponteiros.
*/

#include <stdio.h>

// Declaração da função.
int find_max(int *pvetor, int tamanhoVetor);

int main() {

// Inicialização das variáveis.
	int tamanhoVetor;
	int indice;
	int maior;

// Recebe o tamanho do usuário.
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);

// Inicializa o vetor com o tamanho definido.
	int vetor[tamanhoVetor];

	for ( indice = 0; indice < tamanhoVetor; indice += 1 ) {

// Os índices do vetor serão preenchidos pelo usuário até o tamanho do vetor.
		printf("\nInforme o elemento %d do vetor: ", indice);
		scanf("%d", &vetor[indice]);

	}

// Chama a função que indica o maior valor do vetor.
	maior = find_max(vetor, tamanhoVetor);

// O valor é apresentado ao usuário.
	printf("\nO maior valor do vetor é: %d\n", maior);

	return 0;

}

// Definição da função que define o maior valor.
int find_max(int *pvetor, int tamanhoVetor) {

// Inicialização das variáveis.
	int indice;
	int maior;

// Define o maior valor como o primeiro índice do vetor.
	maior = *pvetor;

// Busca, a partir do segundo índice, um valor maior que o atual e o substitui caso encontrado.
	for ( indice = 1; indice < tamanhoVetor; indice += 1 )
		if ( *(pvetor + indice) > maior )
			maior = *(pvetor + indice);

// Retorna a variável com o maior valor armazendado.
	return maior;

}
