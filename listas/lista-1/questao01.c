/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 01
*/

/*
Use ponteiros para trocar (swap) os valores de dois inteiros (duas variáveis int).

-> Crie a função swap();

	- troque os conteúdos dos endereços recebidos da função chamadora (main);

-> Na main():

	- declare duas variáveis int e atribua valores a elas (via scanf);

	- mostre (via printf) os valores das variáveis antes e depois de chamar a função swap().
*/

#include <stdio.h>

// Declaração da função.
void swap(int *pvalorA, int *pvalorB);

int main() {

// Inicialização e atribuição das variáveis.
	int valorA = 0, valorB = 0;
	int *pvalorA = &valorA;
	int *pvalorB = &valorB;

	printf("\nTROCA DE VALORES\n");

// Coletar o valor A do usuário.
	printf("\nDigite o Valor A: ");
	scanf("%d", &valorA);

// Coletar o valor B do usuário.
	printf("\nDigite o Valor B: ");
	scanf("%d", &valorB);

// Apresentar os valores antes da troca.
	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

// Chamar a função de troca de valores.
	printf("\nTrocando os valores...\n");
	swap(pvalorA, pvalorB);

// Apresentar os valores após da troca.
	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

	return 0;

}

// Definição da função.
void swap(int *pvalorA, int *pvalorB) {

// Inicialização da variável que segura os valores para troca.
	int temp;

// O conteúdo dos ponteiros são trocados com o auxílio de uma variável.
	temp = *pvalorA;
	*pvalorA = *pvalorB;
	*pvalorB = temp;

}
