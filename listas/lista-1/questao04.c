/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 04
*/

/*
Compute o tamanho de uma string com o uso de ponteiros.

-> a função str_length() tem um ponteiro para char como parâmetros e retorna o tamanho da
string;

-> use um laço para percorrer a string, usando ponteiros;

-> Na main() - crie a string via scanf e imprima a quantidade de caracteres.
*/

#include <stdio.h>

// Declaração da função.
int str_length(char *pstring);

int main() {

// Inicialização das variáveis.
	char string[51];
	int tamanhoString;

// Coleta a string do usuário.
	printf("\nEscreva um texto de até 50 caracteres:\n\n");
	scanf("%50[^\n]%*c", string);

// Chama a função que obtém o tamanho da string.
	tamanhoString = str_length(string);

// Apresenta o tamanho ao usuário.
	printf("\nO tamanho da string é de %d caracteres.\n", tamanhoString);

	return 0;

}

// Definição da função.
int str_length(char *pstring) {

// Inicialização e atribuição das variáveis.
	int indice = 0;
	int tamanhoString = 0;

// Passa pela string, aumentando a variável com o tamanho até chegar ao final dela.
	while ( *(pstring + indice) != '\0' ) {

		tamanhoString += 1;
		indice += 1;

	}

// Retorna a variável com o tamanho da string.
	return tamanhoString;

}
