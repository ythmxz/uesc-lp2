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

void swap(int *pvalorA, int *pvalorB);

int main() {

	int valorA = 0, valorB = 0;
	int *pvalorA = &valorA;
	int *pvalorB = &valorB;

	printf("\nTROCA DE VALORES\n");

	printf("\nDigite o Valor A: ");
	scanf("%d", &valorA);

	printf("\nDigite o Valor B: ");
	scanf("%d", &valorB);

	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

	printf("\nTrocando os valores...\n");
	swap(pvalorA, pvalorB);

	printf("\nValor A = %d \nValor B = %d\n", valorA, valorB);
	printf("\nPonteiro A = %p \nPonteiro B = %p\n", pvalorA, pvalorB);

	return 0;

}

void swap(int *pvalorA, int *pvalorB) {

	int temp;

	temp = *pvalorA;
	*pvalorA = *pvalorB;
	*pvalorB = temp;

}
