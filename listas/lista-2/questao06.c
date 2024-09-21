/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 06
*/

/*
Crie uma função que calcule o comprimento de uma string usando aritmética de ponteiros.

Dica: Use aritmética de ponteiros para encontrar a diferença entre o fim e o início da string.
*/

#include <stdio.h>

// Declara a função.
int contagem(char *pstring);

int main() {

// Inicializa as variáveis da string e o tamanho dela.
	char string[51];
	int tamanhoString;

// Recebe o conteúdo da string.
	printf("\nEscreva algo (50 caracteres):\n\n");
	scanf("%50[^\n]%*c", string);

// Atribui o retorno da função ao tamanho da string.
	tamanhoString = contagem(string);

// Apresenta o tamanho da string.
	printf("\nA string contém %d caracteres!\n", tamanhoString);

	return 0;

}

// Define a função.

/*
A função recebe o ponteiro da string, atribui umponteiro para o primeiro
elemento da string e roda um laço, que percorre a string até o caractere
'\0' e adiciona um ao ponteiro a cada caractere.

Ela então retorna a diferença do final da string para o começo.
*/

int contagem(char *pstring) {

	char *inicio = pstring;

	while ( *pstring != '\0' )
		pstring++;

	return (pstring - inicio);

}
